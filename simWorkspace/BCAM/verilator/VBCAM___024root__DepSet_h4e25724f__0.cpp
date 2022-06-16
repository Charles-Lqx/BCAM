// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"

#include "VBCAM___024root.h"

VL_INLINE_OPT void VBCAM___024root___sequent__TOP__2(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol2__v0;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol1__v0;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol0__v0;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol3__v0;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol3__v0;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v1;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol2__v1;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v1;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol1__v1;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol0__v1;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol0__v1;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol3__v1;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol3__v1;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_2_symbol0__v0;
    CData/*1:0*/ __Vdlyvval__BCAM__DOT___zz_2_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_2_symbol0__v0;
    CData/*1:0*/ __Vdlyvdim0__BCAM__DOT___zz_2_symbol1__v0;
    CData/*1:0*/ __Vdlyvval__BCAM__DOT___zz_2_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_2_symbol1__v0;
    // Body
    __Vdlyvset__BCAM__DOT___zz_2_symbol1__v0 = 0U;
    __Vdlyvset__BCAM__DOT___zz_2_symbol0__v0 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol3__v0 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol3__v1 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol0__v0 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol0__v1 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol1__v0 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol1__v1 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol2__v0 = 0U;
    __Vdlyvset__BCAM__DOT___zz_1_symbol2__v1 = 0U;
    if (vlSelf->io_wStream_ready) {
        vlSelf->BCAM__DOT__io_wStream_rData_wr = vlSelf->io_wStream_payload_wr;
    }
    vlSelf->BCAM__DOT___zz_when_BCAM_l129_2 = vlSelf->BCAM__DOT___zz_when_BCAM_l129_1;
    if (vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready) {
        vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_3 
            = vlSelf->BCAM__DOT___zz_1_symbol3[vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt];
        vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_2 
            = vlSelf->BCAM__DOT___zz_1_symbol2[vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt];
        vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_1 
            = vlSelf->BCAM__DOT___zz_1_symbol1[vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt];
        vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read 
            = vlSelf->BCAM__DOT___zz_1_symbol0[vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt];
    }
    if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_12 
            = (((IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_7) 
                << 1U) | (1U & (((IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_10) 
                                 & (~ ((IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_10) 
                                       - (IData)(1U)))) 
                                >> 1U)));
    }
    if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1) {
        vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_1 
            = vlSelf->BCAM__DOT___zz_2_symbol1[vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6];
        vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read 
            = vlSelf->BCAM__DOT___zz_2_symbol0[vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6];
    }
    if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag_1 
            = vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag;
    }
    if (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port_2) 
         & (((IData)(1U) << (1U & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr))) 
            >> 1U))) {
        __Vdlyvval__BCAM__DOT___zz_2_symbol1__v0 = vlSelf->BCAM__DOT__io_wStream_rData_wPatt;
        __Vdlyvset__BCAM__DOT___zz_2_symbol1__v0 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_2_symbol1__v0 = 
            (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                   >> 1U));
    }
    if ((3U & (((IData)(1U) << (1U & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr))) 
               & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port_2)))) {
        __Vdlyvval__BCAM__DOT___zz_2_symbol0__v0 = vlSelf->BCAM__DOT__io_wStream_rData_wPatt;
        __Vdlyvset__BCAM__DOT___zz_2_symbol0__v0 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_2_symbol0__v0 = 
            (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                   >> 1U));
    }
    if (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_1) 
         & (((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                   >> 1U))) >> 3U))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol3__v0 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol3__v0 = vlSelf->BCAM__DOT___zz_7;
    }
    if (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_3) 
         & (((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                   >> 1U))) >> 3U))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol3__v1 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol3__v1 = vlSelf->BCAM__DOT___zz_7;
    }
    if ((0xfU & (((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                        >> 1U))) & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_1)))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol0__v0 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol0__v0 = vlSelf->BCAM__DOT___zz_7;
    }
    if ((0xfU & (((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                        >> 1U))) & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_3)))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol0__v1 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol0__v1 = vlSelf->BCAM__DOT___zz_7;
    }
    if ((7U & ((((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                       >> 1U))) >> 1U) 
               & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_1)))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol1__v0 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v0 = vlSelf->BCAM__DOT___zz_7;
    }
    if ((7U & ((((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                       >> 1U))) >> 1U) 
               & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_3)))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol1__v1 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v1 = vlSelf->BCAM__DOT___zz_7;
    }
    if ((3U & ((((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                       >> 1U))) >> 2U) 
               & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_1)))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol2__v0 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v0 = vlSelf->BCAM__DOT___zz_7;
    }
    if ((3U & ((((IData)(1U) << (3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                       >> 1U))) >> 2U) 
               & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port_3)))) {
        __Vdlyvset__BCAM__DOT___zz_1_symbol2__v1 = 1U;
        __Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v1 = vlSelf->BCAM__DOT___zz_7;
    }
    vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_3 = 
        vlSelf->BCAM__DOT___zz_2_symbol1[(3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                                >> 1U))];
    vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_2 = 
        vlSelf->BCAM__DOT___zz_2_symbol0[(3U & ((IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr) 
                                                >> 1U))];
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol3__v0) {
        vlSelf->BCAM__DOT___zz_1_symbol3[__Vdlyvdim0__BCAM__DOT___zz_1_symbol3__v0] = 1U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol3__v1) {
        vlSelf->BCAM__DOT___zz_1_symbol3[__Vdlyvdim0__BCAM__DOT___zz_1_symbol3__v1] = 0U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol0__v0) {
        vlSelf->BCAM__DOT___zz_1_symbol0[__Vdlyvdim0__BCAM__DOT___zz_1_symbol0__v0] = 1U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol0__v1) {
        vlSelf->BCAM__DOT___zz_1_symbol0[__Vdlyvdim0__BCAM__DOT___zz_1_symbol0__v1] = 0U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol1__v0) {
        vlSelf->BCAM__DOT___zz_1_symbol1[__Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v0] = 1U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol1__v1) {
        vlSelf->BCAM__DOT___zz_1_symbol1[__Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v1] = 0U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol2__v0) {
        vlSelf->BCAM__DOT___zz_1_symbol2[__Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v0] = 1U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_1_symbol2__v1) {
        vlSelf->BCAM__DOT___zz_1_symbol2[__Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v1] = 0U;
    }
    if (__Vdlyvset__BCAM__DOT___zz_2_symbol1__v0) {
        vlSelf->BCAM__DOT___zz_2_symbol1[__Vdlyvdim0__BCAM__DOT___zz_2_symbol1__v0] 
            = __Vdlyvval__BCAM__DOT___zz_2_symbol1__v0;
    }
    if (__Vdlyvset__BCAM__DOT___zz_2_symbol0__v0) {
        vlSelf->BCAM__DOT___zz_2_symbol0[__Vdlyvdim0__BCAM__DOT___zz_2_symbol0__v0] 
            = __Vdlyvval__BCAM__DOT___zz_2_symbol0__v0;
    }
    vlSelf->BCAM__DOT___zz_when_BCAM_l129_1 = vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt;
    vlSelf->io_mAddrStream_payload_mAddr = vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_12;
    vlSelf->BCAM__DOT___zz___05Fzz_2_port0 = (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_1) 
                                               << 2U) 
                                              | (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read));
    vlSelf->io_mAddrStream_payload_matchFlag = vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag_1;
    if (((IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1) 
         & (IData)(vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1))) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag 
            = (IData)((0U != (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port0)));
    }
}

