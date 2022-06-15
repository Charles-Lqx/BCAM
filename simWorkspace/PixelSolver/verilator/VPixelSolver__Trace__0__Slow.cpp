// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPixelSolver__Syms.h"


VL_ATTR_COLD void VPixelSolver___024root__trace_init_sub__TOP__0(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"io_cmd_valid", false,-1);
    tracep->declBit(c+12,"io_cmd_ready", false,-1);
    tracep->declBus(c+13,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+14,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+15,"io_rsp_valid", false,-1);
    tracep->declBit(c+16,"io_rsp_ready", false,-1);
    tracep->declBus(c+17,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->pushNamePrefix("PixelSolver ");
    tracep->declBit(c+11,"io_cmd_valid", false,-1);
    tracep->declBit(c+12,"io_cmd_ready", false,-1);
    tracep->declBus(c+13,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+14,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+15,"io_rsp_valid", false,-1);
    tracep->declBit(c+16,"io_rsp_ready", false,-1);
    tracep->declBus(c+17,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->declBus(c+1,"x", false,-1, 27,0);
    tracep->declBus(c+2,"y", false,-1, 27,0);
    tracep->declBus(c+3,"iteration", false,-1, 3,0);
    tracep->declQuad(c+4,"xx", false,-1, 55,0);
    tracep->declQuad(c+6,"yy", false,-1, 55,0);
    tracep->declQuad(c+8,"xy", false,-1, 55,0);
    tracep->declBit(c+10,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPixelSolver___024root__trace_init_top(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_init_top\n"); );
    // Body
    VPixelSolver___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPixelSolver___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPixelSolver___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPixelSolver___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPixelSolver___024root__trace_register(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPixelSolver___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPixelSolver___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPixelSolver___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPixelSolver___024root__trace_full_sub_0(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPixelSolver___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_full_top_0\n"); );
    // Init
    VPixelSolver___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolver___024root*>(voidSelf);
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPixelSolver___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPixelSolver___024root__trace_full_sub_0(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->PixelSolver__DOT__x),28);
    tracep->fullIData(oldp+2,(vlSelf->PixelSolver__DOT__y),28);
    tracep->fullCData(oldp+3,(vlSelf->PixelSolver__DOT__iteration),4);
    tracep->fullQData(oldp+4,(vlSelf->PixelSolver__DOT__xx),56);
    tracep->fullQData(oldp+6,(vlSelf->PixelSolver__DOT__yy),56);
    tracep->fullQData(oldp+8,((0xffffffffffffffULL 
                               & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y))))),56);
    tracep->fullBit(oldp+10,(vlSelf->PixelSolver__DOT__when_PixelSolver_l46));
    tracep->fullBit(oldp+11,(vlSelf->io_cmd_valid));
    tracep->fullBit(oldp+12,(vlSelf->io_cmd_ready));
    tracep->fullIData(oldp+13,(vlSelf->io_cmd_payload_x),28);
    tracep->fullIData(oldp+14,(vlSelf->io_cmd_payload_y),28);
    tracep->fullBit(oldp+15,(vlSelf->io_rsp_valid));
    tracep->fullBit(oldp+16,(vlSelf->io_rsp_ready));
    tracep->fullCData(oldp+17,(vlSelf->io_rsp_payload_iteration),4);
    tracep->fullBit(oldp+18,(vlSelf->clk));
    tracep->fullBit(oldp+19,(vlSelf->reset));
}
