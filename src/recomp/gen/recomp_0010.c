/**
 * DOAU1 - Recompiled code chunk 10
 * Functions: 250 (0x0006A090 - 0x00070620)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0006A090
 * Original: 0x0006A090 - 0x0006A097 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A090: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A0A0
 * Original: 0x0006A0A0 - 0x0006A0A9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A0A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A0A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A0B0
 * Original: 0x0006A0B0 - 0x0006A0CA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A0B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A0C9; /* jne: not equal / not zero */

loc_0006A0C3: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */

loc_0006A0C9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A0D0
 * Original: 0x0006A0D0 - 0x0006A0E7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A0D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006A0DFu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006A0DF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A0F0
 * Original: 0x0006A0F0 - 0x0006A101 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A0F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A0F0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236344)); /* fmul dword ptr [0x236344] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A110
 * Original: 0x0006A110 - 0x0006A121 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A110: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236344)); /* fmul dword ptr [0x236344] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A130
 * Original: 0x0006A130 - 0x0006A14D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A130: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236344)); /* fmul dword ptr [0x236344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A150
 * Original: 0x0006A150 - 0x0006A192 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A150: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A167; /* jne: not equal / not zero */

loc_0006A161: ;
    eax = 0x4000;
    esp += 4; return; /* ret */

loc_0006A167: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x235A58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x235a58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006A17E; /* jp: parity */

loc_0006A178: ;
    eax = 0xFFFFC000u;
    esp += 4; return; /* ret */

loc_0006A17E: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0006A187u); RECOMP_ABI_CALL(0x00151630u, sub_00151630); /* call 0x00151630 */

loc_0006A187: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236348)); /* fmul dword ptr [0x236348] */
    g_seh_ebp = ebp; sub_001502D0(); return; /* tail jmp 0x001502D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A1A0
 * Original: 0x0006A1A0 - 0x0006A1DF (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A1A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A1B4; /* jne: not equal / not zero */

loc_0006A1B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0006A1B4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x235A58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x235a58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006A1CB; /* jp: parity */

loc_0006A1C5: ;
    eax = 0x8000;
    esp += 4; return; /* ret */

loc_0006A1CB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0006A1D4u); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_0006A1D4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236348)); /* fmul dword ptr [0x236348] */
    g_seh_ebp = ebp; sub_001502D0(); return; /* tail jmp 0x001502D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A1E0
 * Original: 0x0006A1E0 - 0x0006A1F3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A1E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A1E0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236344)); /* fmul dword ptr [0x236344] */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A200
 * Original: 0x0006A200 - 0x0006A213 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A200: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236348)); /* fmul dword ptr [0x236348] */
    g_seh_ebp = ebp; sub_001502D0(); return; /* tail jmp 0x001502D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A220
 * Original: 0x0006A220 - 0x0006A235 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A220: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236348)); /* fmul dword ptr [0x236348] */
    g_seh_ebp = ebp; sub_001502D0(); return; /* tail jmp 0x001502D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A240
 * Original: 0x0006A240 - 0x0006A259 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A240: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A260
 * Original: 0x0006A260 - 0x0006A29A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A260: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A278; /* jne: not equal / not zero */

loc_0006A271: ;
    fp_push(MEMF(0x236350)); /* fld float */
    esp += 4; return; /* ret */

loc_0006A278: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x235A58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x235a58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006A290; /* jp: parity */

loc_0006A289: ;
    fp_push(MEMF(0x23634C)); /* fld float */
    esp += 4; return; /* ret */

loc_0006A290: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0006A299u); RECOMP_ABI_CALL(0x00151630u, sub_00151630); /* call 0x00151630 */

loc_0006A299: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A2A0
 * Original: 0x0006A2A0 - 0x0006A2DA (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A2A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A2B8; /* jne: not equal / not zero */

loc_0006A2B1: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    esp += 4; return; /* ret */

loc_0006A2B8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x235A58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x235a58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006A2D0; /* jp: parity */

loc_0006A2C9: ;
    fp_push(MEMF(0x236354)); /* fld float */
    esp += 4; return; /* ret */

loc_0006A2D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0006A2D9u); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_0006A2D9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A2E0
 * Original: 0x0006A2E0 - 0x0006A33C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A2E0: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = ecx + 4;
    ecx = edx + 4;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A340
 * Original: 0x0006A340 - 0x0006A391 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A340: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    eax = ecx;
    MEM32(esp) = edx;
    MEM32(esp + 4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0006A37E; /* jne: not equal / not zero */

loc_0006A351: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A37E; /* jne: not equal / not zero */

loc_0006A355: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006A37E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = edx;
    edi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A3A0
 * Original: 0x0006A3A0 - 0x0006A3BF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A3A0(void)
{

loc_0006A3A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A3C0
 * Original: 0x0006A3C0 - 0x0006A3DD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A3C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A3C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A3E0
 * Original: 0x0006A3E0 - 0x0006A41B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A3E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A3E0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A420
 * Original: 0x0006A420 - 0x0006A443 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A420(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A420: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A450
 * Original: 0x0006A450 - 0x0006A475 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A450: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A480
 * Original: 0x0006A480 - 0x0006A497 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A480(void)
{

loc_0006A480: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A4A0
 * Original: 0x0006A4A0 - 0x0006A4DA (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A4A0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006A4D9; /* jle: less or equal (signed <=) */

loc_0006A4A8: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0006A4B3: ;
    esi = ecx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = esi;
    if ((_fa != 0)) goto loc_0006A4B3; /* jne: not equal / not zero */

loc_0006A4D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0006A4D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A4E0
 * Original: 0x0006A4E0 - 0x0006A4F5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A4E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A4E0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A500
 * Original: 0x0006A500 - 0x0006A53B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A500(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A500: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A540
 * Original: 0x0006A540 - 0x0006A55F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A540(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A540: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A560
 * Original: 0x0006A560 - 0x0006A627 (199 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A560: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006A617; /* jnp: not parity */

loc_0006A5B8: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006A617; /* jnp: not parity */

loc_0006A5CB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x1C)); /* fdiv dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006A613: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006A617: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A613; /* je: equal / zero */

loc_0006A61F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0006A480(); return; /* tail jmp 0x0006A480 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A630
 * Original: 0x0006A630 - 0x0006A655 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A630(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A630: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A660
 * Original: 0x0006A660 - 0x0006A681 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A660(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A660: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A690
 * Original: 0x0006A690 - 0x0006A6BF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A690: ;
    PUSH32(esp, 0x0006A695u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_0006A695: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A6BE; /* jne: not equal / not zero */

loc_0006A6A2: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006A6BE: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A6C0
 * Original: 0x0006A6C0 - 0x0006A6F0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A6C0: ;
    PUSH32(esp, 0x0006A6C5u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_0006A6C5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A6ED; /* jne: not equal / not zero */

loc_0006A6D2: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_0006A6ED: ;
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A730
 * Original: 0x0006A730 - 0x0006A766 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A730: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0006A739u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_0006A739: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A763; /* jne: not equal / not zero */

loc_0006A746: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) / fp_top()); /* fdivr dword ptr [esp + 0xc] */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_0006A763: ;
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A770
 * Original: 0x0006A770 - 0x0006A7A4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A770: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    ecx = esp;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xC)); /* fsub dword ptr [edx + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006A7A0u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_0006A7A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A7B0
 * Original: 0x0006A7B0 - 0x0006A7B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A7B0: ;
    edx = ecx;
    g_seh_ebp = ebp; sub_0006A6C0(); return; /* tail jmp 0x0006A6C0 */

}

/**
 * sub_0006A7C0
 * Original: 0x0006A7C0 - 0x0006A7E0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A7C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006A7D5u); RECOMP_ABI_CALL(0x0006A560u, sub_0006A560); /* call 0x0006A560 */

loc_0006A7D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006A7B0(); return; /* tail jmp 0x0006A7B0 */

}

/**
 * sub_0006A800
 * Original: 0x0006A800 - 0x0006A88B (139 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A800: ;
    fp_push(MEMF(0x902800)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902830)); /* fadd dword ptr [0x902830] */
    MEMF(0x902830) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902834)); /* fadd dword ptr [0x902834] */
    MEMF(0x902834) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902838)); /* fadd dword ptr [0x902838] */
    MEMF(0x902838) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A890
 * Original: 0x0006A890 - 0x0006A8A8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A890: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006A8A4u); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_0006A8A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A8B0
 * Original: 0x0006A8B0 - 0x0006A941 (145 bytes, 28 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A8B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A8B0: ;
    fp_push(MEMF(0x902800)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(0x902800) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(0x902810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(0x902820) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(0x902804) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(0x902814) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(0x902824) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(0x902808) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(0x902818) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(0x902828) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A950
 * Original: 0x0006A950 - 0x0006A964 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A950: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006A960u); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_0006A960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A970
 * Original: 0x0006A970 - 0x0006AA3E (206 bytes, 47 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A970: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ecx + 8);
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = MEM32(ecx + 0xC);
    fp_push(MEMF(0x902800)); /* fld float */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 4) = ecx;
    MEMF(0x902800) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(0x902810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(0x902820) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902830)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(0x902830) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(0x902804) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(0x902814) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(0x902824) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902834)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(0x902834) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(0x902808) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(0x902818) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(0x902828) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902838)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(0x902838) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AA40
 * Original: 0x0006AA40 - 0x0006AA92 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AA40: ;
    eax = 0x2E5AF0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AA7C; /* jne: not equal / not zero */

loc_0006AA49: ;
    ecx = 0x902800;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AA7C; /* jne: not equal / not zero */

loc_0006AA53: ;
    ecx = 0x902800;
    eax = 0x2E5AF0;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    esp += 4; return; /* ret */

loc_0006AA7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x2E5AF0;
    edi = 0x902800;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AAA0
 * Original: 0x0006AAA0 - 0x0006AAED (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AAA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AADA; /* jne: not equal / not zero */

loc_0006AAA8: ;
    ecx = 0x902800;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AADA; /* jne: not equal / not zero */

loc_0006AAB2: ;
    ecx = 0x902800;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    esp += 4; return; /* ret */

loc_0006AADA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = eax;
    edi = 0x902800;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AAF0
 * Original: 0x0006AAF0 - 0x0006AB3C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AAF0: ;
    eax = 0x902800;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    eax = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0006AB29; /* jne: not equal / not zero */

loc_0006AAFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AB29; /* jne: not equal / not zero */

loc_0006AB01: ;
    ecx = MEM32(esp + 4);
    eax = 0x902800;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    esp += 4; return; /* ret */

loc_0006AB29: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x902800;
    edi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AB40
 * Original: 0x0006AB40 - 0x0006AB4F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AB40: ;
    edx = 0x2E5AF0;
    ecx = 0x902800;
    g_seh_ebp = ebp; sub_0006A2E0(); return; /* tail jmp 0x0006A2E0 */

}

/**
 * sub_0006AB50
 * Original: 0x0006AB50 - 0x0006AB5E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AB50: ;
    edx = MEM32(esp + 4);
    ecx = 0x902800;
    g_seh_ebp = ebp; sub_0006A2E0(); return; /* tail jmp 0x0006A2E0 */

}

/**
 * sub_0006AB60
 * Original: 0x0006AB60 - 0x0006AB6E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AB60: ;
    ecx = MEM32(esp + 4);
    edx = 0x902800;
    g_seh_ebp = ebp; sub_0006A2E0(); return; /* tail jmp 0x0006A2E0 */

}

/**
 * sub_0006AB70
 * Original: 0x0006AB70 - 0x0006AB9D (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AB70(void)
{

loc_0006AB70: ;
    eax = MEM32(0x2E5B20);
    ecx = MEM32(0x2E5B24);
    edx = MEM32(0x2E5B28);
    MEM32(0x902830) = eax;
    eax = MEM32(0x2E5B2C);
    MEM32(0x902834) = ecx;
    MEM32(0x902838) = edx;
    MEM32(0x90283C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0006ABA0
 * Original: 0x0006ABA0 - 0x0006ABC8 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ABA0(void)
{

loc_0006ABA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x902830) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x902834) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x902838) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x90283C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006ABD0
 * Original: 0x0006ABD0 - 0x0006ABF8 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ABD0(void)
{

loc_0006ABD0: ;
    ecx = MEM32(0x902830);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    edx = MEM32(0x902834);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x902838);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x90283C);
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006AC00
 * Original: 0x0006AC00 - 0x0006AC6C (108 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AC00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x902844);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 0x902800;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    edi = eax;
    MEM32(0x902844) = eax;
    MEM32(esp + 4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0006AC4E; /* jne: not equal / not zero */

loc_0006AC21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AC4E; /* jne: not equal / not zero */

loc_0006AC25: ;
    ecx = MEM32(esp + 4);
    eax = 0x902800;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    goto loc_0006AC5C;

loc_0006AC4E: ;
    PUSH32(esp, esi);
    ecx = 0x10;
    esi = 0x902800;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_0006AC5C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006AC6A; /* je: equal / zero */

loc_0006AC61: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AC67u); RECOMP_ABI_CALL(0x0006AAA0u, sub_0006AAA0); /* call 0x0006AAA0 */

loc_0006AC67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006AC6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AC70
 * Original: 0x0006AC70 - 0x0006AC9D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AC70: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006AC84; /* jle: less or equal (signed <=) */

loc_0006AC75: ;
    eax = MEM32(0x902844);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x902844) = eax;

loc_0006AC84: ;
    ecx = MEM32(0x902844);
    eax = ecx;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x902844) = ecx;
    PUSH32(esp, 0x0006AC9Bu); RECOMP_ABI_CALL(0x0006AAA0u, sub_0006AAA0); /* call 0x0006AAA0 */

loc_0006AC9B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006ACA0
 * Original: 0x0006ACA0 - 0x0006ACA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ACA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006ACA0: ;
    g_seh_ebp = ebp; sub_0006AA40(); return; /* tail jmp 0x0006AA40 */

}

/**
 * sub_0006ACB0
 * Original: 0x0006ACB0 - 0x0006ACB8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ACB0(void)
{

loc_0006ACB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006ACB6u); RECOMP_ABI_CALL(0x0006AAA0u, sub_0006AAA0); /* call 0x0006AAA0 */

loc_0006ACB6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006ACC0
 * Original: 0x0006ACC0 - 0x0006AD10 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ACC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006ACC0: ;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0x902800;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    MEM32(esp) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0006ACFC; /* jne: not equal / not zero */

loc_0006ACD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006ACFC; /* jne: not equal / not zero */

loc_0006ACD4: ;
    ecx = MEM32(esp);
    eax = 0x902800;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0006ACFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x902800;
    edi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AD20
 * Original: 0x0006AD20 - 0x0006AD2C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AD20: ;
    edx = ecx;
    ecx = 0x902800;
    g_seh_ebp = ebp; sub_0006A2E0(); return; /* tail jmp 0x0006A2E0 */

}

/**
 * sub_0006AD30
 * Original: 0x0006AD30 - 0x0006AD3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AD30: ;
    edx = 0x902800;
    g_seh_ebp = ebp; sub_0006A2E0(); return; /* tail jmp 0x0006A2E0 */

}

/**
 * sub_0006AD40
 * Original: 0x0006AD40 - 0x0006AD6D (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD40(void)
{

loc_0006AD40: ;
    eax = MEM32(0x2E5B20);
    ecx = MEM32(0x2E5B24);
    edx = MEM32(0x2E5B28);
    MEM32(0x902830) = eax;
    eax = MEM32(0x2E5B2C);
    MEM32(0x902834) = ecx;
    MEM32(0x902838) = edx;
    MEM32(0x90283C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0006AD70
 * Original: 0x0006AD70 - 0x0006AD92 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD70(void)
{

loc_0006AD70: ;
    eax = MEM32(ecx);
    MEM32(0x902830) = eax;
    edx = MEM32(ecx + 4);
    MEM32(0x902834) = edx;
    eax = MEM32(ecx + 8);
    MEM32(0x902838) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(0x90283C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006ADA0
 * Original: 0x0006ADA0 - 0x0006ADC2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ADA0(void)
{

loc_0006ADA0: ;
    eax = MEM32(0x902830);
    MEM32(ecx) = eax;
    edx = MEM32(0x902834);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x902838);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x90283C);
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006ADD0
 * Original: 0x0006ADD0 - 0x0006ADEE (30 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ADD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006ADD0: ;
    eax = 0x902D50;
    MEM32(0x902840) = 0x902850;
    MEM32(0x9027F0) = eax;
    MEM32(0x902844) = eax;
    g_seh_ebp = ebp; sub_0006ACA0(); return; /* tail jmp 0x0006ACA0 */

}

/**
 * sub_0006ADF0
 * Original: 0x0006ADF0 - 0x0006AE6F (127 bytes, 36 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006ADF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006ADF0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x902800)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902830)); /* fadd dword ptr [0x902830] */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902834)); /* fadd dword ptr [0x902834] */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902838)); /* fadd dword ptr [0x902838] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 8) = eax;
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AE70
 * Original: 0x0006AE70 - 0x0006AEDD (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006AE70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006AE70: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x902800)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 8) = eax;
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AEE0
 * Original: 0x0006AEE0 - 0x0006AFA6 (198 bytes, 56 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006AEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006AEE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(0x902800)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902830)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902834)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902838)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x90281C)); /* fld float */
    eax = MEM32(esp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(0x90280C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x90282C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x90283C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    MEM32(edx + 8) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 0xC) = ecx;
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AFB0
 * Original: 0x0006AFB0 - 0x0006B037 (135 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006AFB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006AFB0: ;
    fp_push(MEMF(0x902800)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x902810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902820)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902830)); /* fadd dword ptr [0x902830] */
    fp_push(MEMF(0x902804)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x902814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902824)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902834)); /* fadd dword ptr [0x902834] */
    fp_push(MEMF(0x902808)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x902818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x902828)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x902838)); /* fadd dword ptr [0x902838] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B040
 * Original: 0x0006B040 - 0x0006B0A4 (100 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006B040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006B040: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30)); /* fadd dword ptr [eax + 0x30] */
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B0B0
 * Original: 0x0006B0B0 - 0x0006B0B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B0B0: ;
    edx = ecx;
    g_seh_ebp = ebp; sub_0006ADF0(); return; /* tail jmp 0x0006ADF0 */

}

/**
 * sub_0006B0C0
 * Original: 0x0006B0C0 - 0x0006B0E5 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B0E0; /* jle: less or equal (signed <=) */

