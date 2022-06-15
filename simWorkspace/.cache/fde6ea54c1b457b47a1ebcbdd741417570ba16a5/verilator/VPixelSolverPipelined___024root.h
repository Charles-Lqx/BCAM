// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPixelSolverPipelined.h for the primary calling header

#ifndef VERILATED_VPIXELSOLVERPIPELINED___024ROOT_H_
#define VERILATED_VPIXELSOLVERPIPELINED___024ROOT_H_  // guard

#include "verilated.h"

class VPixelSolverPipelined__Syms;
class VPixelSolverPipelined_PixelSolverPipelined;

VL_MODULE(VPixelSolverPipelined___024root) {
  public:
    // CELLS
    VPixelSolverPipelined_PixelSolverPipelined* PixelSolverPipelined;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmd_valid,0,0);
    VL_OUT8(io_cmd_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    VL_OUT8(io_rsp_payload_iteration,3,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_cmd_payload_x,27,0);
    VL_IN(io_cmd_payload_y,27,0);
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

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