VL_INLINE_OPT void VBCAM___024root___sequent__TOP__3(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ BCAM__DOT___zz_8;
    CData/*0:0*/ BCAM__DOT___zz_9;
    // Body
    if (((IData)(vlSelf->io_mAddrStream_valid) & (IData)(vlSelf->io_mAddrStream_ready))) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag = 0U;
    }
    if (vlSelf->io_wStream_ready) {
        vlSelf->BCAM__DOT__io_wStream_rData_wPatt = vlSelf->io_wStream_payload_wPatt;
        vlSelf->BCAM__DOT__io_wStream_rData_wAddr = vlSelf->io_wStream_payload_wAddr;
    }
    vlSelf->BCAM__DOT___zz___05Fzz_2_port1 = (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_3) 
                                               << 2U) 
                                              | (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_2));
    vlSelf->BCAM__DOT___zz___05Fzz_1_port0 = (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read))));
    if (vlSelf->io_mPattStream_ready) {
        vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt 
            = vlSelf->io_mPattStream_payload_mPatt;
    }
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2 
        = ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port0) 
           & (~ ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port0) 
                 - (IData)(1U))));
    vlSelf->BCAM__DOT___zz_when_BCAM_l171_2 = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr))
                                                 ? 
                                                ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1) 
                                                 >> 2U)
                                                 : (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1)));
    BCAM__DOT___zz_8 = 0U;
    if (((3U & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1)) 
         == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2))) {
        BCAM__DOT___zz_8 = 1U;
    }
    BCAM__DOT___zz_9 = 0U;
    if (((3U & ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1) 
                >> 2U)) == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2))) {
        BCAM__DOT___zz_9 = 1U;
    }
    vlSelf->BCAM__DOT___zz_10 = ((((IData)(BCAM__DOT___zz_9) 
                                   << 1U) | (IData)(BCAM__DOT___zz_8)) 
                                 & (~ ((IData)(1U) 
                                       << (1U & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr)))));
}