loc_0006B0CC: ;
    /* nop */

loc_0006B0D0: ;
    ecx = esi;
    PUSH32(esp, 0x0006B0D7u); RECOMP_ABI_CALL(0x0006ADF0u, sub_0006ADF0); /* call 0x0006ADF0 */

loc_0006B0D7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006B0D0; /* jne: not equal / not zero */

loc_0006B0E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B0F0
 * Original: 0x0006B0F0 - 0x0006B0F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B0F0: ;
    edx = ecx;
    g_seh_ebp = ebp; sub_0006AE70(); return; /* tail jmp 0x0006AE70 */

}

/**
 * sub_0006B100
 * Original: 0x0006B100 - 0x0006B125 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B120; /* jle: less or equal (signed <=) */

loc_0006B10C: ;
    /* nop */

loc_0006B110: ;
    ecx = esi;
    PUSH32(esp, 0x0006B117u); RECOMP_ABI_CALL(0x0006AE70u, sub_0006AE70); /* call 0x0006AE70 */

loc_0006B117: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006B110; /* jne: not equal / not zero */

loc_0006B120: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B130
 * Original: 0x0006B130 - 0x0006B155 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B150; /* jle: less or equal (signed <=) */

loc_0006B13C: ;
    /* nop */

loc_0006B140: ;
    ecx = esi;
    PUSH32(esp, 0x0006B147u); RECOMP_ABI_CALL(0x0006AEE0u, sub_0006AEE0); /* call 0x0006AEE0 */

loc_0006B147: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006B140; /* jne: not equal / not zero */

loc_0006B150: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B160
 * Original: 0x0006B160 - 0x0006B1A7 (71 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006B160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006B160: ;
    fp_push(MEMF(0x902804)); /* fld float */
    eax = MEM32(0x902810);
    ecx = MEM32(0x902820);
    MEMF(0x902810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902808)); /* fld float */
    edx = MEM32(0x902824);
    MEMF(0x902820) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x902804) = eax;
    fp_push(MEMF(0x902818)); /* fld float */
    MEM32(0x902808) = ecx;
    MEMF(0x902824) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x902818) = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B1B0
 * Original: 0x0006B1B0 - 0x0006B23D (141 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006B1B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006B1B0: ;
    fp_push(MEMF(0x902804)); /* fld float */
    eax = MEM32(0x902810);
    ecx = MEM32(0x902820);
    MEMF(0x902810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x902808)); /* fld float */
    edx = MEM32(0x902830);
    MEMF(0x902820) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x902804) = eax;
    fp_push(MEMF(0x90280C)); /* fld float */
    eax = MEM32(0x902824);
    MEMF(0x902830) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x902808) = ecx;
    fp_push(MEMF(0x902818)); /* fld float */
    ecx = MEM32(0x902834);
    MEMF(0x902824) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x90280C) = edx;
    fp_push(MEMF(0x90281C)); /* fld float */
    edx = MEM32(0x902838);
    MEMF(0x902834) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x902818) = eax;
    fp_push(MEMF(0x90282C)); /* fld float */
    MEM32(0x90281C) = ecx;
    MEMF(0x902838) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x90282C) = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B240
 * Original: 0x0006B240 - 0x0006B83A (1530 bytes, 468 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B240: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    PUSH32(esp, esi);
    ebx = 0x9026E0;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0006B288; /* jne: not equal / not zero */

loc_0006B259: ;
    ecx = ebx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B288; /* jne: not equal / not zero */

loc_0006B260: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    XMM_STORE(ecx + 0x30, xmm3); /* movaps */
    goto loc_0006B296;

loc_0006B288: ;
    ecx = 0x10;
    esi = eax;
    edi = 0x9026E0;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_0006B296: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006B2A0;

    /* nop */

loc_0006B2A0: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(ecx * 4 + 0x9026E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B2C4; /* je: equal / zero */

loc_0006B2BE: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */

loc_0006B2C4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B2D7; /* jne: not equal / not zero */

loc_0006B2D1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0006B2D7: ;
    fp_push(MEMF(ecx * 4 + 0x9026F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B2F5; /* je: equal / zero */

loc_0006B2EF: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */

loc_0006B2F5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B304; /* jne: not equal / not zero */

loc_0006B2FE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0006B304: ;
    fp_push(MEMF(ecx * 4 + 0x902700)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B322; /* je: equal / zero */

loc_0006B31C: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */

loc_0006B322: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B331; /* jne: not equal / not zero */

loc_0006B32B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0006B331: ;
    fp_push(MEMF(ecx * 4 + 0x902710)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B34F; /* je: equal / zero */

loc_0006B349: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */

loc_0006B34F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B35E; /* jne: not equal / not zero */

loc_0006B358: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0006B35E: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006B827; /* jnp: not parity */

loc_0006B373: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    MEM32(esp + ecx * 4 + 0x30) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEMF(esp + ecx * 4 + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B2A0; /* jl: less (signed <) */

loc_0006B38F: ;
    MEM32(0x90280C) = 0;
    MEM32(0x90281C) = 0;
    MEM32(0x90282C) = 0;
    MEM32(0x902830) = 0;
    MEM32(0x902834) = 0;
    MEM32(0x902838) = 0;
    MEM32(0x90283C) = 0x3F800000;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 4;
    PUSH32(esp, ebp);

loc_0006B3E0: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x235A58)); /* fld float */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ecx = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006B4CB; /* jl: less (signed <) */

loc_0006B3F7: ;
    goto loc_0006B400;

    /* nop */

loc_0006B400: ;
    edx = MEM32(esp + ecx * 4 + 0x34);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B416; /* je: equal / zero */

loc_0006B414: ;
    fp_top() = -fp_top(); /* fchs */

loc_0006B416: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + edx * 4 + 0x44)); /* fmul dword ptr [esp + edx*4 + 0x44] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B42F; /* jne: not equal / not zero */

loc_0006B427: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0006B42F: ;
    edx = MEM32(esp + ecx * 4 + 0x38);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B445; /* je: equal / zero */

loc_0006B443: ;
    fp_top() = -fp_top(); /* fchs */

loc_0006B445: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + edx * 4 + 0x44)); /* fmul dword ptr [esp + edx*4 + 0x44] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B45F; /* jne: not equal / not zero */

loc_0006B456: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx + 1;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0006B45F: ;
    edx = MEM32(esp + ecx * 4 + 0x3C);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B475; /* je: equal / zero */

loc_0006B473: ;
    fp_top() = -fp_top(); /* fchs */

loc_0006B475: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + edx * 4 + 0x44)); /* fmul dword ptr [esp + edx*4 + 0x44] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B48F; /* jne: not equal / not zero */

loc_0006B486: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx + 2;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0006B48F: ;
    edx = MEM32(esp + ecx * 4 + 0x40);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B4A5; /* je: equal / zero */

loc_0006B4A3: ;
    fp_top() = -fp_top(); /* fchs */

loc_0006B4A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + edx * 4 + 0x44)); /* fmul dword ptr [esp + edx*4 + 0x44] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B4BF; /* jne: not equal / not zero */

loc_0006B4B6: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx + 3;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0006B4BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B400; /* jl: less (signed <) */

loc_0006B4CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B505; /* jge: greater or equal (signed >=) */

loc_0006B4D0: ;
    edx = MEM32(esp + ecx * 4 + 0x34);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B4E6; /* je: equal / zero */

loc_0006B4E4: ;
    fp_top() = -fp_top(); /* fchs */

loc_0006B4E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + edx * 4 + 0x44)); /* fmul dword ptr [esp + edx*4 + 0x44] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B4FF; /* jne: not equal / not zero */

loc_0006B4F7: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0006B4FF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B4D0; /* jl: less (signed <) */

loc_0006B505: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    fp_pop(); /* fstp st(0) */
    ebp = MEM32(esp + esi * 4 + 0x34);
    eax = esp + esi * 4 + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_0006B51D; /* je: equal / zero */

loc_0006B513: ;
    edx = MEM32(esp + edi * 4 + 0x34);
    MEM32(eax) = edx;
    MEM32(esp + edi * 4 + 0x34) = ebp;

loc_0006B51D: ;
    fp_push(MEMF(ebx + ebp * 4)); /* fld float */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006B830; /* jnp: not parity */

loc_0006B535: ;
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0006B61C; /* jge: greater or equal (signed >=) */

loc_0006B549: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    /* nop */

loc_0006B550: ;
    eax = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = MEM32(esp + eax * 4 + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + edi * 4)); /* fmul dword ptr [ebx + edi*4] */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0006B5CF; /* jl: less (signed <) */

loc_0006B572: ;
    esi = ecx;
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi + ecx * 4;
    edx = ebp + ecx * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax * 4 + 0x902700;
    edx = edx * 4 + 0x902700;
    ecx = ecx + esi * 4;

loc_0006B592: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -96)); /* fmul dword ptr [edx - 0x60] */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(MEMF(eax + -96) - fp_top()); /* fsubr dword ptr [eax - 0x60] */
    MEMF(eax + -96) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -80)); /* fmul dword ptr [edx - 0x50] */
    fp_top() = RECOMP_FP_PC(MEMF(eax + -80) - fp_top()); /* fsubr dword ptr [eax - 0x50] */
    MEMF(eax + -80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -64)); /* fmul dword ptr [edx - 0x40] */
    fp_top() = RECOMP_FP_PC(MEMF(eax + -64) - fp_top()); /* fsubr dword ptr [eax - 0x40] */
    MEMF(eax + -64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -48)); /* fmul dword ptr [edx - 0x30] */
    fp_top() = RECOMP_FP_PC(MEMF(eax + -48) - fp_top()); /* fsubr dword ptr [eax - 0x30] */
    MEMF(eax + -48) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0006B592; /* jne: not equal / not zero */

loc_0006B5CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B606; /* jge: greater or equal (signed >=) */

loc_0006B5D4: ;
    eax = edi + ecx * 4;
    esi = ebp + ecx * 4;
    edx = 4;
    eax = eax * 4 + 0x9026E0;
    esi = esi * 4 + 0x9026E0;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006B5F0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -16)); /* fmul dword ptr [esi - 0x10] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(MEMF(eax + -16) - fp_top()); /* fsubr dword ptr [eax - 0x10] */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0006B5F0; /* jne: not equal / not zero */

loc_0006B606: ;
    eax = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0006B550; /* jl: less (signed <) */

loc_0006B618: ;
    eax = MEM32(esp + 0x20);

loc_0006B61C: ;
    ecx = MEM32(esp + 0x14);
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902720) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x902720 (32-bit) */
    edi = eax;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0006B3E0; /* jl: less (signed <) */

loc_0006B638: ;
    eax = esp + 0x40;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0x902800;
    MEM32(esp + 0x30) = eax;
    eax = ebp;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = 4;
    goto loc_0006B670;

loc_0006B666: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x20);
    edi = edi;

loc_0006B670: ;
    ecx = esp + eax + 0x34;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x28) = ecx;
    edi = edi;

loc_0006B680: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x28);
    ebx = MEM32(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B699; /* jne: not equal / not zero */

loc_0006B691: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    goto loc_0006B69F;

loc_0006B699: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */

loc_0006B69F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B6E9; /* jl: less (signed <) */

loc_0006B6A6: ;
    edx = edi + -4;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp + 8;
    eax = ebx * 4 + 0x902700;
    esi = edx * 4;
    edi = edi;

loc_0006B6C0: ;
    fp_push(MEMF(eax + -32)); /* fld float */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -8)); /* fmul dword ptr [ecx - 8] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + -80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -20)); /* fmul dword ptr [ecx - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + -64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -16)); /* fmul dword ptr [ecx - 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -12)); /* fmul dword ptr [ecx - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    if ((_fa != 0)) goto loc_0006B6C0; /* jne: not equal / not zero */

loc_0006B6E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B707; /* jge: greater or equal (signed >=) */

loc_0006B6ED: ;
    eax = ebx + esi * 4;
    eax = eax * 4 + 0x9026E0;

loc_0006B6F7: ;
    fp_push(MEMF(ebp + esi * 4)); /* fld float */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B6F7; /* jl: less (signed <) */

loc_0006B707: ;
    eax = MEM32(esp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0006B680; /* jl: less (signed <) */

loc_0006B71E: ;
    ebx = 4;
    MEM32(esp + 0x24) = 0xC;
    edi = ebp + 0xC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x28) = ebx;
    /* nop */

loc_0006B740: ;
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(esp + 0x30);
    eax = ecx + edi + 4;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 4 (32-bit) */
    ebp = MEM32(eax + edx);
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0006B79A; /* jl: less (signed <) */

loc_0006B75A: ;
    edx = ebx;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi + 0xC;
    eax = eax * 4 + 0x902700;
    esi = ebx + edx * 4;

loc_0006B771: ;
    fp_push(MEMF(ecx + -8)); /* fld float */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -96)); /* fmul dword ptr [eax - 0x60] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ecx + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -80)); /* fmul dword ptr [eax - 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + -64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -16)); /* fmul dword ptr [ecx - 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ecx + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -48)); /* fmul dword ptr [eax - 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    if ((_fa != 0)) goto loc_0006B771; /* jne: not equal / not zero */

loc_0006B79A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B7C0; /* jge: greater or equal (signed >=) */

loc_0006B79F: ;
    ecx = MEM32(esp + 0x20);
    eax = ebp + esi * 4;
    eax = eax * 4 + 0x9026E0;
    edi = edi;

loc_0006B7B0: ;
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B7B0; /* jl: less (signed <) */

loc_0006B7C0: ;
    eax = MEM32(esp + 0x24);
    ecx = eax + ebp;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx * 4 + 0x9026E0)); /* fdiv dword ptr [ecx*4 + 0x9026e0] */
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x28);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x28) = eax;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0006B740; /* jne: not equal / not zero */

loc_0006B7F4: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x2C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_0006B666; /* jne: not equal / not zero */

loc_0006B81F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006B827: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006B830: ;
    POP32(esp, ebp);
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B840
 * Original: 0x0006B840 - 0x0006BBA9 (873 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0006B840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    eax = MEM32(esp + 0x1C);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_MEM(eax + 0x20); /* movaps */
    xmm0 = XMM_CMP_PRED(xmm0, xmm1, 4); /* cmpneqps */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_CMP_PRED(xmm2, xmm3, 4); /* cmpneqps */
    xmm0 = XMM_OR(xmm0, xmm2); /* orps */
    xmm4 = XMM_CMP_PRED(xmm4, xmm5, 4); /* cmpneqps */
    eax = esp;
    xmm0 = XMM_OR(xmm0, xmm4); /* orps */
    XMM_STORE(eax, xmm0); /* movaps */
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BBA0; /* jne: not equal / not zero */

loc_0006B88B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BBA0; /* jne: not equal / not zero */

loc_0006B897: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BBA0; /* jne: not equal / not zero */

loc_0006B8A3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BBA0; /* jne: not equal / not zero */

loc_0006B8AF: ;
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_LOAD_LOW(xmm2, ecx); /* movlps */
    XMM_LOAD_HIGH(xmm2, ecx + 0x10); /* movhps */
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_LOAD_LOW(xmm1, ecx + 0x20); /* movlps */
    XMM_LOAD_HIGH(xmm1, ecx + 0x30); /* movhps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x88); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0xDD); /* shufps */
    XMM_LOAD_LOW(xmm2, ecx + 8); /* movlps */
    xmm4 = xmm2; /* movaps */
    XMM_LOAD_HIGH(xmm4, ecx + 0x18); /* movhps */
    xmm2 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_LOAD_LOW(xmm2, ecx + 0x28); /* movlps */
    XMM_LOAD_HIGH(xmm2, ecx + 0x38); /* movhps */
    xmm3 = xmm4; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm2, 0x88); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm4, 0xDD); /* shufps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0xB1); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    XMM_STORE(esp, xmm5); /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm4); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0x4E); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm5 = XMM_SUB(xmm5, XMM_MEM(esp)); /* subps */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    xmm4 = xmm7; /* movaps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    XMM_STORE(esp + 0xD0, xmm4); /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0xB1); /* shufps */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0x50, xmm7); /* movaps */
    xmm6 = xmm2; /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm4); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0x4E); /* shufps */
    xmm7 = xmm2; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0x40, xmm7); /* movaps */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    xmm4 = xmm7; /* movaps */
    xmm4 = XMM_SUB(xmm4, XMM_MEM(esp + 0x50)); /* subps */
    XMM_STORE(esp + 0x50, xmm4); /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm1, 0x4E); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0xB1); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0x4E); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0x30, xmm7); /* movaps */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0x70, xmm7); /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm4, 0x4E); /* shufps */
    XMM_STORE(esp + 0x20, xmm7); /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm7); /* mulps */
    xmm7 = xmm4; /* movaps */
    xmm4 = XMM_MEM(esp + 0x30); /* movaps */
    xmm6 = XMM_ADD(xmm6, xmm5); /* addps */
    xmm6 = XMM_SUB(xmm6, XMM_MEM(esp + 0x40)); /* subps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm4 = XMM_SUB(xmm4, xmm7); /* subps */
    XMM_STORE(esp, xmm4); /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_MUL(xmm4, XMM_MEM(esp + 0x20)); /* mulps */
    xmm4 = XMM_SUB(xmm4, XMM_MEM(esp + 0x70)); /* subps */
    XMM_STORE(esp + 0x70, xmm4); /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm1); /* mulps */
    xmm6 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0xB1); /* shufps */
    xmm5 = xmm2; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm6 = XMM_MUL(xmm6, xmm4); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0x4E); /* shufps */
    xmm7 = xmm2; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0xA0, xmm7); /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0xB0, xmm7); /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0xB1); /* shufps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0x30, xmm7); /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0xC0, xmm7); /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0x4E); /* shufps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    XMM_STORE(esp + 0x40, xmm7); /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm4); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm3 = xmm4; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm4, 0xB1); /* shufps */
    xmm4 = xmm2; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    XMM_STORE(esp + 0x90, xmm7); /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm3); /* mulps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0x4E); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    XMM_STORE(esp + 0x80, xmm2); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    XMM_STORE(esp + 0x60, xmm7); /* movaps */
    xmm7 = XMM_MEM(esp); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm7); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x4E); /* shufps */
    xmm3 = xmm2; /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm0); /* addps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm3, 0xB1); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm2.f[0] = recomp_rcpss(xmm0.f[0]); /* rcpss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_MEM(esp + 0xD0); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm7); /* mulps */
    eax = 0x902800;
    XMM_STORE_LOW(eax, xmm3); /* movlps */
    ecx = 0x902808;
    XMM_STORE_HIGH(ecx, xmm3); /* movhps */
    xmm3 = xmm2; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm2, 0x4E); /* shufps */
    xmm3 = XMM_SUB(xmm3, XMM_MEM(esp + 0x30)); /* subps */
    xmm2 = xmm3; /* movaps */
    xmm3 = XMM_MEM(esp + 0x40); /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    xmm4 = XMM_ADD(xmm4, xmm3); /* addps */
    xmm4 = XMM_SUB(xmm4, XMM_MEM(esp + 0x80)); /* subps */
    xmm2 = xmm0; /* movaps */
    edx = 0x902810;
    xmm2 = XMM_MUL(xmm2, xmm4); /* mulps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    eax = 0x902818;
    XMM_STORE_HIGH(eax, xmm2); /* movhps */
    xmm2 = XMM_MEM(esp + 0x70); /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm2, 0x4E); /* shufps */
    xmm2 = XMM_MEM(esp + 0xA0); /* movaps */
    xmm5 = XMM_ADD(xmm5, xmm3); /* addps */
    xmm2 = XMM_SUB(xmm2, xmm5); /* subps */
    xmm3 = xmm2; /* movaps */
    xmm2 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    xmm2 = XMM_SUB(xmm2, XMM_MEM(esp + 0x90)); /* subps */
    xmm3 = xmm2; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    ecx = 0x902820;
    XMM_STORE_LOW(ecx, xmm2); /* movlps */
    edx = 0x902828;
    XMM_STORE_HIGH(edx, xmm2); /* movhps */
    xmm2 = XMM_MEM(esp + 0x50); /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm2, 0x4E); /* shufps */
    xmm6 = XMM_SUB(xmm6, xmm3); /* subps */
    xmm6 = XMM_SUB(xmm6, XMM_MEM(esp + 0xB0)); /* subps */
    xmm6 = XMM_SUB(xmm6, XMM_MEM(esp + 0x60)); /* subps */
    xmm1 = XMM_ADD(xmm1, xmm6); /* addps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = 0x902830;
    ecx = 0x902838;
    XMM_STORE_LOW(eax, xmm0); /* movlps */
    XMM_STORE_HIGH(ecx, xmm0); /* movhps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0006BBA0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BBA5u); RECOMP_ABI_CALL(0x0006B240u, sub_0006B240); /* call 0x0006B240 */

