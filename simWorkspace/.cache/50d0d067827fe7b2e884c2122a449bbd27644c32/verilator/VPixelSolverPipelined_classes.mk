# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VPixelSolverPipelined.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VPixelSolverPipelined \
	VPixelSolverPipelined___024root__DepSet_h414044fe__0 \
	VPixelSolverPipelined___024root__DepSet_h077c9a49__0 \
	VPixelSolverPipelined_PixelSolverPipelined__DepSet_h9ecd53a6__0 \
	VPixelSolverPipelined_PixelSolverPipelined__DepSet_hb419e3c4__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VPixelSolverPipelined___024root__Slow \
	VPixelSolverPipelined___024root__DepSet_h414044fe__0__Slow \
	VPixelSolverPipelined___024root__DepSet_h077c9a49__0__Slow \
	VPixelSolverPipelined_PixelSolverPipelined__Slow \
	VPixelSolverPipelined_PixelSolverPipelined__DepSet_h9ecd53a6__0__Slow \
	VPixelSolverPipelined_PixelSolverPipelined__DepSet_hb419e3c4__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VPixelSolverPipelined__Dpi \
	VPixelSolverPipelined__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VPixelSolverPipelined__Syms \
	VPixelSolverPipelined__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
