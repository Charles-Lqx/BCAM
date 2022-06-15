// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM_BCAM.h"
#include "VBCAM__Syms.h"

VL_INLINE_OPT void VBCAM_BCAM___sequent__TOP__BCAM__2(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___sequent__TOP__BCAM__2\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol2__v0;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol1__v0;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol0__v0;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol3__v0;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol3__v0;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol2__v1;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol2__v1;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol1__v1;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol1__v1;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol0__v1;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol0__v1;
    CData/*1:0*/ __Vdlyvdim0__STiRAM_symbol3__v1;
    CData/*0:0*/ __Vdlyvset__STiRAM_symbol3__v1;
    CData/*1:0*/ __Vdlyvdim0__SegRAM_symbol0__v0;
    CData/*1:0*/ __Vdlyvval__SegRAM_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__SegRAM_symbol0__v0;
    CData/*1:0*/ __Vdlyvdim0__SegRAM_symbol1__v0;
    CData/*1:0*/ __Vdlyvval__SegRAM_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__SegRAM_symbol1__v0;
    // Body
    __Vdlyvset__STiRAM_symbol3__v1 = 0U;
    __Vdlyvset__STiRAM_symbol3__v0 = 0U;
    __Vdlyvset__STiRAM_symbol0__v1 = 0U;
    __Vdlyvset__STiRAM_symbol0__v0 = 0U;
    __Vdlyvset__STiRAM_symbol1__v1 = 0U;
    __Vdlyvset__STiRAM_symbol1__v0 = 0U;
    __Vdlyvset__STiRAM_symbol2__v1 = 0U;
    __Vdlyvset__STiRAM_symbol2__v0 = 0U;
    __Vdlyvset__SegRAM_symbol1__v0 = 0U;
    __Vdlyvset__SegRAM_symbol0__v0 = 0U;
    if (vlSelf->mIndcStream_ready) {
        vlSelf->__PVT__mIndcStream_rData = vlSelf->mIndcStream_payload;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__io_mPattStream_rValid)))) {
        vlSelf->__PVT__io_mPattStream_rData_mPatt = vlSymsp->TOP.io_mPattStream_payload_mPatt;
    }
    if ((((IData)(vlSelf->STiWMask) >> 3U) & (IData)(vlSelf->__PVT___zz_STiRAM_port_3))) {
        __Vdlyvset__STiRAM_symbol3__v1 = 1U;
        __Vdlyvdim0__STiRAM_symbol3__v1 = vlSelf->STiWPatt;
    }
    if ((((IData)(vlSelf->STiWMask) >> 3U) & (IData)(vlSelf->__PVT___zz_STiRAM_port_1))) {
        __Vdlyvset__STiRAM_symbol3__v0 = 1U;
        __Vdlyvdim0__STiRAM_symbol3__v0 = vlSelf->STiWPatt;
    }
    if (((IData)(vlSelf->STiWMask) & (IData)(vlSelf->__PVT___zz_STiRAM_port_3))) {
        __Vdlyvset__STiRAM_symbol0__v1 = 1U;
        __Vdlyvdim0__STiRAM_symbol0__v1 = vlSelf->STiWPatt;
    }
    if (((IData)(vlSelf->STiWMask) & (IData)(vlSelf->__PVT___zz_STiRAM_port_1))) {
        __Vdlyvset__STiRAM_symbol0__v0 = 1U;
        __Vdlyvdim0__STiRAM_symbol0__v0 = vlSelf->STiWPatt;
    }
    if ((((IData)(vlSelf->STiWMask) >> 1U) & (IData)(vlSelf->__PVT___zz_STiRAM_port_3))) {
        __Vdlyvset__STiRAM_symbol1__v1 = 1U;
        __Vdlyvdim0__STiRAM_symbol1__v1 = vlSelf->STiWPatt;
    }
    if ((((IData)(vlSelf->STiWMask) >> 1U) & (IData)(vlSelf->__PVT___zz_STiRAM_port_1))) {
        __Vdlyvset__STiRAM_symbol1__v0 = 1U;
        __Vdlyvdim0__STiRAM_symbol1__v0 = vlSelf->STiWPatt;
    }
    if ((((IData)(vlSelf->STiWMask) >> 2U) & (IData)(vlSelf->__PVT___zz_STiRAM_port_3))) {
        __Vdlyvset__STiRAM_symbol2__v1 = 1U;
        __Vdlyvdim0__STiRAM_symbol2__v1 = vlSelf->STiWPatt;
    }
    if ((((IData)(vlSelf->STiWMask) >> 2U) & (IData)(vlSelf->__PVT___zz_STiRAM_port_1))) {
        __Vdlyvset__STiRAM_symbol2__v0 = 1U;
        __Vdlyvdim0__STiRAM_symbol2__v0 = vlSelf->STiWPatt;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__io_wStream_rValid)))) {
        vlSelf->__PVT__io_wStream_rData_wr = vlSymsp->TOP.io_wStream_payload_wr;
    }
    if (vlSelf->__PVT__mIndcStream_isFree) {
        vlSelf->__PVT___zz_STiRAMsymbol_read_3 = vlSelf->STiRAM_symbol3
            [vlSelf->halfRateMPatt_payload_mPatt];
        vlSelf->__PVT___zz_STiRAMsymbol_read_2 = vlSelf->STiRAM_symbol2
            [vlSelf->halfRateMPatt_payload_mPatt];
        vlSelf->__PVT___zz_STiRAMsymbol_read_1 = vlSelf->STiRAM_symbol1
            [vlSelf->halfRateMPatt_payload_mPatt];
        vlSelf->__PVT___zz_STiRAMsymbol_read = vlSelf->STiRAM_symbol0
            [vlSelf->halfRateMPatt_payload_mPatt];
    }
    vlSelf->mPattTwoPipe_2 = vlSelf->mPattTwoPipe_1;
    if (((IData)(vlSelf->mIndcStream_valid) & (IData)(vlSelf->mIndcStream_ready))) {
        vlSelf->rMatch = (IData)((0U != (IData)(vlSelf->mIndcStream_payload)));
    }
    if (((IData)(vlSelf->__PVT__mIndcStream_rValid) 
         & (IData)(vlSymsp->TOP.io_mAddrStream_ready))) {
        vlSelf->rMatch = 0U;
    }
    if (vlSelf->__PVT__mIndcStream_fire_1) {
        vlSelf->__PVT___zz_SegRAMsymbol_read_1 = vlSelf->SegRAM_symbol1
            [vlSelf->SegAddr];
        vlSelf->__PVT___zz_SegRAMsymbol_read = vlSelf->SegRAM_symbol0
            [vlSelf->SegAddr];
    }
    if ((((IData)(vlSelf->RegWMask) >> 1U) & (IData)(vlSelf->__PVT___zz_SegRAM_port_2))) {
        __Vdlyvval__SegRAM_symbol1__v0 = vlSelf->__PVT__io_wStream_rData_wPatt;
        __Vdlyvset__SegRAM_symbol1__v0 = 1U;
        __Vdlyvdim0__SegRAM_symbol1__v0 = (3U & ((IData)(vlSelf->__PVT__io_wStream_rData_wAddr) 
                                                 >> 1U));
    }
    if (((IData)(vlSelf->RegWMask) & (IData)(vlSelf->__PVT___zz_SegRAM_port_2))) {
        __Vdlyvval__SegRAM_symbol0__v0 = vlSelf->__PVT__io_wStream_rData_wPatt;
        __Vdlyvset__SegRAM_symbol0__v0 = 1U;
        __Vdlyvdim0__SegRAM_symbol0__v0 = (3U & ((IData)(vlSelf->__PVT__io_wStream_rData_wAddr) 
                                                 >> 1U));
    }
    if (vlSelf->__PVT___zz_RDataForWrite_1) {
        vlSelf->__PVT___zz_SegRAMsymbol_read_3 = vlSelf->SegRAM_symbol1
            [(3U & ((IData)(vlSelf->__PVT__io_wStream_rData_wAddr) 
                    >> 1U))];
        vlSelf->__PVT___zz_SegRAMsymbol_read_2 = vlSelf->SegRAM_symbol0
            [(3U & ((IData)(vlSelf->__PVT__io_wStream_rData_wAddr) 
                    >> 1U))];
    }
    if (__Vdlyvset__STiRAM_symbol3__v0) {
        vlSelf->STiRAM_symbol3[__Vdlyvdim0__STiRAM_symbol3__v0] = 1U;
    }
    if (__Vdlyvset__STiRAM_symbol3__v1) {
        vlSelf->STiRAM_symbol3[__Vdlyvdim0__STiRAM_symbol3__v1] = 0U;
    }
    if (__Vdlyvset__STiRAM_symbol2__v0) {
        vlSelf->STiRAM_symbol2[__Vdlyvdim0__STiRAM_symbol2__v0] = 1U;
    }
    if (__Vdlyvset__STiRAM_symbol2__v1) {
        vlSelf->STiRAM_symbol2[__Vdlyvdim0__STiRAM_symbol2__v1] = 0U;
    }
    if (__Vdlyvset__STiRAM_symbol1__v0) {
        vlSelf->STiRAM_symbol1[__Vdlyvdim0__STiRAM_symbol1__v0] = 1U;
    }
    if (__Vdlyvset__STiRAM_symbol1__v1) {
        vlSelf->STiRAM_symbol1[__Vdlyvdim0__STiRAM_symbol1__v1] = 0U;
    }
    if (__Vdlyvset__STiRAM_symbol0__v0) {
        vlSelf->STiRAM_symbol0[__Vdlyvdim0__STiRAM_symbol0__v0] = 1U;
    }
    if (__Vdlyvset__STiRAM_symbol0__v1) {
        vlSelf->STiRAM_symbol0[__Vdlyvdim0__STiRAM_symbol0__v1] = 0U;
    }
    if (__Vdlyvset__SegRAM_symbol1__v0) {
        vlSelf->SegRAM_symbol1[__Vdlyvdim0__SegRAM_symbol1__v0] 
            = __Vdlyvval__SegRAM_symbol1__v0;
    }
    if (__Vdlyvset__SegRAM_symbol0__v0) {
        vlSelf->SegRAM_symbol0[__Vdlyvdim0__SegRAM_symbol0__v0] 
            = __Vdlyvval__SegRAM_symbol0__v0;
    }
    vlSelf->halfRateMPatt_payload_mPatt = vlSelf->__PVT__io_mPattStream_rData_mPatt;
    vlSelf->mIndcStream_payload = (((IData)(vlSelf->__PVT___zz_STiRAMsymbol_read_3) 
                                    << 3U) | (((IData)(vlSelf->__PVT___zz_STiRAMsymbol_read_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT___zz_STiRAMsymbol_read_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT___zz_STiRAMsymbol_read))));
    vlSelf->mPattTwoPipe_1 = vlSelf->mPattTwoPipe_0;
    vlSelf->__PVT___zz_SegRAM_port0 = (((IData)(vlSelf->__PVT___zz_SegRAMsymbol_read_1) 
                                        << 2U) | (IData)(vlSelf->__PVT___zz_SegRAMsymbol_read));
    if ((1U & (~ (IData)(vlSelf->__PVT__io_wStream_rValid)))) {
        vlSelf->__PVT__io_wStream_rData_wPatt = vlSymsp->TOP.io_wStream_payload_wPatt;
        vlSelf->__PVT__io_wStream_rData_wAddr = vlSymsp->TOP.io_wStream_payload_wAddr;
    }
    vlSelf->RDataForWrite = (((IData)(vlSelf->__PVT___zz_SegRAMsymbol_read_3) 
                              << 2U) | (IData)(vlSelf->__PVT___zz_SegRAMsymbol_read_2));
    vlSelf->__PVT__mIndcStream_payload_ohFirst_masked 
        = ((IData)(vlSelf->mIndcStream_payload) & (~ 
                                                   ((IData)(vlSelf->mIndcStream_payload) 
                                                    - (IData)(1U))));
    vlSelf->mPattTwoPipe_0 = vlSelf->halfRateMPatt_payload_mPatt;
    vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr = 0U;
    if (((3U & (IData)(vlSelf->__PVT___zz_SegRAM_port0)) 
         == (IData)(vlSelf->mPattTwoPipe_2))) {
        vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr = 1U;
    }
}

