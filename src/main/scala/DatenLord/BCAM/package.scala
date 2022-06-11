package DatenLord

import spinal.core.Data

package object BCAM {

  object BCAMBuildType extends Enumeration {
    type BCAMBuildType = Value
    val REG, BRUTE, SEGMENT = Value
  }

  case class BCAMConfig(Cd: Int, Pw: Int, Sw: Int = 1)

}