loc_0006BBA5: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BBB0
 * Original: 0x0006BBB0 - 0x0006BC01 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006BBB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x902800 (32-bit) */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BBE1; /* je: equal / zero */

loc_0006BBD5: ;
    edx = ecx;
    ecx = 0x902800;
    PUSH32(esp, 0x0006BBE1u); RECOMP_ABI_CALL(0x0006A2E0u, sub_0006A2E0); /* call 0x0006A2E0 */

loc_0006BBE1: ;
    MEM32(0x90283C) = 0x3F800000;
    PUSH32(esp, 0x0006BBF0u); RECOMP_ABI_CALL(0x0006B160u, sub_0006B160); /* call 0x0006B160 */

loc_0006BBF0: ;
    edx = 0x902830;
    ecx = esp;
    PUSH32(esp, 0x0006BBFDu); RECOMP_ABI_CALL(0x0006AE70u, sub_0006AE70); /* call 0x0006AE70 */

loc_0006BBFD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BC10
 * Original: 0x0006BC10 - 0x0006BCF4 (228 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006BC10: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006BC28; /* je: equal / zero */

loc_0006BC22: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    edi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0006BC2D; /* jne: not equal / not zero */

loc_0006BC28: ;
    edi = 0x9026E0;

loc_0006BC2D: ;
    PUSH32(esp, esi);
    edx = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 3;

loc_0006BC38: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -4)); /* fmul dword ptr [eax - 4] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -20)); /* fmul dword ptr [eax - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -20)); /* fmul dword ptr [eax - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0006BC38; /* jne: not equal / not zero */

loc_0006BC90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006BCF1; /* je: equal / zero */

loc_0006BC95: ;
    eax = MEM32(edi);
    MEM32(ebx) = eax;
    edx = MEM32(edi + 4);
    MEM32(ebx + 4) = edx;
    ecx = edi + 4;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 4;
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_0006BCF1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BD00
 * Original: 0x0006BD00 - 0x0006BD11 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BD00(void)
{

loc_0006BD00: ;
    PUSH32(esp, 0x902800);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006BD10u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_0006BD10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD20
 * Original: 0x0006BD20 - 0x0006BD31 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BD20(void)
{

loc_0006BD20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006BD30u); RECOMP_ABI_CALL(0x000B5EE4u, sub_000B5EE4); /* call 0x000B5EE4 */

loc_0006BD30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD40
 * Original: 0x0006BD40 - 0x0006BD54 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BD40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006BD50u); RECOMP_ABI_CALL(0x0006BC10u, sub_0006BC10); /* call 0x0006BC10 */

loc_0006BD50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD60
 * Original: 0x0006BD60 - 0x0006BD74 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BD60: ;
    PUSH32(esp, 0x902800);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006BD70u); RECOMP_ABI_CALL(0x0006BC10u, sub_0006BC10); /* call 0x0006BC10 */

loc_0006BD70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD80
 * Original: 0x0006BD80 - 0x0006BE10 (144 bytes, 47 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006BD80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006BD80: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    ecx = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    MEM32(esp + 4) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BE10
 * Original: 0x0006BE10 - 0x0006BE9D (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006BE10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006BE10: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x28);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    MEM32(esp + 4) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BEA0
 * Original: 0x0006BEA0 - 0x0006BF2A (138 bytes, 46 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006BEA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006BEA0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 4) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BF30
 * Original: 0x0006BF30 - 0x0006C042 (274 bytes, 71 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006BF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006BF30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx + 4);
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEM32(esp) = eax;
    fp_push(MEMF(edx)); /* fld float */
    edx = MEM32(edx + 8);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x902720);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x90272C) = 0;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(0x90273C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEM32(0x90274C) = 0;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(0x902720) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(0x902724) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(0x902728) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(0x902730) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(0x902734) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(0x902738) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(0x902740) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(0x902744) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(0x902748) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C03Cu); RECOMP_ABI_CALL(0x0006BC10u, sub_0006BC10); /* call 0x0006BC10 */

loc_0006C03C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C050
 * Original: 0x0006C050 - 0x0006C07E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C050: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C066u); RECOMP_ABI_CALL(0x0006A130u, sub_0006A130); /* call 0x0006A130 */

loc_0006C066: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006C07Au); RECOMP_ABI_CALL(0x0006BD80u, sub_0006BD80); /* call 0x0006BD80 */

loc_0006C07A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C080
 * Original: 0x0006C080 - 0x0006C0AE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C080: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C096u); RECOMP_ABI_CALL(0x0006A240u, sub_0006A240); /* call 0x0006A240 */

loc_0006C096: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006C0AAu); RECOMP_ABI_CALL(0x0006BD80u, sub_0006BD80); /* call 0x0006BD80 */

loc_0006C0AA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C0B0
 * Original: 0x0006C0B0 - 0x0006C0DE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C0B0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C0C6u); RECOMP_ABI_CALL(0x0006A130u, sub_0006A130); /* call 0x0006A130 */

loc_0006C0C6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006C0DAu); RECOMP_ABI_CALL(0x0006BE10u, sub_0006BE10); /* call 0x0006BE10 */

loc_0006C0DA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C0E0
 * Original: 0x0006C0E0 - 0x0006C10E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C0E0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C0F6u); RECOMP_ABI_CALL(0x0006A240u, sub_0006A240); /* call 0x0006A240 */

loc_0006C0F6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006C10Au); RECOMP_ABI_CALL(0x0006BE10u, sub_0006BE10); /* call 0x0006BE10 */

loc_0006C10A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C110
 * Original: 0x0006C110 - 0x0006C13E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C110: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C126u); RECOMP_ABI_CALL(0x0006A130u, sub_0006A130); /* call 0x0006A130 */

loc_0006C126: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006C13Au); RECOMP_ABI_CALL(0x0006BEA0u, sub_0006BEA0); /* call 0x0006BEA0 */

loc_0006C13A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C140
 * Original: 0x0006C140 - 0x0006C16E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C140: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C156u); RECOMP_ABI_CALL(0x0006A240u, sub_0006A240); /* call 0x0006A240 */

loc_0006C156: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 0x0006C16Au); RECOMP_ABI_CALL(0x0006BEA0u, sub_0006BEA0); /* call 0x0006BEA0 */

loc_0006C16A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C170
 * Original: 0x0006C170 - 0x0006C1D7 (103 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0006C180; /* jne: not equal / not zero */

loc_0006C17B: ;
    esi = 0x902800;

loc_0006C180: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(esi + 0x28);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    ecx = MEM32(esi + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, ecx);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0006C1A5u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006C1A5: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(edi) = eax;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C1BCu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006C1BC: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi + 4) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C1CDu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006C1CD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C1E0
 * Original: 0x0006C1E0 - 0x0006C224 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006C1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C1E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C1E9; /* jne: not equal / not zero */

loc_0006C1E4: ;
    ecx = 0x902800;

loc_0006C1E9: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C230
 * Original: 0x0006C230 - 0x0006C28C (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C230: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0006C23F; /* jne: not equal / not zero */

loc_0006C23A: ;
    esi = 0x902800;

loc_0006C23F: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(esi + 0x24);
    fp_push(MEMF(esi + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C262u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006C262: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C273u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006C273: ;
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C283u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006C283: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C290
 * Original: 0x0006C290 - 0x0006C2D3 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006C290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C290: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C299; /* jne: not equal / not zero */

loc_0006C294: ;
    ecx = 0x902800;

loc_0006C299: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C2E0
 * Original: 0x0006C2E0 - 0x0006C315 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C2E0: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C2F6u); RECOMP_ABI_CALL(0x0006A130u, sub_0006A130); /* call 0x0006A130 */

loc_0006C2F6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x902800;
    PUSH32(esp, 0x0006C311u); RECOMP_ABI_CALL(0x0006BF30u, sub_0006BF30); /* call 0x0006BF30 */

loc_0006C311: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C320
 * Original: 0x0006C320 - 0x0006C355 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C320: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C336u); RECOMP_ABI_CALL(0x0006A240u, sub_0006A240); /* call 0x0006A240 */

loc_0006C336: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x902800;
    PUSH32(esp, 0x0006C351u); RECOMP_ABI_CALL(0x0006BF30u, sub_0006BF30); /* call 0x0006BF30 */

loc_0006C351: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C360
 * Original: 0x0006C360 - 0x0006C3B4 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C360: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x7C;
    PUSH32(esp, 0x0006C36Bu); RECOMP_ABI_CALL(0x0006D540u, sub_0006D540); /* call 0x0006D540 */

loc_0006C36B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F800000;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x18) = eax;
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi) = 0x42100000;
    MEM32(esi + 0xC) = 0x42100000;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C3C0
 * Original: 0x0006C3C0 - 0x0006C40D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C3C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x7C;
    PUSH32(esp, 0x0006C3CCu); RECOMP_ABI_CALL(0x0006D780u, sub_0006D780); /* call 0x0006D780 */

loc_0006C3CC: ;
    eax = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x94) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM16(esi + 0x24) = LO16(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C3FC; /* je: equal / zero */

loc_0006C3F0: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C3F9u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006C3F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006C3FC: ;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x98) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C410
 * Original: 0x0006C410 - 0x0006C421 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C410(void)
{

loc_0006C410: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C430
 * Original: 0x0006C430 - 0x0006C43A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C430(void)
{

loc_0006C430: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C440
 * Original: 0x0006C440 - 0x0006C541 (257 bytes, 85 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C440: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C537; /* je: equal / zero */

loc_0006C44E: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C537; /* je: equal / zero */

loc_0006C45A: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C537; /* je: equal / zero */

loc_0006C466: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    MEM32(esi) = 0;
    MEM32(edi) = 0;
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = eax;
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C533; /* je: equal / zero */

loc_0006C48A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);

loc_0006C490: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C4B0; /* jne: not equal / not zero */

loc_0006C499: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C51C; /* jne: not equal / not zero */

loc_0006C49F: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006C4B0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x24) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006C4D5; /* ja: above (unsigned >) */

loc_0006C4B6: ;
    ebp = MEM32(ecx + 0x28);
    eax = ZX16(LO16(eax));
    SET_LO16(eax, MEM16(ebp + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C4D5; /* je: equal / zero */

loc_0006C4C6: ;
    ebp = MEM32(ecx + 0x34);
    eax = SX16(LO16(eax));
    eax = eax + eax * 2;
    eax = ebp + eax * 8;
    goto loc_0006C4D8;

loc_0006C4D5: ;
    eax = MEM32(ecx + 0x34);

loc_0006C4D8: ;
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    MEM32(esp + 0x18) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x18)); /* fiadd dword ptr [esp + 0x18] */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x18)); /* fiadd dword ptr [esp + 0x18] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C4FB; /* jne: not equal / not zero */

loc_0006C4F9: ;
    MEMF(esi) = (float)fp_top(); /* fst */

loc_0006C4FB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C50E; /* jne: not equal / not zero */

loc_0006C508: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi) = eax;

loc_0006C50E: ;
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C490; /* jne: not equal / not zero */

loc_0006C51A: ;
    fp_pop(); /* fstp st(0) */

loc_0006C51C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006C51E: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0006C533: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0006C51E;

loc_0006C537: ;
    POP32(esp, edi);
    eax = 0x80070057u;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C550
 * Original: 0x0006C550 - 0x0006C582 (50 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C550: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0006C579u); RECOMP_ABI_CALL(0x0006C440u, sub_0006C440); /* call 0x0006C440 */

loc_0006C579: ;
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C590
 * Original: 0x0006C590 - 0x0006C59A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C590(void)
{

loc_0006C590: ;
    ecx = MEM32(eax * 4 + 0x180BB0);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006C5A0
 * Original: 0x0006C5A0 - 0x0006C5B3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C5A0: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x1809B0);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0006C5C0
 * Original: 0x0006C5C0 - 0x0006C7BC (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C5C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C5DB; /* jge: greater or equal (signed >=) */

loc_0006C5C5: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x0006C5D3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006C5D3: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006C5DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C600; /* jge: greater or equal (signed >=) */

loc_0006C5E3: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006C600: ;
    if (CMP_NE(_fa, _fb)) goto loc_0006C609; /* jne: not equal / not zero */

loc_0006C602: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C608u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_0006C608: ;
    esp += 4; return; /* ret */

loc_0006C609: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C618; /* jne: not equal / not zero */

loc_0006C611: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C617u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_0006C617: ;
    esp += 4; return; /* ret */

loc_0006C618: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C627; /* jne: not equal / not zero */

loc_0006C620: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C626u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_0006C626: ;
    esp += 4; return; /* ret */

loc_0006C627: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C636; /* jne: not equal / not zero */

loc_0006C62F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C635u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_0006C635: ;
    esp += 4; return; /* ret */

loc_0006C636: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C645; /* jne: not equal / not zero */

loc_0006C63E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C644u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_0006C644: ;
    esp += 4; return; /* ret */

loc_0006C645: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C654; /* jne: not equal / not zero */

loc_0006C64D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C653u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_0006C653: ;
    esp += 4; return; /* ret */

loc_0006C654: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C663; /* jne: not equal / not zero */

loc_0006C65C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C662u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_0006C662: ;
    esp += 4; return; /* ret */

loc_0006C663: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C672; /* jne: not equal / not zero */

loc_0006C66B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C671u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0006C671: ;
    esp += 4; return; /* ret */

loc_0006C672: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C681; /* jne: not equal / not zero */

loc_0006C67A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C680u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_0006C680: ;
    esp += 4; return; /* ret */

loc_0006C681: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C690; /* jne: not equal / not zero */

loc_0006C689: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C68Fu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_0006C68F: ;
    esp += 4; return; /* ret */

loc_0006C690: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C69F; /* jne: not equal / not zero */

loc_0006C698: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C69Eu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006C69E: ;
    esp += 4; return; /* ret */

loc_0006C69F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C6AE; /* jne: not equal / not zero */

loc_0006C6A7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C6ADu); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_0006C6AD: ;
    esp += 4; return; /* ret */

loc_0006C6AE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C6BD; /* jne: not equal / not zero */

loc_0006C6B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C6BCu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006C6BC: ;
    esp += 4; return; /* ret */

loc_0006C6BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C6CC; /* jne: not equal / not zero */

loc_0006C6C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C6CBu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_0006C6CB: ;
    esp += 4; return; /* ret */

loc_0006C6CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C6DB; /* jne: not equal / not zero */

loc_0006C6D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C6DAu); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_0006C6DA: ;
    esp += 4; return; /* ret */

loc_0006C6DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C6EA; /* jne: not equal / not zero */

loc_0006C6E3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C6E9u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_0006C6E9: ;
    esp += 4; return; /* ret */

loc_0006C6EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C6F9; /* jne: not equal / not zero */

loc_0006C6F2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C6F8u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_0006C6F8: ;
    esp += 4; return; /* ret */

loc_0006C6F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C708; /* jne: not equal / not zero */

loc_0006C701: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C707u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_0006C707: ;
    esp += 4; return; /* ret */

loc_0006C708: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C717; /* jne: not equal / not zero */

loc_0006C710: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C716u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_0006C716: ;
    esp += 4; return; /* ret */

loc_0006C717: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C726; /* jne: not equal / not zero */

loc_0006C71F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C725u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_0006C725: ;
    esp += 4; return; /* ret */

loc_0006C726: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C735; /* jne: not equal / not zero */

loc_0006C72E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C734u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_0006C734: ;
    esp += 4; return; /* ret */

loc_0006C735: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C744; /* jne: not equal / not zero */

loc_0006C73D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C743u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0006C743: ;
    esp += 4; return; /* ret */

loc_0006C744: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C753; /* jne: not equal / not zero */

loc_0006C74C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C752u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_0006C752: ;
    esp += 4; return; /* ret */

loc_0006C753: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C762; /* jne: not equal / not zero */

loc_0006C75B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C761u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_0006C761: ;
    esp += 4; return; /* ret */

loc_0006C762: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C771; /* jne: not equal / not zero */

loc_0006C76A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C770u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_0006C770: ;
    esp += 4; return; /* ret */

