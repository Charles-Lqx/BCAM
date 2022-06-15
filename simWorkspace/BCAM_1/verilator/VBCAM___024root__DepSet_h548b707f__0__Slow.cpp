// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM__Syms.h"
#include "VBCAM___024root.h"

VL_ATTR_COLD void VBCAM___024root___settle__TOP__3(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->io_mAddrStream_payload_matchFlag = vlSymsp->TOP__BCAM.rMatch;
    vlSelf->io_mAddrStream_valid = vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid;
    vlSelf->io_mPattStream_ready = (1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rValid)));
    vlSelf->io_wStream_ready = (1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_wStream_rValid)));
}

VL_ATTR_COLD void VBCAM___024root___settle__TOP__4(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->io_mAddrStream_payload_mAddr = (((IData)(vlSymsp->TOP__BCAM.__PVT__SegAddr_regNext) 
                                             << 1U) 
                                            | (1U & 
                                               (((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                     - (IData)(1U)))) 
                                                >> 1U)));
}

VL_ATTR_COLD void VBCAM_BCAM___initial__TOP__BCAM__5(VBCAM_BCAM* vlSelf);

VL_ATTR_COLD void VBCAM___024root___eval_initial(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
    VBCAM_BCAM___initial__TOP__BCAM__5((&vlSymsp->TOP__BCAM));
}

VL_ATTR_COLD void VBCAM_BCAM___settle__TOP__BCAM__6(VBCAM_BCAM* vlSelf);

VL_ATTR_COLD void VBCAM___024root___eval_settle(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval_settle\n"); );
    // Body
    VBCAM___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VBCAM_BCAM___settle__TOP__BCAM__6((&vlSymsp->TOP__BCAM));
    VBCAM___024root___settle__TOP__4(vlSelf);
}
