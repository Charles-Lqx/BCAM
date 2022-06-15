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
        tracep->chgCData(oldp+0,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wAddr),3);
        tracep->chgCData(oldp+1,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wPatt),2);
        tracep->chgBit(oldp+2,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wr));
        tracep->chgCData(oldp+3,(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rData_mPatt),2);
        tracep->chgCData(oldp+4,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_payload_ohFirst_masked),4);
        tracep->chgCData(oldp+5,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rData),4);
        tracep->chgBit(oldp+6,((1U & (IData)(vlSymsp->TOP__BCAM.__PVT__io_wStream_rData_wAddr))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+7,((1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_wStream_rValid)))));
        tracep->chgBit(oldp+8,((1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rValid)))));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__BCAM.__PVT__io_wStream_rValid));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__BCAM.__PVT__continueWr));
        tracep->chgBit(oldp+12,(vlSymsp->TOP__BCAM.__PVT__io_mPattStream_rValid));
        tracep->chgCData(oldp+13,(vlSymsp->TOP__BCAM.__PVT__SegAddr_regNext),2);
        tracep->chgBit(oldp+14,((1U & (~ (IData)(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid)))));
    }
    tracep->chgBit(oldp+15,(vlSelf->io_wStream_valid));
    tracep->chgBit(oldp+16,(vlSelf->io_wStream_ready));
    tracep->chgCData(oldp+17,(vlSelf->io_wStream_payload_wAddr),3);
    tracep->chgCData(oldp+18,(vlSelf->io_wStream_payload_wPatt),2);
    tracep->chgBit(oldp+19,(vlSelf->io_wStream_payload_wr));
    tracep->chgBit(oldp+20,(vlSelf->io_mPattStream_valid));
    tracep->chgBit(oldp+21,(vlSelf->io_mPattStream_ready));
    tracep->chgCData(oldp+22,(vlSelf->io_mPattStream_payload_mPatt),2);
    tracep->chgBit(oldp+23,(vlSelf->io_mAddrStream_valid));
    tracep->chgBit(oldp+24,(vlSelf->io_mAddrStream_ready));
    tracep->chgCData(oldp+25,(vlSelf->io_mAddrStream_payload_mAddr),3);
    tracep->chgBit(oldp+26,(vlSelf->io_mAddrStream_payload_matchFlag));
    tracep->chgBit(oldp+27,(vlSelf->clk));
    tracep->chgBit(oldp+28,(vlSelf->reset));
    tracep->chgCData(oldp+29,((((IData)(vlSymsp->TOP__BCAM.__PVT__SegAddr_regNext) 
                                << 1U) | (1U & (((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__BCAM.__PVT___zz_io_mAddrStream_payload_mAddr_2) 
                                                     - (IData)(1U)))) 
                                                >> 1U)))),3);
    tracep->chgBit(oldp+30,(vlSymsp->TOP__BCAM.rMatch));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__BCAM.SegWr));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__BCAM.STiWr));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__BCAM.halfRateMPatt_valid));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__BCAM.halfRateMPatt_ready));
    tracep->chgCData(oldp+35,(vlSymsp->TOP__BCAM.halfRateMPatt_payload_mPatt),2);
    tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__BCAM.halfRateMPatt_valid) 
                             & (IData)(vlSymsp->TOP__BCAM.halfRateMPatt_ready))));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__BCAM.mPattTwoPipe_0),2);
    tracep->chgCData(oldp+38,(vlSymsp->TOP__BCAM.mPattTwoPipe_1),2);
    tracep->chgCData(oldp+39,(vlSymsp->TOP__BCAM.mPattTwoPipe_2),2);
    tracep->chgBit(oldp+40,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_isFree));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__BCAM.mIndcStream_valid));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__BCAM.mIndcStream_ready));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__BCAM.mIndcStream_payload),4);
    tracep->chgCData(oldp+44,(vlSymsp->TOP__BCAM.SegAddr),2);
    tracep->chgBit(oldp+45,(((IData)(vlSymsp->TOP__BCAM.mIndcStream_valid) 
                             & (IData)(vlSymsp->TOP__BCAM.mIndcStream_ready))));
    tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__BCAM.__PVT__mIndcStream_rValid) 
                             & (IData)(vlSelf->io_mAddrStream_ready))));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__BCAM.__PVT__mIndcStream_fire_1));
    tracep->chgBit(oldp+48,(((3U & (IData)(vlSymsp->TOP__BCAM.__PVT___zz_SegRAM_port0)) 
                             == (IData)(vlSymsp->TOP__BCAM.mPattTwoPipe_2))));
    tracep->chgBit(oldp+49,(((3U & ((IData)(vlSymsp->TOP__BCAM.__PVT___zz_SegRAM_port0) 
                                    >> 2U)) == (IData)(vlSymsp->TOP__BCAM.mPattTwoPipe_2))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__BCAM.STiWMask),4);
    tracep->chgCData(oldp+51,(vlSymsp->TOP__BCAM.RegWMask),2);
    tracep->chgCData(oldp+52,(vlSymsp->TOP__BCAM.RDataForWrite),4);
    tracep->chgCData(oldp+53,(vlSymsp->TOP__BCAM.PattToRmMuxOutput),2);
    tracep->chgCData(oldp+54,(vlSymsp->TOP__BCAM.STiWPatt),2);
    tracep->chgBit(oldp+55,(vlSymsp->TOP__BCAM.ocurrIndcResults_0));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__BCAM.ocurrIndcResults_1));
    tracep->chgBit(oldp+57,(((3U & (IData)(vlSymsp->TOP__BCAM.RDataForWrite)) 
                             == (IData)(vlSymsp->TOP__BCAM.PattToRmMuxOutput))));
    tracep->chgBit(oldp+58,(((3U & ((IData)(vlSymsp->TOP__BCAM.RDataForWrite) 
                                    >> 2U)) == (IData)(vlSymsp->TOP__BCAM.PattToRmMuxOutput))));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__BCAM.MaskingControl));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__BCAM.notErase));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__BCAM.STiRAM_symbol0[0]));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__BCAM.STiRAM_symbol0[1]));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__BCAM.STiRAM_symbol0[2]));
    tracep->chgBit(oldp+64,(vlSymsp->TOP__BCAM.STiRAM_symbol0[3]));
    tracep->chgBit(oldp+65,(vlSymsp->TOP__BCAM.STiRAM_symbol1[0]));
    tracep->chgBit(oldp+66,(vlSymsp->TOP__BCAM.STiRAM_symbol1[1]));
    tracep->chgBit(oldp+67,(vlSymsp->TOP__BCAM.STiRAM_symbol1[2]));
    tracep->chgBit(oldp+68,(vlSymsp->TOP__BCAM.STiRAM_symbol1[3]));
    tracep->chgBit(oldp+69,(vlSymsp->TOP__BCAM.STiRAM_symbol2[0]));
    tracep->chgBit(oldp+70,(vlSymsp->TOP__BCAM.STiRAM_symbol2[1]));
    tracep->chgBit(oldp+71,(vlSymsp->TOP__BCAM.STiRAM_symbol2[2]));
    tracep->chgBit(oldp+72,(vlSymsp->TOP__BCAM.STiRAM_symbol2[3]));
    tracep->chgBit(oldp+73,(vlSymsp->TOP__BCAM.STiRAM_symbol3[0]));
    tracep->chgBit(oldp+74,(vlSymsp->TOP__BCAM.STiRAM_symbol3[1]));
    tracep->chgBit(oldp+75,(vlSymsp->TOP__BCAM.STiRAM_symbol3[2]));
    tracep->chgBit(oldp+76,(vlSymsp->TOP__BCAM.STiRAM_symbol3[3]));
    tracep->chgCData(oldp+77,(vlSymsp->TOP__BCAM.SegRAM_symbol0[0]),2);
    tracep->chgCData(oldp+78,(vlSymsp->TOP__BCAM.SegRAM_symbol0[1]),2);
    tracep->chgCData(oldp+79,(vlSymsp->TOP__BCAM.SegRAM_symbol0[2]),2);
    tracep->chgCData(oldp+80,(vlSymsp->TOP__BCAM.SegRAM_symbol0[3]),2);
    tracep->chgCData(oldp+81,(vlSymsp->TOP__BCAM.SegRAM_symbol1[0]),2);
    tracep->chgCData(oldp+82,(vlSymsp->TOP__BCAM.SegRAM_symbol1[1]),2);
    tracep->chgCData(oldp+83,(vlSymsp->TOP__BCAM.SegRAM_symbol1[2]),2);
    tracep->chgCData(oldp+84,(vlSymsp->TOP__BCAM.SegRAM_symbol1[3]),2);
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
