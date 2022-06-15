// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM_BCAM.h"
#include "VBCAM__Syms.h"

void VBCAM_BCAM___ctor_var_reset(VBCAM_BCAM* vlSelf);

VBCAM_BCAM::VBCAM_BCAM(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBCAM_BCAM___ctor_var_reset(this);
}

void VBCAM_BCAM::__Vconfigure(VBCAM__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBCAM_BCAM::~VBCAM_BCAM() {
}
