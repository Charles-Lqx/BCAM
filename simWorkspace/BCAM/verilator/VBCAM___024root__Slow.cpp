// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"

#include "VBCAM__Syms.h"
#include "VBCAM___024root.h"

void VBCAM___024root___ctor_var_reset(VBCAM___024root* vlSelf);

VBCAM___024root::VBCAM___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBCAM___024root___ctor_var_reset(this);
}

void VBCAM___024root::__Vconfigure(VBCAM__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBCAM___024root::~VBCAM___024root() {
}
