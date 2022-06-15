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
        VL_IN8(io_wStream_valid,0,0);
        VL_OUT8(io_wStream_ready,0,0);
        VL_IN8(io_wStream_payload_wAddr,2,0);
        VL_IN8(io_wStream_payload_wPatt,1,0);
        VL_IN8(io_wStream_payload_wr,0,0);
        VL_IN8(io_mPattStream_valid,0,0);
        VL_OUT8(io_mPattStream_ready,0,0);
        VL_IN8(io_mPattStream_payload_mPatt,1,0);
        VL_OUT8(io_mAddrStream_valid,0,0);
        VL_IN8(io_mAddrStream_ready,0,0);
        VL_OUT8(io_mAddrStream_payload_mAddr,2,0);
        VL_OUT8(io_mAddrStream_payload_matchFlag,0,0);
        CData/*3:0*/ __PVT___zz_STiRAM_port0;
        CData/*3:0*/ __PVT___zz_SegRAM_port0;
        CData/*0:0*/ __PVT___zz_STiRAM_port_1;
        CData/*0:0*/ __PVT___zz_STiRAM_port_3;
        CData/*0:0*/ __PVT___zz_SegRAM_port_2;
        CData/*0:0*/ __PVT__io_wStream_rValid;
        CData/*0:0*/ __PVT__halfRateWStream_fire;
        CData/*2:0*/ __PVT__io_wStream_rData_wAddr;
        CData/*1:0*/ __PVT__io_wStream_rData_wPatt;
        CData/*0:0*/ __PVT__io_wStream_rData_wr;
        CData/*0:0*/ __PVT__continueWr;
        CData/*0:0*/ SegWr;
        CData/*0:0*/ STiWr;
        CData/*0:0*/ __PVT__io_mPattStream_rValid;
        CData/*0:0*/ __PVT__io_mPattStream_halfPipe_fire;
        CData/*1:0*/ __PVT__io_mPattStream_rData_mPatt;
        CData/*1:0*/ __PVT___zz_when_BCAM_l125_1;
        CData/*1:0*/ __PVT___zz_when_BCAM_l125_2;
        CData/*0:0*/ __PVT__io_mPattStream_halfPipe_translated_ready;
        CData/*0:0*/ __PVT___zz_io_mPattStream_halfPipe_translated_ready;
        CData/*0:0*/ __PVT___zz_io_mAddrStream_valid_1;
        CData/*1:0*/ SegAddr;
        CData/*1:0*/ __PVT__SegAddr_regNext;
        CData/*0:0*/ rMatch;
        CData/*0:0*/ __PVT___zz_io_mAddrStream_valid_3;
        CData/*0:0*/ __PVT___zz_when_BCAM_l125_3;
        CData/*0:0*/ __PVT___zz_io_mAddrStream_payload_mAddr;
        CData/*0:0*/ __PVT___zz_io_mAddrStream_payload_mAddr_1;
        CData/*1:0*/ __PVT___zz_io_mAddrStream_payload_mAddr_2;
        CData/*3:0*/ STiWMask;
        CData/*1:0*/ RegWMask;
        CData/*0:0*/ __PVT___zz_RDataForWrite_1;
        CData/*3:0*/ RDataForWrite;
        CData/*1:0*/ PattToRmMuxOutput;
        CData/*1:0*/ __PVT___zz_1;
        CData/*0:0*/ ocurrIndcResults_0;
        CData/*0:0*/ ocurrIndcResults_1;
        CData/*0:0*/ MaskingControl;
        CData/*0:0*/ notErase;
        CData/*0:0*/ __PVT___zz_STiRAMsymbol_read;
        CData/*0:0*/ __PVT___zz_STiRAMsymbol_read_1;
        CData/*0:0*/ __PVT___zz_STiRAMsymbol_read_2;
        CData/*0:0*/ __PVT___zz_STiRAMsymbol_read_3;
        CData/*1:0*/ __PVT___zz_SegRAMsymbol_read;
        CData/*1:0*/ __PVT___zz_SegRAMsymbol_read_1;
        CData/*1:0*/ __PVT___zz_SegRAMsymbol_read_2;
        CData/*1:0*/ __PVT___zz_SegRAMsymbol_read_3;
        VlUnpacked<CData/*0:0*/, 4> STiRAM_symbol0;
        VlUnpacked<CData/*0:0*/, 4> STiRAM_symbol1;
        VlUnpacked<CData/*0:0*/, 4> STiRAM_symbol2;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 4> STiRAM_symbol3;
        VlUnpacked<CData/*1:0*/, 4> SegRAM_symbol0;
        VlUnpacked<CData/*1:0*/, 4> SegRAM_symbol1;
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
