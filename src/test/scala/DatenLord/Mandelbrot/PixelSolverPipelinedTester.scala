package DatenLord.Mandelbrot
import org.scalatest.funsuite._
import spinal.core._
import spinal.core.sim._

//Run this scala test to generate and check that your RTL work correctly
class PixelSolverPipelinedTester extends AnyFunSuite {

  var compiled: SimCompiled[PixelSolverPipelined] = null

  test("compile") {
    compiled = SimConfig.withFstWave.compile(
      PixelSolverPipelined(
        g = PixelSolverGenerics(
          fixAmplitude   = 7,
          fixResolution  = -20,
          iterationLimit = 15
        )
      )
    )
  }

  test("testbench") {
    compiled.doSimUntilVoid(seed = 42) { dut =>
      dut.clockDomain.forkStimulus(10)
      PixelSolverChecker(dut.io.cmd, dut.io.rsp, dut.clockDomain)
    }
  }
}