VL_INLINE_OPT void VBCAM___024root___sequent__TOP__4(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_7 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6));
    vlSelf->BCAM__DOT___zz_3 = ((~ (IData)(vlSelf->reset)) 
                                & (IData)(vlSelf->BCAM__DOT__io_wStream_rValid));
    if (vlSelf->reset) {
        vlSelf->BCAM__DOT__continueWr = 0U;
    } else {
        if (vlSelf->BCAM__DOT__io_wStream_rValid) {
            vlSelf->BCAM__DOT__continueWr = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->BCAM__DOT__io_wStream_rValid)))) {
            vlSelf->BCAM__DOT__continueWr = 0U;
        }
    }
    vlSelf->BCAM__DOT___zz_4 = (1U & ((IData)(vlSelf->reset) 
                                      | (~ (IData)(vlSelf->BCAM__DOT__io_wStream_rValid))));
    if (vlSelf->reset) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5 = 0U;
    } else if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5 
            = vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3;
    }
    vlSelf->BCAM__DOT___zz___05Fzz_2_port_2 = ((IData)(vlSelf->BCAM__DOT___zz_3) 
                                               & (IData)(vlSelf->BCAM__DOT__continueWr));
    vlSelf->BCAM__DOT___zz_7 = ((IData)(vlSelf->BCAM__DOT___zz_4)
                                 ? (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wPatt)
                                 : (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2));
    vlSelf->BCAM__DOT___zz___05Fzz_1_port_3 = ((~ ((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->BCAM__DOT___zz_10))) 
                                                   | (IData)(vlSelf->BCAM__DOT___zz_4))) 
                                               & (IData)(vlSelf->BCAM__DOT__continueWr));
    if (vlSelf->reset) {
        vlSelf->BCAM__DOT__io_wStream_rValid = 0U;
        vlSelf->io_mAddrStream_valid = vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5;
        vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3 = 0U;
    } else {
        if (vlSelf->io_wStream_valid) {
            vlSelf->BCAM__DOT__io_wStream_rValid = 1U;
        }
        if (vlSelf->BCAM__DOT__halfRateWStream_fire) {
            vlSelf->BCAM__DOT__io_wStream_rValid = 0U;
        }
        vlSelf->io_mAddrStream_valid = vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5;
        if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3) {
            vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3 = 0U;
        }
        if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1) {
            vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3 
                = vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1;
        }
    }
    vlSelf->BCAM__DOT__halfRateWStream_fire = vlSelf->BCAM__DOT__io_wStream_rValid;
    vlSelf->io_wStream_ready = (1U & (~ (IData)(vlSelf->BCAM__DOT__io_wStream_rValid)));
    vlSelf->BCAM__DOT___zz___05Fzz_1_port_1 = ((IData)(vlSelf->BCAM__DOT___zz_4) 
                                               & (IData)(vlSelf->BCAM__DOT__io_wStream_rValid));
    if (vlSelf->reset) {
        vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1 = 0U;
        vlSelf->BCAM__DOT__io_mPattStream_rValid = 0U;
    } else {
        if (vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1) {
            vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1 = 0U;
        }
        if (vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready) {
            vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1 
                = vlSelf->BCAM__DOT__io_mPattStream_rValid;
        }
        if (vlSelf->io_mPattStream_valid) {
            vlSelf->BCAM__DOT__io_mPattStream_rValid = 1U;
        }
        if (vlSelf->BCAM__DOT__io_mPattStream_halfPipe_fire) {
            vlSelf->BCAM__DOT__io_mPattStream_rValid = 0U;
        }
    }
    vlSelf->io_mPattStream_ready = (1U & (~ (IData)(vlSelf->BCAM__DOT__io_mPattStream_rValid)));
}

VL_INLINE_OPT void VBCAM___024root___sequent__TOP__7(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2)))));
}

VL_INLINE_OPT void VBCAM___024root___combo__TOP__8(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___combo__TOP__8\n"); );
    // Init
    CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_8;
    CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9;
    // Body
    vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3 
        = vlSelf->io_mAddrStream_ready;
    if ((1U & (~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5)))) {
        vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3 = 1U;
    }
    BCAM__DOT___zz_io_mAddrStream_payload_mAddr_8 = 0U;
    if (((IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3) 
         & (IData)(vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3))) {
        if (((3U & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port0)) 
             == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l129_2))) {
            BCAM__DOT___zz_io_mAddrStream_payload_mAddr_8 = 1U;
        }
        BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9 = 0U;
        if (((3U & ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port0) 
                    >> 2U)) == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l129_2))) {
            BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9 = 1U;
        }
    } else {
        BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9 = 0U;
    }
    vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1 
        = (1U & ((~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3)) 
                 | (IData)(vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3)));
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_10 
        = (((IData)(BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9) 
            << 1U) | (IData)(BCAM__DOT___zz_io_mAddrStream_payload_mAddr_8));
    vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready 
        = (1U & ((~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1)) 
                 | (IData)(vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1)));
    vlSelf->BCAM__DOT__io_mPattStream_halfPipe_fire 
        = ((IData)(vlSelf->BCAM__DOT__io_mPattStream_rValid) 
           & (IData)(vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready));
}

void VBCAM___024root___eval(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VBCAM___024root___sequent__TOP__2(vlSelf);
        VBCAM___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VBCAM___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VBCAM___024root___sequent__TOP__7(vlSelf);
    }
    VBCAM___024root___combo__TOP__8(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

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