loc_0006C771: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C780; /* jne: not equal / not zero */

loc_0006C779: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C77Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_0006C77F: ;
    esp += 4; return; /* ret */

loc_0006C780: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C78F; /* jne: not equal / not zero */

loc_0006C788: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C78Eu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_0006C78E: ;
    esp += 4; return; /* ret */

loc_0006C78F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C79E; /* jne: not equal / not zero */

loc_0006C797: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C79Du); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_0006C79D: ;
    esp += 4; return; /* ret */

loc_0006C79E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C7AD; /* jne: not equal / not zero */

loc_0006C7A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C7ACu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_0006C7AC: ;
    esp += 4; return; /* ret */

loc_0006C7AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C7BB; /* jne: not equal / not zero */

loc_0006C7B5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C7BBu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_0006C7BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006C7C0
 * Original: 0x0006C7C0 - 0x0006C836 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C7C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0006C7EB; /* jge: greater or equal (signed >=) */

loc_0006C7C7: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0006C7CE: ;
    edi = MEM32(0x1809A8);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1809A8) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x1809B0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006C7EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C7F9; /* jge: greater or equal (signed >=) */

loc_0006C7F0: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_0006C7CE;

loc_0006C7F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C808; /* jne: not equal / not zero */

loc_0006C7FE: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C805u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0006C805: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006C808: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C817; /* jne: not equal / not zero */

loc_0006C80D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C814u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_0006C814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006C817: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C826; /* jne: not equal / not zero */

loc_0006C81C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C823u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_0006C823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006C826: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006C833; /* jg: greater (signed >) */

loc_0006C82B: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C833u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_0006C833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C840
 * Original: 0x0006C840 - 0x0006C84F (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C84Au); RECOMP_ABI_CALL(0x00162AC0u, sub_00162AC0); /* call 0x00162AC0 */

loc_0006C84A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C850
 * Original: 0x0006C850 - 0x0006C860 (16 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C850: ;
    PUSH32(esp, 0x0006C855u); RECOMP_ABI_CALL(0x00164580u, sub_00164580); /* call 0x00164580 */

loc_0006C855: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C860
 * Original: 0x0006C860 - 0x0006C880 (32 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C860: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C86Au); RECOMP_ABI_CALL(0x001645C0u, sub_001645C0); /* call 0x001645C0 */

loc_0006C86A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0006C880
 * Original: 0x0006C880 - 0x0006C894 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C880: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C88Fu); RECOMP_ABI_CALL(0x0016A1B0u, sub_0016A1B0); /* call 0x0016A1B0 */

loc_0006C88F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C8A0
 * Original: 0x0006C8A0 - 0x0006C8AF (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C8A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C8AAu); RECOMP_ABI_CALL(0x0016A660u, sub_0016A660); /* call 0x0016A660 */

loc_0006C8AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C8B0
 * Original: 0x0006C8B0 - 0x0006C8D3 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C8B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C8CEu); RECOMP_ABI_CALL(0x00166900u, sub_00166900); /* call 0x00166900 */

loc_0006C8CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0006C8E0
 * Original: 0x0006C8E0 - 0x0006C8F4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C8E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C8EFu); RECOMP_ABI_CALL(0x00166A40u, sub_00166A40); /* call 0x00166A40 */

loc_0006C8EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C900
 * Original: 0x0006C900 - 0x0006C90F (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C90Au); RECOMP_ABI_CALL(0x00166A90u, sub_00166A90); /* call 0x00166A90 */

loc_0006C90A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C910
 * Original: 0x0006C910 - 0x0006C918 (8 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006C910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C910: ;
    PUSH32(esp, 0x0006C915u); RECOMP_ABI_CALL(0x00166AD0u, sub_00166AD0); /* call 0x00166AD0 */

loc_0006C915: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C930
 * Original: 0x0006C930 - 0x0006C97F (79 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C979; /* je: equal / zero */

loc_0006C939: ;
    eax = MEM32(esi);
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C979; /* jne: not equal / not zero */

loc_0006C948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C969; /* je: equal / zero */

loc_0006C94F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0006C969; /* jns: not sign (positive) */

loc_0006C953: ;
    eax = MEM32(ecx);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x0006C963u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_0006C963: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006C969: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C973u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0006C973: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C979u); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_0006C979: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C980
 * Original: 0x0006C980 - 0x0006C989 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C980: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C990
 * Original: 0x0006C990 - 0x0006C99F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C990: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0006C930(); return; /* tail jmp 0x0006C930 */

}

/**
 * sub_0006C9A0
 * Original: 0x0006C9A0 - 0x0006C9AF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C9A0: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0006C930(); return; /* tail jmp 0x0006C930 */

}

/**
 * sub_0006C9B0
 * Original: 0x0006C9B0 - 0x0006C9FA (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C9B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15FEAB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0006C9DAu); RECOMP_ABI_CALL(0x0006C3C0u, sub_0006C3C0); /* call 0x0006C3C0 */

loc_0006C9DA: ;
    ecx = esi + 0x7C;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0006C9EAu); RECOMP_ABI_CALL(0x0006D810u, sub_0006D810); /* call 0x0006D810 */

loc_0006C9EA: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006CA00
 * Original: 0x0006CA00 - 0x0006CAF7 (247 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0006CA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x902D50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0006CA5D; /* jne: not equal / not zero */

loc_0006CA16: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x902D50);
    PUSH32(esp, 0x2E5B70);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x20000000;
    MEM32(esp + 0x1C) = 0x40420000;
    MEM32(esp + 0x20) = 0x40400003;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006CA4Fu); RECOMP_ABI_CALL(0x00167090u, sub_00167090); /* call 0x00167090 */

loc_0006CA4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006CA5D; /* jge: greater or equal (signed >=) */

loc_0006CA53: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0006CA5D: ;
    eax = MEM32(0x902D54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CAF0; /* jne: not equal / not zero */

loc_0006CA6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0xF0) = eax;
    eax = 0xC0;
    PUSH32(esp, 0x902D54);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0xA8) = 0x8040000;
    MEM32(esp + 0x20) = 0x18140000;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x40) = 0x10C0002;
    MEM32(esp + 0x44) = 0x1C00;
    MEM32(esp + 0xCC) = 0xDADADA;
    MEM32(esp + 0xD0) = 0x101010;
    MEM32(esp + 0x10C) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006CAF0u); RECOMP_ABI_CALL(0x0016A1B0u, sub_0016A1B0); /* call 0x0016A1B0 */

loc_0006CAF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CB00
 * Original: 0x0006CB00 - 0x0006CC9F (415 bytes, 138 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006CB00: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x94) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CC1C; /* jne: not equal / not zero */

loc_0006CB26: ;
    ecx = MEM32(eax);
    fp_push((double)SMEM32(eax)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0006CB36; /* jge: greater or equal (signed >=) */

loc_0006CB30: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0006CB36: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edx;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006CB4E; /* jge: greater or equal (signed >=) */

loc_0006CB48: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0006CB4E: ;
    edx = MEM32(eax + 4);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006CB65; /* jge: greater or equal (signed >=) */

loc_0006CB5F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0006CB65: ;
    SET_LO16(edi, MEM16(eax + 8));
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(eax + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    eax = ZX16(LO16(ecx));
    MEM16(esi + 0x24) = LO16(ecx);
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006CB8Eu); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006CB8E: ;
    edx = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = 1;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0006CBA1: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edi) (16-bit) */
    ebx = MEM32(esi + 0x28);
    eax = ZX16(LO16(ecx));
    if (CMP_AE(_fa, _fb)) goto loc_0006CBB4; /* jae: above or equal (unsigned >=) */

loc_0006CBAC: ;
    MEM16(ebx + eax * 2) = 0;
    goto loc_0006CC06;

loc_0006CBB4: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    MEM16(eax + ebx) = LO16(edx);
    ebx = MEM32(esi + 0x28);
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx);
    ebx = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    eax = eax + eax * 2;
    eax = ebx + eax * 8;
    MEM16(eax + 0x12) = MEM16(eax + 0x12) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x24)); /* fdiv dword ptr [esp + 0x24] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006CC06: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0x24) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006CBA1; /* jbe: below or equal (unsigned <=) */

loc_0006CC0E: ;
    fp_push(MEMF(esi)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    POP32(esp, ebx);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006CC66;

loc_0006CC1C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CC93; /* jne: not equal / not zero */

loc_0006CC21: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edx;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(LO16(ecx));
    MEM32(esi + 0x28) = eax;
    eax = eax + edx * 2 + 2;
    MEM16(esi + 0x24) = LO16(ecx);
    MEM32(esi + 0x2C) = 0;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = eax;

loc_0006CC66: ;
    ecx = esi;
    PUSH32(esp, 0x0006CC6Du); RECOMP_ABI_CALL(0x0006CA00u, sub_0006CA00); /* call 0x0006CA00 */

loc_0006CC6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006CC93; /* jl: less (signed <) */

loc_0006CC71: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006CC7Bu); RECOMP_ABI_CALL(0x00162AC0u, sub_00162AC0); /* call 0x00162AC0 */

loc_0006CC7B: ;
    eax = MEM32(esp + 0x10);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x38) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0006CC93: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006CCA0
 * Original: 0x0006CCA0 - 0x0006CCCB (43 bytes, 14 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006CCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006CCA0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    esi = ecx;
    PUSH32(esp, 0x0006CCB2u); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006CCB2: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006CCC1u); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006CCC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006CCD0
 * Original: 0x0006CCD0 - 0x0006CE6B (411 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CCD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE61; /* jne: not equal / not zero */

loc_0006CCE1: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CD58; /* je: equal / zero */

loc_0006CCE8: ;
    eax = MEM32(0x180C9C);
    MEM32(esi + 0x3C) = eax;
    ecx = MEM32(0x180CA8);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(0x180CAC);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(0x180CA0);
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(0x180CA4);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(0x180C98);
    MEM32(esi + 0x50) = edx;
    eax = MEM32(0x180DDC);
    MEM32(esi + 0x54) = eax;
    ecx = MEM32(0x180DFC);
    MEM32(esi + 0x58) = ecx;
    edx = MEM32(0x180DEC);
    MEM32(esi + 0x5C) = edx;
    eax = MEM32(0x180DF0);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(0x180E0C);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(0x1809C0);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(0x1809BC);
    MEM32(esi + 0x6C) = eax;

loc_0006CD58: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006CD66u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0006CD66: ;
    edx = MEM32(0x902D50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006CD72u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0006CD72: ;
    eax = MEM32(0x902D54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006CD7Du); RECOMP_ABI_CALL(0x0016A660u, sub_0016A660); /* call 0x0016A660 */

loc_0006CD7D: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x0006CD8Cu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CD8C: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = 1;
    PUSH32(esp, 0x0006CDA5u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CDA5: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0006CDBEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CDBE: ;
    edx = 1;
    ecx = 0x40300;
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x0006CDD7u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CDD7: ;
    edx = 8;
    ecx = 0x40340;
    MEM32(0x180CA0) = 1;
    PUSH32(esp, 0x0006CDF0u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CDF0: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x180CA4) = 8;
    PUSH32(esp, 0x0006CE09u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CE09: ;
    PUSH32(esp, 0x1B02);
    MEM32(0x180C98) = 0x206;
    PUSH32(esp, 0x0006CE1Du); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_0006CE1D: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0x0006CE27u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006CE27: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006CE2Eu); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0006CE2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006CE35u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_0006CE35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006CE3Cu); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_0006CE3C: ;
    edx = MEM32(0x1809A8);
    eax = 2;
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 8);
    MEM32(0x1809C0) = eax;
    MEM32(0x1809A8) = edx;
    MEM32(0x1809BC) = eax;
    PUSH32(esp, 0x0006CE61u); RECOMP_ABI_CALL(0x00166A90u, sub_00166A90); /* call 0x00166A90 */

loc_0006CE61: ;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CE70
 * Original: 0x0006CE70 - 0x0006CF92 (290 bytes, 84 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE84; /* jne: not equal / not zero */

loc_0006CE7D: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006CE84: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x98) = eax;
    if ((_fa == 0)) goto loc_0006CE94; /* je: equal / zero */

loc_0006CE8D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006CE94: ;
    PUSH32(esp, 0x0006CE99u); RECOMP_ABI_CALL(0x00166AD0u, sub_00166AD0); /* call 0x00166AD0 */

loc_0006CE99: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CF8E; /* je: equal / zero */

loc_0006CEA4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006CEAEu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0006CEAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006CEB5u); RECOMP_ABI_CALL(0x0016A660u, sub_0016A660); /* call 0x0016A660 */

loc_0006CEB5: ;
    edi = MEM32(esi + 0x3C);
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0x0006CEC4u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CEC4: ;
    MEM32(0x180C9C) = edi;
    edi = MEM32(esi + 0x40);
    edx = edi;
    ecx = 0x40344;
    PUSH32(esp, 0x0006CED9u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CED9: ;
    MEM32(0x180CA8) = edi;
    edi = MEM32(esi + 0x44);
    edx = edi;
    ecx = 0x40348;
    PUSH32(esp, 0x0006CEEEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CEEE: ;
    MEM32(0x180CAC) = edi;
    edi = MEM32(esi + 0x48);
    edx = edi;
    ecx = 0x40300;
    PUSH32(esp, 0x0006CF03u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CF03: ;
    MEM32(0x180CA0) = edi;
    edi = MEM32(esi + 0x4C);
    edx = edi;
    ecx = 0x40340;
    PUSH32(esp, 0x0006CF18u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CF18: ;
    MEM32(0x180CA4) = edi;
    edi = MEM32(esi + 0x50);
    edx = edi;
    ecx = 0x4033C;
    PUSH32(esp, 0x0006CF2Du); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006CF2D: ;
    MEM32(0x180C98) = edi;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006CF3Cu); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_0006CF3C: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006CF45u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006CF45: ;
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006CF4Eu); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0006CF4E: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006CF57u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_0006CF57: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006CF60u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_0006CF60: ;
    eax = MEM32(esi + 0x68);
    edx = MEM32(0x1809A8);
    ecx = 1;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = eax;
    MEM32(0x1809A8) = edx;
    esi = MEM32(esi + 0x6C);
    eax = edx;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = eax;
    MEM32(0x1809BC) = esi;
    POP32(esp, edi);

loc_0006CF8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CFA0
 * Original: 0x0006CFA0 - 0x0006CFEB (75 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CFA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = edi + 0x7C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006CFB7u); RECOMP_ABI_CALL(0x0006D5C0u, sub_0006D5C0); /* call 0x0006D5C0 */

loc_0006CFB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006CFC5; /* jge: greater or equal (signed >=) */

loc_0006CFBB: ;
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006CFC5: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006CFD6u); RECOMP_ABI_CALL(0x0006C930u, sub_0006C930); /* call 0x0006C930 */

loc_0006CFD6: ;
    edx = MEM32(esi);
    ecx = ebx + edx + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006CFE5u); RECOMP_ABI_CALL(0x0006CB00u, sub_0006CB00); /* call 0x0006CB00 */

loc_0006CFE5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006CFF0
 * Original: 0x0006CFF0 - 0x0006D0F1 (257 bytes, 82 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0006CFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006CFF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D003u); RECOMP_ABI_CALL(0x0006CCD0u, sub_0006CCD0); /* call 0x0006CCD0 */

loc_0006D003: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D00Eu); RECOMP_ABI_CALL(0x00166A40u, sub_00166A40); /* call 0x00166A40 */

loc_0006D00E: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D01Cu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006D01C: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D02Au); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006D02A: ;
    ecx = MEM32(esi + 0x28);
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x5C);
    ebx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x14);
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + edx * 8 + 0x14);
    eax = eax + edx * 8;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_0006D0A7; /* je: equal / zero */

loc_0006D06F: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006D0A1; /* jnp: not parity */

loc_0006D07F: ;
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D093u); RECOMP_ABI_CALL(0x0006C440u, sub_0006C440); /* call 0x0006C440 */

loc_0006D093: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006D0A7; /* jp: parity */

loc_0006D0A1: ;
    ebx = ebx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x18) = ebx;

loc_0006D0A7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D0DF; /* je: equal / zero */

loc_0006D0AC: ;
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D0C0u); RECOMP_ABI_CALL(0x0006C440u, sub_0006C440); /* call 0x0006C440 */

loc_0006D0C0: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006D0D9u); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006D0D9: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D0DF: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    MEM32(esp + 0x10) = 1;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0006D2E1(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0006D0F1(); return; /* fallthrough 0x0006D0F1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006D0F1
 * Original: 0x0006D0F1 - 0x0006D2E1 (496 bytes, 165 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D0F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D0F1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D15A; /* je: equal / zero */

loc_0006D0F9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D152; /* je: equal / zero */

loc_0006D0FE: ;
    PUSH32(esp, 1);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0006D112u); RECOMP_ABI_CALL(0x0006C440u, sub_0006C440); /* call 0x0006C440 */

loc_0006D112: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D12F; /* je: equal / zero */

loc_0006D117: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006D129u); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006D129: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D12F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D152; /* je: equal / zero */

loc_0006D134: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 8) - fp_top()); /* fsubr dword ptr [ebp + 8] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006D14Cu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006D14C: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D152: ;
    MEM32(esp + 0x10) = 0;

loc_0006D15A: ;
    SET_LO16(eax, MEM16(edi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    MEM32(ebp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0006D185; /* jne: not equal / not zero */

loc_0006D169: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    MEM32(esi + 0x1C) = eax;
    MEM32(esp + 0x10) = 1;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006D2A7;

loc_0006D185: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x24) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006D197; /* ja: above (unsigned >) */

loc_0006D18B: ;
    edx = MEM32(esi + 0x28);
    ecx = ZX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(edx + ecx * 2);
    goto loc_0006D199;

loc_0006D197: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006D199: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    ecx = MEM32(esi + 0x34);
    eax = eax + eax * 2;
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 8 + 0x10);
    edi = ecx + eax * 8;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_0006D209; /* je: equal / zero */

loc_0006D1E6: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006D2C3; /* jnp: not parity */

loc_0006D209: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    edx = MEM32(esi + 0x20);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x2C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0006D24Du); RECOMP_ABI_CALL(0x00166900u, sub_00166900); /* call 0x00166900 */

loc_0006D24D: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0006D265u); RECOMP_ABI_CALL(0x00166900u, sub_00166900); /* call 0x00166900 */

loc_0006D265: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(edi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    edx = MEM32(edi + 8);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0006D285u); RECOMP_ABI_CALL(0x00166900u, sub_00166900); /* call 0x00166900 */

