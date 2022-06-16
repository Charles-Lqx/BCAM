// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VBCAM__Syms.h"


VL_ATTR_COLD void VBCAM___024root__trace_init_sub__TOP__0(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,"io_wStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_wStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"io_wStream_payload_wAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+18,"io_wStream_payload_wPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+19,"io_wStream_payload_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_mPattStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"io_mPattStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"io_mPattStream_payload_mPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+23,"io_mAddrStream_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"io_mAddrStream_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"io_mAddrStream_payload_mAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+26,"io_mAddrStream_payload_matchFlag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("BCAM ");
    tracep->declBit(c+15,"io_wStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_wStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"io_wStream_payload_wAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+18,"io_wStream_payload_wPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+19,"io_wStream_payload_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_mPattStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"io_mPattStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"io_mPattStream_payload_mPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+23,"io_mAddrStream_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"io_mAddrStream_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"io_mAddrStream_payload_mAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+26,"io_mAddrStream_payload_matchFlag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"halfRateWStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"halfRateWStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"halfRateWStream_payload_wAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+2,"halfRateWStream_payload_wPatt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+3,"halfRateWStream_payload_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"io_wStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"halfRateWStream_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_wStream_rData_wAddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,"io_wStream_rData_wPatt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,"io_wStream_rData_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"continueWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"halfRateWStream_fire_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"halfRateWStream_fire_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"when_BCAM_l59",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"io_mPattStream_halfPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_mPattStream_halfPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"io_mPattStream_halfPipe_payload_mPatt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"io_mPattStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"io_mPattStream_halfPipe_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"io_mPattStream_rData_mPatt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,"io_mPattStream_halfPipe_translated_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_mPattStream_halfPipe_translated_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"io_mPattStream_halfPipe_translated_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+31,"io_mAddrStream_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"when_BCAM_l129",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"when_BCAM_l129_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"when_Stream_l368",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"switch_Misc_l211",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+10,"halfRateWStream_fire_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"when_BCAM_l171",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"when_BCAM_l171_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"halfRateWStream_fire_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VBCAM___024root__trace_init_top(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_init_top\n"); );
    // Body
    VBCAM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBCAM___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void VBCAM___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void VBCAM___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VBCAM___024root__trace_register(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBCAM___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBCAM___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBCAM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBCAM___024root__trace_full_sub_0(VBCAM___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VBCAM___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_full_top_0\n"); );
    // Init
    VBCAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBCAM___024root*>(voidSelf);
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBCAM___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBCAM___024root__trace_full_sub_0(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->BCAM__DOT__io_wStream_rData_wAddr),3);
    tracep->fullCData(oldp+2,(vlSelf->BCAM__DOT__io_wStream_rData_wPatt),2);
    tracep->fullBit(oldp+3,(vlSelf->BCAM__DOT__io_wStream_rData_wr));
    tracep->fullCData(oldp+4,(vlSelf->BCAM__DOT__io_mPattStream_rData_mPatt),2);
    tracep->fullBit(oldp+5,(((3U & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port0)) 
                             == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l129_2))));
    tracep->fullBit(oldp+6,(((3U & ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port0) 
                                    >> 2U)) == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l129_2))));
    tracep->fullBit(oldp+7,((1U & (IData)(vlSelf->BCAM__DOT__io_wStream_rData_wAddr))));
    tracep->fullBit(oldp+8,(((3U & (IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1)) 
                             == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2))));
    tracep->fullBit(oldp+9,(((3U & ((IData)(vlSelf->BCAM__DOT___zz___05Fzz_2_port1) 
                                    >> 2U)) == (IData)(vlSelf->BCAM__DOT___zz_when_BCAM_l171_2))));
    tracep->fullBit(oldp+10,(vlSelf->BCAM__DOT__io_wStream_rValid));
    tracep->fullBit(oldp+11,(vlSelf->BCAM__DOT__continueWr));
    tracep->fullBit(oldp+12,((1U & (~ (IData)(vlSelf->BCAM__DOT__io_wStream_rValid)))));
    tracep->fullBit(oldp+13,(vlSelf->BCAM__DOT__io_mPattStream_rValid));
    tracep->fullBit(oldp+14,((1U & (~ (IData)(vlSelf->BCAM__DOT___zz_io_mAddrStream_valid_5)))));
    tracep->fullBit(oldp+15,(vlSelf->io_wStream_valid));
    tracep->fullBit(oldp+16,(vlSelf->io_wStream_ready));
    tracep->fullCData(oldp+17,(vlSelf->io_wStream_payload_wAddr),3);
    tracep->fullCData(oldp+18,(vlSelf->io_wStream_payload_wPatt),2);
    tracep->fullBit(oldp+19,(vlSelf->io_wStream_payload_wr));
    tracep->fullBit(oldp+20,(vlSelf->io_mPattStream_valid));
    tracep->fullBit(oldp+21,(vlSelf->io_mPattStream_ready));
    tracep->fullCData(oldp+22,(vlSelf->io_mPattStream_payload_mPatt),2);
    tracep->fullBit(oldp+23,(vlSelf->io_mAddrStream_valid));
    tracep->fullBit(oldp+24,(vlSelf->io_mAddrStream_ready));
    tracep->fullCData(oldp+25,(vlSelf->io_mAddrStream_payload_mAddr),3);
    tracep->fullBit(oldp+26,(vlSelf->io_mAddrStream_payload_matchFlag));
    tracep->fullBit(oldp+27,(vlSelf->clk));
    tracep->fullBit(oldp+28,(vlSelf->reset));
    tracep->fullBit(oldp+29,(vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready));
    tracep->fullBit(oldp+30,(((IData)(vlSelf->BCAM__DOT__io_mPattStream_rValid) 
                              & (IData)(vlSelf->BCAM__DOT__io_mPattStream_halfPipe_translated_ready))));
    tracep->fullBit(oldp+31,(((IData)(vlSelf->io_mAddrStream_valid) 
                              & (IData)(vlSelf->io_mAddrStream_ready))));
    tracep->fullBit(oldp+32,(1U));
}
