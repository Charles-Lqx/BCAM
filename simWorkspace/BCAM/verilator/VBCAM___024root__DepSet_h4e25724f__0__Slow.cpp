// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"

#include "VBCAM___024root.h"

extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_hfc1a73f7_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h83611bf8_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h07f84f8c_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h9f75cbaa_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h6319a50f_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h1c97e101_0;

VL_ATTR_COLD void VBCAM___024root___initial__TOP__5(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___initial__TOP__5\n"); );
    // Body
    VL_READMEM_N(false, 2, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_hfc1a73f7_0)
                 ,  &(vlSelf->BCAM__DOT___zz_2_symbol0)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 2, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h83611bf8_0)
                 ,  &(vlSelf->BCAM__DOT___zz_2_symbol1)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h07f84f8c_0)
                 ,  &(vlSelf->BCAM__DOT___zz_1_symbol0)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h9f75cbaa_0)
                 ,  &(vlSelf->BCAM__DOT___zz_1_symbol1)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h6319a50f_0)
                 ,  &(vlSelf->BCAM__DOT___zz_1_symbol2)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h1c97e101_0)
                 ,  &(vlSelf->BCAM__DOT___zz_1_symbol3)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VBCAM___024root___settle__TOP__6(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___settle__TOP__6\n"); );
    // Init
    CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_8;
    CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9;
    CData/*0:0*/ BCAM__DOT___zz_8;
    CData/*0:0*/ BCAM__DOT___zz_9;
    // Body
    vlSelf->io_mAddrStream_payload_mAddr = vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_12;
    vlSelf->io_mAddrStream_payload_matchFlag = vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag_1;
    vlSelf->BCAM__DOT___zz___05Fzz_2_port_2 = ((IData)(vlSelf->BCAM__DOT___zz_3) 
                                               & (IData)(vlSelf->BCAM__DOT__continueWr));
    vlSelf->BCAM__DOT___zz___05Fzz_2_port0 = (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_1) 
                                               << 2U) 
                                              | (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read));
    vlSelf->BCAM__DOT___zz___05Fzz_2_port1 = (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_3) 
                                               << 2U) 
                                              | (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_2));
    vlSelf->io_mAddrStream_valid = vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5;
    vlSelf->BCAM__DOT___zz___05Fzz_1_port0 = (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read))));
    vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3 
        = vlSelf->io_mAddrStream_ready;
    if ((1U & (~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5)))) {
        vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3 = 1U;
    }
    vlSelf->BCAM__DOT__halfRateWStream_fire = vlSelf->BCAM__DOT__io_wStream_rValid;
    vlSelf->io_wStream_ready = (1U & (~ (IData)(vlSelf->BCAM__DOT__io_wStream_rValid)));
    vlSelf->BCAM__DOT___zz___05Fzz_1_port_1 = ((IData)(vlSelf->BCAM__DOT___zz_4) 
                                               & (IData)(vlSelf->BCAM__DOT__io_wStream_rValid));
    vlSelf->io_mPattStream_ready = (1U & (~ (IData)(vlSelf->BCAM__DOT__io_mPattStream_rValid)));
    vlSelf->BCAM__DOT___zz_when_BCAM_l171_2 = (3U & 
                                               ((1U 
                                                 & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr))
                                                 ? 
                                                ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1) 
                                                 >> 2U)
                                                 : (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1)));
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2 
        = ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port0) 
           & (~ ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_1_port0) 
                 - (IData)(1U))));
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
    vlSelf->BCAM__DOT___zz_7 = ((IData)(vlSelf->BCAM__DOT___zz_4)
                                 ? (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wPatt)
                                 : (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2));
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
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2)))));
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_10 
        = (((IData)(BCAM__DOT___zz_io_mAddrStream_payload_mAddr_9) 
            << 1U) | (IData)(BCAM__DOT___zz_io_mAddrStream_payload_mAddr_8));
    vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready 
        = (1U & ((~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1)) 
                 | (IData)(vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1)));
    vlSelf->BCAM__DOT___zz_10 = ((((IData)(BCAM__DOT___zz_9) 
                                   << 1U) | (IData)(BCAM__DOT___zz_8)) 
                                 & (~ ((IData)(1U) 
                                       << (1U & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr)))));
    vlSelf->BCAM__DOT__io_mPattStream_halfPipe_fire 
        = ((IData)(vlSelf->BCAM__DOT__io_mPattStream_rValid) 
           & (IData)(vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready));
    vlSelf->BCAM__DOT___zz___05Fzz_1_port_3 = ((~ ((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->BCAM__DOT___zz_10))) 
                                                   | (IData)(vlSelf->BCAM__DOT___zz_4))) 
                                               & (IData)(vlSelf->BCAM__DOT__continueWr));
}

VL_ATTR_COLD void VBCAM___024root___eval_initial(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
    VBCAM___024root___initial__TOP__5(vlSelf);
}

VL_ATTR_COLD void VBCAM___024root___eval_settle(VBCAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root___eval_settle\n"); );
    // Body
    VBCAM___024root___settle__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

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
    vlSelf->BCAM__DOT___zz___05Fzz_1_port0 = VL_RAND_RESET_I(4);
    vlSelf->BCAM__DOT___zz___05Fzz_2_port0 = VL_RAND_RESET_I(4);
    vlSelf->BCAM__DOT___zz___05Fzz_2_port1 = VL_RAND_RESET_I(4);
    vlSelf->BCAM__DOT___zz___05Fzz_1_port_1 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz___05Fzz_1_port_3 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz___05Fzz_2_port_2 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__io_wStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__halfRateWStream_fire = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__io_wStream_rData_wAddr = VL_RAND_RESET_I(3);
    vlSelf->BCAM__DOT__io_wStream_rData_wPatt = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT__io_wStream_rData_wr = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__continueWr = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_3 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_4 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__io_mPattStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__io_mPattStream_halfPipe_fire = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_when_BCAM_l129_1 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_when_BCAM_l129_2 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2 = VL_RAND_RESET_I(4);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_7 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_10 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_mAddr_12 = VL_RAND_RESET_I(3);
    vlSelf->BCAM__DOT___zz_io_mAddrStream_payload_matchFlag_1 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz_when_BCAM_l171_2 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_7 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz_10 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BCAM__DOT___zz_1_symbol0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BCAM__DOT___zz_1_symbol1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BCAM__DOT___zz_1_symbol2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BCAM__DOT___zz_1_symbol3[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_1 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_2 = VL_RAND_RESET_I(1);
    vlSelf->BCAM__DOT___zz___05Fzz_1symbol_read_3 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BCAM__DOT___zz_2_symbol0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BCAM__DOT___zz_2_symbol1[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_1 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_2 = VL_RAND_RESET_I(2);
    vlSelf->BCAM__DOT___zz___05Fzz_2symbol_read_3 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