loc_0006D285: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(edi + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    edx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0006D2A1u); RECOMP_ABI_CALL(0x00166900u, sub_00166900); /* call 0x00166900 */

loc_0006D2A1: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x18);

loc_0006D2A7: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D0F1; /* jne: not equal / not zero */

loc_0006D2B1: ;
    ecx = esi;
    PUSH32(esp, 0x0006D2B8u); RECOMP_ABI_CALL(0x0006CE70u, sub_0006CE70); /* call 0x0006CE70 */

loc_0006D2B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_0006D2C3: ;
    eax = MEM32(ebp + 0x10);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x236358);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006D2E1u); RECOMP_ABI_CALL(0x0006CFF0u, sub_0006CFF0); /* call 0x0006CFF0 */

    g_seh_ebp = ebp; sub_0006D2E1(); return; /* fallthrough 0x0006D2E1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006D2E1
 * Original: 0x0006D2E1 - 0x0006D2F3 (18 bytes, 9 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D2E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D2E1: ;
    ecx = esi;
    PUSH32(esp, 0x0006D2E8u); RECOMP_ABI_CALL(0x0006CE70u, sub_0006CE70); /* call 0x0006CE70 */

loc_0006D2E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0006D300
 * Original: 0x0006D300 - 0x0006D4D9 (473 bytes, 163 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D300: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x0006D320u); RECOMP_ABI_CALL(0x0006C440u, sub_0006C440); /* call 0x0006C440 */

loc_0006D320: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x0006D329u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006D329: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esi = eax;
    PUSH32(esp, 0x0006D334u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006D334: ;
    ebx = MEM32(esp + 0x58);
    edi = eax;
    eax = ebx + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006D4CE; /* ja: above (unsigned >) */

loc_0006D346: ;
    ecx = ZX8(MEM8(eax + 0x6D4E8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x6D4DC); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0006D354u) goto loc_0006D354;
    if (_jt == 0x0006D3BDu) goto loc_0006D3BD;
    if (_jt == 0x0006D4CEu) goto loc_0006D4CE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006D354: ;
    edx = esi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0006D373; /* je: equal / zero */

loc_0006D360: ;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ~ecx;
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    eax = eax + eax + 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0006D360; /* jne: not equal / not zero */

loc_0006D373: ;
    ecx = edi + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0006D393; /* je: equal / zero */

loc_0006D37F: ;
    /* nop */

loc_0006D380: ;
    edx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ~edx;
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    eax = eax + eax + 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0006D380; /* jne: not equal / not zero */

loc_0006D393: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006D399u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0006D399: ;
    ecx = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x40;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006D3C3; /* jbe: below or equal (unsigned <=) */

loc_0006D3A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006D3AEu); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0006D3AE: ;
    ecx = eax;
    eax = 0x40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    goto loc_0006D3C3;

loc_0006D3BD: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0006D3C3: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D3D3u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_0006D3D3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x58) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0006D4CE; /* jl: less (signed <) */

loc_0006D3EB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006D3F1u); RECOMP_ABI_CALL(0x00164580u, sub_00164580); /* call 0x00164580 */

loc_0006D3F1: ;
    ebx = eax;
    PUSH32(esp, 0x0006D3F8u); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_0006D3F8: ;
    ebp = eax;
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D406u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_0006D406: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = 0x3F800000;
    PUSH32(esp, 0x0006D42Fu); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0006D42F: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006D439u); RECOMP_ABI_CALL(0x001645C0u, sub_001645C0); /* call 0x001645C0 */

loc_0006D439: ;
    edx = MEM32(esp + 0x54);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D452u); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_0006D452: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D469u); RECOMP_ABI_CALL(0x0006CFF0u, sub_0006CFF0); /* call 0x0006CFF0 */

loc_0006D469: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = 0x280;
    MEM32(esp + 0x48) = 0x1E0;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x50) = 0x3F800000;
    PUSH32(esp, 0x0006D494u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0006D494: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D49Eu); RECOMP_ABI_CALL(0x001645C0u, sub_001645C0); /* call 0x001645C0 */

loc_0006D49E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4A8; /* je: equal / zero */

loc_0006D4A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006D4A8u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0006D4A8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4B2; /* je: equal / zero */

loc_0006D4AC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006D4B2u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0006D4B2: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4C1; /* je: equal / zero */

loc_0006D4BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D4C1u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0006D4C1: ;
    eax = MEM32(esp + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0006D4CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006D540
 * Original: 0x0006D540 - 0x0006D556 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D540: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D560
 * Original: 0x0006D560 - 0x0006D5BD (93 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D5B6; /* je: equal / zero */

loc_0006D56B: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D5B6; /* je: equal / zero */

loc_0006D573: ;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D59D; /* je: equal / zero */

loc_0006D57C: ;
    /* nop */

loc_0006D580: ;
    eax = MEM32(eax + esi * 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006D58Au); RECOMP_ABI_CALL(0x001516FBu, sub_001516FB); /* call 0x001516FB */

loc_0006D58A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D5A5; /* je: equal / zero */

loc_0006D591: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 8 + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D580; /* jne: not equal / not zero */

loc_0006D59D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006D5A5: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx + esi * 8 + 4);
    ecx = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006D5B6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006D5C0
 * Original: 0x0006D5C0 - 0x0006D760 (416 bytes, 138 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D5C0: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x210) = eax;
    eax = MEM32(esp + 0x218);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006D5E7u); RECOMP_ABI_CALL(0x0006D8A0u, sub_0006D8A0); /* call 0x0006D8A0 */

loc_0006D5E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006D609; /* jge: greater or equal (signed >=) */

loc_0006D5EE: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x210);
    PUSH32(esp, 0x0006D600u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D600: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0006D609: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D623u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0006D623: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D646; /* jne: not equal / not zero */

loc_0006D62A: ;
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x210);
    PUSH32(esp, 0x0006D63Du); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D63D: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0006D646: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D65Bu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0006D65B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30525058) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30525058 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D66A; /* jne: not equal / not zero */

loc_0006D666: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006D67A;

loc_0006D66A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31525058) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31525058 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D73D; /* jne: not equal / not zero */

loc_0006D675: ;
    ebx = 1;

loc_0006D67A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = ecx + -12;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x0006D693u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006D693: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D6A6u); RECOMP_ABI_CALL(0x0016AC30u, sub_0016AC30); /* call 0x0016AC30 */

loc_0006D6A6: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D6BDu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0006D6BD: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D6D2u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0006D6D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D6D8u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006D6D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D707; /* je: equal / zero */

loc_0006D6DC: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0006D707; /* jbe: below or equal (unsigned <=) */

loc_0006D6EF: ;
    /* nop */

loc_0006D6F0: ;
    edx = MEM32(esi + 0x10);
    edi = MEM32(edx + eax * 8);
    ecx = edx + eax * 8;
    edx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006D6F0; /* jb: below (unsigned <) */

loc_0006D707: ;
    eax = MEM32(esp + 0x228);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x22C);
    if (CMP_NE(_fa, _fb)) goto loc_0006D71D; /* jne: not equal / not zero */

loc_0006D719: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D723; /* je: equal / zero */

loc_0006D71D: ;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;

loc_0006D723: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x210);
    PUSH32(esp, 0x0006D734u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D734: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0006D73D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D743u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006D743: ;
    ecx = MEM32(esp + 0x21C);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0x80070057u;
    POP32(esp, esi);
    PUSH32(esp, 0x0006D757u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D757: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006D780
 * Original: 0x0006D780 - 0x0006D7B6 (54 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D795; /* je: equal / zero */

loc_0006D78C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D792u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006D792: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D795: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0006D7A7; /* je: equal / zero */

loc_0006D7A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D7A7u); RECOMP_ABI_CALL(0x0016AC70u, sub_0016AC70); /* call 0x0016AC70 */

loc_0006D7A7: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D7C0
 * Original: 0x0006D7C0 - 0x0006D810 (80 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006D7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D7C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D7CAu); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0006D7CA: ;
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006D7E5; /* ja: above (unsigned >) */

loc_0006D7D2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x6D7E8); /* switch: 7 entries, 3 targets */
    if (_jt == 0x0006D7D9u) goto loc_0006D7D9;
    if (_jt == 0x0006D7DFu) goto loc_0006D7DF;
    if (_jt == 0x0006D7E5u) goto loc_0006D7E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006D7D9: ;
    eax = 0x14;
    esp += 4; return; /* ret */

loc_0006D7DF: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0006D7E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006D810
 * Original: 0x0006D810 - 0x0006D815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D810: ;
    g_seh_ebp = ebp; sub_0006D780(); return; /* tail jmp 0x0006D780 */

}

/**
 * sub_0006D820
 * Original: 0x0006D820 - 0x0006D878 (88 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D820: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    ecx = MEM32(esp + 0x408);
    MEM32(esp + 0x400) = eax;
    eax = esp + 0x40C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D851u); RECOMP_ABI_CALL(0x0015173Eu, sub_0015173E); /* call 0x0015173E */

loc_0006D851: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x403) = 0;
    PUSH32(esp, 0x0006D865u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_0006D865: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x0006D871u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D871: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006D880
 * Original: 0x0006D880 - 0x0006D89B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D880: ;
    eax = MEM32(esp + 4);
    edx = 0x2E5BA8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0006D890;

    /* nop */

loc_0006D890: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D890; /* jne: not equal / not zero */

loc_0006D89A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D8A0
 * Original: 0x0006D8A0 - 0x0006D960 (192 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D8A0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006D94C; /* je: equal / zero */

loc_0006D8BA: ;
    edi = MEM32(esp + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D94C; /* je: equal / zero */

loc_0006D8C6: ;
    edx = edi;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0006D8D0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D8D0; /* jne: not equal / not zero */

loc_0006D8DA: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D8F4; /* je: equal / zero */

loc_0006D8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E5BA8);
    PUSH32(esp, 0x236394);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D8F1u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_0006D8F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D8F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D909u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0006D909: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D935; /* jne: not equal / not zero */

loc_0006D90E: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x236360);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D91Eu); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_0006D91E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0x82000004u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0x0006D931u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D931: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006D935: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D93Bu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006D93B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0x0006D948u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D948: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006D94C: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, edi);
    eax = 0x80070057u;
    POP32(esp, esi);
    PUSH32(esp, 0x0006D95Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006D95C: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DA40
 * Original: 0x0006DA40 - 0x0006DA70 (48 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DA40: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0006DA6D; /* js: sign (negative) */

loc_0006DA47: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_0006DA60: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0006DA64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006DA62u); } /* indirect call */
    }

loc_0006DA64: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006DA60; /* jne: not equal / not zero */

loc_0006DA69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006DA6D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006DAC0
 * Original: 0x0006DAC0 - 0x0006DB34 (116 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DAC0: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x200) = eax;
    eax = MEM32(esp + 0x20C);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006DAE4u); RECOMP_ABI_CALL(0x0006D8A0u, sub_0006D8A0); /* call 0x0006D8A0 */

loc_0006DAE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006DB21; /* jl: less (signed <) */

loc_0006DAEB: ;
    edx = MEM32(esp + 0x210);
    eax = MEM32(esp + 0x214);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = MEM32(esp + 0x210);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006DB21u); RECOMP_ABI_CALL(0x001883FAu, sub_001883FA); /* call 0x001883FA */

loc_0006DB21: ;
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x0006DB2Du); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006DB2D: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB40
 * Original: 0x0006DB40 - 0x0006DBAD (109 bytes, 47 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DB40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DB50u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0006DB50: ;
    esi = MEM32(ebx + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebx + 0x18));
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0006DB64u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006DB64: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    ecx = esi;
    esi = MEM32(eax + 4);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + 4);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DB9Fu); RECOMP_ABI_CALL(0x001A7DA3u, sub_001A7DA3); /* call 0x001A7DA3 */

loc_0006DB9F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DBA5u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006DBA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DBB0
 * Original: 0x0006DBB0 - 0x0006DC27 (119 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DBB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DBC0u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0006DBC0: ;
    esi = MEM32(ebx + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebx + 0x18));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebx + 0x10));
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0006DBD8u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006DBD8: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    ecx = esi;
    esi = MEM32(eax + 8);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DC19u); RECOMP_ABI_CALL(0x001A8715u, sub_001A8715); /* call 0x001A8715 */

loc_0006DC19: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DC1Fu); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006DC1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DC30
 * Original: 0x0006DC30 - 0x0006DC9D (109 bytes, 47 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DC30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DC40u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0006DC40: ;
    esi = MEM32(ebx + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebx + 0x18));
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0006DC54u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006DC54: ;
    ecx = esi;
    edx = ecx;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    esi = MEM32(eax + 4);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DC8Fu); RECOMP_ABI_CALL(0x001A7652u, sub_001A7652); /* call 0x001A7652 */

loc_0006DC8F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DC95u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006DC95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DCA0
 * Original: 0x0006DCA0 - 0x0006DD17 (119 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DCA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DCB0u); RECOMP_ABI_CALL(0x001A6D31u, sub_001A6D31); /* call 0x001A6D31 */

loc_0006DCB0: ;
    esi = MEM32(ebx + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebx + 0x18));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebx + 0x10));
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0006DCC8u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006DCC8: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    ecx = esi;
    esi = MEM32(eax + 8);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x18);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DD09u); RECOMP_ABI_CALL(0x001A84BAu, sub_001A84BA); /* call 0x001A84BA */

loc_0006DD09: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DD0Fu); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006DD0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DD20
 * Original: 0x0006DD20 - 0x0006DF1C (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DD20: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006DD3B; /* jge: greater or equal (signed >=) */

loc_0006DD25: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x0006DD33u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006DD33: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006DD3B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006DD60; /* jge: greater or equal (signed >=) */

loc_0006DD43: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006DD60: ;
    if (CMP_NE(_fa, _fb)) goto loc_0006DD69; /* jne: not equal / not zero */

loc_0006DD62: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DD68u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_0006DD68: ;
    esp += 4; return; /* ret */

loc_0006DD69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DD78; /* jne: not equal / not zero */

loc_0006DD71: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DD77u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_0006DD77: ;
    esp += 4; return; /* ret */

loc_0006DD78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DD87; /* jne: not equal / not zero */

loc_0006DD80: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DD86u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_0006DD86: ;
    esp += 4; return; /* ret */

loc_0006DD87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DD96; /* jne: not equal / not zero */

loc_0006DD8F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DD95u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_0006DD95: ;
    esp += 4; return; /* ret */

loc_0006DD96: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDA5; /* jne: not equal / not zero */

loc_0006DD9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDA4u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_0006DDA4: ;
    esp += 4; return; /* ret */

loc_0006DDA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDB4; /* jne: not equal / not zero */

loc_0006DDAD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDB3u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_0006DDB3: ;
    esp += 4; return; /* ret */

loc_0006DDB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDC3; /* jne: not equal / not zero */

loc_0006DDBC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDC2u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_0006DDC2: ;
    esp += 4; return; /* ret */

loc_0006DDC3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDD2; /* jne: not equal / not zero */

loc_0006DDCB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDD1u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0006DDD1: ;
    esp += 4; return; /* ret */

loc_0006DDD2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDE1; /* jne: not equal / not zero */

loc_0006DDDA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDE0u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_0006DDE0: ;
    esp += 4; return; /* ret */

loc_0006DDE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDF0; /* jne: not equal / not zero */

loc_0006DDE9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDEFu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_0006DDEF: ;
    esp += 4; return; /* ret */

loc_0006DDF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDFF; /* jne: not equal / not zero */

loc_0006DDF8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDFEu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006DDFE: ;
    esp += 4; return; /* ret */

loc_0006DDFF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE0E; /* jne: not equal / not zero */

loc_0006DE07: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE0Du); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_0006DE0D: ;
    esp += 4; return; /* ret */

loc_0006DE0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE1D; /* jne: not equal / not zero */

loc_0006DE16: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE1Cu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006DE1C: ;
    esp += 4; return; /* ret */

loc_0006DE1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE2C; /* jne: not equal / not zero */

loc_0006DE25: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE2Bu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_0006DE2B: ;
    esp += 4; return; /* ret */

loc_0006DE2C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE3B; /* jne: not equal / not zero */

loc_0006DE34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE3Au); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_0006DE3A: ;
    esp += 4; return; /* ret */

loc_0006DE3B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE4A; /* jne: not equal / not zero */

loc_0006DE43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE49u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_0006DE49: ;
    esp += 4; return; /* ret */

loc_0006DE4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE59; /* jne: not equal / not zero */

loc_0006DE52: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE58u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_0006DE58: ;
    esp += 4; return; /* ret */

loc_0006DE59: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE68; /* jne: not equal / not zero */

loc_0006DE61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE67u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_0006DE67: ;
    esp += 4; return; /* ret */

loc_0006DE68: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE77; /* jne: not equal / not zero */

loc_0006DE70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE76u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_0006DE76: ;
    esp += 4; return; /* ret */

loc_0006DE77: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE86; /* jne: not equal / not zero */

loc_0006DE7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE85u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_0006DE85: ;
    esp += 4; return; /* ret */

loc_0006DE86: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE95; /* jne: not equal / not zero */

loc_0006DE8E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DE94u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_0006DE94: ;
    esp += 4; return; /* ret */

loc_0006DE95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEA4; /* jne: not equal / not zero */

loc_0006DE9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DEA3u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0006DEA3: ;
    esp += 4; return; /* ret */

loc_0006DEA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEB3; /* jne: not equal / not zero */

loc_0006DEAC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DEB2u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_0006DEB2: ;
    esp += 4; return; /* ret */

loc_0006DEB3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEC2; /* jne: not equal / not zero */

loc_0006DEBB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DEC1u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_0006DEC1: ;
    esp += 4; return; /* ret */

loc_0006DEC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DED1; /* jne: not equal / not zero */

loc_0006DECA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DED0u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_0006DED0: ;
    esp += 4; return; /* ret */

loc_0006DED1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEE0; /* jne: not equal / not zero */

loc_0006DED9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DEDFu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_0006DEDF: ;
    esp += 4; return; /* ret */

loc_0006DEE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEEF; /* jne: not equal / not zero */

loc_0006DEE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DEEEu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_0006DEEE: ;
    esp += 4; return; /* ret */

loc_0006DEEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEFE; /* jne: not equal / not zero */

loc_0006DEF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DEFDu); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_0006DEFD: ;
    esp += 4; return; /* ret */

