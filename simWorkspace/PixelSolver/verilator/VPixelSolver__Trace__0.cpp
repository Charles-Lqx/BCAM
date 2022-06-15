// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPixelSolver__Syms.h"


void VPixelSolver___024root__trace_chg_sub_0(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep);

void VPixelSolver___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_chg_top_0\n"); );
    // Init
    VPixelSolver___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolver___024root*>(voidSelf);
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPixelSolver___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VPixelSolver___024root__trace_chg_sub_0(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->PixelSolver__DOT__x),28);
        tracep->chgIData(oldp+1,(vlSelf->PixelSolver__DOT__y),28);
        tracep->chgCData(oldp+2,(vlSelf->PixelSolver__DOT__iteration),4);
        tracep->chgQData(oldp+3,(vlSelf->PixelSolver__DOT__xx),56);
        tracep->chgQData(oldp+5,(vlSelf->PixelSolver__DOT__yy),56);
        tracep->chgQData(oldp+7,((0xffffffffffffffULL 
                                  & VL_MULS_QQQ(56, 
                                                (0xffffffffffffffULL 
                                                 & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__x)), 
                                                (0xffffffffffffffULL 
                                                 & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y))))),56);
        tracep->chgBit(oldp+9,(vlSelf->PixelSolver__DOT__when_PixelSolver_l46));
    }
    tracep->chgBit(oldp+10,(vlSelf->io_cmd_valid));
    tracep->chgBit(oldp+11,(vlSelf->io_cmd_ready));
    tracep->chgIData(oldp+12,(vlSelf->io_cmd_payload_x),28);
    tracep->chgIData(oldp+13,(vlSelf->io_cmd_payload_y),28);
    tracep->chgBit(oldp+14,(vlSelf->io_rsp_valid));
    tracep->chgBit(oldp+15,(vlSelf->io_rsp_ready));
    tracep->chgCData(oldp+16,(vlSelf->io_rsp_payload_iteration),4);
    tracep->chgBit(oldp+17,(vlSelf->clk));
    tracep->chgBit(oldp+18,(vlSelf->reset));
}

void VPixelSolver___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_cleanup\n"); );
    // Init
    VPixelSolver___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolver___024root*>(voidSelf);
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
