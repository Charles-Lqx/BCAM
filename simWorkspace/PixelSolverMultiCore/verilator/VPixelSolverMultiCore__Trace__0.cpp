// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPixelSolverMultiCore__Syms.h"


void VPixelSolverMultiCore___024root__trace_chg_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);
void VPixelSolverMultiCore___024root__trace_chg_sub_1(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);

void VPixelSolverMultiCore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_chg_top_0\n"); );
    // Init
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPixelSolverMultiCore___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
    VPixelSolverMultiCore___024root__trace_chg_sub_1((&vlSymsp->TOP), tracep);
}

void VPixelSolverMultiCore___024root__trace_chg_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+1,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+2,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+3,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+4,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+5,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+6,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+7,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rData_iteration),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+8,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_valid));
        tracep->chgCData(oldp+9,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration),4);
        tracep->chgBit(oldp+10,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_valid));
        tracep->chgCData(oldp+11,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration),4);
        tracep->chgBit(oldp+12,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_valid));
        tracep->chgCData(oldp+13,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration),4);
        tracep->chgBit(oldp+14,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_valid));
        tracep->chgCData(oldp+15,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration),4);
        tracep->chgBit(oldp+16,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_valid));
        tracep->chgCData(oldp+17,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration),4);
        tracep->chgBit(oldp+18,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_valid));
        tracep->chgCData(oldp+19,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration),4);
        tracep->chgBit(oldp+20,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_valid));
        tracep->chgCData(oldp+21,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration),4);
        tracep->chgBit(oldp+22,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_valid));
        tracep->chgCData(oldp+23,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration),4);
        tracep->chgBit(oldp+24,(vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid));
        tracep->chgBit(oldp+25,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid));
        tracep->chgBit(oldp+26,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid)))));
        tracep->chgBit(oldp+27,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid));
        tracep->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid)))));
        tracep->chgBit(oldp+29,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid));
        tracep->chgBit(oldp+30,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid)))));
        tracep->chgBit(oldp+31,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid));
        tracep->chgBit(oldp+32,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid)))));
        tracep->chgBit(oldp+33,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid));
        tracep->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid)))));
        tracep->chgBit(oldp+35,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid));
        tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid)))));
        tracep->chgBit(oldp+37,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid));
        tracep->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid)))));
        tracep->chgBit(oldp+39,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid));
        tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid)))));
        tracep->chgBit(oldp+41,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid));
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid)))));
        tracep->chgBit(oldp+43,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid));
        tracep->chgBit(oldp+44,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid)))));
        tracep->chgBit(oldp+45,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid));
        tracep->chgBit(oldp+46,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid)))));
        tracep->chgBit(oldp+47,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid));
        tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid)))));
        tracep->chgBit(oldp+49,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid));
        tracep->chgBit(oldp+50,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid)))));
        tracep->chgBit(oldp+51,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid));
        tracep->chgBit(oldp+52,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid)))));
        tracep->chgBit(oldp+53,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid));
        tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid)))));
        tracep->chgBit(oldp+55,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid));
        tracep->chgBit(oldp+56,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid)))));
        tracep->chgIData(oldp+57,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x),28);
        tracep->chgIData(oldp+58,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y),28);
        tracep->chgQData(oldp+59,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xx),56);
        tracep->chgQData(oldp+61,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__yy),56);
        tracep->chgQData(oldp+63,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y))))),56);
        tracep->chgBit(oldp+65,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+66,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x),28);
        tracep->chgIData(oldp+67,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y),28);
        tracep->chgQData(oldp+68,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xx),56);
        tracep->chgQData(oldp+70,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__yy),56);
        tracep->chgQData(oldp+72,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y))))),56);
        tracep->chgBit(oldp+74,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+75,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x),28);
        tracep->chgIData(oldp+76,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y),28);
        tracep->chgQData(oldp+77,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xx),56);
        tracep->chgQData(oldp+79,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__yy),56);
        tracep->chgQData(oldp+81,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y))))),56);
        tracep->chgBit(oldp+83,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+84,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x),28);
        tracep->chgIData(oldp+85,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y),28);
        tracep->chgQData(oldp+86,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xx),56);
        tracep->chgQData(oldp+88,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__yy),56);
        tracep->chgQData(oldp+90,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y))))),56);
        tracep->chgBit(oldp+92,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+93,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x),28);
        tracep->chgIData(oldp+94,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y),28);
        tracep->chgQData(oldp+95,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xx),56);
        tracep->chgQData(oldp+97,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__yy),56);
        tracep->chgQData(oldp+99,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y))))),56);
        tracep->chgBit(oldp+101,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+102,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x),28);
        tracep->chgIData(oldp+103,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y),28);
        tracep->chgQData(oldp+104,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xx),56);
        tracep->chgQData(oldp+106,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__yy),56);
        tracep->chgQData(oldp+108,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y))))),56);
        tracep->chgBit(oldp+110,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+111,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x),28);
        tracep->chgIData(oldp+112,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y),28);
        tracep->chgQData(oldp+113,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xx),56);
        tracep->chgQData(oldp+115,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__yy),56);
        tracep->chgQData(oldp+117,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y))))),56);
        tracep->chgBit(oldp+119,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46));
        tracep->chgIData(oldp+120,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x),28);
        tracep->chgIData(oldp+121,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y),28);
        tracep->chgQData(oldp+122,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xx),56);
        tracep->chgQData(oldp+124,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__yy),56);
        tracep->chgQData(oldp+126,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y))))),56);
        tracep->chgBit(oldp+128,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46));
        tracep->chgCData(oldp+129,(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2),3);
        tracep->chgBit(oldp+130,((0U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+131,((1U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+132,((2U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+133,((3U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+134,((4U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+135,((5U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+136,((6U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgBit(oldp+137,((7U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
        tracep->chgCData(oldp+138,(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgIData(oldp+139,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_x),28);
        tracep->chgIData(oldp+140,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_y),28);
        tracep->chgIData(oldp+141,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_x),28);
        tracep->chgIData(oldp+142,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_y),28);
        tracep->chgIData(oldp+143,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_x),28);
        tracep->chgIData(oldp+144,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_y),28);
        tracep->chgIData(oldp+145,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_x),28);
        tracep->chgIData(oldp+146,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_y),28);
        tracep->chgIData(oldp+147,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_x),28);
        tracep->chgIData(oldp+148,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_y),28);
        tracep->chgIData(oldp+149,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_x),28);
        tracep->chgIData(oldp+150,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_y),28);
        tracep->chgIData(oldp+151,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_x),28);
        tracep->chgIData(oldp+152,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_y),28);
        tracep->chgIData(oldp+153,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_x),28);
        tracep->chgIData(oldp+154,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_y),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+155,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready));
        tracep->chgBit(oldp+156,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready));
        tracep->chgBit(oldp+157,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready));
        tracep->chgBit(oldp+158,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready));
        tracep->chgBit(oldp+159,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready));
        tracep->chgBit(oldp+160,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready));
        tracep->chgBit(oldp+161,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready));
        tracep->chgBit(oldp+162,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready));
        tracep->chgBit(oldp+163,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready));
        tracep->chgBit(oldp+164,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready));
        tracep->chgBit(oldp+165,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready));
        tracep->chgBit(oldp+166,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready));
        tracep->chgBit(oldp+167,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready));
        tracep->chgBit(oldp+168,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready));
        tracep->chgBit(oldp+169,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready));
        tracep->chgBit(oldp+170,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready));
        tracep->chgBit(oldp+171,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready));
        tracep->chgBit(oldp+172,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_cmd_ready));
        tracep->chgBit(oldp+173,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_cmd_ready));
        tracep->chgBit(oldp+174,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_cmd_ready));
        tracep->chgBit(oldp+175,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_cmd_ready));
        tracep->chgBit(oldp+176,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_cmd_ready));
        tracep->chgBit(oldp+177,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_cmd_ready));
        tracep->chgBit(oldp+178,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_cmd_ready));
        tracep->chgBit(oldp+179,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_cmd_ready));
    }
    tracep->chgBit(oldp+180,(vlSelf->io_cmd_valid));
    tracep->chgBit(oldp+181,(vlSelf->io_cmd_ready));
    tracep->chgIData(oldp+182,(vlSelf->io_cmd_payload_x),28);
    tracep->chgIData(oldp+183,(vlSelf->io_cmd_payload_y),28);
    tracep->chgBit(oldp+184,(vlSelf->io_rsp_valid));
    tracep->chgBit(oldp+185,(vlSelf->io_rsp_ready));
    tracep->chgCData(oldp+186,(vlSelf->io_rsp_payload_iteration),4);
    tracep->chgBit(oldp+187,(vlSelf->clk));
    tracep->chgBit(oldp+188,(vlSelf->reset));
    tracep->chgBit(oldp+189,(((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+190,(((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+191,(((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+192,(((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+193,(((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+194,(((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+195,(((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+196,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                              & (IData)(vlSelf->io_cmd_valid))));
    tracep->chgBit(oldp+197,(((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgBit(oldp+198,(((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgBit(oldp+199,(((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgBit(oldp+200,(((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgBit(oldp+201,(((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgBit(oldp+202,(((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgBit(oldp+203,(((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                              & (IData)(vlSelf->io_rsp_ready))));
}

void VPixelSolverMultiCore___024root__trace_chg_sub_1(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_chg_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 205);
    // Body
    tracep->chgBit(oldp+0,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                            & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgCData(oldp+1,(((4U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                               ? ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                                   ? ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                                       ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rData_iteration)
                                       : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rData_iteration))
                                   : ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                                       ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rData_iteration)
                                       : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rData_iteration)))
                               : ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                                   ? ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                                       ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rData_iteration)
                                       : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rData_iteration))
                                   : ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
                                       ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rData_iteration)
                                       : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rData_iteration))))),4);
    tracep->chgBit(oldp+2,(((IData)(vlSelf->io_cmd_valid) 
                            & (IData)(vlSelf->io_cmd_ready))));
    tracep->chgBit(oldp+3,(((IData)(vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid) 
                            & (IData)(vlSelf->io_rsp_ready))));
}

void VPixelSolverMultiCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_cleanup\n"); );
    // Init
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
