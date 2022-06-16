// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VBCAM__Syms.h"


void VBCAM___024root__trace_chg_sub_0(VBCAM___024root* vlSelf, VerilatedFst* tracep);

void VBCAM___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_chg_top_0\n"); );
    // Init
    VBCAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBCAM___024root*>(voidSelf);
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBCAM___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VBCAM___024root__trace_chg_sub_0(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->BCAM__DOT__io_wStream_rData_wAddr),3);
        tracep->chgCData(oldp+1,(vlSelf->BCAM__DOT__io_wStream_rData_wPatt),2);
        tracep->chgBit(oldp+2,(vlSelf->BCAM__DOT__io_wStream_rData_wr));
        tracep->chgCData(oldp+3,(vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt),2);
        tracep->chgBit(oldp+4,(((3U & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port0)) 
                                == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l129_2))));
        tracep->chgBit(oldp+5,(((3U & ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port0) 
                                       >> 2U)) == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l129_2))));
        tracep->chgBit(oldp+6,((1U & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr))));
        tracep->chgBit(oldp+7,(((3U & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1)) 
                                == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2))));
        tracep->chgBit(oldp+8,(((3U & ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1) 
                                       >> 2U)) == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+9,(vlSelf->BCAM__DOT__io_wStream_rValid));
        tracep->chgBit(oldp+10,(vlSelf->BCAM__DOT__continueWr));
        tracep->chgBit(oldp+11,((1U & (~ (IData)(vlSelf->BCAM__DOT__io_wStream_rValid)))));
        tracep->chgBit(oldp+12,(vlSelf->BCAM__DOT__io_mPattStream_rValid));
        tracep->chgBit(oldp+13,((1U & (~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5)))));
    }
    tracep->chgBit(oldp+14,(vlSelf->io_wStream_valid));
    tracep->chgBit(oldp+15,(vlSelf->io_wStream_ready));
    tracep->chgCData(oldp+16,(vlSelf->io_wStream_payload_wAddr),3);
    tracep->chgCData(oldp+17,(vlSelf->io_wStream_payload_wPatt),2);
    tracep->chgBit(oldp+18,(vlSelf->io_wStream_payload_wr));
    tracep->chgBit(oldp+19,(vlSelf->io_mPattStream_valid));
    tracep->chgBit(oldp+20,(vlSelf->io_mPattStream_ready));
    tracep->chgCData(oldp+21,(vlSelf->io_mPattStream_payload_mPatt),2);
    tracep->chgBit(oldp+22,(vlSelf->io_mAddrStream_valid));
    tracep->chgBit(oldp+23,(vlSelf->io_mAddrStream_ready));
    tracep->chgCData(oldp+24,(vlSelf->io_mAddrStream_payload_mAddr),3);
    tracep->chgBit(oldp+25,(vlSelf->io_mAddrStream_payload_matchFlag));
    tracep->chgBit(oldp+26,(vlSelf->clk));
    tracep->chgBit(oldp+27,(vlSelf->reset));
    tracep->chgBit(oldp+28,(vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready));
    tracep->chgBit(oldp+29,(((IData)(vlSelf->BCAM__DOT__io_mPattStream_rValid) 
                             & (IData)(vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready))));
    tracep->chgBit(oldp+30,(((IData)(vlSelf->io_mAddrStream_valid) 
                             & (IData)(vlSelf->io_mAddrStream_ready))));
}

void VBCAM___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_cleanup\n"); );
    // Init
    VBCAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBCAM___024root*>(voidSelf);
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
