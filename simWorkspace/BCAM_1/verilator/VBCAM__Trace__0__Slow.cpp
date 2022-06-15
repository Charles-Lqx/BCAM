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
    tracep->declBit(c+16,"io_wStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"io_wStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"io_wStream_payload_wAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+19,"io_wStream_payload_wPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+20,"io_wStream_payload_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"io_mPattStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"io_mPattStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"io_mPattStream_payload_mPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+24,"io_mAddrStream_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_mAddrStream_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"io_mAddrStream_payload_mAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+27,"io_mAddrStream_payload_matchFlag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VBCAM___024root__trace_init_sub__TOP__BCAM__0(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_init_sub__TOP__BCAM__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,"io_wStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"io_wStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"io_wStream_payload_wAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+19,"io_wStream_payload_wPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+20,"io_wStream_payload_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"io_mPattStream_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"io_mPattStream_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"io_mPattStream_payload_mPatt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+10,"io_mAddrStream_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_mAddrStream_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"io_mAddrStream_payload_mAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+31,"io_mAddrStream_payload_matchFlag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"halfRateWStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"halfRateWStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"halfRateWStream_payload_wAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+2,"halfRateWStream_payload_wPatt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+3,"halfRateWStream_payload_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"io_wStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"halfRateWStream_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_wStream_rData_wAddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,"io_wStream_rData_wPatt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,"io_wStream_rData_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"continueWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"halfRateWStream_fire_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"halfRateWStream_fire_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"when_BCAM_l57",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"SegWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+33,"STiWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"halfRateMPatt_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"halfRateMPatt_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"halfRateMPatt_payload_mPatt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"io_mPattStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"halfRateMPatt_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"io_mPattStream_rData_mPatt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,"mPattTwoPipe_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+39,"mPattTwoPipe_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,"mPattTwoPipe_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,"halfRateMPatt_translated_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"halfRateMPatt_translated_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"halfRateMPatt_translated_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+42,"mIndcStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"mIndcStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+44,"mIndcStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+41,"mIndcStream_isFree",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"mIndcStream_payload_ohFirst_input",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+5,"mIndcStream_payload_ohFirst_masked",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+5,"mIndcStream_payload_ohFirst_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+45,"SegAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+14,"SegAddr_regNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,"mIndcStream_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"rMatch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+47,"io_mAddrStream_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"mIndcStream_m2sPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"mIndcStream_m2sPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"mIndcStream_m2sPipe_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+10,"mIndcStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+6,"mIndcStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,"when_Stream_l368",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"mIndcStream_fire_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"when_BCAM_l125",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"when_BCAM_l125_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"STiWMask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+52,"RegWMask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+11,"halfRateWStream_fire_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"RDataForWrite",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+7,"switch_Misc_l211",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+54,"PattToRmMuxOutput",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,"STiWPatt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+11,"halfRateWStream_fire_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"ocurrIndcResults_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"ocurrIndcResults_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"when_BCAM_l159",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"when_BCAM_l159_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"MaskingControl",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"notErase",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"halfRateWStream_fire_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+62+i*1,"STiRAM_symbol0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 0,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+66+i*1,"STiRAM_symbol1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 0,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+70+i*1,"STiRAM_symbol2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 0,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+74+i*1,"STiRAM_symbol3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 0,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+78+i*1,"SegRAM_symbol0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+82+i*1,"SegRAM_symbol1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 1,0);
    }
}

