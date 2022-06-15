// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM___024root.h"

#ifdef VL_DEBUG
void VBCAM___024root___eval_debug_assertions(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_wStream_valid & 0xfeU))) {
        Verilated::overWidthError("io_wStream_valid");}
    if (VL_UNLIKELY((vlSelf->io_wStream_payload_wAddr 
                     & 0xf8U))) {
        Verilated::overWidthError("io_wStream_payload_wAddr");}
    if (VL_UNLIKELY((vlSelf->io_wStream_payload_wPatt 
                     & 0xfcU))) {
        Verilated::overWidthError("io_wStream_payload_wPatt");}
    if (VL_UNLIKELY((vlSelf->io_wStream_payload_wr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_wStream_payload_wr");}
    if (VL_UNLIKELY((vlSelf->io_mPattStream_valid & 0xfeU))) {
        Verilated::overWidthError("io_mPattStream_valid");}
    if (VL_UNLIKELY((vlSelf->io_mPattStream_payload_mPatt 
                     & 0xfcU))) {
        Verilated::overWidthError("io_mPattStream_payload_mPatt");}
    if (VL_UNLIKELY((vlSelf->io_mAddrStream_ready & 0xfeU))) {
        Verilated::overWidthError("io_mAddrStream_ready");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
