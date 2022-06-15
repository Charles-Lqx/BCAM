// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPixelSolverPipelined.h for the primary calling header

#ifndef VERILATED_VPIXELSOLVERPIPELINED___024ROOT_H_
#define VERILATED_VPIXELSOLVERPIPELINED___024ROOT_H_  // guard

#include "verilated.h"

class VPixelSolverPipelined__Syms;
VL_MODULE(VPixelSolverPipelined___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmd_valid,0,0);
    VL_OUT8(io_cmd_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    VL_OUT8(io_rsp_payload_iteration,3,0);
    CData/*0:0*/ PixelSolverPipelined__DOT__inserter_loopback_valid;
    CData/*0:0*/ PixelSolverPipelined__DOT__inserter_freeId_willIncrement;
    CData/*2:0*/ PixelSolverPipelined__DOT__inserter_freeId_valueNext;
    CData/*2:0*/ PixelSolverPipelined__DOT__inserter_freeId_value;
    CData/*0:0*/ PixelSolverPipelined__DOT__mulStage_input_valid;
    CData/*2:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_id;
    CData/*3:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_iteration;
    CData/*0:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_done;
    CData/*0:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_valid;
    CData/*2:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_id;
    CData/*3:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_iteration;
    CData/*0:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_done;
    CData/*0:0*/ PixelSolverPipelined__DOT__addStage_input_valid;
    CData/*2:0*/ PixelSolverPipelined__DOT__addStage_input_payload_id;
    CData/*3:0*/ PixelSolverPipelined__DOT__addStage_input_payload_iteration;
    CData/*0:0*/ PixelSolverPipelined__DOT__addStage_input_payload_done;
    CData/*0:0*/ PixelSolverPipelined__DOT__addStage_output_payload_done;
    CData/*0:0*/ PixelSolverPipelined__DOT__router_input_valid;
    CData/*2:0*/ PixelSolverPipelined__DOT__router_input_payload_id;
    CData/*3:0*/ PixelSolverPipelined__DOT__router_input_payload_iteration;
    CData/*0:0*/ PixelSolverPipelined__DOT__router_input_payload_done;
    CData/*0:0*/ PixelSolverPipelined__DOT__router_wantedId_willIncrement;
    CData/*2:0*/ PixelSolverPipelined__DOT__router_wantedId_valueNext;
    CData/*2:0*/ PixelSolverPipelined__DOT__router_wantedId_value;
    CData/*2:0*/ __Vdly__PixelSolverPipelined__DOT__addStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverPipelined__DOT__mulStage_output_regNext_payload_iteration;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_cmd_payload_x,27,0);
    VL_IN(io_cmd_payload_y,27,0);
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_x0;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_y0;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_x;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_input_payload_y;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_x0;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_y0;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_xx;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_yy;
    IData/*27:0*/ PixelSolverPipelined__DOT__mulStage_output_regNext_payload_xy;
    IData/*27:0*/ PixelSolverPipelined__DOT__addStage_input_payload_x0;
    IData/*27:0*/ PixelSolverPipelined__DOT__addStage_input_payload_y0;
    IData/*27:0*/ PixelSolverPipelined__DOT__addStage_input_payload_xx;
    IData/*27:0*/ PixelSolverPipelined__DOT__addStage_input_payload_yy;
    IData/*27:0*/ PixelSolverPipelined__DOT__addStage_input_payload_xy;
    IData/*27:0*/ PixelSolverPipelined__DOT__router_input_payload_x0;
    IData/*27:0*/ PixelSolverPipelined__DOT__router_input_payload_y0;
    IData/*27:0*/ PixelSolverPipelined__DOT__router_input_payload_x;
    IData/*27:0*/ PixelSolverPipelined__DOT__router_input_payload_y;
    IData/*27:0*/ __Vdly__PixelSolverPipelined__DOT__router_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverPipelined__DOT__mulStage_output_regNext_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverPipelined__DOT__router_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverPipelined__DOT__router_input_payload_y0;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPixelSolverPipelined__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPixelSolverPipelined___024root(const char* name);
    ~VPixelSolverPipelined___024root();
    VL_UNCOPYABLE(VPixelSolverPipelined___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPixelSolverPipelined__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
