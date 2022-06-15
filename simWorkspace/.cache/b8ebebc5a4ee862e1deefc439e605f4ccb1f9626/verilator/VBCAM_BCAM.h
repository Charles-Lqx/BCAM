// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBCAM.h for the primary calling header

#ifndef VERILATED_VBCAM_BCAM_H_
#define VERILATED_VBCAM_BCAM_H_  // guard

#include "verilated.h"

class VBCAM__Syms;
VL_MODULE(VBCAM_BCAM) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*3:0*/ __PVT___zz___05Fzz_1_port0;
        CData/*3:0*/ __PVT___zz___05Fzz_2_port0;
        CData/*0:0*/ __PVT___zz___05Fzz_1_port_1;
        CData/*0:0*/ __PVT___zz___05Fzz_1_port_3;
        CData/*0:0*/ __PVT___zz___05Fzz_2_port_2;
        CData/*0:0*/ __PVT__when_BCAM_l140;
        CData/*0:0*/ rWrStage1;
        CData/*0:0*/ rWrStage2;
        CData/*2:0*/ rWAddr;
        CData/*1:0*/ rWPatt;
        CData/*0:0*/ __PVT__io_WStream_fire;
        CData/*0:0*/ SegWr;
        CData/*0:0*/ STiWr;
        CData/*0:0*/ __PVT__when_BCAM_l163;
        CData/*0:0*/ __PVT___zz_io_MAddrStream_valid;
        CData/*0:0*/ __PVT__io_MAddrStream_isFree;
        CData/*3:0*/ __PVT___zz_io_MAddrStream_payload_Match_ohFirst_value;
        CData/*1:0*/ SegAddr;
        CData/*1:0*/ __PVT__SegAddr_regNext;
        CData/*0:0*/ __PVT___zz_io_MAddrStream_payload_Match_1;
        CData/*1:0*/ __PVT___zz_when_BCAM_l173_1;
        CData/*1:0*/ __PVT___zz_when_BCAM_l173_2;
        CData/*1:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_2;
        CData/*3:0*/ STiWMask;
        CData/*1:0*/ RegWMask;
        CData/*0:0*/ __PVT___zz_RDataForWrite_1;
        CData/*3:0*/ RDataForWrite;
        CData/*1:0*/ __PVT___zz_when_BCAM_l198;
        CData/*1:0*/ __PVT___zz_3;
        CData/*1:0*/ __PVT___zz_when_BCAM_l216_2;
        CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read;
        CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read_1;
        CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read_2;
        CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read_3;
        CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read;
        CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read_1;
        CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read_2;
        CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read_3;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol2__v0;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol1__v0;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol0__v0;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol3__v0;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol2__v1;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol1__v1;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol0__v1;
        CData/*0:0*/ __Vdlyvset___zz_1_symbol3__v1;
        CData/*0:0*/ __Vdlyvset___zz_2_symbol0__v0;
        CData/*0:0*/ __Vdlyvset___zz_2_symbol1__v0;
        VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol0;
        VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol1;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol2;
        VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol3;
        VlUnpacked<CData/*1:0*/, 4> __PVT___zz_2_symbol0;
        VlUnpacked<CData/*1:0*/, 4> __PVT___zz_2_symbol1;
    };

    // INTERNAL VARIABLES
    VBCAM__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBCAM_BCAM(const char* name);
    ~VBCAM_BCAM();
    VL_UNCOPYABLE(VBCAM_BCAM);

    // INTERNAL METHODS
    void __Vconfigure(VBCAM__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
