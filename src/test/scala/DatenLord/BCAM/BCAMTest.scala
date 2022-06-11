package DatenLord.BCAM

import DatenLord.BCAM.BCAMBuildType._
import spinal.lib._
import spinal.core._
import spinal.core.sim._
import org.slf4j._
import org.scalatest.funsuite._
import scala.util.Random._
import scala.math._
import scala.collection.mutable._

object BCAMSimFuncs {
  def doBCAMSim(config: BCAMConfig, testTime: Int) = {

    def Pw = config.Pw
    def Cd = config.Cd

    val testCasePatt       = ArrayBuffer[Int]()
    val testCaseAddr       = ArrayBuffer[Int]()
    val mappingPattCase    = ArrayBuffer[Int]()
    val mappingResultAddr  = ArrayBuffer[Int]()
    val mappingResultMatch = ArrayBuffer[Boolean]()

    var addr         = 0
    var wPatt        = 0
    var isValid      = false
    var mapValid     = false
    var mapReady     = false
    var mapPatt      = 0
    var wTimes       = 0
    var mPattTimes   = 0
    var mAddrTimes   = 0
    var monitorTimes = 0

    val compiledDut = SimConfig.withFstWave.compile(BCAM(BRUTE, config))

    compiledDut.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : BCAM ")

      dut.io.WStream.valid #= false
      dut.io.WStream.WPatt #= 0
      dut.io.WStream.WAddr #= 0
      dut.io.WStream.Wr    #= false

      dut.io.MPattStream.valid #= false
      dut.io.MPattStream.MPatt #= 0

      dut.io.MAddrStream.ready #= false

      dut.clockDomain.forkStimulus(6)

      val write = fork {
        dut.clockDomain.waitSampling(3)
        while (wTimes < testTime) {
          addr    = nextInt(Cd)
          wPatt   = nextInt(pow(2, Pw).toInt)
          isValid = nextBoolean()
          if (isValid) {
            dut.io.WStream.valid #= isValid
            dut.io.WStream.WAddr #= addr
            dut.io.WStream.WPatt #= wPatt
            dut.io.WStream.Wr    #= true
            wTimes += 1
            dut.clockDomain.waitSamplingWhere(dut.io.WStream.valid.toBoolean && dut.io.WStream.ready.toBoolean)
          } else {
            dut.io.WStream.valid #= isValid
            dut.clockDomain.waitSampling()
          }
        }
      }

      val mappingPatt = fork {
        dut.clockDomain.waitSampling(3)
        while (mPattTimes < testTime) {
          mapValid = nextBoolean()
          mapPatt  = nextInt(pow(2, Pw).toInt)
          if (mapValid) {
            dut.io.MPattStream.valid #= mapValid
            dut.io.MPattStream.MPatt #= mapPatt
            mPattTimes += 1
            dut.clockDomain.waitSamplingWhere(dut.io.MPattStream.valid.toBoolean && dut.io.MPattStream.ready.toBoolean)
          } else {
            dut.io.MPattStream.valid #= mapValid
            dut.clockDomain.waitSampling()
          }
        }
      }

      val mappingAddr = fork {
        dut.clockDomain.waitSampling(3)
        while (mAddrTimes < testTime) {
          mapReady = nextBoolean()
          if (mapReady) {
            dut.io.MAddrStream.ready #= mapReady
            mAddrTimes += 1
            dut.clockDomain.waitSamplingWhere(dut.io.MAddrStream.valid.toBoolean && dut.io.MAddrStream.ready.toBoolean)
          } else {
            dut.io.MAddrStream.ready #= mapReady
            dut.clockDomain.waitSampling()
          }
        }
      }
      val exitSim = fork {
        while (true) {
          if (wTimes == testTime && mPattTimes == testTime && mAddrTimes == testTime && monitorTimes == testTime * 2) {
            val testCaseAddrString       = testCaseAddr.map(_.toString.padTo(7, ' ')).mkString("")
            val testCasePattString       = testCasePatt.map(_.toString.padTo(7, ' ')).mkString("")
            val mappingPattCaseString    = mappingPattCase.map(_.toString.padTo(7, ' ')).mkString("")
            val mappingResultAddrString  = mappingResultAddr.map(_.toString.padTo(7, ' ')).mkString("")
            val mappingResultMatchString = mappingResultMatch.map(_.toString.padTo(7, ' ')).mkString("")

            logger.info(
              s"\n"
                + s"write : \n"
                + "Addr :".padTo(10, ' ')
                + testCaseAddrString
                + s"\n"
                + "Pattern :".padTo(10, ' ')
                + testCasePattString
                + s"\n"
                + s"mapping result : \n"
                + "MPatt :".padTo(15, ' ')
                + mappingPattCaseString
                + s"\n"
                + "MatchResult :".padTo(15, ' ')
                + mappingResultMatchString
                + s"\n"
                + "AddrResult :".padTo(15, ' ')
                + mappingResultAddrString
                + s"\n"
            )

            simSuccess()
          } else {
            dut.clockDomain.waitSampling()
          }
        }
      }

      val monitor = fork {
        dut.clockDomain.waitSampling(3)
        while (monitorTimes < testTime * 2) {
          if (dut.io.MAddrStream.valid.toBoolean && dut.io.MAddrStream.ready.toBoolean) {
            mappingResultAddr += dut.io.MAddrStream.MAddr.toInt
            mappingResultMatch += dut.io.MAddrStream.Match.toBoolean
          }
          if (dut.io.MPattStream.valid.toBoolean && dut.io.MPattStream.ready.toBoolean) {
            mappingPattCase += dut.io.MPattStream.MPatt.toInt
          }

          if (dut.io.WStream.valid.toBoolean && dut.io.WStream.ready.toBoolean) {
            testCaseAddr += dut.io.WStream.WAddr.toInt
            testCasePatt += dut.io.WStream.WPatt.toInt
          }
          monitorTimes += 1
          sleep(6)

        }
      }

    }
  }

}

class BCAMTest extends AnyFunSuite {
  test("random test !") {
    BCAMSimFuncs.doBCAMSim(BCAMConfig(16, 3), 500)
  }
}