VL_ATTR_COLD void VBCAM___024root__trace_init_top(VBCAM___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBCAM___024root__trace_init_top\n"); );
    // Body
    VBCAM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("BCAM ");
    VBCAM___024root__trace_init_sub__TOP__BCAM__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    tracep->fullCData(oldp+1,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wAddr),3);
    tracep->fullCData(oldp+2,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wPatt),2);
    tracep->fullBit(oldp+3,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wr));
    tracep->fullCData(oldp+4,(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rData_mPatt),2);
    tracep->fullCData(oldp+5,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_payload_ohFirst_masked),4);
    tracep->fullCData(oldp+6,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rData),4);
    tracep->fullBit(oldp+7,((1U & (IData)(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wAddr))));
    tracep->fullBit(oldp+8,((1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_wStream_rValid)))));
    tracep->fullBit(oldp+9,((1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rValid)))));
    tracep->fullBit(oldp+10,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid));
    tracep->fullBit(oldp+11,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rValid));
    tracep->fullBit(oldp+12,(vlSymsp->TOP__BCAM.__PVT__continueWr));
    tracep->fullBit(oldp+13,(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rValid));
    tracep->fullCData(oldp+14,(vlSymsp->TOP__BCAM.__PVT__SegAddr_regNext),2);
    tracep->fullBit(oldp+15,((1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid)))));
    tracep->fullBit(oldp+16,(vlSelf->io_wStream_valid));
    tracep->fullBit(oldp+17,(vlSelf->io_wStream_ready));
    tracep->fullCData(oldp+18,(vlSelf->io_wStream_payload_wAddr),3);
    tracep->fullCData(oldp+19,(vlSelf->io_wStream_payload_wPatt),2);
    tracep->fullBit(oldp+20,(vlSelf->io_wStream_payload_wr));
    tracep->fullBit(oldp+21,(vlSelf->io_mPattStream_valid));
    tracep->fullBit(oldp+22,(vlSelf->io_mPattStream_ready));
    tracep->fullCData(oldp+23,(vlSelf->io_mPattStream_payload_mPatt),2);
    tracep->fullBit(oldp+24,(vlSelf->io_mAddrStream_valid));
    tracep->fullBit(oldp+25,(vlSelf->io_mAddrStream_ready));
    tracep->fullCData(oldp+26,(vlSelf->io_mAddrStream_payload_mAddr),3);
    tracep->fullBit(oldp+27,(vlSelf->io_mAddrStream_payload_matchFlag));
    tracep->fullBit(oldp+28,(vlSelf->clk));
    tracep->fullBit(oldp+29,(vlSelf->reset));
    tracep->fullCData(oldp+30,((((IData)(vlSymsp->TOP__BCAM.__PVT__SegAddr_regNext) 
                                 << 1U) | (1U & (((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                      - (IData)(1U)))) 
                                                 >> 1U)))),3);
    tracep->fullBit(oldp+31,(vlSymsp->TOP__BCAM.rMatch));
    tracep->fullBit(oldp+32,(vlSymsp->TOP__BCAM.SegWr));
    tracep->fullBit(oldp+33,(vlSymsp->TOP__BCAM.STiWr));
    tracep->fullBit(oldp+34,(vlSymsp->TOP__BCAM.halfRateMPatt_valid));
    tracep->fullBit(oldp+35,(vlSymsp->TOP__BCAM.halfRateMPatt_ready));
    tracep->fullCData(oldp+36,(vlSymsp->TOP__BCAM.halfRateMPatt_payload_mPatt),2);
    tracep->fullBit(oldp+37,(((IData)(vlSymsp->TOP__BCAM.halfRateMPatt_valid) 
                              & (IData)(vlSymsp->TOP__BCAM.halfRateMPatt_ready))));
    tracep->fullCData(oldp+38,(vlSymsp->TOP__BCAM.mPattTwoPipe_0),2);
    tracep->fullCData(oldp+39,(vlSymsp->TOP__BCAM.mPattTwoPipe_1),2);
    tracep->fullCData(oldp+40,(vlSymsp->TOP__BCAM.mPattTwoPipe_2),2);
    tracep->fullBit(oldp+41,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_isFree));
    tracep->fullBit(oldp+42,(vlSymsp->TOP__BCAM.mIndcStream_valid));
    tracep->fullBit(oldp+43,(vlSymsp->TOP__BCAM.mIndcStream_ready));
    tracep->fullCData(oldp+44,(vlSymsp->TOP__BCAM.mIndcStream_payload),4);
    tracep->fullCData(oldp+45,(vlSymsp->TOP__BCAM.SegAddr),2);
    tracep->fullBit(oldp+46,(((IData)(vlSymsp->TOP__BCAM.mIndcStream_valid) 
                              & (IData)(vlSymsp->TOP__BCAM.mIndcStream_ready))));
    tracep->fullBit(oldp+47,(((IData)(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid) 
                              & (IData)(vlSelf->io_mAddrStream_ready))));
    tracep->fullBit(oldp+48,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_fire_1));
    tracep->fullBit(oldp+49,(((3U & (IData)(vlSymsp->TOP__BCAM.__PVT___zz_SegRAM_port0)) 
                              == (IData)(vlSymsp->TOP__BCAM.mPattTwoPipe_2))));
    tracep->fullBit(oldp+50,(((3U & ((IData)(vlSymsp->TOP__BCAM.__PVT___zz_SegRAM_port0) 
                                     >> 2U)) == (IData)(vlSymsp->TOP__BCAM.mPattTwoPipe_2))));
    tracep->fullCData(oldp+51,(vlSymsp->TOP__BCAM.STiWMask),4);
    tracep->fullCData(oldp+52,(vlSymsp->TOP__BCAM.RegWMask),2);
    tracep->fullCData(oldp+53,(vlSymsp->TOP__BCAM.RDataForWrite),4);
    tracep->fullCData(oldp+54,(vlSymsp->TOP__BCAM.PattToRmMuxOutput),2);
    tracep->fullCData(oldp+55,(vlSymsp->TOP__BCAM.STiWPatt),2);
    tracep->fullBit(oldp+56,(vlSymsp->TOP__BCAM.ocurrIndcResults_0));
    tracep->fullBit(oldp+57,(vlSymsp->TOP__BCAM.ocurrIndcResults_1));
    tracep->fullBit(oldp+58,(((3U & (IData)(vlSymsp->TOP__BCAM.RDataForWrite)) 
                              == (IData)(vlSymsp->TOP__BCAM.PattToRmMuxOutput))));
    tracep->fullBit(oldp+59,(((3U & ((IData)(vlSymsp->TOP__BCAM.RDataForWrite) 
                                     >> 2U)) == (IData)(vlSymsp->TOP__BCAM.PattToRmMuxOutput))));
    tracep->fullBit(oldp+60,(vlSymsp->TOP__BCAM.MaskingControl));
    tracep->fullBit(oldp+61,(vlSymsp->TOP__BCAM.notErase));
    tracep->fullBit(oldp+62,(vlSymsp->TOP__BCAM.STiRAM_symbol0[0]));
    tracep->fullBit(oldp+63,(vlSymsp->TOP__BCAM.STiRAM_symbol0[1]));
    tracep->fullBit(oldp+64,(vlSymsp->TOP__BCAM.STiRAM_symbol0[2]));
    tracep->fullBit(oldp+65,(vlSymsp->TOP__BCAM.STiRAM_symbol0[3]));
    tracep->fullBit(oldp+66,(vlSymsp->TOP__BCAM.STiRAM_symbol1[0]));
    tracep->fullBit(oldp+67,(vlSymsp->TOP__BCAM.STiRAM_symbol1[1]));
    tracep->fullBit(oldp+68,(vlSymsp->TOP__BCAM.STiRAM_symbol1[2]));
    tracep->fullBit(oldp+69,(vlSymsp->TOP__BCAM.STiRAM_symbol1[3]));
    tracep->fullBit(oldp+70,(vlSymsp->TOP__BCAM.STiRAM_symbol2[0]));
    tracep->fullBit(oldp+71,(vlSymsp->TOP__BCAM.STiRAM_symbol2[1]));
    tracep->fullBit(oldp+72,(vlSymsp->TOP__BCAM.STiRAM_symbol2[2]));
    tracep->fullBit(oldp+73,(vlSymsp->TOP__BCAM.STiRAM_symbol2[3]));
    tracep->fullBit(oldp+74,(vlSymsp->TOP__BCAM.STiRAM_symbol3[0]));
    tracep->fullBit(oldp+75,(vlSymsp->TOP__BCAM.STiRAM_symbol3[1]));
    tracep->fullBit(oldp+76,(vlSymsp->TOP__BCAM.STiRAM_symbol3[2]));
    tracep->fullBit(oldp+77,(vlSymsp->TOP__BCAM.STiRAM_symbol3[3]));
    tracep->fullCData(oldp+78,(vlSymsp->TOP__BCAM.SegRAM_symbol0[0]),2);
    tracep->fullCData(oldp+79,(vlSymsp->TOP__BCAM.SegRAM_symbol0[1]),2);
    tracep->fullCData(oldp+80,(vlSymsp->TOP__BCAM.SegRAM_symbol0[2]),2);
    tracep->fullCData(oldp+81,(vlSymsp->TOP__BCAM.SegRAM_symbol0[3]),2);
    tracep->fullCData(oldp+82,(vlSymsp->TOP__BCAM.SegRAM_symbol1[0]),2);
    tracep->fullCData(oldp+83,(vlSymsp->TOP__BCAM.SegRAM_symbol1[1]),2);
    tracep->fullCData(oldp+84,(vlSymsp->TOP__BCAM.SegRAM_symbol1[2]),2);
    tracep->fullCData(oldp+85,(vlSymsp->TOP__BCAM.SegRAM_symbol1[3]),2);
    tracep->fullBit(oldp+86,(1U));
}
