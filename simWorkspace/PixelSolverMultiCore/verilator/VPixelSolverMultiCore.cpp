// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPixelSolverMultiCore.h"
#include "VPixelSolverMultiCore__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPixelSolverMultiCore::VPixelSolverMultiCore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPixelSolverMultiCore__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_cmd_valid{vlSymsp->TOP.io_cmd_valid}
    , io_cmd_ready{vlSymsp->TOP.io_cmd_ready}
    , io_rsp_valid{vlSymsp->TOP.io_rsp_valid}
    , io_rsp_ready{vlSymsp->TOP.io_rsp_ready}
    , io_rsp_payload_iteration{vlSymsp->TOP.io_rsp_payload_iteration}
    , io_cmd_payload_x{vlSymsp->TOP.io_cmd_payload_x}
    , io_cmd_payload_y{vlSymsp->TOP.io_cmd_payload_y}
    , rootp{&(vlSymsp->TOP)}
{
}

VPixelSolverMultiCore::VPixelSolverMultiCore(const char* _vcname__)
    : VPixelSolverMultiCore(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPixelSolverMultiCore::~VPixelSolverMultiCore() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPixelSolverMultiCore___024root___eval_initial(VPixelSolverMultiCore___024root* vlSelf);
void VPixelSolverMultiCore___024root___eval_settle(VPixelSolverMultiCore___024root* vlSelf);
void VPixelSolverMultiCore___024root___eval(VPixelSolverMultiCore___024root* vlSelf);
#ifdef VL_DEBUG
void VPixelSolverMultiCore___024root___eval_debug_assertions(VPixelSolverMultiCore___024root* vlSelf);
#endif  // VL_DEBUG
void VPixelSolverMultiCore___024root___final(VPixelSolverMultiCore___024root* vlSelf);

static void _eval_initial_loop(VPixelSolverMultiCore__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPixelSolverMultiCore___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPixelSolverMultiCore___024root___eval_settle(&(vlSymsp->TOP));
        VPixelSolverMultiCore___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPixelSolverMultiCore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPixelSolverMultiCore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPixelSolverMultiCore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPixelSolverMultiCore___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPixelSolverMultiCore::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPixelSolverMultiCore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPixelSolverMultiCore::final() {
    VPixelSolverMultiCore___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPixelSolverMultiCore___024root__trace_init_top(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPixelSolverMultiCore___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_register(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPixelSolverMultiCore::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPixelSolverMultiCore___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
