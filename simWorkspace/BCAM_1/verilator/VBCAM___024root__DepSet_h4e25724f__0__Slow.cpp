// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM___024root.h"

VL_ATTR_COLD void VBCAM___024root___final(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___final\n"); );
}

VL_ATTR_COLD void VBCAM___024root___ctor_var_reset(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_wStream_valid = VL_RAND_RESET_I(1);
    vlSelf->io_wStream_ready = VL_RAND_RESET_I(1);
    vlSelf->io_wStream_payload_wAddr = VL_RAND_RESET_I(3);
    vlSelf->io_wStream_payload_wPatt = VL_RAND_RESET_I(2);
    vlSelf->io_wStream_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->io_mPattStream_valid = VL_RAND_RESET_I(1);
    vlSelf->io_mPattStream_ready = VL_RAND_RESET_I(1);
    vlSelf->io_mPattStream_payload_mPatt = VL_RAND_RESET_I(2);
    vlSelf->io_mAddrStream_valid = VL_RAND_RESET_I(1);
    vlSelf->io_mAddrStream_ready = VL_RAND_RESET_I(1);
    vlSelf->io_mAddrStream_payload_mAddr = VL_RAND_RESET_I(3);
    vlSelf->io_mAddrStream_payload_matchFlag = VL_RAND_RESET_I(1);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
