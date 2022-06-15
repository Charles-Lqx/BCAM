// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBCAM.h for the primary calling header

#ifndef VERILATED_VBCAM___024ROOT_H_
#define VERILATED_VBCAM___024ROOT_H_  // guard

#include "verilated.h"

class VBCAM__Syms;
VL_MODULE(VBCAM___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_wStream_valid,0,0);
        VL_OUT8(io_wStream_ready,0,0);
        VL_IN8(io_wStream_payload_wAddr,3,0);
        VL_IN8(io_wStream_payload_wPatt,2,0);
        VL_IN8(io_wStream_payload_wr,0,0);
        VL_IN8(io_mPattStream_valid,0,0);
        VL_OUT8(io_mPattStream_ready,0,0);
        VL_IN8(io_mPattStream_payload_mPatt,2,0);
        VL_OUT8(io_mAddrStream_valid,0,0);
        VL_IN8(io_mAddrStream_ready,0,0);
        VL_OUT8(io_mAddrStream_payload_mAddr,3,0);
        VL_OUT8(io_mAddrStream_payload_matchFlag,0,0);
        CData/*2:0*/ BCAM__DOT___zz___05Fzz_2_port1;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1_port_1;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1_port_3;
        CData/*0:0*/ BCAM__DOT__io_wStream_rValid;
        CData/*0:0*/ BCAM__DOT__io_wStream_halfPipe_fire;
        CData/*3:0*/ BCAM__DOT__io_wStream_rData_wAddr;
        CData/*2:0*/ BCAM__DOT__io_wStream_rData_wPatt;
        CData/*0:0*/ BCAM__DOT__io_wStream_rData_wr;
        CData/*0:0*/ BCAM__DOT___zz_3;
        CData/*0:0*/ BCAM__DOT___zz_4;
        CData/*0:0*/ BCAM__DOT___zz_5;
        CData/*2:0*/ BCAM__DOT___zz_8;
        CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_valid;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_1;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_2;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_3;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_4;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_5;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_6;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_7;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_8;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_9;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_10;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_11;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_12;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_13;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_14;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_15;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol15__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol15__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol14__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol14__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol13__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol3__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol7__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol12__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol4__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol0__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol9__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol9__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol5__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol5__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol10__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol10__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol1__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol6__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol6__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol11__v0;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol11__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol2__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol8__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol8__v0;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol15__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol15__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol14__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol14__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol13__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol13__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol3__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol7__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol12__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol4__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol0__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol9__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol9__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol5__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol5__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol10__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol10__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol1__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol1__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol6__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol6__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol11__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol11__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol2__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol2__v1;
        CData/*2:0*/ __Vdlyvdim0__BCAM__DOT___zz_1_symbol8__v1;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_1_symbol8__v1;
        CData/*3:0*/ __Vdlyvdim0__BCAM__DOT___zz_2__v0;
        CData/*2:0*/ __Vdlyvval__BCAM__DOT___zz_2__v0;
        CData/*0:0*/ __Vdlyvset__BCAM__DOT___zz_2__v0;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol0;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol1;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol2;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol3;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol4;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol5;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol6;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol7;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol8;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol9;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol10;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol11;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol12;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol13;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol14;
        VlUnpacked<CData/*0:0*/, 8> BCAM__DOT___zz_1_symbol15;
        VlUnpacked<CData/*2:0*/, 16> BCAM__DOT___zz_2;
    };

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