loc_0006DEFE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DF0D; /* jne: not equal / not zero */

loc_0006DF06: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DF0Cu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_0006DF0C: ;
    esp += 4; return; /* ret */

loc_0006DF0D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DF1B; /* jne: not equal / not zero */

loc_0006DF15: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DF1Bu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_0006DF1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DF20
 * Original: 0x0006DF20 - 0x0006DF96 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DF20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0006DF4B; /* jge: greater or equal (signed >=) */

loc_0006DF27: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0006DF2E: ;
    edi = MEM32(0x1809A8);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1809A8) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x1809B0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DF4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006DF59; /* jge: greater or equal (signed >=) */

loc_0006DF50: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_0006DF2E;

loc_0006DF59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DF68; /* jne: not equal / not zero */

loc_0006DF5E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006DF65u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_0006DF65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DF68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DF77; /* jne: not equal / not zero */

loc_0006DF6D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006DF74u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_0006DF74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DF77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DF86; /* jne: not equal / not zero */

loc_0006DF7C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006DF83u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_0006DF83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DF86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006DF93; /* jg: greater (signed >) */

loc_0006DF8B: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006DF93u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_0006DF93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DFA0
 * Original: 0x0006DFA0 - 0x0006E0E0 (320 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DFA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    PUSH32(esp, ebp);
    ecx = ecx & 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    PUSH32(esp, edi);
    MEM32(eax) = 0x20000000;
    edi = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0006DFCA; /* jne: not equal / not zero */

loc_0006DFC1: ;
    MEM32(eax + 4) = 0x40420000;
    goto loc_0006E00C;

loc_0006DFCA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(eax + 4) = 0x40320000;
    if (CMP_NE(_fa, _fb)) goto loc_0006DFDF; /* jne: not equal / not zero */

loc_0006DFD6: ;
    MEM32(eax + 8) = 0x40120001;
    goto loc_0006E007;

loc_0006DFDF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DFED; /* jne: not equal / not zero */

loc_0006DFE4: ;
    MEM32(eax + 8) = 0x40220001;
    goto loc_0006E007;

loc_0006DFED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DFFB; /* jne: not equal / not zero */

loc_0006DFF2: ;
    MEM32(eax + 8) = 0x40320001;
    goto loc_0006E007;

loc_0006DFFB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E00C; /* jne: not equal / not zero */

loc_0006E000: ;
    MEM32(eax + 8) = 0x40420001;

loc_0006E007: ;
    edi = 3;

loc_0006E00C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E019; /* je: equal / zero */

loc_0006E011: ;
    MEM32(eax + edi * 4) = 0x40320002;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006E019: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E026; /* je: equal / zero */

loc_0006E01E: ;
    MEM32(eax + edi * 4) = 0x40400003;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006E026: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0006E032; /* jns: not sign (positive) */

loc_0006E02A: ;
    MEM32(eax + edi * 4) = 0x40400004;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006E032: ;
    ecx = ebx;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = ecx;
    ebp = 0;
    if ((_fa == 0)) goto loc_0006E0D2; /* jbe: below or equal (unsigned <=) */

loc_0006E049: ;
    PUSH32(esp, esi);
    esi = 0x10;
    goto loc_0006E055;

loc_0006E051: ;
    ebx = MEM32(esp + 0x18);

loc_0006E055: ;
    ecx = esi + -16;
    edx = 0x30000;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 3;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E075; /* jne: not equal / not zero */

loc_0006E070: ;
    eax = 0x12;

loc_0006E075: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E07E; /* jne: not equal / not zero */

loc_0006E079: ;
    eax = 0x22;

loc_0006E07E: ;
    ebx = 1;
    ecx = esi;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E090; /* jne: not equal / not zero */

loc_0006E08B: ;
    eax = 0x32;

loc_0006E090: ;
    ebx = 2;
    ecx = esi;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E0A2; /* jne: not equal / not zero */

loc_0006E09D: ;
    eax = 0x42;

loc_0006E0A2: ;
    eax = eax | 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebp + 9;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006E051; /* jb: below (unsigned <) */

loc_0006E0C3: ;
    POP32(esp, esi);
    MEM32(ecx + edi * 4) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0006E0D2: ;
    MEM32(eax + edi * 4) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E0E0
 * Original: 0x0006E0E0 - 0x0006E119 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E0E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_0006E0F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E0F0; /* jne: not equal / not zero */

loc_0006E0F7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    ecx = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E106; /* jle: less or equal (signed <=) */

loc_0006E104: ;
    eax = ecx;

loc_0006E106: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006E117u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_0006E117: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E120
 * Original: 0x0006E120 - 0x0006E253 (307 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E120: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E24A; /* je: equal / zero */

loc_0006E12F: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E24A; /* je: equal / zero */

loc_0006E13B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(ecx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0006E151; /* je: equal / zero */

loc_0006E14A: ;
    MEM32(ebp) = 0;

loc_0006E151: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E16Au); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0006E16A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E184; /* je: equal / zero */

loc_0006E171: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E179u); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_0006E179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E18F; /* jne: not equal / not zero */

loc_0006E17E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E184u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E184: ;
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E18F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 0x7FF;
    esi = esi >> 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E1A3u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_0006E1A3: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E1BF; /* jne: not equal / not zero */

loc_0006E1AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E1B2u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E1B2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0x8007000Eu;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E1BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0006E1E7u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0006E1E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E1F7; /* jne: not equal / not zero */

loc_0006E1EB: ;
    PUSH32(esp, 0x0006E1F0u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0006E1F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E20D; /* jne: not equal / not zero */

loc_0006E1F7: ;
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E209u); RECOMP_ABI_CALL(0x000ADDE5u, sub_000ADDE5); /* call 0x000ADDE5 */

loc_0006E209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E229; /* jne: not equal / not zero */

loc_0006E20D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006E213u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0006E213: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E21Cu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E21C: ;
    PUSH32(esp, 0x0006E221u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0006E221: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E229: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0006E23A; /* je: equal / zero */

loc_0006E233: ;
    edx = MEM32(esp + 0x28);
    MEM32(ebp) = edx;

loc_0006E23A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E240u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E240: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E24A: ;
    eax = 0x80070057u;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006E260
 * Original: 0x0006E260 - 0x0006E297 (55 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E260: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E27Eu); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_0006E27E: ;
    ecx = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x8007000Eu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0006E2A0
 * Original: 0x0006E2A0 - 0x0006E2BE (30 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006E2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E2A0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E2B9u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006E2B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006E2C0
 * Original: 0x0006E2C0 - 0x0006E2C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E2C0(void)
{

loc_0006E2C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E2D0
 * Original: 0x0006E2D0 - 0x0006E2E4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006E2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E2D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E2DFu); RECOMP_ABI_CALL(0x00168730u, sub_00168730); /* call 0x00168730 */

loc_0006E2DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006E2F0
 * Original: 0x0006E2F0 - 0x0006E30E (30 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006E2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E2F0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E309u); RECOMP_ABI_CALL(0x00168750u, sub_00168750); /* call 0x00168750 */

loc_0006E309: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006E310
 * Original: 0x0006E310 - 0x0006E315 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006E310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E310: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E320
 * Original: 0x0006E320 - 0x0006E323 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E320(void)
{

loc_0006E320: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E330
 * Original: 0x0006E330 - 0x0006E333 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E330(void)
{

loc_0006E330: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E340
 * Original: 0x0006E340 - 0x0006E35D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006E340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E340: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E360
 * Original: 0x0006E360 - 0x0006E383 (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006E360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E360: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E390
 * Original: 0x0006E390 - 0x0006E3B3 (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006E390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E390: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E3C0
 * Original: 0x0006E3C0 - 0x0006E3E3 (35 bytes, 11 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006E3C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E3C0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E3F0
 * Original: 0x0006E3F0 - 0x0006E41D (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006E3F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E3F0: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E420
 * Original: 0x0006E420 - 0x0006E445 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006E420(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E420: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E450
 * Original: 0x0006E450 - 0x0006E470 (32 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E450(void)
{

loc_0006E450: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006E470
 * Original: 0x0006E470 - 0x0006E4C9 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E470: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E4D0
 * Original: 0x0006E4D0 - 0x0006E534 (100 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E4D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E4D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363A4)); /* fmul dword ptr [0x2363a4] */
    PUSH32(esp, 0x0006E4E9u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006E4E9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363A0)); /* fmul dword ptr [0x2363a0] */
    edi = eax;
    PUSH32(esp, 0x0006E4FAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006E4FA: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363A4)); /* fmul dword ptr [0x2363a4] */
    PUSH32(esp, 0x0006E516u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006E516: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x23639C)); /* fmul dword ptr [0x23639c] */
    PUSH32(esp, 0x0006E52Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006E52F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E540
 * Original: 0x0006E540 - 0x0006E710 (464 bytes, 102 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006E540: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 8) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    edx = MEM32(esp + 8);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0xC) = 0x3F800000;
    MEMF(esp) = (float)fp_top(); /* fst */
    eax = MEM32(esp);
    fp_push(MEMF(esp + 0x58)); /* fld float */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 8) = 0x3F800000;
    eax = MEM32(esp + 8);
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x28) = eax;
    MEMF(esp) = (float)fp_top(); /* fst */
    ecx = MEM32(esp);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    edx = MEM32(esp);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0xC) = 0x3F800000;
    edx = MEM32(esp + 0xC);
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = 0x3F800000;
    ecx = MEM32(esp + 8);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp);
    MEM32(esp + 8) = 0x3F800000;
    edx = MEM32(esp + 8);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(0x1809A8);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(esp + 0xC) = 0x3F800000;
    eax = MEM32(esp + 0xC);
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x4C) = eax;
    eax = 2;
    MEM32(esp + 0x44) = ecx;
    MEM32(0x1809A8) = edx;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x1809E0) = eax;
    MEM32(0x1809E8) = 3;
    MEM32(0x1809F0) = eax;
    MEM32(0x1809F8) = 3;
    MEM32(0x180A60) = 1;
    PUSH32(esp, 0x0006E695u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006E695: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = 1;
    PUSH32(esp, 0x0006E6AEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006E6AE: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0006E6C7u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006E6C7: ;
    PUSH32(esp, 4);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x0006E6D8u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0006E6D8: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E6E2u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006E6E2: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0006E6F2u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006E6F2: ;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E6FCu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006E6FC: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0006E70Cu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006E70C: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E710
 * Original: 0x0006E710 - 0x0006E7B6 (166 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E710: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x1A;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(esi) = eax;
    eax = 0x3F800000;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;
    eax = esi + 0x34;
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = eax;
    eax = esi + 0x40;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 8);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x0006E7A9u); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_0006E7A9: ;
    POP32(esp, edi);
    MEM32(esi + 0x4C) = 0x447A0000;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006E7C0
 * Original: 0x0006E7C0 - 0x0006E8CF (271 bytes, 93 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E7C0: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x204) = eax;
    eax = MEM32(esp + 0x20C);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E7E4u); RECOMP_ABI_CALL(0x0006D8A0u, sub_0006D8A0); /* call 0x0006D8A0 */

loc_0006E7E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E8BC; /* jl: less (signed <) */

loc_0006E7EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006E809u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0006E809: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E829; /* jne: not equal / not zero */

loc_0006E810: ;
    eax = 0x80004005u;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0x0006E822u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006E822: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E829: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006E834u); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_0006E834: ;
    ebp = eax;
    edi = ebp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E83Fu); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0006E83F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E86A; /* jne: not equal / not zero */

loc_0006E848: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006E84Eu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E84E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x80004005u;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0x0006E863u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006E863: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E86A: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006E88Du); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0006E88D: ;
    ecx = MEM32(esp + 0x224);
    edx = MEM32(esp + 0x220);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006E8A5u); RECOMP_ABI_CALL(0x00167090u, sub_00167090); /* call 0x00167090 */

loc_0006E8A5: ;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0006E8ADu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E8AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E8B3u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006E8B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006E8BC: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0x0006E8C8u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006E8C8: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006E8D0
 * Original: 0x0006E8D0 - 0x0006E990 (192 bytes, 55 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E8D0: ;
    _fb = (uint32_t)(0x2FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2FC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x2F8) = eax;
    eax = MEM32(esp + 0x300);
    PUSH32(esp, eax);
    ecx = esp + 0xFC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E8F7u); RECOMP_ABI_CALL(0x0006D8A0u, sub_0006D8A0); /* call 0x0006D8A0 */

loc_0006E8F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E97D; /* jl: less (signed <) */

loc_0006E8FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x114;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006E91Bu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0006E91B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E949; /* je: equal / zero */

loc_0006E922: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E939u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0006E939: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30425350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x30425350 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E962; /* je: equal / zero */

loc_0006E943: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E949u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E949: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x2F8);
    PUSH32(esp, 0x0006E95Bu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006E95B: ;
    _fb = (uint32_t)(0x2FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2FC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E962: ;
    edx = MEM32(esp + 0x308);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E974u); RECOMP_ABI_CALL(0x0016A1B0u, sub_0016A1B0); /* call 0x0016A1B0 */

loc_0006E974: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E97Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0006E97A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_0006E97D: ;
    ecx = MEM32(esp + 0x2F8);
    PUSH32(esp, 0x0006E989u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006E989: ;
    _fb = (uint32_t)(0x2FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2FC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006E990
 * Original: 0x0006E990 - 0x0006EB03 (371 bytes, 104 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E990: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    eax = MEM32(esp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_A(_fa, _fb)) goto loc_0006EACD; /* ja: above (unsigned >) */

loc_0006E9D7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x6EB04); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0006E9DEu) goto loc_0006E9DE;
    if (_jt == 0x0006E9F3u) goto loc_0006E9F3;
    if (_jt == 0x0006EA0Cu) goto loc_0006EA0C;
    if (_jt == 0x0006EA38u) goto loc_0006EA38;
    if (_jt == 0x0006EA68u) goto loc_0006EA68;
    if (_jt == 0x0006EA7Au) goto loc_0006EA7A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006E9DE: ;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006EA8E;

loc_0006E9F3: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x18) = 0xBF800000u;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006EA8E;

loc_0006EA0C: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEM32(esp + 0x20) = 0xBF800000u;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006EAA8;

loc_0006EA38: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x1C) = 0xBF800000u;
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = 0x3F800000;
    goto loc_0006EAA8;

loc_0006EA68: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    goto loc_0006EA8E;

loc_0006EA7A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x20) = 0xBF800000u;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006EA8E: ;
    eax = MEM32(esp + 0x18);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006EAA8: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    goto loc_0006EAD1;

loc_0006EACD: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0006EAD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006EAECu); RECOMP_ABI_CALL(0x00185ACEu, sub_00185ACE); /* call 0x00185ACE */

loc_0006EAEC: ;
    eax = MEM32(esp + 0x7C);
    ecx = 0x10;
    esi = esp + 0x38;
    edi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006EED1
 * Original: 0x0006EED1 - 0x0006EF0E (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EED1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006EED1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x34;
    PUSH32(esp, 0x12);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006EEE0u); RECOMP_ABI_CALL(0x00151A05u, sub_00151A05); /* call 0x00151A05 */

loc_0006EEE0: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006EEEEu); RECOMP_ABI_CALL(0x00151A05u, sub_00151A05); /* call 0x00151A05 */

loc_0006EEEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006EEF4u); RECOMP_ABI_CALL(0x0015189Du, sub_0015189D); /* call 0x0015189D */

loc_0006EEF4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006EEFAu); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_0006EEFA: ;
    ecx = MEM32(esp + 0x68);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x0006EF0Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0006EF0A: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006EF10
 * Original: 0x0006EF10 - 0x0006F102 (498 bytes, 151 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006EF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006EF10: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x48);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(esp + 0x44);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    ecx = MEM32(esp + 0x4C);
    fp_push(MEMF(edx + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    esi = MEM32(esp + 0x54);
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FD0)); /* fmul dword ptr [0x231fd0] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FD0)); /* fmul dword ptr [0x231fd0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FD0)); /* fmul dword ptr [0x231fd0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    edx = MEM32(ecx);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEM32(esp + 0x24) = edx;
    POP32(esp, esi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F110
 * Original: 0x0006F110 - 0x0006F379 (617 bytes, 176 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006F110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F110: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x4C);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    edx = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C24C)); /* fmul dword ptr [0x22c24c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F380
 * Original: 0x0006F380 - 0x0006F540 (448 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F380: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22c178] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006F3BA; /* jne: not equal / not zero */

loc_0006F39C: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006F3ABu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006F3AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0006F3B3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006F3B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = eax;
    goto loc_0006F3C1;

loc_0006F3BA: ;
    eax = esi + -1;
    MEM32(esp + 0x3C) = eax;

loc_0006F3C1: ;
    ecx = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0006F3CD; /* jae: above or equal (unsigned >=) */

loc_0006F3C8: ;
    ebp = eax + 1;
    goto loc_0006F3CF;

loc_0006F3CD: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F3CF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0006F3D8; /* jae: above or equal (unsigned >=) */

loc_0006F3D3: ;
    edi = ebp + 1;
    goto loc_0006F3DA;

loc_0006F3D8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F3DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0006F3E3; /* jae: above or equal (unsigned >=) */

loc_0006F3DE: ;
    ebx = edi + 1;
    goto loc_0006F3E5;

loc_0006F3E3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F3E5: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006F3F4u); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006F3F4: ;
    eax = MEM32(esp + 0x4C);
    esi = MEM32(esp + 0x40);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x48) - fp_top()); /* fsubr dword ptr [esp + 0x48] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F452; /* je: equal / zero */

loc_0006F40B: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    edx = ebx + ebx * 2;
    eax = esi + edx * 4;
    PUSH32(esp, eax);
    ecx = edi + edi * 2;
    edx = esi + ecx * 4;
    eax = ebp + ebp * 2;
    ecx = esi + eax * 4;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006F43Bu); RECOMP_ABI_CALL(0x0006F110u, sub_0006F110); /* call 0x0006F110 */

loc_0006F43B: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x5C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = eax;

