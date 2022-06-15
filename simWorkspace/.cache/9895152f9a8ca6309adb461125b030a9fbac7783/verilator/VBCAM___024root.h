// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBCAM.h for the primary calling header

#ifndef VERILATED_VBCAM___024ROOT_H_
#define VERILATED_VBCAM___024ROOT_H_  // guard

#include "verilated.h"

class VBCAM__Syms;
class VBCAM_BCAM;

VL_MODULE(VBCAM___024root) {
  public:
    // CELLS
    VBCAM_BCAM* BCAM;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_WStream_valid,0,0);
    VL_OUT8(io_WStream_ready,0,0);
    VL_IN8(io_WStream_payload_WAddr,2,0);
    VL_IN8(io_WStream_payload_WPatt,1,0);
    VL_IN8(io_WStream_payload_Wr,0,0);
    VL_IN8(io_MPattStream_valid,0,0);
    VL_OUT8(io_MPattStream_ready,0,0);
    VL_IN8(io_MPattStream_payload_MPatt,1,0);
    VL_OUT8(io_MAddrStream_valid,0,0);
    VL_IN8(io_MAddrStream_ready,0,0);
    VL_OUT8(io_MAddrStream_payload_MAddr,2,0);
    VL_OUT8(io_MAddrStream_payload_Match,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VBCAM__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBCAM___024root(const char* name);
    ~VBCAM___024root();
    VL_UNCOPYABLE(VBCAM___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBCAM__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
