// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPixelSolverMultiCore__Syms.h"


VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_init_sub__TOP__0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+181,"io_cmd_valid", false,-1);
    tracep->declBit(c+182,"io_cmd_ready", false,-1);
    tracep->declBus(c+183,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+185,"io_rsp_valid", false,-1);
    tracep->declBit(c+186,"io_rsp_ready", false,-1);
    tracep->declBus(c+187,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->pushNamePrefix("PixelSolverMultiCore ");
    tracep->declBit(c+181,"io_cmd_valid", false,-1);
    tracep->declBit(c+182,"io_cmd_ready", false,-1);
    tracep->declBus(c+183,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+185,"io_rsp_valid", false,-1);
    tracep->declBit(c+186,"io_rsp_ready", false,-1);
    tracep->declBus(c+187,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBit(c+156,"streamDemux_1_io_outputs_0_ready", false,-1);
    tracep->declBit(c+157,"streamDemux_1_io_outputs_1_ready", false,-1);
    tracep->declBit(c+158,"streamDemux_1_io_outputs_2_ready", false,-1);
    tracep->declBit(c+159,"streamDemux_1_io_outputs_3_ready", false,-1);
    tracep->declBit(c+160,"streamDemux_1_io_outputs_4_ready", false,-1);
    tracep->declBit(c+161,"streamDemux_1_io_outputs_5_ready", false,-1);
    tracep->declBit(c+162,"streamDemux_1_io_outputs_6_ready", false,-1);
    tracep->declBit(c+163,"streamDemux_1_io_outputs_7_ready", false,-1);
    tracep->declBit(c+164,"pixelTaskSolver_0_io_rsp_ready", false,-1);
    tracep->declBit(c+165,"pixelTaskSolver_1_io_rsp_ready", false,-1);
    tracep->declBit(c+166,"pixelTaskSolver_2_io_rsp_ready", false,-1);
    tracep->declBit(c+167,"pixelTaskSolver_3_io_rsp_ready", false,-1);
    tracep->declBit(c+168,"pixelTaskSolver_4_io_rsp_ready", false,-1);
    tracep->declBit(c+169,"pixelTaskSolver_5_io_rsp_ready", false,-1);
    tracep->declBit(c+170,"pixelTaskSolver_6_io_rsp_ready", false,-1);
    tracep->declBit(c+171,"pixelTaskSolver_7_io_rsp_ready", false,-1);
    tracep->declBit(c+172,"streamDemux_1_io_input_ready", false,-1);
    tracep->declBit(c+190,"streamDemux_1_io_outputs_0_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_0_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_0_payload_y", false,-1, 27,0);
    tracep->declBit(c+191,"streamDemux_1_io_outputs_1_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_1_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_1_payload_y", false,-1, 27,0);
    tracep->declBit(c+192,"streamDemux_1_io_outputs_2_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_2_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_2_payload_y", false,-1, 27,0);
    tracep->declBit(c+193,"streamDemux_1_io_outputs_3_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_3_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_3_payload_y", false,-1, 27,0);
    tracep->declBit(c+194,"streamDemux_1_io_outputs_4_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_4_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_4_payload_y", false,-1, 27,0);
    tracep->declBit(c+195,"streamDemux_1_io_outputs_5_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_5_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_5_payload_y", false,-1, 27,0);
    tracep->declBit(c+196,"streamDemux_1_io_outputs_6_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_6_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_6_payload_y", false,-1, 27,0);
    tracep->declBit(c+197,"streamDemux_1_io_outputs_7_valid", false,-1);
    tracep->declBus(c+183,"streamDemux_1_io_outputs_7_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"streamDemux_1_io_outputs_7_payload_y", false,-1, 27,0);
    tracep->declBit(c+173,"pixelTaskSolver_0_io_cmd_ready", false,-1);
    tracep->declBit(c+9,"pixelTaskSolver_0_io_rsp_valid", false,-1);
    tracep->declBus(c+10,"pixelTaskSolver_0_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+174,"pixelTaskSolver_1_io_cmd_ready", false,-1);
    tracep->declBit(c+11,"pixelTaskSolver_1_io_rsp_valid", false,-1);
    tracep->declBus(c+12,"pixelTaskSolver_1_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+175,"pixelTaskSolver_2_io_cmd_ready", false,-1);
    tracep->declBit(c+13,"pixelTaskSolver_2_io_rsp_valid", false,-1);
    tracep->declBus(c+14,"pixelTaskSolver_2_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+176,"pixelTaskSolver_3_io_cmd_ready", false,-1);
    tracep->declBit(c+15,"pixelTaskSolver_3_io_rsp_valid", false,-1);
    tracep->declBus(c+16,"pixelTaskSolver_3_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+177,"pixelTaskSolver_4_io_cmd_ready", false,-1);
    tracep->declBit(c+17,"pixelTaskSolver_4_io_rsp_valid", false,-1);
    tracep->declBus(c+18,"pixelTaskSolver_4_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+178,"pixelTaskSolver_5_io_cmd_ready", false,-1);
    tracep->declBit(c+19,"pixelTaskSolver_5_io_rsp_valid", false,-1);
    tracep->declBus(c+20,"pixelTaskSolver_5_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+179,"pixelTaskSolver_6_io_cmd_ready", false,-1);
    tracep->declBit(c+21,"pixelTaskSolver_6_io_rsp_valid", false,-1);
    tracep->declBus(c+22,"pixelTaskSolver_6_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+180,"pixelTaskSolver_7_io_cmd_ready", false,-1);
    tracep->declBit(c+23,"pixelTaskSolver_7_io_rsp_valid", false,-1);
    tracep->declBus(c+24,"pixelTaskSolver_7_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+198,"streamMux_1_io_inputs_0_ready", false,-1);
    tracep->declBit(c+199,"streamMux_1_io_inputs_1_ready", false,-1);
    tracep->declBit(c+200,"streamMux_1_io_inputs_2_ready", false,-1);
    tracep->declBit(c+201,"streamMux_1_io_inputs_3_ready", false,-1);
    tracep->declBit(c+202,"streamMux_1_io_inputs_4_ready", false,-1);
    tracep->declBit(c+203,"streamMux_1_io_inputs_5_ready", false,-1);
    tracep->declBit(c+204,"streamMux_1_io_inputs_6_ready", false,-1);
    tracep->declBit(c+205,"streamMux_1_io_inputs_7_ready", false,-1);
    tracep->declBit(c+25,"streamMux_1_io_output_valid", false,-1);
    tracep->declBus(c+206,"streamMux_1_io_output_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+207,"io_cmd_fire", false,-1);
    tracep->declBit(c+26,"pixelResults_0_valid", false,-1);
    tracep->declBit(c+198,"pixelResults_0_ready", false,-1);
    tracep->declBus(c+1,"pixelResults_0_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+26,"pixelTaskSolver_0_io_rsp_rValid", false,-1);
    tracep->declBus(c+1,"pixelTaskSolver_0_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+27,"when_Stream_l368", false,-1);
    tracep->declBit(c+28,"pixelResults_1_valid", false,-1);
    tracep->declBit(c+199,"pixelResults_1_ready", false,-1);
    tracep->declBus(c+2,"pixelResults_1_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+28,"pixelTaskSolver_1_io_rsp_rValid", false,-1);
    tracep->declBus(c+2,"pixelTaskSolver_1_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+29,"when_Stream_l368_1", false,-1);
    tracep->declBit(c+30,"pixelResults_2_valid", false,-1);
    tracep->declBit(c+200,"pixelResults_2_ready", false,-1);
    tracep->declBus(c+3,"pixelResults_2_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+30,"pixelTaskSolver_2_io_rsp_rValid", false,-1);
    tracep->declBus(c+3,"pixelTaskSolver_2_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+31,"when_Stream_l368_2", false,-1);
    tracep->declBit(c+32,"pixelResults_3_valid", false,-1);
    tracep->declBit(c+201,"pixelResults_3_ready", false,-1);
    tracep->declBus(c+4,"pixelResults_3_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+32,"pixelTaskSolver_3_io_rsp_rValid", false,-1);
    tracep->declBus(c+4,"pixelTaskSolver_3_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+33,"when_Stream_l368_3", false,-1);
    tracep->declBit(c+34,"pixelResults_4_valid", false,-1);
    tracep->declBit(c+202,"pixelResults_4_ready", false,-1);
    tracep->declBus(c+5,"pixelResults_4_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+34,"pixelTaskSolver_4_io_rsp_rValid", false,-1);
    tracep->declBus(c+5,"pixelTaskSolver_4_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+35,"when_Stream_l368_4", false,-1);
    tracep->declBit(c+36,"pixelResults_5_valid", false,-1);
    tracep->declBit(c+203,"pixelResults_5_ready", false,-1);
    tracep->declBus(c+6,"pixelResults_5_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+36,"pixelTaskSolver_5_io_rsp_rValid", false,-1);
    tracep->declBus(c+6,"pixelTaskSolver_5_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+37,"when_Stream_l368_5", false,-1);
    tracep->declBit(c+38,"pixelResults_6_valid", false,-1);
    tracep->declBit(c+204,"pixelResults_6_ready", false,-1);
    tracep->declBus(c+7,"pixelResults_6_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+38,"pixelTaskSolver_6_io_rsp_rValid", false,-1);
    tracep->declBus(c+7,"pixelTaskSolver_6_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+39,"when_Stream_l368_6", false,-1);
    tracep->declBit(c+40,"pixelResults_7_valid", false,-1);
    tracep->declBit(c+205,"pixelResults_7_ready", false,-1);
    tracep->declBus(c+8,"pixelResults_7_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+40,"pixelTaskSolver_7_io_rsp_rValid", false,-1);
    tracep->declBus(c+8,"pixelTaskSolver_7_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+41,"when_Stream_l368_7", false,-1);
    tracep->declBit(c+208,"streamMux_1_io_output_fire", false,-1);
    tracep->declBit(c+42,"streamDemux_1_io_outputs_0_m2sPipe_valid", false,-1);
    tracep->declBit(c+173,"streamDemux_1_io_outputs_0_m2sPipe_ready", false,-1);
    tracep->declBus(c+140,"streamDemux_1_io_outputs_0_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+141,"streamDemux_1_io_outputs_0_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+42,"streamDemux_1_io_outputs_0_rValid", false,-1);
    tracep->declBus(c+140,"streamDemux_1_io_outputs_0_rData_x", false,-1, 27,0);
    tracep->declBus(c+141,"streamDemux_1_io_outputs_0_rData_y", false,-1, 27,0);
    tracep->declBit(c+43,"when_Stream_l368_8", false,-1);
    tracep->declBit(c+44,"streamDemux_1_io_outputs_1_m2sPipe_valid", false,-1);
    tracep->declBit(c+174,"streamDemux_1_io_outputs_1_m2sPipe_ready", false,-1);
    tracep->declBus(c+142,"streamDemux_1_io_outputs_1_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+143,"streamDemux_1_io_outputs_1_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+44,"streamDemux_1_io_outputs_1_rValid", false,-1);
    tracep->declBus(c+142,"streamDemux_1_io_outputs_1_rData_x", false,-1, 27,0);
    tracep->declBus(c+143,"streamDemux_1_io_outputs_1_rData_y", false,-1, 27,0);
    tracep->declBit(c+45,"when_Stream_l368_9", false,-1);
    tracep->declBit(c+46,"streamDemux_1_io_outputs_2_m2sPipe_valid", false,-1);
    tracep->declBit(c+175,"streamDemux_1_io_outputs_2_m2sPipe_ready", false,-1);
    tracep->declBus(c+144,"streamDemux_1_io_outputs_2_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+145,"streamDemux_1_io_outputs_2_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+46,"streamDemux_1_io_outputs_2_rValid", false,-1);
    tracep->declBus(c+144,"streamDemux_1_io_outputs_2_rData_x", false,-1, 27,0);
    tracep->declBus(c+145,"streamDemux_1_io_outputs_2_rData_y", false,-1, 27,0);
    tracep->declBit(c+47,"when_Stream_l368_10", false,-1);
    tracep->declBit(c+48,"streamDemux_1_io_outputs_3_m2sPipe_valid", false,-1);
    tracep->declBit(c+176,"streamDemux_1_io_outputs_3_m2sPipe_ready", false,-1);
    tracep->declBus(c+146,"streamDemux_1_io_outputs_3_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+147,"streamDemux_1_io_outputs_3_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+48,"streamDemux_1_io_outputs_3_rValid", false,-1);
    tracep->declBus(c+146,"streamDemux_1_io_outputs_3_rData_x", false,-1, 27,0);
    tracep->declBus(c+147,"streamDemux_1_io_outputs_3_rData_y", false,-1, 27,0);
    tracep->declBit(c+49,"when_Stream_l368_11", false,-1);
    tracep->declBit(c+50,"streamDemux_1_io_outputs_4_m2sPipe_valid", false,-1);
    tracep->declBit(c+177,"streamDemux_1_io_outputs_4_m2sPipe_ready", false,-1);
    tracep->declBus(c+148,"streamDemux_1_io_outputs_4_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+149,"streamDemux_1_io_outputs_4_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+50,"streamDemux_1_io_outputs_4_rValid", false,-1);
    tracep->declBus(c+148,"streamDemux_1_io_outputs_4_rData_x", false,-1, 27,0);
    tracep->declBus(c+149,"streamDemux_1_io_outputs_4_rData_y", false,-1, 27,0);
    tracep->declBit(c+51,"when_Stream_l368_12", false,-1);
    tracep->declBit(c+52,"streamDemux_1_io_outputs_5_m2sPipe_valid", false,-1);
    tracep->declBit(c+178,"streamDemux_1_io_outputs_5_m2sPipe_ready", false,-1);
    tracep->declBus(c+150,"streamDemux_1_io_outputs_5_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+151,"streamDemux_1_io_outputs_5_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+52,"streamDemux_1_io_outputs_5_rValid", false,-1);
    tracep->declBus(c+150,"streamDemux_1_io_outputs_5_rData_x", false,-1, 27,0);
    tracep->declBus(c+151,"streamDemux_1_io_outputs_5_rData_y", false,-1, 27,0);
    tracep->declBit(c+53,"when_Stream_l368_13", false,-1);
    tracep->declBit(c+54,"streamDemux_1_io_outputs_6_m2sPipe_valid", false,-1);
    tracep->declBit(c+179,"streamDemux_1_io_outputs_6_m2sPipe_ready", false,-1);
    tracep->declBus(c+152,"streamDemux_1_io_outputs_6_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+153,"streamDemux_1_io_outputs_6_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+54,"streamDemux_1_io_outputs_6_rValid", false,-1);
    tracep->declBus(c+152,"streamDemux_1_io_outputs_6_rData_x", false,-1, 27,0);
    tracep->declBus(c+153,"streamDemux_1_io_outputs_6_rData_y", false,-1, 27,0);
    tracep->declBit(c+55,"when_Stream_l368_14", false,-1);
    tracep->declBit(c+56,"streamDemux_1_io_outputs_7_m2sPipe_valid", false,-1);
    tracep->declBit(c+180,"streamDemux_1_io_outputs_7_m2sPipe_ready", false,-1);
    tracep->declBus(c+154,"streamDemux_1_io_outputs_7_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+155,"streamDemux_1_io_outputs_7_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+56,"streamDemux_1_io_outputs_7_rValid", false,-1);
    tracep->declBus(c+154,"streamDemux_1_io_outputs_7_rData_x", false,-1, 27,0);
    tracep->declBus(c+155,"streamDemux_1_io_outputs_7_rData_y", false,-1, 27,0);
    tracep->declBit(c+57,"when_Stream_l368_15", false,-1);
    tracep->pushNamePrefix("pixelTaskSolver_0 ");
    tracep->declBit(c+42,"io_cmd_valid", false,-1);
    tracep->declBit(c+173,"io_cmd_ready", false,-1);
    tracep->declBus(c+140,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+141,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+9,"io_rsp_valid", false,-1);
    tracep->declBit(c+164,"io_rsp_ready", false,-1);
    tracep->declBus(c+10,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+58,"x", false,-1, 27,0);
    tracep->declBus(c+59,"y", false,-1, 27,0);
    tracep->declBus(c+10,"iteration", false,-1, 3,0);
    tracep->declQuad(c+60,"xx", false,-1, 55,0);
    tracep->declQuad(c+62,"yy", false,-1, 55,0);
    tracep->declQuad(c+64,"xy", false,-1, 55,0);
    tracep->declBit(c+66,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_1 ");
    tracep->declBit(c+44,"io_cmd_valid", false,-1);
    tracep->declBit(c+174,"io_cmd_ready", false,-1);
    tracep->declBus(c+142,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+143,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+11,"io_rsp_valid", false,-1);
    tracep->declBit(c+165,"io_rsp_ready", false,-1);
    tracep->declBus(c+12,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+67,"x", false,-1, 27,0);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_init_sub__TOP__1(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_init_sub__TOP__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,"y", false,-1, 27,0);
    tracep->declBus(c+12,"iteration", false,-1, 3,0);
    tracep->declQuad(c+69,"xx", false,-1, 55,0);
    tracep->declQuad(c+71,"yy", false,-1, 55,0);
    tracep->declQuad(c+73,"xy", false,-1, 55,0);
    tracep->declBit(c+75,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_2 ");
    tracep->declBit(c+46,"io_cmd_valid", false,-1);
    tracep->declBit(c+175,"io_cmd_ready", false,-1);
    tracep->declBus(c+144,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+145,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+13,"io_rsp_valid", false,-1);
    tracep->declBit(c+166,"io_rsp_ready", false,-1);
    tracep->declBus(c+14,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+76,"x", false,-1, 27,0);
    tracep->declBus(c+77,"y", false,-1, 27,0);
    tracep->declBus(c+14,"iteration", false,-1, 3,0);
    tracep->declQuad(c+78,"xx", false,-1, 55,0);
    tracep->declQuad(c+80,"yy", false,-1, 55,0);
    tracep->declQuad(c+82,"xy", false,-1, 55,0);
    tracep->declBit(c+84,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_3 ");
    tracep->declBit(c+48,"io_cmd_valid", false,-1);
    tracep->declBit(c+176,"io_cmd_ready", false,-1);
    tracep->declBus(c+146,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+147,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+15,"io_rsp_valid", false,-1);
    tracep->declBit(c+167,"io_rsp_ready", false,-1);
    tracep->declBus(c+16,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+85,"x", false,-1, 27,0);
    tracep->declBus(c+86,"y", false,-1, 27,0);
    tracep->declBus(c+16,"iteration", false,-1, 3,0);
    tracep->declQuad(c+87,"xx", false,-1, 55,0);
    tracep->declQuad(c+89,"yy", false,-1, 55,0);
    tracep->declQuad(c+91,"xy", false,-1, 55,0);
    tracep->declBit(c+93,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_4 ");
    tracep->declBit(c+50,"io_cmd_valid", false,-1);
    tracep->declBit(c+177,"io_cmd_ready", false,-1);
    tracep->declBus(c+148,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+149,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+17,"io_rsp_valid", false,-1);
    tracep->declBit(c+168,"io_rsp_ready", false,-1);
    tracep->declBus(c+18,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+94,"x", false,-1, 27,0);
    tracep->declBus(c+95,"y", false,-1, 27,0);
    tracep->declBus(c+18,"iteration", false,-1, 3,0);
    tracep->declQuad(c+96,"xx", false,-1, 55,0);
    tracep->declQuad(c+98,"yy", false,-1, 55,0);
    tracep->declQuad(c+100,"xy", false,-1, 55,0);
    tracep->declBit(c+102,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_5 ");
    tracep->declBit(c+52,"io_cmd_valid", false,-1);
    tracep->declBit(c+178,"io_cmd_ready", false,-1);
    tracep->declBus(c+150,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+151,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+19,"io_rsp_valid", false,-1);
    tracep->declBit(c+169,"io_rsp_ready", false,-1);
    tracep->declBus(c+20,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+103,"x", false,-1, 27,0);
    tracep->declBus(c+104,"y", false,-1, 27,0);
    tracep->declBus(c+20,"iteration", false,-1, 3,0);
    tracep->declQuad(c+105,"xx", false,-1, 55,0);
    tracep->declQuad(c+107,"yy", false,-1, 55,0);
    tracep->declQuad(c+109,"xy", false,-1, 55,0);
    tracep->declBit(c+111,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_6 ");
    tracep->declBit(c+54,"io_cmd_valid", false,-1);
    tracep->declBit(c+179,"io_cmd_ready", false,-1);
    tracep->declBus(c+152,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+153,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+21,"io_rsp_valid", false,-1);
    tracep->declBit(c+170,"io_rsp_ready", false,-1);
    tracep->declBus(c+22,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+112,"x", false,-1, 27,0);
    tracep->declBus(c+113,"y", false,-1, 27,0);
    tracep->declBus(c+22,"iteration", false,-1, 3,0);
    tracep->declQuad(c+114,"xx", false,-1, 55,0);
    tracep->declQuad(c+116,"yy", false,-1, 55,0);
    tracep->declQuad(c+118,"xy", false,-1, 55,0);
    tracep->declBit(c+120,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelTaskSolver_7 ");
    tracep->declBit(c+56,"io_cmd_valid", false,-1);
    tracep->declBit(c+180,"io_cmd_ready", false,-1);
    tracep->declBus(c+154,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+155,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+23,"io_rsp_valid", false,-1);
    tracep->declBit(c+171,"io_rsp_ready", false,-1);
    tracep->declBus(c+24,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+188,"clk", false,-1);
    tracep->declBit(c+189,"reset", false,-1);
    tracep->declBus(c+121,"x", false,-1, 27,0);
    tracep->declBus(c+122,"y", false,-1, 27,0);
    tracep->declBus(c+24,"iteration", false,-1, 3,0);
    tracep->declQuad(c+123,"xx", false,-1, 55,0);
    tracep->declQuad(c+125,"yy", false,-1, 55,0);
    tracep->declQuad(c+127,"xy", false,-1, 55,0);
    tracep->declBit(c+129,"when_PixelSolver_l46", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("streamDemux_1 ");
    tracep->declBus(c+130,"io_select", false,-1, 2,0);
    tracep->declBit(c+181,"io_input_valid", false,-1);
    tracep->declBit(c+172,"io_input_ready", false,-1);
    tracep->declBus(c+183,"io_input_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_input_payload_y", false,-1, 27,0);
    tracep->declBit(c+190,"io_outputs_0_valid", false,-1);
    tracep->declBit(c+156,"io_outputs_0_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_0_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_0_payload_y", false,-1, 27,0);
    tracep->declBit(c+191,"io_outputs_1_valid", false,-1);
    tracep->declBit(c+157,"io_outputs_1_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_1_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_1_payload_y", false,-1, 27,0);
    tracep->declBit(c+192,"io_outputs_2_valid", false,-1);
    tracep->declBit(c+158,"io_outputs_2_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_2_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_2_payload_y", false,-1, 27,0);
    tracep->declBit(c+193,"io_outputs_3_valid", false,-1);
    tracep->declBit(c+159,"io_outputs_3_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_3_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_3_payload_y", false,-1, 27,0);
    tracep->declBit(c+194,"io_outputs_4_valid", false,-1);
    tracep->declBit(c+160,"io_outputs_4_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_4_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_4_payload_y", false,-1, 27,0);
    tracep->declBit(c+195,"io_outputs_5_valid", false,-1);
    tracep->declBit(c+161,"io_outputs_5_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_5_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_5_payload_y", false,-1, 27,0);
    tracep->declBit(c+196,"io_outputs_6_valid", false,-1);
    tracep->declBit(c+162,"io_outputs_6_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_6_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_6_payload_y", false,-1, 27,0);
    tracep->declBit(c+197,"io_outputs_7_valid", false,-1);
    tracep->declBit(c+163,"io_outputs_7_ready", false,-1);
    tracep->declBus(c+183,"io_outputs_7_payload_x", false,-1, 27,0);
    tracep->declBus(c+184,"io_outputs_7_payload_y", false,-1, 27,0);
    tracep->declBit(c+131,"when_Stream_l827", false,-1);
    tracep->declBit(c+132,"when_Stream_l827_1", false,-1);
    tracep->declBit(c+133,"when_Stream_l827_2", false,-1);
    tracep->declBit(c+134,"when_Stream_l827_3", false,-1);
    tracep->declBit(c+135,"when_Stream_l827_4", false,-1);
    tracep->declBit(c+136,"when_Stream_l827_5", false,-1);
    tracep->declBit(c+137,"when_Stream_l827_6", false,-1);
    tracep->declBit(c+138,"when_Stream_l827_7", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("streamMux_1 ");
    tracep->declBus(c+139,"io_select", false,-1, 2,0);
    tracep->declBit(c+26,"io_inputs_0_valid", false,-1);
    tracep->declBit(c+198,"io_inputs_0_ready", false,-1);
    tracep->declBus(c+1,"io_inputs_0_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+28,"io_inputs_1_valid", false,-1);
    tracep->declBit(c+199,"io_inputs_1_ready", false,-1);
    tracep->declBus(c+2,"io_inputs_1_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+30,"io_inputs_2_valid", false,-1);
    tracep->declBit(c+200,"io_inputs_2_ready", false,-1);
    tracep->declBus(c+3,"io_inputs_2_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+32,"io_inputs_3_valid", false,-1);
    tracep->declBit(c+201,"io_inputs_3_ready", false,-1);
    tracep->declBus(c+4,"io_inputs_3_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+34,"io_inputs_4_valid", false,-1);
    tracep->declBit(c+202,"io_inputs_4_ready", false,-1);
    tracep->declBus(c+5,"io_inputs_4_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+36,"io_inputs_5_valid", false,-1);
    tracep->declBit(c+203,"io_inputs_5_ready", false,-1);
    tracep->declBus(c+6,"io_inputs_5_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+38,"io_inputs_6_valid", false,-1);
    tracep->declBit(c+204,"io_inputs_6_ready", false,-1);
    tracep->declBus(c+7,"io_inputs_6_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+40,"io_inputs_7_valid", false,-1);
    tracep->declBit(c+205,"io_inputs_7_ready", false,-1);
    tracep->declBus(c+8,"io_inputs_7_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+25,"io_output_valid", false,-1);
    tracep->declBit(c+186,"io_output_ready", false,-1);
    tracep->declBus(c+206,"io_output_payload_iteration", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_init_top(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_init_top\n"); );
    // Body
    VPixelSolverMultiCore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    VPixelSolverMultiCore___024root__trace_init_sub__TOP__1(vlSelf, tracep);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPixelSolverMultiCore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPixelSolverMultiCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_register(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPixelSolverMultiCore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPixelSolverMultiCore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPixelSolverMultiCore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_sub_1(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_full_top_0\n"); );
    // Init
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPixelSolverMultiCore___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
    VPixelSolverMultiCore___024root__trace_full_sub_1((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+2,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+3,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+4,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+5,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+6,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+7,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+8,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rData_iteration),4);
    tracep->fullBit(oldp+9,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_valid));
    tracep->fullCData(oldp+10,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration),4);
    tracep->fullBit(oldp+11,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_valid));
    tracep->fullCData(oldp+12,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration),4);
    tracep->fullBit(oldp+13,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_valid));
    tracep->fullCData(oldp+14,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration),4);
    tracep->fullBit(oldp+15,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_valid));
    tracep->fullCData(oldp+16,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration),4);
    tracep->fullBit(oldp+17,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_valid));
    tracep->fullCData(oldp+18,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration),4);
    tracep->fullBit(oldp+19,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_valid));
    tracep->fullCData(oldp+20,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration),4);
    tracep->fullBit(oldp+21,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_valid));
    tracep->fullCData(oldp+22,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration),4);
    tracep->fullBit(oldp+23,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_valid));
    tracep->fullCData(oldp+24,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration),4);
    tracep->fullBit(oldp+25,(vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid));
    tracep->fullBit(oldp+26,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid));
    tracep->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid)))));
    tracep->fullBit(oldp+28,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid));
    tracep->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid)))));
    tracep->fullBit(oldp+30,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid));
    tracep->fullBit(oldp+31,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid)))));
    tracep->fullBit(oldp+32,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid));
    tracep->fullBit(oldp+33,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid)))));
    tracep->fullBit(oldp+34,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid));
    tracep->fullBit(oldp+35,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid)))));
    tracep->fullBit(oldp+36,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid));
    tracep->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid)))));
    tracep->fullBit(oldp+38,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid));
    tracep->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid)))));
    tracep->fullBit(oldp+40,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid));
    tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid)))));
    tracep->fullBit(oldp+42,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid));
    tracep->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid)))));
    tracep->fullBit(oldp+44,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid));
    tracep->fullBit(oldp+45,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid)))));
    tracep->fullBit(oldp+46,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid));
    tracep->fullBit(oldp+47,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid)))));
    tracep->fullBit(oldp+48,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid));
    tracep->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid)))));
    tracep->fullBit(oldp+50,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid));
    tracep->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid)))));
    tracep->fullBit(oldp+52,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid));
    tracep->fullBit(oldp+53,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid)))));
    tracep->fullBit(oldp+54,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid));
    tracep->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid)))));
    tracep->fullBit(oldp+56,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid));
    tracep->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid)))));
    tracep->fullIData(oldp+58,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x),28);
    tracep->fullIData(oldp+59,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y),28);
    tracep->fullQData(oldp+60,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xx),56);
    tracep->fullQData(oldp+62,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__yy),56);
    tracep->fullQData(oldp+64,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y))))),56);
    tracep->fullBit(oldp+66,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+67,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x),28);
    tracep->fullIData(oldp+68,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y),28);
    tracep->fullQData(oldp+69,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xx),56);
    tracep->fullQData(oldp+71,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__yy),56);
    tracep->fullQData(oldp+73,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y))))),56);
    tracep->fullBit(oldp+75,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+76,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x),28);
    tracep->fullIData(oldp+77,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y),28);
    tracep->fullQData(oldp+78,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xx),56);
    tracep->fullQData(oldp+80,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__yy),56);
    tracep->fullQData(oldp+82,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y))))),56);
    tracep->fullBit(oldp+84,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+85,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x),28);
    tracep->fullIData(oldp+86,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y),28);
    tracep->fullQData(oldp+87,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xx),56);
    tracep->fullQData(oldp+89,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__yy),56);
    tracep->fullQData(oldp+91,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y))))),56);
    tracep->fullBit(oldp+93,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+94,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x),28);
    tracep->fullIData(oldp+95,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y),28);
    tracep->fullQData(oldp+96,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xx),56);
    tracep->fullQData(oldp+98,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__yy),56);
    tracep->fullQData(oldp+100,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y))))),56);
    tracep->fullBit(oldp+102,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+103,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x),28);
    tracep->fullIData(oldp+104,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y),28);
    tracep->fullQData(oldp+105,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xx),56);
    tracep->fullQData(oldp+107,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__yy),56);
    tracep->fullQData(oldp+109,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y))))),56);
    tracep->fullBit(oldp+111,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+112,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x),28);
    tracep->fullIData(oldp+113,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y),28);
    tracep->fullQData(oldp+114,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xx),56);
    tracep->fullQData(oldp+116,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__yy),56);
    tracep->fullQData(oldp+118,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y))))),56);
    tracep->fullBit(oldp+120,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46));
    tracep->fullIData(oldp+121,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x),28);
    tracep->fullIData(oldp+122,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y),28);
    tracep->fullQData(oldp+123,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xx),56);
    tracep->fullQData(oldp+125,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__yy),56);
    tracep->fullQData(oldp+127,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y))))),56);
    tracep->fullBit(oldp+129,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46));
    tracep->fullCData(oldp+130,(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2),3);
    tracep->fullBit(oldp+131,((0U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+132,((1U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+133,((2U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+134,((3U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+135,((4U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+136,((5U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+137,((6U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullBit(oldp+138,((7U != (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))));
    tracep->fullCData(oldp+139,(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5),3);
    tracep->fullIData(oldp+140,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_x),28);
    tracep->fullIData(oldp+141,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_y),28);
    tracep->fullIData(oldp+142,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_x),28);
    tracep->fullIData(oldp+143,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_y),28);
    tracep->fullIData(oldp+144,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_x),28);
    tracep->fullIData(oldp+145,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_y),28);
    tracep->fullIData(oldp+146,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_x),28);
    tracep->fullIData(oldp+147,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_y),28);
    tracep->fullIData(oldp+148,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_x),28);
    tracep->fullIData(oldp+149,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_y),28);
    tracep->fullIData(oldp+150,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_x),28);
    tracep->fullIData(oldp+151,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_y),28);
    tracep->fullIData(oldp+152,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_x),28);
    tracep->fullIData(oldp+153,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_y),28);
    tracep->fullIData(oldp+154,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_x),28);
    tracep->fullIData(oldp+155,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_y),28);
    tracep->fullBit(oldp+156,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready));
    tracep->fullBit(oldp+157,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready));
    tracep->fullBit(oldp+158,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready));
    tracep->fullBit(oldp+159,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready));
    tracep->fullBit(oldp+160,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready));
    tracep->fullBit(oldp+161,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready));
    tracep->fullBit(oldp+162,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready));
    tracep->fullBit(oldp+163,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready));
    tracep->fullBit(oldp+164,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready));
    tracep->fullBit(oldp+165,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready));
    tracep->fullBit(oldp+166,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready));
    tracep->fullBit(oldp+167,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready));
    tracep->fullBit(oldp+168,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready));
    tracep->fullBit(oldp+169,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready));
    tracep->fullBit(oldp+170,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready));
    tracep->fullBit(oldp+171,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready));
    tracep->fullBit(oldp+172,(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready));
    tracep->fullBit(oldp+173,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_cmd_ready));
    tracep->fullBit(oldp+174,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_cmd_ready));
    tracep->fullBit(oldp+175,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_cmd_ready));
    tracep->fullBit(oldp+176,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_cmd_ready));
    tracep->fullBit(oldp+177,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_cmd_ready));
    tracep->fullBit(oldp+178,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_cmd_ready));
    tracep->fullBit(oldp+179,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_cmd_ready));
    tracep->fullBit(oldp+180,(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_cmd_ready));
    tracep->fullBit(oldp+181,(vlSelf->io_cmd_valid));
    tracep->fullBit(oldp+182,(vlSelf->io_cmd_ready));
    tracep->fullIData(oldp+183,(vlSelf->io_cmd_payload_x),28);
    tracep->fullIData(oldp+184,(vlSelf->io_cmd_payload_y),28);
    tracep->fullBit(oldp+185,(vlSelf->io_rsp_valid));
    tracep->fullBit(oldp+186,(vlSelf->io_rsp_ready));
    tracep->fullCData(oldp+187,(vlSelf->io_rsp_payload_iteration),4);
    tracep->fullBit(oldp+188,(vlSelf->clk));
    tracep->fullBit(oldp+189,(vlSelf->reset));
    tracep->fullBit(oldp+190,(((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+191,(((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+192,(((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+193,(((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+194,(((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+195,(((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+196,(((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+197,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
                               & (IData)(vlSelf->io_cmd_valid))));
    tracep->fullBit(oldp+198,(((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+199,(((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+200,(((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+201,(((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+202,(((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+203,(((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+204,(((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullBit(oldp+205,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullCData(oldp+206,(((4U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))
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
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_sub_1(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_full_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+207,(((IData)(vlSelf->io_cmd_valid) 
                               & (IData)(vlSelf->io_cmd_ready))));
    tracep->fullBit(oldp+208,(((IData)(vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid) 
                               & (IData)(vlSelf->io_rsp_ready))));
}