loc_0006F452: ;
    edx = MEM32(esp + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F538; /* je: equal / zero */

loc_0006F45E: ;
    ecx = ebp + ebp * 2;
    eax = esi + ecx * 4;
    ecx = ebx + ebx * 2;
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    ecx = esi + ecx * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = edi + edi * 2;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = MEM32(esp + 0x3C);
    ecx = esi + ecx * 4;
    eax = eax + eax * 2;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esi + eax * 4;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(edx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;

loc_0006F538: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F540
 * Original: 0x0006F540 - 0x0006F8A0 (864 bytes, 214 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F540: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x0006F553u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006F553: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 2);
    MEM32(0x180C9C) = 0;
    MEM32(0x1809E0) = 2;
    MEM32(0x1809A8) = ecx;
    MEM32(0x1809E8) = 3;
    PUSH32(esp, 0x0006F58Au); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0006F58A: ;
    fp_push((double)SMEM32(esp + 0xB4)); /* fild */
    esi = MEM32(esp + 0xB4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0006F5AA; /* jge: greater or equal (signed >=) */

loc_0006F5A4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0006F5AA: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006F898; /* jp: parity */

loc_0006F5C3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xBC);
    goto loc_0006F5E0;

    /* nop */

loc_0006F5E0: ;
    edx = MEM32(esp + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006F5F6u); RECOMP_ABI_CALL(0x0006F380u, sub_0006F380); /* call 0x0006F380 */

loc_0006F5F6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    PUSH32(esp, 0);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006F617u); RECOMP_ABI_CALL(0x0006F380u, sub_0006F380); /* call 0x0006F380 */

loc_0006F617: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006F627u); RECOMP_ABI_CALL(0x00185240u, sub_00185240); /* call 0x00185240 */

loc_0006F627: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D4)); /* fmul dword ptr [0x22c0d4] */
    PUSH32(esp, ebp);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x74);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D4)); /* fmul dword ptr [0x22c0d4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D4)); /* fmul dword ptr [0x22c0d4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x78);
    MEM32(esp + 0x2C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x7C);
    MEM32(esp + 0x30) = eax;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x80);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x68) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x84);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x88);
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, 0x0006F6E7u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006F6E7: ;
    PUSH32(esp, 0xC);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0006F6F7u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006F6F7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F87A; /* je: equal / zero */

loc_0006F6FF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0xFFFF0000u);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x40) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x44) = eax;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xA0)); /* fadd dword ptr [esp + 0xa0] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x0006F76Bu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006F76B: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0006F77Bu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006F77B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    PUSH32(esp, 0xFF00FF00u);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x8C);
    MEM32(esp + 0x40) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x90);
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    MEM32(esp + 0x44) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x94);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x0006F7F5u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006F7F5: ;
    PUSH32(esp, 0xC);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0006F805u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006F805: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x3C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x5C);
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    MEM32(esp + 0x40) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x60);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0006F86Au); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006F86A: ;
    PUSH32(esp, 0xC);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0006F87Au); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006F87A: ;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006F5E0; /* jnp: not parity */

loc_0006F895: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006F898: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F8B0
 * Original: 0x0006F8B0 - 0x0006F8C6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F8B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F8B0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x0006F8BAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0006F8BA: ;
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F8D0
 * Original: 0x0006F8D0 - 0x0006F8DE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F8D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0006F8D9u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_0006F8D9: ;
    g_seh_ebp = ebp; sub_0006B1B0(); return; /* tail jmp 0x0006B1B0 */

}

/**
 * sub_0006F8F0
 * Original: 0x0006F8F0 - 0x0006F8FD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F8F0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0006AE70(); return; /* tail jmp 0x0006AE70 */

}

/**
 * sub_0006F900
 * Original: 0x0006F900 - 0x0006F909 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F900: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0006A7B0(); return; /* tail jmp 0x0006A7B0 */

}

/**
 * sub_0006F910
 * Original: 0x0006F910 - 0x0006F928 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F910: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006F927; /* je: equal / zero */

loc_0006F925: ;
    fp_top() = -fp_top(); /* fchs */

loc_0006F927: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F930
 * Original: 0x0006F930 - 0x0006F939 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F930: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0006A1E0(); return; /* tail jmp 0x0006A1E0 */

}

/**
 * sub_0006F940
 * Original: 0x0006F940 - 0x0006F941 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F940(void)
{

loc_0006F940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F950
 * Original: 0x0006F950 - 0x0006F96A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006F950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F950: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006F964u); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_0006F964: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006F970
 * Original: 0x0006F970 - 0x0006F97C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006F970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F970: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0006F979u); RECOMP_ABI_CALL(0x00068F70u, sub_00068F70); /* call 0x00068F70 */

loc_0006F979: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006F980
 * Original: 0x0006F980 - 0x0006F983 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006F980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F980: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006F990
 * Original: 0x0006F990 - 0x0006F991 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F990(void)
{

loc_0006F990: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9A0
 * Original: 0x0006F9A0 - 0x0006F9A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F9A0(void)
{

loc_0006F9A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9B0
 * Original: 0x0006F9B0 - 0x0006F9B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006F9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F9B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9C0
 * Original: 0x0006F9C0 - 0x0006F9C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006F9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F9C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9D0
 * Original: 0x0006F9D0 - 0x0006F9D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F9D0(void)
{

loc_0006F9D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9E0
 * Original: 0x0006F9E0 - 0x0006F9E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F9E0(void)
{

loc_0006F9E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9F0
 * Original: 0x0006F9F0 - 0x0006F9F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F9F0(void)
{

loc_0006F9F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA00
 * Original: 0x0006FA00 - 0x0006FA01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA00(void)
{

loc_0006FA00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA10
 * Original: 0x0006FA10 - 0x0006FA11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA10(void)
{

loc_0006FA10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA20
 * Original: 0x0006FA20 - 0x0006FA2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA20(void)
{

loc_0006FA20: ;
    MEM32(0x2E5DA8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA30
 * Original: 0x0006FA30 - 0x0006FA3D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FA30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2E5DA8) = eax;
    MEM8(0x902D90) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA40
 * Original: 0x0006FA40 - 0x0006FA41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA40(void)
{

loc_0006FA40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA50
 * Original: 0x0006FA50 - 0x0006FA51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA50(void)
{

loc_0006FA50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA60
 * Original: 0x0006FA60 - 0x0006FA6A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA60(void)
{

loc_0006FA60: ;
    ecx = MEM32(eax * 4 + 0x180BB0);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA70
 * Original: 0x0006FA70 - 0x0006FC6C (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FA70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006FA8B; /* jge: greater or equal (signed >=) */

loc_0006FA75: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x0006FA83u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FA83: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006FA8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006FAB0; /* jge: greater or equal (signed >=) */

loc_0006FA93: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006FAB0: ;
    if (CMP_NE(_fa, _fb)) goto loc_0006FAB9; /* jne: not equal / not zero */

loc_0006FAB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FAB8u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_0006FAB8: ;
    esp += 4; return; /* ret */

loc_0006FAB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FAC8; /* jne: not equal / not zero */

loc_0006FAC1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FAC7u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_0006FAC7: ;
    esp += 4; return; /* ret */

loc_0006FAC8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FAD7; /* jne: not equal / not zero */

loc_0006FAD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FAD6u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_0006FAD6: ;
    esp += 4; return; /* ret */

loc_0006FAD7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FAE6; /* jne: not equal / not zero */

loc_0006FADF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FAE5u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_0006FAE5: ;
    esp += 4; return; /* ret */

loc_0006FAE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FAF5; /* jne: not equal / not zero */

loc_0006FAEE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FAF4u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_0006FAF4: ;
    esp += 4; return; /* ret */

loc_0006FAF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB04; /* jne: not equal / not zero */

loc_0006FAFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB03u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_0006FB03: ;
    esp += 4; return; /* ret */

loc_0006FB04: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB13; /* jne: not equal / not zero */

loc_0006FB0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB12u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_0006FB12: ;
    esp += 4; return; /* ret */

loc_0006FB13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB22; /* jne: not equal / not zero */

loc_0006FB1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB21u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_0006FB21: ;
    esp += 4; return; /* ret */

loc_0006FB22: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB31; /* jne: not equal / not zero */

loc_0006FB2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB30u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_0006FB30: ;
    esp += 4; return; /* ret */

loc_0006FB31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB40; /* jne: not equal / not zero */

loc_0006FB39: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB3Fu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_0006FB3F: ;
    esp += 4; return; /* ret */

loc_0006FB40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB4F; /* jne: not equal / not zero */

loc_0006FB48: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB4Eu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006FB4E: ;
    esp += 4; return; /* ret */

loc_0006FB4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB5E; /* jne: not equal / not zero */

loc_0006FB57: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB5Du); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_0006FB5D: ;
    esp += 4; return; /* ret */

loc_0006FB5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB6D; /* jne: not equal / not zero */

loc_0006FB66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB6Cu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006FB6C: ;
    esp += 4; return; /* ret */

loc_0006FB6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB7C; /* jne: not equal / not zero */

loc_0006FB75: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB7Bu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_0006FB7B: ;
    esp += 4; return; /* ret */

loc_0006FB7C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB8B; /* jne: not equal / not zero */

loc_0006FB84: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB8Au); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_0006FB8A: ;
    esp += 4; return; /* ret */

loc_0006FB8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB9A; /* jne: not equal / not zero */

loc_0006FB93: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FB99u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_0006FB99: ;
    esp += 4; return; /* ret */

loc_0006FB9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FBA9; /* jne: not equal / not zero */

loc_0006FBA2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FBA8u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_0006FBA8: ;
    esp += 4; return; /* ret */

loc_0006FBA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FBB8; /* jne: not equal / not zero */

loc_0006FBB1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FBB7u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_0006FBB7: ;
    esp += 4; return; /* ret */

loc_0006FBB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FBC7; /* jne: not equal / not zero */

loc_0006FBC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FBC6u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_0006FBC6: ;
    esp += 4; return; /* ret */

loc_0006FBC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FBD6; /* jne: not equal / not zero */

loc_0006FBCF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FBD5u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_0006FBD5: ;
    esp += 4; return; /* ret */

loc_0006FBD6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FBE5; /* jne: not equal / not zero */

loc_0006FBDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FBE4u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_0006FBE4: ;
    esp += 4; return; /* ret */

loc_0006FBE5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FBF4; /* jne: not equal / not zero */

loc_0006FBED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FBF3u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0006FBF3: ;
    esp += 4; return; /* ret */

loc_0006FBF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC03; /* jne: not equal / not zero */

loc_0006FBFC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC02u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_0006FC02: ;
    esp += 4; return; /* ret */

loc_0006FC03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC12; /* jne: not equal / not zero */

loc_0006FC0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC11u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_0006FC11: ;
    esp += 4; return; /* ret */

loc_0006FC12: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC21; /* jne: not equal / not zero */

loc_0006FC1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC20u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_0006FC20: ;
    esp += 4; return; /* ret */

loc_0006FC21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC30; /* jne: not equal / not zero */

loc_0006FC29: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC2Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_0006FC2F: ;
    esp += 4; return; /* ret */

loc_0006FC30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC3F; /* jne: not equal / not zero */

loc_0006FC38: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC3Eu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_0006FC3E: ;
    esp += 4; return; /* ret */

loc_0006FC3F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC4E; /* jne: not equal / not zero */

loc_0006FC47: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC4Du); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_0006FC4D: ;
    esp += 4; return; /* ret */

loc_0006FC4E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC5D; /* jne: not equal / not zero */

loc_0006FC56: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC5Cu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_0006FC5C: ;
    esp += 4; return; /* ret */

loc_0006FC5D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FC6B; /* jne: not equal / not zero */

loc_0006FC65: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FC6Bu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_0006FC6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FC70
 * Original: 0x0006FC70 - 0x0006FC8B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FC70: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x30D020);
    g_seh_ebp = ebp; sub_00065000(); return; /* tail jmp 0x00065000 */

}

/**
 * sub_0006FC90
 * Original: 0x0006FC90 - 0x0006FCA4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0006FC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FC90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006FC9Fu); RECOMP_ABI_CALL(0x00162D40u, sub_00162D40); /* call 0x00162D40 */

loc_0006FC9F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006FCB0
 * Original: 0x0006FCB0 - 0x0006FCBB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FCB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FCB0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FCC0
 * Original: 0x0006FCC0 - 0x0006FCD3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006FCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FCC0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006FCCFu); RECOMP_ABI_CALL(0x00150551u, sub_00150551); /* call 0x00150551 */

loc_0006FCCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FCE0
 * Original: 0x0006FCE0 - 0x0006FCEB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FCE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FCE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FCF0
 * Original: 0x0006FCF0 - 0x0006FCFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FCF0: ;
    ecx = 0x902800;
    g_seh_ebp = ebp; sub_0006BBB0(); return; /* tail jmp 0x0006BBB0 */

}

/**
 * sub_0006FD00
 * Original: 0x0006FD00 - 0x0006FD13 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006FD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FD00: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006FD0Fu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006FD0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FD20
 * Original: 0x0006FD20 - 0x0006FD33 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006FD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FD20: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006FD2Fu); RECOMP_ABI_CALL(0x00150624u, sub_00150624); /* call 0x00150624 */

loc_0006FD2F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FD40
 * Original: 0x0006FD40 - 0x0006FD53 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006FD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FD40: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006FD4Fu); RECOMP_ABI_CALL(0x00150551u, sub_00150551); /* call 0x00150551 */

loc_0006FD4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FD60
 * Original: 0x0006FD60 - 0x0006FD6E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FD60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FD60: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x0006FD6Du); RECOMP_ABI_CALL(0x00151318u, sub_00151318); /* call 0x00151318 */

loc_0006FD6D: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FD70
 * Original: 0x0006FD70 - 0x0006FD7B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FD70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FD70: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FD80
 * Original: 0x0006FD80 - 0x0006FD8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FD80: ;
    ecx = 0x902800;
    g_seh_ebp = ebp; sub_0006BBB0(); return; /* tail jmp 0x0006BBB0 */

}

/**
 * sub_0006FD90
 * Original: 0x0006FD90 - 0x0006FDB2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006FD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FD90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006FDAEu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006FDAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FDC0
 * Original: 0x0006FDC0 - 0x0006FDC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FDC0(void)
{

loc_0006FDC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FDD0
 * Original: 0x0006FDD0 - 0x0006FDD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FDD0(void)
{

loc_0006FDD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FDE0
 * Original: 0x0006FDE0 - 0x0006FFAA (458 bytes, 120 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0006FDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(edx, MEM8(eax + 0x30D9A1));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(0x902D68) = ecx;
    esi = 0x2E5DB0;

loc_0006FE08: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FE1F; /* jne: not equal / not zero */

loc_0006FE0C: ;
    SET_LO8(ebx, MEM8(eax + 0x30D9A2));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FE1F; /* jne: not equal / not zero */

loc_0006FE17: ;
    ebx = ZX8(MEM8(esi + 2));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FE2F; /* je: equal / zero */

loc_0006FE1F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006FE08; /* jb: below (unsigned <) */

loc_0006FE28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0006FE2F: ;
    eax = MEM32(0x180CF4);
    ecx = MEM32(0x180CE8);
    edx = MEM32(0x180CE4);
    MEM32(0x902D74) = eax;
    eax = MEM32(0x6E9ABC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    edi = 1;
    MEM32(0x902D68) = edi;
    MEM32(0x902D78) = ecx;
    MEM32(0x902D7C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0006FF0F; /* jne: not equal / not zero */

loc_0006FE6A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FE71u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0006FE71: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FE9Du); RECOMP_ABI_CALL(0x00162D40u, sub_00162D40); /* call 0x00162D40 */

loc_0006FE9D: ;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FEA6u); RECOMP_ABI_CALL(0x0006BD20u, sub_0006BD20); /* call 0x0006BD20 */

loc_0006FEA6: ;
    edx = esp + 0x30;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FEB3u); RECOMP_ABI_CALL(0x0006AE70u, sub_0006AE70); /* call 0x0006AE70 */

loc_0006FEB3: ;
    edx = esp + 0x30;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FEC0u); RECOMP_ABI_CALL(0x0006A4E0u, sub_0006A4E0); /* call 0x0006A4E0 */

loc_0006FEC0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    edx = esp + 0x30;
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 8) - fp_top()); /* fsubr dword ptr [esi + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FED7u); RECOMP_ABI_CALL(0x0006A4E0u, sub_0006A4E0); /* call 0x0006A4E0 */

loc_0006FED7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2363B4);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FEEBu); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_0006FEEB: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2363B4);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FF03u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_0006FF03: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FF0Du); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0006FF0D: ;
    goto loc_0006FF16;

loc_0006FF0F: ;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0xC) = ecx;

loc_0006FF16: ;
    fp_push(MEMF(0x30F9B0)); /* fld float */
    ecx = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30D010)); /* fsub dword ptr [0x30d010] */
    MEM32(esp + 0x2C) = 0;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3062A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3145A8)); /* fsub dword ptr [0x3145a8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30AAB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30AE50)); /* fsub dword ptr [0x30ae50] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FF57u); RECOMP_ABI_CALL(0x0006A540u, sub_0006A540); /* call 0x0006A540 */

loc_0006FF57: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) / fp_top()); /* fdivr dword ptr [esp + 0xc] */
    edx = edi;
    ecx = 0x40338;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363B0)); /* fmul dword ptr [0x2363b0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FF71u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FF71: ;
    esi = MEM32(esp + 0xC);
    edx = esi;
    ecx = 0x40388;
    MEM32(0x180CF4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FF87u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FF87: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40384;
    MEM32(0x180CE8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006FF99u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FF99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x180CE4) = 0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FFB0
 * Original: 0x0006FFB0 - 0x00070002 (82 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FFB0: ;
    eax = MEM32(0x902D68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00070003(); return; } /* je: equal / zero */

