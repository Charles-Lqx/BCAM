package DatenLord.BCAM

import DatenLord.BCAM.BCAMBuildType.{BCAMBuildType, BRUTE}
import spinal.lib._
import spinal.core._
import spinal.lib.UIntPimper

import scala.math._

case class WriteChannel(config: BCAMConfig) extends Bundle {
  def Cd = config.Cd

  def Pw = config.Pw

  val WAddr = in UInt (log2Up(Cd) bits) // the write address
  val WPatt = in UInt (Pw bits)         // the write pattern
  val Wr    = in Bool ()                // the write enable signal

}

case class MAddrChannel(config: BCAMConfig) extends Bundle {
  def Cd = config.Cd

  val MAddr = out UInt (log2Up(Cd) bits) // the address which match the MPatt
  val Match = out Bool ()                // the flag signal which indicate this match is successful
}

case class MPattChannel(config: BCAMConfig) extends Bundle {
  def Pw = config.Pw

  val MPatt = UInt(Pw bits)
}

/** @param buildType
  *   : the build type of BCAM
  * @param config
  *   : the config information of BCAM the build type of BCAM the paper url : [[https://people.ece.ubc.ca/lemieux/publications/abdelhadi-fpt2014.pdf]]
  */
case class BCAM(buildType: BCAMBuildType = BRUTE, config: BCAMConfig) extends Component {

  def Cd = config.Cd

  def Pw = config.Pw

  val io = new Bundle {
    val WStream     = slave Stream WriteChannel(config)  // the stream for write BCAM
    val MPattStream = slave Stream MPattChannel(config)  // the pattern Stream which will be addressed
    val MAddrStream = master Stream MAddrChannel(config) // the mapping result stream
  }

  if (buildType == BRUTE) {

    // instantiate the BRAMs which is used to build BCAM for Brute-force type
    val TiRAM = Mem(UInt(Cd bits), pow(2, Pw).toInt).init(Seq.fill(pow(2, Pw).toInt)(0)).addAttribute("ram_style", "block")
    val ErRAM = Mem(UInt(Pw bits), Cd).init(Seq.fill(Cd)(0)).addAttribute("ram_style", "block")

    val enWReady     = RegInit(True)
    val rWrStage1    = RegInit(False)
    val rWAddrStage1 = RegInit(io.WStream.WAddr.getZero)
    val rWPattStage1 = RegInit(io.WStream.WPatt.getZero)
    val rWrStage2    = RegInit(False)
    val rWAddrStage2 = RegInit(io.WStream.WAddr.getZero)
    val rWPattStage2 = RegInit(io.WStream.WPatt.getZero)

    when(io.WStream.fire) {
      enWReady.clear()
      rWrStage1    := io.WStream.Wr
      rWAddrStage1 := io.WStream.WAddr
      rWPattStage1 := io.WStream.WPatt
    }.otherwise {
      rWrStage1.clear()
      enWReady.set()
    }
    rWrStage2    := rWrStage1
    rWAddrStage2 := rWAddrStage1
    rWPattStage2 := rWPattStage1

    io.WStream.ready := False
    io.WStream.ready.setWhen(enWReady)

    val ErWr         = RegInit(False) // True -> Write Mode; False -> Read Mode
    val TiWr         = RegInit(True)  // True -> Write Mode; False -> Erase Mode
    val setAllPatt   = UInt(Cd bits).setAll()
    val clearAllPatt = UInt(Cd bits).clearAll()
    val TiWMask1     = rWAddrStage1.toOneHot
    val TiWMask2     = rWAddrStage2.toOneHot

    ErRAM.write(rWAddrStage2, rWPattStage2, ErWr)
    val ErRData = ErRAM.readSync(rWAddrStage1, !ErWr)

    val TiWPatt = Mux(TiWr, rWPattStage1, ErRData)
    TiRAM.write(TiWPatt, setAllPatt, TiWr && rWrStage1, TiWMask1)    // Write TiRAM
    TiRAM.write(TiWPatt, clearAllPatt, !TiWr && rWrStage2, TiWMask2) // Erase TiRAM

    when(rWrStage1) { // two cycle for write data to BCAM
      TiWr.clear()
      ErWr.set()
    }.otherwise {
      TiWr.set()
      ErWr.clear()
    }

    val rValid = RegInit(False)
    val RData  = TiRAM.readSync(io.MPattStream.MPatt, io.MPattStream.ready)

    rValid.clearWhen(io.MAddrStream.ready)
    when(io.MPattStream.ready) {
      rValid := io.MPattStream.valid
    }
    io.MPattStream.ready := io.MAddrStream.isFree

    io.MAddrStream.valid := rValid

    // Priority Encoder for MAddr
    io.MAddrStream.MAddr := OHToUInt(OHMasking.first(RData))
    io.MAddrStream.Match := RData.asBools.reduceBalancedTree(_ | _)

  }
}

object Gen extends App {
  SpinalVerilog(BCAM(BRUTE, BCAMConfig(8, 2)))
}