VL_INLINE_OPT void VBCAM_BCAM___sequent__TOP__BCAM__4(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___sequent__TOP__BCAM__4\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__SegAddr_regNext = 0U;
        vlSelf->__PVT__io_mPattStream_rValid = 0U;
        vlSelf->__PVT__continueWr = 0U;
    } else {
        vlSelf->__PVT__SegAddr_regNext = vlSelf->SegAddr;
        if (vlSymsp->TOP.io_mPattStream_valid) {
            vlSelf->__PVT__io_mPattStream_rValid = 1U;
        }
        if (((IData)(vlSelf->halfRateMPatt_valid) & (IData)(vlSelf->halfRateMPatt_ready))) {
            vlSelf->__PVT__io_mPattStream_rValid = 0U;
        }
        if (vlSelf->__PVT__io_wStream_rValid) {
            vlSelf->__PVT__continueWr = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__io_wStream_rValid)))) {
            vlSelf->__PVT__continueWr = 0U;
        }
    }
    vlSelf->SegWr = ((~ (IData)(vlSymsp->TOP.reset)) 
                     & (IData)(vlSelf->__PVT__io_wStream_rValid));
    vlSelf->STiWr = (1U & ((IData)(vlSymsp->TOP.reset) 
                           | (~ (IData)(vlSelf->__PVT__io_wStream_rValid))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT___zz_mIndcStream_valid = 0U;
        vlSelf->__PVT__mIndcStream_rValid = 0U;
    } else {
        if (vlSelf->mIndcStream_ready) {
            vlSelf->__PVT___zz_mIndcStream_valid = 0U;
        }
        if (vlSelf->__PVT__mIndcStream_isFree) {
            vlSelf->__PVT___zz_mIndcStream_valid = vlSelf->halfRateMPatt_valid;
        }
        if (vlSelf->mIndcStream_ready) {
            vlSelf->__PVT__mIndcStream_rValid = vlSelf->mIndcStream_valid;
        }
    }
    vlSelf->halfRateMPatt_valid = vlSelf->__PVT__io_mPattStream_rValid;
    vlSelf->__PVT___zz_SegRAM_port_2 = ((IData)(vlSelf->SegWr) 
                                        & (IData)(vlSelf->__PVT__continueWr));
    vlSelf->STiWPatt = ((IData)(vlSelf->STiWr) ? (IData)(vlSelf->__PVT__io_wStream_rData_wPatt)
                         : (IData)(vlSelf->PattToRmMuxOutput));
    vlSelf->notErase = ((IData)(vlSelf->MaskingControl) 
                        | (IData)(vlSelf->STiWr));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_wStream_rValid = 0U;
    } else {
        if (vlSymsp->TOP.io_wStream_valid) {
            vlSelf->__PVT__io_wStream_rValid = 1U;
        }
        if (vlSelf->__PVT__halfRateWStream_fire) {
            vlSelf->__PVT__io_wStream_rValid = 0U;
        }
    }
    vlSelf->mIndcStream_valid = vlSelf->__PVT___zz_mIndcStream_valid;
    vlSelf->__PVT___zz_STiRAM_port_3 = ((~ (IData)(vlSelf->notErase)) 
                                        & (IData)(vlSelf->__PVT__continueWr));
    vlSelf->__PVT__halfRateWStream_fire = vlSelf->__PVT__io_wStream_rValid;
    vlSelf->__PVT___zz_STiRAM_port_1 = (((IData)(vlSelf->STiWr) 
                                         & (IData)(vlSelf->__PVT__io_wStream_rData_wr)) 
                                        & (IData)(vlSelf->__PVT__io_wStream_rValid));
    vlSelf->__PVT___zz_RDataForWrite_1 = (((~ (IData)(vlSelf->SegWr)) 
                                           & (IData)(vlSelf->__PVT__io_wStream_rData_wr)) 
                                          & (IData)(vlSelf->__PVT__io_wStream_rValid));
}

VL_INLINE_OPT void VBCAM_BCAM___combo__TOP__BCAM__8(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___combo__TOP__BCAM__8\n"); );
    // Body
    vlSelf->mIndcStream_ready = vlSymsp->TOP.io_mAddrStream_ready;
    if ((1U & (~ (IData)(vlSelf->__PVT__mIndcStream_rValid)))) {
        vlSelf->mIndcStream_ready = 1U;
    }
    vlSelf->__PVT__mIndcStream_fire_1 = ((IData)(vlSelf->mIndcStream_valid) 
                                         & (IData)(vlSelf->mIndcStream_ready));
    vlSelf->__PVT__mIndcStream_isFree = (1U & ((~ (IData)(vlSelf->mIndcStream_valid)) 
                                               | (IData)(vlSelf->mIndcStream_ready)));
    vlSelf->halfRateMPatt_ready = vlSelf->__PVT__mIndcStream_isFree;
}