loc_0006FFB9: ;
    edx = MEM32(0x902D74);
    PUSH32(esp, esi);
    ecx = 0x40338;
    esi = edx;
    PUSH32(esp, 0x0006FFCCu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FFCC: ;
    edx = MEM32(0x902D78);
    MEM32(0x180CF4) = esi;
    ecx = 0x40388;
    esi = edx;
    PUSH32(esp, 0x0006FFE4u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FFE4: ;
    edx = MEM32(0x902D7C);
    MEM32(0x180CE8) = esi;
    ecx = 0x40384;
    esi = edx;
    PUSH32(esp, 0x0006FFFCu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006FFFC: ;
    MEM32(0x180CE4) = esi;

    g_seh_ebp = ebp; sub_00070002(); return; /* fallthrough 0x00070002 */

}

/**
 * sub_00070002
 * Original: 0x00070002 - 0x00070003 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070002(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070002: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00070003(); return; /* fallthrough 0x00070003 */

}

/**
 * sub_00070003
 * Original: 0x00070003 - 0x00070004 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070003(void)
{

loc_00070003: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070004
 * Original: 0x00070004 - 0x00070005 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070004(void)
{

loc_00070004: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070005
 * Original: 0x00070005 - 0x00070006 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070005(void)
{

loc_00070005: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070006
 * Original: 0x00070006 - 0x00070007 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070006(void)
{

loc_00070006: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070007
 * Original: 0x00070007 - 0x00070008 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070007(void)
{

loc_00070007: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070008
 * Original: 0x00070008 - 0x00070009 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070008(void)
{

loc_00070008: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070009
 * Original: 0x00070009 - 0x0007000A (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070009(void)
{

loc_00070009: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0007000A
 * Original: 0x0007000A - 0x0007000C (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007000A(void)
{

loc_0007000A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0007000C
 * Original: 0x0007000C - 0x0007000D (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007000C(void)
{

loc_0007000C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0007000D
 * Original: 0x0007000D - 0x00070010 (3 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007000D(void)
{

loc_0007000D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070010
 * Original: 0x00070010 - 0x00070032 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00070019u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00070019: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007002Eu); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_0007002E: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_00070032(); return; /* fallthrough 0x00070032 */

}

/**
 * sub_00070032
 * Original: 0x00070032 - 0x000700B5 (131 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070032(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070032: ;
    PUSH32(esp, 0x00070037u); RECOMP_ABI_CALL(0x0006C110u, sub_0006C110); /* call 0x0006C110 */

loc_00070037: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00070040u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_00070040: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00070049u); RECOMP_ABI_CALL(0x0006C050u, sub_0006C050); /* call 0x0006C050 */

loc_00070049: ;
    eax = MEM32(esi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00070056u); RECOMP_ABI_CALL(0x0006FDE0u, sub_0006FDE0); /* call 0x0006FDE0 */

loc_00070056: ;
    edx = MEM32(esi);
    ecx = edi;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx * 4 + 0x30D020);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007006Eu); RECOMP_ABI_CALL(0x00065000u, sub_00065000); /* call 0x00065000 */

loc_0007006E: ;
    PUSH32(esp, 0x00070073u); RECOMP_ABI_CALL(0x0006FFB0u, sub_0006FFB0); /* call 0x0006FFB0 */

loc_00070073: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070084; /* je: equal / zero */

loc_0007007A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00070081u); RECOMP_ABI_CALL(0x00070010u, sub_00070010); /* call 0x00070010 */

loc_00070081: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070084: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000700A9; /* je: equal / zero */

loc_0007008B: ;
    ecx = 1;
    PUSH32(esp, 0x00070095u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00070095: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007009Fu); RECOMP_ABI_CALL(0x00070010u, sub_00070010); /* call 0x00070010 */

loc_0007009F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000700A9u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_000700A9: ;
    POP32(esp, edi);
    ecx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006AC70(); return; /* tail jmp 0x0006AC70 */

}

/**
 * sub_000700C0
 * Original: 0x000700C0 - 0x00070100 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000700C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000700C0: ;
    eax = MEM32(0x902D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000700F9; /* jne: not equal / not zero */

loc_000700D3: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000700DCu); RECOMP_ABI_CALL(0x0006FDE0u, sub_0006FDE0); /* call 0x0006FDE0 */

loc_000700DC: ;
    eax = MEM32(esi);
    ecx = edi;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx * 4 + 0x30D020);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000700F4u); RECOMP_ABI_CALL(0x00065000u, sub_00065000); /* call 0x00065000 */

loc_000700F4: ;
    PUSH32(esp, 0x000700F9u); RECOMP_ABI_CALL(0x0006FFB0u, sub_0006FFB0); /* call 0x0006FFB0 */

loc_000700F9: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00070120(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00070100(); return; /* fallthrough 0x00070100 */

}

/**
 * sub_00070100
 * Original: 0x00070100 - 0x00070120 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070100: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00070107u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00070107: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00070111u); RECOMP_ABI_CALL(0x00070010u, sub_00070010); /* call 0x00070010 */

loc_00070111: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006AC70(); return; /* tail jmp 0x0006AC70 */

}

/**
 * sub_00070120
 * Original: 0x00070120 - 0x00070130 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070120(void)
{

loc_00070120: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070130
 * Original: 0x00070130 - 0x000701A8 (120 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00070147u); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_00070147: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00070150u); RECOMP_ABI_CALL(0x0006C110u, sub_0006C110); /* call 0x0006C110 */

loc_00070150: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00070159u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_00070159: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00070162u); RECOMP_ABI_CALL(0x0006C050u, sub_0006C050); /* call 0x0006C050 */

loc_00070162: ;
    edi = MEM32(esp + 0x24);
    ecx = MEM32(esi);
    eax = edi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x30D020);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007017Eu); RECOMP_ABI_CALL(0x00065000u, sub_00065000); /* call 0x00065000 */

loc_0007017E: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000701A5; /* je: equal / zero */

loc_00070185: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007018Cu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0007018C: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00070196u); RECOMP_ABI_CALL(0x00070010u, sub_00070010); /* call 0x00070010 */

loc_00070196: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006AC70(); return; /* tail jmp 0x0006AC70 */

loc_000701A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000701B0
 * Original: 0x000701B0 - 0x000702BA (266 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000701B0_gen(void)   /* fighter-isolation: shadowed by recomp_manual.c (mark fighter draw) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000701B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esi * 4 + 0x336BE4);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000701C6u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_000701C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000701CCu); RECOMP_ABI_CALL(0x00030C20u, sub_00030C20); /* call 0x00030C20 */

loc_000701CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000702AD; /* jne: not equal / not zero */

loc_000701D8: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(eax);
    ecx = esi;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x30D020);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000701F2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070210; /* jne: not equal / not zero */

loc_000701F7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000701F2; /* jl: less (signed <) */

loc_00070200: ;
    eax = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    MEM32(esp + 0x14) = eax;
    g_seh_ebp = ebp; sub_000702C0(); return; /* tail jmp 0x000702C0 */

loc_00070210: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ecx + 0x30D9A1)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9A1), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007028E; /* jne: not equal / not zero */

loc_0007021E: ;
    edi = esi;
    edi = edi ^ 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58);
    SET_LO8(ebx, MEM8(edi + 0x30D9A3));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070239; /* je: equal / zero */

loc_00070232: ;
    edx = 0xE;
    goto loc_00070260;

loc_00070239: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070260; /* jne: not equal / not zero */

loc_00070242: ;
    _fa = (uint32_t)(MEM8(0x30AE18)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE18), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070260; /* jne: not equal / not zero */

loc_0007024B: ;
    SET_LO8(ecx, MEM8(ecx + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x8C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x8C (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00070260; /* jb: below (unsigned <) */

loc_00070256: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x90 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00070260; /* ja: above (unsigned >) */

loc_0007025B: ;
    edx = 7;

loc_00070260: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi * 2 + 0x336F1C);
    _fb = (uint32_t)(MEM32(esi * 4 + 0x32B390)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi * 4 + 0x32B390);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi * 4 + 0x31AFF4);
    MEM32(eax) = edx;
    eax = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    MEM32(esp + 0x14) = eax;
    g_seh_ebp = ebp; sub_000702C0(); return; /* tail jmp 0x000702C0 */

loc_0007028E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi * 2 + 0x336F1C);
    _fb = (uint32_t)(MEM32(esi * 4 + 0x32B390)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi * 4 + 0x32B390);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx * 4 + 0x31B02C);
    MEM32(eax) = ecx;

loc_000702AD: ;
    eax = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    MEM32(esp + 0x14) = eax;
    g_seh_ebp = ebp; sub_000702C0(); return; /* tail jmp 0x000702C0 */

}

/**
 * sub_000702BA
 * Original: 0x000702BA - 0x00070361 (167 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000702BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000702BA: ;
    eax = MEM32(esp + 0x14);
    edi = edi;
    ebx = MEM32(ebp + edi * 4);
    ecx = eax + edi;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3495C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3495C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000702D5u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000702D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000702DBu); RECOMP_ABI_CALL(0x00030C80u, sub_00030C80); /* call 0x00030C80 */

loc_000702DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007031C; /* jne: not equal / not zero */

loc_000702E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000702FD; /* jne: not equal / not zero */

loc_000702E8: ;
    SET_LO8(eax, MEM8(esi * 2 + 0x348990));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007031C; /* je: equal / zero */

loc_000702F3: ;
    eax = SX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + eax * 4 + 0x3C);
    goto loc_00070315;

loc_000702FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007031C; /* jne: not equal / not zero */

loc_00070302: ;
    SET_LO8(eax, MEM8(esi * 2 + 0x348991));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007031C; /* je: equal / zero */

loc_0007030D: ;
    eax = SX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + eax * 4 + 0x50);

loc_00070315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007031C; /* je: equal / zero */

loc_0007031A: ;
    ebx = eax;

loc_0007031C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070323u); RECOMP_ABI_CALL(0x000700C0u, sub_000700C0); /* call 0x000700C0 */

loc_00070323: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000702BA; /* jb: below (unsigned <) */

loc_0007032C: ;
    ecx = 1;
    PUSH32(esp, 0x00070336u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00070336: ;
    _fa = (uint32_t)(MEM8(0x316FF2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x316FF2), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070348; /* je: equal / zero */

loc_0007033F: ;
    SET_LO8(eax, MEM8(0x3495B8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070351; /* je: equal / zero */

loc_00070348: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007034Eu); RECOMP_ABI_CALL(0x00035200u, sub_00035200); /* call 0x00035200 */

loc_0007034E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070351: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007035Au); RECOMP_ABI_CALL(0x00164EB0u, sub_00164EB0); /* call 0x00164EB0 */

loc_0007035A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000702C0
 * Original: 0x000702C0 - 0x00070361 (161 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000702C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000702C0: ;
    ebx = MEM32(ebp + edi * 4);
    ecx = eax + edi;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3495C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3495C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000702D5u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000702D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000702DBu); RECOMP_ABI_CALL(0x00030C80u, sub_00030C80); /* call 0x00030C80 */

loc_000702DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007031C; /* jne: not equal / not zero */

loc_000702E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000702FD; /* jne: not equal / not zero */

loc_000702E8: ;
    SET_LO8(eax, MEM8(esi * 2 + 0x348990));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007031C; /* je: equal / zero */

loc_000702F3: ;
    eax = SX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + eax * 4 + 0x3C);
    goto loc_00070315;

loc_000702FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007031C; /* jne: not equal / not zero */

loc_00070302: ;
    SET_LO8(eax, MEM8(esi * 2 + 0x348991));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007031C; /* je: equal / zero */

loc_0007030D: ;
    eax = SX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + eax * 4 + 0x50);

loc_00070315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007031C; /* je: equal / zero */

loc_0007031A: ;
    ebx = eax;

loc_0007031C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070323u); RECOMP_ABI_CALL(0x000700C0u, sub_000700C0); /* call 0x000700C0 */

loc_00070323: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000702BA(); return; } /* jb: below (unsigned <) */

loc_0007032C: ;
    ecx = 1;
    PUSH32(esp, 0x00070336u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00070336: ;
    _fa = (uint32_t)(MEM8(0x316FF2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x316FF2), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070348; /* je: equal / zero */

loc_0007033F: ;
    SET_LO8(eax, MEM8(0x3495B8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070351; /* je: equal / zero */

loc_00070348: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007034Eu); RECOMP_ABI_CALL(0x00035200u, sub_00035200); /* call 0x00035200 */

loc_0007034E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070351: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007035Au); RECOMP_ABI_CALL(0x00164EB0u, sub_00164EB0); /* call 0x00164EB0 */

loc_0007035A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00070370
 * Original: 0x00070370 - 0x00070393 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070370: ;
    ecx = MEM32(ecx * 4 + 0x912A40);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4B0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007038D; /* ja: above (unsigned >) */

loc_00070384: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2751) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0x2751 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070392; /* jne: not equal / not zero */

loc_0007038D: ;
    eax = 1;

loc_00070392: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000703A0
 * Original: 0x000703A0 - 0x000703DE (62 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000703A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000703A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90315C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = 1;
    if (CMP_BE(_fa, _fb)) goto loc_000703D2; /* jbe: below or equal (unsigned <=) */

loc_000703B4: ;
    eax = MEM32(esi * 4 + 0x912A40);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000703D2; /* jne: not equal / not zero */

loc_000703C2: ;
    ecx = esi;
    PUSH32(esp, 0x000703C9u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_000703C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000703D8; /* je: equal / zero */

loc_000703CD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000703B4; /* jb: below (unsigned <) */

loc_000703D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000703D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000703E0
 * Original: 0x000703E0 - 0x0007040A (42 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000703E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000703E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x000703F5u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000703F5: ;
    MEM32(esi + 8) = eax;
    edx = MEM32(0x912964);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = edx;
    MEM8(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00070410
 * Original: 0x00070410 - 0x00070453 (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070410: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x280;
    edi = 0x913968;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x9032A0) = eax;
    MEM32(0x9032A4) = eax;
    MEM32(0x9032A8) = eax;
    MEM32(0x9032AC) = eax;
    MEM32(0x9032B0) = eax;
    MEM32(0x9032B4) = eax;
    MEM32(0x9032B8) = eax;
    MEM32(0x9032BC) = eax;
    MEM32(0x9032C0) = eax;
    MEM32(0x9032C4) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070460
 * Original: 0x00070460 - 0x00070520 (192 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070460: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x912960) = esi;
    MEM32(0x903CF0) = esi;
    MEM32(0x903D14) = 4;
    MEM32(0x902DE0) = esi;
    MEM32(0x903D28) = esi;
    MEM32(0x903CCC) = esi;
    PUSH32(esp, 0x00070490u); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_00070490: ;
    PUSH32(esp, 0x903160);
    PUSH32(esp, 0x0007049Au); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_0007049A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x903170) = eax;
    MEM32(0x903174) = eax;
    MEM32(0x903178) = eax;
    MEM32(0x90317C) = eax;
    MEM32(0x903180) = eax;
    MEM32(0x903184) = eax;
    MEM32(0x903188) = eax;
    MEM32(0x90318C) = eax;
    MEM32(0x903190) = eax;
    MEM32(0x903194) = eax;
    MEM32(0x903198) = eax;
    MEM32(0x90319C) = eax;
    MEM32(0x9031A0) = eax;
    MEM32(0x9031A4) = eax;
    MEM32(0x9031A8) = eax;
    MEM32(0x9131FC) = esi;
    MEM32(0x914798) = esi;
    MEM32(0x91479C) = esi;
    MEM32(0x903CC0) = esi;
    MEM32(0x903CF8) = esi;
    MEM32(0x9031AC) = eax;
    MEM32(0x9031C4) = 1;
    MEM32(0x903ECC) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070520
 * Original: 0x00070520 - 0x0007057D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070520(void)
{

loc_00070520: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(ecx + 4) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x15));
    MEM8(ecx + 5) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x16));
    MEM8(ecx + 6) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x17));
    MEM8(ecx + 7) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x18));
    MEM8(ecx + 8) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x19));
    MEM8(ecx + 9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1A));
    MEM8(ecx + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1B));
    MEM8(ecx + 0xB) = LO8(edx);
    SET_LO16(edx, MEM16(eax + 0x1C));
    MEM16(ecx + 0xC) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x1E));
    MEM16(ecx + 0xE) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x20));
    MEM16(ecx + 0x10) = LO16(edx);
    SET_LO16(eax, MEM16(eax + 0x22));
    MEM16(ecx + 0x12) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00070580
 * Original: 0x00070580 - 0x000705A4 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070580: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 4) = eax;
    esi = MEM32(edx);
    eax = MEM32(ecx);
    esi = ~esi;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = esi;
    esi = MEM32(edx);
    eax = ~eax;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000705B0
 * Original: 0x000705B0 - 0x0007060D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000705B0(void)
{

loc_000705B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(ecx + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 6));
    MEM8(ecx + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 7));
    MEM8(ecx + 0x17) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(ecx + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(ecx + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xA));
    MEM8(ecx + 0x1A) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xB));
    MEM8(ecx + 0x1B) = LO8(edx);
    SET_LO16(edx, MEM16(eax + 0xC));
    MEM16(ecx + 0x1C) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0xE));
    MEM16(ecx + 0x1E) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x10));
    MEM16(ecx + 0x20) = LO16(edx);
    SET_LO16(eax, MEM16(eax + 0x12));
    MEM16(ecx + 0x22) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00070610
 * Original: 0x00070610 - 0x00070611 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070610(void)
{

loc_00070610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070620
 * Original: 0x00070620 - 0x00070708 (232 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    ebp = edi + 0x6E9A90;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x9032A0);
    PUSH32(esp, 0x0007063Cu); RECOMP_ABI_CALL(0x00070520u, sub_00070520); /* call 0x00070520 */

loc_0007063C: ;
    ebx = MEM32(esp + 0x20);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    eax = ebx + 0x6E9A90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9032B4);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00070658u); RECOMP_ABI_CALL(0x00070520u, sub_00070520); /* call 0x00070520 */

loc_00070658: ;
    esi = MEM32(0x903D28);
    eax = MEM32(0x903CF0);
    edx = MEM32(0x902DA0);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = edx + ecx * 4;
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x913968;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007068Eu); RECOMP_ABI_CALL(0x000705B0u, sub_000705B0); /* call 0x000705B0 */

loc_0007068E: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(0x902DA0);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + esi * 4;
    eax = esi + esi * 4;
    esi = MEM32(esp + 0x30);
    ecx = eax * 4 + 0x913968;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000706B5u); RECOMP_ABI_CALL(0x000705B0u, sub_000705B0); /* call 0x000705B0 */

loc_000706B5: ;
    PUSH32(esp, 0x9032A0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000706C0u); RECOMP_ABI_CALL(0x00070580u, sub_00070580); /* call 0x00070580 */

loc_000706C0: ;
    PUSH32(esp, 0x9032B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000706CBu); RECOMP_ABI_CALL(0x00070580u, sub_00070580); /* call 0x00070580 */

loc_000706CB: ;
    edx = MEM32(0x913290);
    eax = MEM32(0x903CF0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000706F8; /* ja: above (unsigned >) */

loc_000706DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x6E9A98) = eax;
    MEM32(ebx + 0x6E9A98) = eax;
    MEM32(edi + 0x6E9A9C) = eax;
    MEM32(ebx + 0x6E9A9C) = eax;

loc_000706F8: ;
    eax = MEM32(0x902DA0);
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x902DA0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
