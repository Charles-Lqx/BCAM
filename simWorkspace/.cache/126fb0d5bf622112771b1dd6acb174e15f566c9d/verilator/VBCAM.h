// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VBCAM_H_
#define VERILATED_VBCAM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VBCAM__Syms;
class VBCAM___024root;
class VerilatedFstC;
class VBCAM_BCAM;


// This class is the main interface to the Verilated model
class VBCAM VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VBCAM__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_WStream_valid,0,0);
    VL_OUT8(&io_WStream_ready,0,0);
    VL_IN8(&io_WStream_payload_WAddr,2,0);
    VL_IN8(&io_WStream_payload_WPatt,1,0);
    VL_IN8(&io_WStream_payload_Wr,0,0);
    VL_IN8(&io_MPattStream_valid,0,0);
    VL_OUT8(&io_MPattStream_ready,0,0);
    VL_IN8(&io_MPattStream_payload_MPatt,1,0);
    VL_OUT8(&io_MAddrStream_valid,0,0);
    VL_IN8(&io_MAddrStream_ready,0,0);
    VL_OUT8(&io_MAddrStream_payload_MAddr,2,0);
    VL_OUT8(&io_MAddrStream_payload_Match,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VBCAM_BCAM* const BCAM;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VBCAM___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VBCAM(VerilatedContext* contextp, const char* name = "TOP");
    explicit VBCAM(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VBCAM();
  private:
    VL_UNCOPYABLE(VBCAM);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
