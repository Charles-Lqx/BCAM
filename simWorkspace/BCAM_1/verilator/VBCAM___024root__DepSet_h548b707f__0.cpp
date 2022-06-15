// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM__Syms.h"
#include "VBCAM___024root.h"

VL_INLINE_OPT void VBCAM___024root___sequent__TOP__1(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->io_mAddrStream_payload_matchFlag = vlSymsp->TOP__BCAM.rMatch;
}

VL_INLINE_OPT void VBCAM___024root___sequent__TOP__2(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->io_mAddrStream_payload_mAddr = (((IData)(vlSymsp->TOP__BCAM.__PVT__SegAddr_regNext) 
                                             << 1U) 
                                            | (1U & 
                                               (((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                     - (IData)(1U)))) 
                                                >> 1U)));
    vlSelf->io_mPattStream_ready = (1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rValid)));
    vlSelf->io_mAddrStream_valid = vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid;
    vlSelf->io_wStream_ready = (1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_wStream_rValid)));
}

void VBCAM_BCAM___sequent__TOP__BCAM__2(VBCAM_BCAM* vlSelf);
void VBCAM_BCAM___sequent__TOP__BCAM__3(VBCAM_BCAM* vlSelf);
void VBCAM_BCAM___sequent__TOP__BCAM__4(VBCAM_BCAM* vlSelf);
void VBCAM_BCAM___sequent__TOP__BCAM__7(VBCAM_BCAM* vlSelf);
void VBCAM_BCAM___combo__TOP__BCAM__8(VBCAM_BCAM* vlSelf);

void VBCAM___024root___eval(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VBCAM_BCAM___sequent__TOP__BCAM__2((&vlSymsp->TOP__BCAM));
        VBCAM_BCAM___sequent__TOP__BCAM__3((&vlSymsp->TOP__BCAM));
        VBCAM___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VBCAM_BCAM___sequent__TOP__BCAM__4((&vlSymsp->TOP__BCAM));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VBCAM___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VBCAM_BCAM___sequent__TOP__BCAM__7((&vlSymsp->TOP__BCAM));
    }
    VBCAM_BCAM___combo__TOP__BCAM__8((&vlSymsp->TOP__BCAM));
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}
