// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPixelSolverPipelined.h for the primary calling header

#ifndef VERILATED_VPIXELSOLVERPIPELINED_PIXELSOLVERPIPELINED_H_
#define VERILATED_VPIXELSOLVERPIPELINED_PIXELSOLVERPIPELINED_H_  // guard

#include "verilated.h"

class VPixelSolverPipelined__Syms;
VL_MODULE(VPixelSolverPipelined_PixelSolverPipelined) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_cmd_valid,0,0);
        VL_OUT8(io_cmd_ready,0,0);
        VL_OUT8(io_rsp_valid,0,0);
        VL_IN8(io_rsp_ready,0,0);
        VL_OUT8(io_rsp_payload_iteration,3,0);
        CData/*0:0*/ __PVT__streamArbiter_1_io_inputs_1_ready;
        CData/*0:0*/ __PVT__streamArbiter_1_io_output_valid;
        CData/*2:0*/ __PVT__streamArbiter_1_io_output_payload_id;
        CData/*0:0*/ __PVT__streamDemux_1_io_input_ready;
        CData/*0:0*/ __PVT__streamDemux_1_io_outputs_0_valid;
        CData/*0:0*/ __PVT__streamDemux_1_io_outputs_1_valid;
        CData/*0:0*/ __PVT__inserter_freeId_willIncrement;
        CData/*2:0*/ __PVT__inserter_freeId_valueNext;
        CData/*2:0*/ __PVT__inserter_freeId_value;
        CData/*0:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_ready;
        CData/*0:0*/ __PVT__streamArbiter_1_io_output_rValid;
        CData/*2:0*/ __PVT__streamArbiter_1_io_output_rData_id;
        CData/*3:0*/ __PVT__streamArbiter_1_io_output_rData_iteration;
        CData/*0:0*/ __PVT__streamArbiter_1_io_output_rData_done;
        CData/*0:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rValid;
        CData/*2:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_id;
        CData/*3:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_iteration;
        CData/*0:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_done;
        CData/*0:0*/ __PVT__mulStage_output_ready;
        CData/*0:0*/ __PVT__mulStage_output_m2sPipe_ready;
        CData/*0:0*/ __PVT__mulStage_output_rValid;
        CData/*2:0*/ __PVT__mulStage_output_rData_id;
        CData/*3:0*/ __PVT__mulStage_output_rData_iteration;
        CData/*0:0*/ __PVT__mulStage_output_rData_done;
        CData/*0:0*/ __PVT__mulStage_output_m2sPipe_rValid;
        CData/*2:0*/ __PVT__mulStage_output_m2sPipe_rData_id;
        CData/*3:0*/ __PVT__mulStage_output_m2sPipe_rData_iteration;
        CData/*0:0*/ __PVT__mulStage_output_m2sPipe_rData_done;
        CData/*0:0*/ __PVT__addStage_output_ready;
        CData/*0:0*/ __PVT__addStage_output_payload_done;
        CData/*0:0*/ __PVT__addStage_output_rValid;
        CData/*2:0*/ __PVT__addStage_output_rData_id;
        CData/*3:0*/ __PVT__addStage_output_rData_iteration;
        CData/*0:0*/ __PVT__addStage_output_rData_done;
        CData/*0:0*/ __PVT__router_wantedId_willIncrement;
        CData/*2:0*/ __PVT__router_wantedId_valueNext;
        CData/*2:0*/ __PVT__router_wantedId_value;
        CData/*0:0*/ rspValid;
        CData/*0:0*/ __PVT__streamArbiter_1__DOT__locked;
        CData/*0:0*/ __PVT__streamArbiter_1__DOT__maskLocked_0;
        CData/*0:0*/ __PVT__streamArbiter_1__DOT__maskLocked_1;
        CData/*0:0*/ __PVT__streamArbiter_1__DOT__maskRouted_0;
        CData/*0:0*/ __PVT__streamArbiter_1__DOT__maskRouted_1;
        CData/*1:0*/ __PVT__streamArbiter_1__DOT___zz_maskProposal_1;
        CData/*3:0*/ __PVT__streamArbiter_1__DOT___zz_io_output_payload_iteration;
        CData/*0:0*/ __PVT__streamArbiter_1__DOT___zz_io_output_payload_done;
        VL_IN(io_cmd_payload_x,27,0);
        VL_IN(io_cmd_payload_y,27,0);
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_payload_x0;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_payload_y0;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_payload_x;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_payload_y;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_rData_x0;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_rData_y0;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_rData_x;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_rData_y;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_x0;
    };
    struct {
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_y0;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_x;
        IData/*27:0*/ __PVT__streamArbiter_1_io_output_s2mPipe_rData_y;
        IData/*27:0*/ __PVT__mulStage_output_rData_x0;
        IData/*27:0*/ __PVT__mulStage_output_rData_y0;
        IData/*27:0*/ __PVT__mulStage_output_rData_xx;
        IData/*27:0*/ __PVT__mulStage_output_rData_yy;
        IData/*27:0*/ __PVT__mulStage_output_rData_xy;
        IData/*27:0*/ __PVT__mulStage_output_m2sPipe_rData_x0;
        IData/*27:0*/ __PVT__mulStage_output_m2sPipe_rData_y0;
        IData/*27:0*/ __PVT__mulStage_output_m2sPipe_rData_xx;
        IData/*27:0*/ __PVT__mulStage_output_m2sPipe_rData_yy;
        IData/*27:0*/ __PVT__mulStage_output_m2sPipe_rData_xy;
        IData/*27:0*/ __PVT__addStage_output_rData_x0;
        IData/*27:0*/ __PVT__addStage_output_rData_y0;
        IData/*27:0*/ __PVT__addStage_output_rData_x;
        IData/*27:0*/ __PVT__addStage_output_rData_y;
    };

    // INTERNAL VARIABLES
    VPixelSolverPipelined__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPixelSolverPipelined_PixelSolverPipelined(const char* name);
    ~VPixelSolverPipelined_PixelSolverPipelined();
    VL_UNCOPYABLE(VPixelSolverPipelined_PixelSolverPipelined);

    // INTERNAL METHODS
    void __Vconfigure(VPixelSolverPipelined__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
