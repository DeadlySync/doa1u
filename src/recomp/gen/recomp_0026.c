/**
 * DOAU1 - Recompiled code chunk 26
 * Functions: 250 (0x000FEF80 - 0x00107340)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000FEF80
 * Original: 0x000FEF80 - 0x000FF0DF (351 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEF80(void)
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

loc_000FEF80: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FF0DB; /* jp: parity */

loc_000FEF96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    edi = edi;

loc_000FEFA0: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2A87BC)); /* fmul dword ptr [0x2a87bc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SMEM32(esp + 0x14) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    ebp = MEM32(esp + 0x2C);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(esp + 0x14);
    esi = MEM32(0x2F791C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF063; /* jl: less (signed <) */

loc_000FEFD3: ;
    ebx = MEM32(esp + 0x38);
    eax = edi + 4;
    ecx = ebx + 0xC;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ebp + -4;
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = edi * 4;
    MEM32(esp + 0x10) = ebp;

loc_000FEFF1: ;
    ebp = MEM32(ecx + -12);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x800000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    ebp = MEM32(ebx + eax + -16);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -20)); /* fmul dword ptr [eax - 0x14] */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x800000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    ebp = MEM32(ecx + -20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -16)); /* fmul dword ptr [eax - 0x10] */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x800000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    ebp = MEM32(ecx + -16);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x800000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -8)); /* fmul dword ptr [eax - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_000FEFF1; /* jne: not equal / not zero */

loc_000FF057: ;
    edi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x2C);

loc_000FF063: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF09D; /* jge: greater or equal (signed >=) */

loc_000FF067: ;
    ebp = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + ebx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000FF080;

    /* nop */
    /* nop */

loc_000FF080: ;
    ebx = MEM32(eax + ebp);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x800000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -4)); /* fmul dword ptr [eax - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_000FF080; /* jne: not equal / not zero */

loc_000FF09D: ;
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF0BA; /* jne: not equal / not zero */

loc_000FF0AC: ;
    eax = MEM32(esp + 0x20);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    MEM32(ecx) = eax;
    goto loc_000FF0BC;

loc_000FF0BA: ;
    fp_pop(); /* fstp st(0) */

loc_000FF0BC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FEFA0; /* jnp: not parity */

loc_000FF0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000FF0DB: ;
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
 * sub_000FF0E0
 * Original: 0x000FF0E0 - 0x000FF138 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FF0E0(void)
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

loc_000FF0E0: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87D0)); /* fadd dword ptr [0x2a87d0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C100)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c100] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FF11D; /* jp: parity */

loc_000FF0FD: ;
    /* nop */

loc_000FF100: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2A87CC)); /* fmul dword ptr [0x2a87cc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C100)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c100] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FF100; /* jnp: not parity */

loc_000FF11D: ;
    fp_push(MEMF(0x2A87C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x2A87C4) - fp_top()); /* fsubr dword ptr [0x2a87c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87C0)); /* fadd dword ptr [0x2a87c0] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF140
 * Original: 0x000FF140 - 0x000FF17D (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF140(void)
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

loc_000FF140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF17A; /* jge: greater or equal (signed >=) */

loc_000FF14E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_000FF158: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000FF15Eu); RECOMP_ABI_CALL(0x00104870u, sub_00104870); /* call 0x00104870 */

loc_000FF15E: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2A87D4)); /* fmul dword ptr [0x2a87d4] */
    MEMF(ebp + esi * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_000FF158; /* jl: less (signed <) */

loc_000FF178: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000FF17A: ;
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
 * sub_000FF180
 * Original: 0x000FF180 - 0x000FF2DA (346 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF180(void)
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

loc_000FF180: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0xFC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM32(esi + 0x100) = ecx;
    edx = MEM32(edi + 0xFC);
    MEM32(esp + 0xC) = eax;
    MEM32(edi + 0x100) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000FF26D; /* jle: less or equal (signed <=) */

loc_000FF1BA: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x34) = ebp;
    ebp = MEM32(esp + 0x40);
    MEM32(esp + 0x14) = eax;

loc_000FF1D1: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF1DBu); RECOMP_ABI_CALL(0x000EE760u, sub_000EE760); /* call 0x000EE760 */

loc_000FF1DB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x000FF1F7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FF1F7: ;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x3C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esp + 0x3C)); /* fisub dword ptr [esp + 0x3c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + eax * 4 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + eax * 4)); /* fsub dword ptr [ecx + eax*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + eax * 4)); /* fadd dword ptr [ecx + eax*4] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esi + eax * 4 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + eax * 4)); /* fsub dword ptr [esi + eax*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + eax * 4)); /* fadd dword ptr [esi + eax*4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + ebx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + eax * 4 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + eax * 4)); /* fsub dword ptr [ebp + eax*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + eax * 4)); /* fadd dword ptr [ebp + eax*4] */
    fp_push(MEMF(edi + eax * 4 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + eax * 4)); /* fsub dword ptr [edi + eax*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + eax * 4)); /* fadd dword ptr [edi + eax*4] */
    eax = MEM32(esp + 0x34);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    if ((_fa != 0)) goto loc_000FF1D1; /* jne: not equal / not zero */

loc_000FF268: ;
    ebp = MEM32(esp + 0x2C);
    POP32(esp, ebx);

loc_000FF26D: ;
    edx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x20);
    eax = ebp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF2BE; /* jl: less (signed <) */

loc_000FF27E: ;
    ecx = ebp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + edx * 4 + 8;
    edx = edx + ecx * 4;

loc_000FF290: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -24)); /* fadd dword ptr [eax - 0x18] */
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -20)); /* fadd dword ptr [eax - 0x14] */
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -16)); /* fadd dword ptr [eax - 0x10] */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -12)); /* fadd dword ptr [eax - 0xc] */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF290; /* jne: not equal / not zero */

loc_000FF2BE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF2D3; /* jge: greater or equal (signed >=) */

loc_000FF2C2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + edx * 4 + -4)); /* fadd dword ptr [esi + edx*4 - 4] */
    MEMF(esi + edx * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_000FF2C2; /* jl: less (signed <) */

loc_000FF2D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000FF2E0
 * Original: 0x000FF2E0 - 0x000FF417 (311 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF2E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_000FF3C5; /* jl: less (signed <) */

loc_000FF307: ;
    ecx = esi + ebp * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esp + 0x20);
    edx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x20) = ebx;
    /* nop */

loc_000FF320: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x24) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_000FF37C; /* jl: less (signed <) */

loc_000FF331: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebx * 4;
    MEM32(esp + 0x24) = ebp;

loc_000FF343: ;
    ebp = MEM32(ecx + edx);
    MEM32(edi + eax * 4) = ebp;
    ebp = MEM32(ecx);
    MEM32(esi + eax * 4) = ebp;
    ebp = MEM32(ecx + edx);
    MEM32(edi + eax * 4 + -4) = ebp;
    ebp = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + eax * 4) = ebp;
    ebp = MEM32(ecx + edx);
    MEM32(edi + eax * 4 + -4) = ebp;
    ebp = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + eax * 4) = ebp;
    ebp = MEM32(ecx + edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + eax * 4) = ebp;
    ebp = MEM32(ecx);
    MEM32(esi + eax * 4) = ebp;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FF343; /* jne: not equal / not zero */

loc_000FF378: ;
    ebx = MEM32(esp + 0x28);

loc_000FF37C: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF3AF; /* jge: greater or equal (signed >=) */

loc_000FF382: ;
    ebp = esi + eax * 4;
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esp + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esp + 0x10);

loc_000FF397: ;
    ebp = MEM32(ecx + edx);
    MEM32(edx + ebx) = ebp;
    ebp = MEM32(ecx);
    MEM32(ebx) = ebp;
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ebp;
    if ((_fa != 0)) goto loc_000FF397; /* jne: not equal / not zero */

loc_000FF3AF: ;
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ebx;
    if ((_fa != 0)) goto loc_000FF320; /* jne: not equal / not zero */

loc_000FF3C1: ;
    ebp = MEM32(esp + 0x20);

loc_000FF3C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF411; /* jl: less (signed <) */

loc_000FF3C9: ;
    ecx = esi + ebp * 4;
    ebx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ecx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FF3D5: ;
    edx = MEM32(ecx + ebx);
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(ecx);
    MEM32(esi + eax * 4) = edx;
    edx = MEM32(esp + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FF407; /* jle: less or equal (signed <=) */

loc_000FF3EA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + eax * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000FF3F0: ;
    MEM32(ecx + ebx) = 0;
    MEM32(ecx) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FF3F0; /* jne: not equal / not zero */

loc_000FF403: ;
    ecx = MEM32(esp + 0x24);

loc_000FF407: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ecx;
    if ((_fa != 0)) goto loc_000FF3D5; /* jne: not equal / not zero */

loc_000FF411: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF420
 * Original: 0x000FF420 - 0x000FF521 (257 bytes, 91 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FF420(void)
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

loc_000FF420: ;
    fp_push(MEMF(0x2A87E0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2A87DC)); /* fmul dword ptr [0x2a87dc] */
    PUSH32(esp, 0x000FF435u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FF435: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF457; /* jge: greater or equal (signed >=) */

loc_000FF43D: ;
    edx = ecx;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2A87D8)); /* fmul dword ptr [0x2a87d8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87E0)); /* fadd dword ptr [0x2a87e0] */

loc_000FF457: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    edx = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_L(_fas, _fbs)) goto loc_000FF4F6; /* jl: less (signed <) */

loc_000FF46E: ;
    PUSH32(esp, ebp);
    edx = ecx + -1;
    esi = esi + ecx * 4 + 8;
    PUSH32(esp, edi);

loc_000FF477: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF481; /* jl: less (signed <) */

loc_000FF47B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87D8)); /* fadd dword ptr [0x2a87d8] */

loc_000FF481: ;
    ebp = ecx;
    ebp = ebp & 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000FF490; /* jne: not equal / not zero */

loc_000FF488: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + -8)); /* fadd dword ptr [esi - 8] */
    MEMF(esi + -8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FF490: ;
    edi = edx + 3;
    ebx = edi + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF4A0; /* jl: less (signed <) */

loc_000FF49A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87D8)); /* fadd dword ptr [0x2a87d8] */

loc_000FF4A0: ;
    ebx = edx;
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000FF4AF; /* jne: not equal / not zero */

loc_000FF4A7: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + -4)); /* fadd dword ptr [esi - 4] */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FF4AF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF4B9; /* jl: less (signed <) */

loc_000FF4B3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87D8)); /* fadd dword ptr [0x2a87d8] */

loc_000FF4B9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF4C3; /* jne: not equal / not zero */

loc_000FF4BD: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FF4C3: ;
    edi = edx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF4D0; /* jl: less (signed <) */

loc_000FF4CA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87D8)); /* fadd dword ptr [0x2a87d8] */

loc_000FF4D0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF4DC; /* jne: not equal / not zero */

loc_000FF4D4: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FF4DC: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + -3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF477; /* jl: less (signed <) */

loc_000FF4F0: ;
    esi = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000FF4F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF51C; /* jge: greater or equal (signed >=) */

loc_000FF4FA: ;
    /* nop */

loc_000FF500: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF50A; /* jl: less (signed <) */

loc_000FF504: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A87D8)); /* fadd dword ptr [0x2a87d8] */

loc_000FF50A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF517; /* jne: not equal / not zero */

loc_000FF50F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + ecx * 4)); /* fadd dword ptr [esi + ecx*4] */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FF517: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF500; /* jl: less (signed <) */

loc_000FF51C: ;
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF530
 * Original: 0x000FF530 - 0x000FF633 (259 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF530(void)
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

loc_000FF530: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF596; /* jl: less (signed <) */

loc_000FF54A: ;
    edx = edi + -4;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 8;
    ecx = edx * 4;
    goto loc_000FF560;

    /* nop */

loc_000FF560: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -24)); /* fadd dword ptr [eax - 0x18] */
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -20)); /* fadd dword ptr [eax - 0x14] */
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -16)); /* fadd dword ptr [eax - 0x10] */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -12)); /* fadd dword ptr [eax - 0xc] */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    if ((_fa != 0)) goto loc_000FF560; /* jne: not equal / not zero */

loc_000FF596: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF5B3; /* jge: greater or equal (signed >=) */

loc_000FF59A: ;
    /* nop */

loc_000FF5A0: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + ecx * 4 + -4)); /* fadd dword ptr [esi + ecx*4 - 4] */
    MEMF(esi + ecx * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    if (CMP_L(_fas, _fbs)) goto loc_000FF5A0; /* jl: less (signed <) */

loc_000FF5B3: ;
    edi = MEM32(esp + 0x24);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF613; /* jl: less (signed <) */

loc_000FF5C4: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = ecx + 0xC;
    ecx = edi + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 4;
    ebp = ecx * 4;
    /* nop */

loc_000FF5E0: ;
    fp_push(MEMF(edx + -12)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -20)); /* fadd dword ptr [eax - 0x14] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + eax + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -16)); /* fadd dword ptr [eax - 0x10] */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -12)); /* fadd dword ptr [eax - 0xc] */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF5E0; /* jne: not equal / not zero */

loc_000FF60E: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, ebx);

loc_000FF613: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FF62F; /* jge: greater or equal (signed >=) */

loc_000FF617: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_000FF620: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF620; /* jne: not equal / not zero */

loc_000FF62F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF640
 * Original: 0x000FF640 - 0x000FF67D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF640(void)
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

loc_000FF640: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FF643: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi * 4 + 0x2A87FC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi*4 + 0x2a87fc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF65B; /* je: equal / zero */

loc_000FF655: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF643; /* jl: less (signed <) */

loc_000FF65B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF665u); RECOMP_ABI_CALL(0x000EE460u, sub_000EE460); /* call 0x000EE460 */

loc_000FF665: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x2A87E4)); /* fadd dword ptr [esi*4 + 0x2a87e4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2A8810)); /* fsub dword ptr [0x2a8810] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF680
 * Original: 0x000FF680 - 0x000FF8A8 (552 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF680(void)
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

loc_000FF680: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF6A6; /* je: equal / zero */

loc_000FF699: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FF6A6: ;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    PUSH32(esp, esi);
    edx = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000FF703; /* jl: less (signed <) */

loc_000FF6B0: ;
    esi = ebx + -4;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi * 4;
    PUSH32(esp, ebp);
    ebp = edx;
    edx = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);

loc_000FF6C6: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + -8)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF6C6; /* jne: not equal / not zero */

loc_000FF703: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FF717; /* jle: less or equal (signed <=) */

loc_000FF707: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF707; /* jne: not equal / not zero */

loc_000FF717: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FF727; /* jle: less or equal (signed <=) */

loc_000FF71B: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    goto loc_000FF72D;

loc_000FF727: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */

loc_000FF72D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    if (CMP_L(_fas, _fbs)) goto loc_000FF800; /* jl: less (signed <) */

loc_000FF746: ;
    esi = edi + -4;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    /* nop */

loc_000FF760: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -12)); /* fadd dword ptr [eax - 0xc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -12)); /* fmul dword ptr [edx - 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -12)); /* fmul dword ptr [ecx - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -12)); /* fadd dword ptr [eax - 0xc] */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -8)); /* fmul dword ptr [edx - 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -8)); /* fmul dword ptr [ecx - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -4)); /* fmul dword ptr [ecx - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    if ((_fa != 0)) goto loc_000FF760; /* jne: not equal / not zero */

loc_000FF7FE: ;
    goto loc_000FF804;

loc_000FF800: ;
    edx = MEM32(esp + 0x14);

loc_000FF804: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FF836; /* jle: less or equal (signed <=) */

loc_000FF808: ;
    esi = edi;
    /* nop */

loc_000FF810: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -4)); /* fmul dword ptr [ecx - 4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    if ((_fa != 0)) goto loc_000FF810; /* jne: not equal / not zero */

loc_000FF836: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF88E; /* jl: less (signed <) */

loc_000FF841: ;
    esi = ebx + -4;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000FF851: ;
    fp_push(MEMF(edx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + -8)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -4)); /* fadd dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF851; /* jne: not equal / not zero */

loc_000FF88E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_000FF8A5; /* jle: less or equal (signed <=) */

loc_000FF893: ;
    ecx = ebx;

loc_000FF895: ;
    fp_push(MEMF(edx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF895; /* jne: not equal / not zero */

loc_000FF8A5: ;
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
 * sub_000FF8B0
 * Original: 0x000FF8B0 - 0x000FFA60 (432 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF8B0(void)
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

loc_000FF8B0: ;
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x2F791C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2F7918);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x202;
    edi = esp + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x840);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FF966; /* jle: less or equal (signed <=) */

loc_000FF8E2: ;
    edi = MEM32(esp + 0x828);
    eax = MEM32(esp + 0x830);
    edx = MEM32(esp + 0x838);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    goto loc_000FF910;

loc_000FF909: ;
    eax = MEM32(esp + 0x14);
    /* nop */

loc_000FF910: ;
    fp_push(MEMF(eax + edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FF91Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FF91E: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    esi = eax;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(0x2A831C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + edi)); /* fmul dword ptr [eax + edi] */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FF942u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FF942: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4)); /* fmul dword ptr [ebx + eax*4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + eax * 4)); /* fmul dword ptr [ebp + eax*4] */
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + esi * 4 + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF909; /* jne: not equal / not zero */

loc_000FF966: ;
    edx = MEM32(esp + 0x844);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FF9FE; /* jle: less or equal (signed <=) */

loc_000FF975: ;
    edi = MEM32(esp + 0x82C);
    eax = MEM32(esp + 0x834);
    ecx = MEM32(esp + 0x83C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_000FF9A0;

loc_000FF99C: ;
    eax = MEM32(esp + 0x18);

loc_000FF9A0: ;
    fp_push(MEMF(eax + edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FF9AEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FF9AE: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(0x2A831C)); /* fld float */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edi)); /* fmul dword ptr [ecx + edi] */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FF9D2u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FF9D2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4)); /* fmul dword ptr [ebx + eax*4] */
    ecx = esp + esi * 4 + 0x20;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + esi * 4 + 0x1C)); /* fadd dword ptr [esp + esi*4 + 0x1c] */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + eax * 4)); /* fmul dword ptr [ebp + eax*4] */
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FF99C; /* jne: not equal / not zero */

loc_000FF9FE: ;
    PUSH32(esp, 8);
    edx = esp + 0x20;
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000FFA0Cu); RECOMP_ABI_CALL(0x000D7FD0u, sub_000D7FD0); /* call 0x000D7FD0 */

loc_000FFA0C: ;
    eax = MEM32(esp + 0x854);
    edx = MEM32(esp + 0x858);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x828;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
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
    ecx = ebx;
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
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edx;
    esi = esp + 0x28;
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
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FFA60
 * Original: 0x000FFA60 - 0x000FFD52 (754 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFA60(void)
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

loc_000FFA60: ;
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x2F791C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2F7918);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x202;
    edi = esp + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x858);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FFB16; /* jle: less or equal (signed <=) */

loc_000FFA92: ;
    edi = MEM32(esp + 0x828);
    eax = MEM32(esp + 0x838);
    edx = MEM32(esp + 0x848);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    goto loc_000FFAC0;

loc_000FFAB9: ;
    eax = MEM32(esp + 0x14);
    /* nop */

loc_000FFAC0: ;
    fp_push(MEMF(eax + edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFACEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFACE: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    esi = eax;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(0x2A831C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + edi)); /* fmul dword ptr [eax + edi] */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFAF2u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFAF2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4)); /* fmul dword ptr [ebx + eax*4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + eax * 4)); /* fmul dword ptr [ebp + eax*4] */
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + esi * 4 + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FFAB9; /* jne: not equal / not zero */

loc_000FFB16: ;
    edx = MEM32(esp + 0x85C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FFBAE; /* jle: less or equal (signed <=) */

loc_000FFB25: ;
    edi = MEM32(esp + 0x82C);
    eax = MEM32(esp + 0x83C);
    ecx = MEM32(esp + 0x84C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_000FFB50;

loc_000FFB4C: ;
    eax = MEM32(esp + 0x18);

loc_000FFB50: ;
    fp_push(MEMF(eax + edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFB5Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFB5E: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(0x2A831C)); /* fld float */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edi)); /* fmul dword ptr [ecx + edi] */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFB82u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFB82: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4)); /* fmul dword ptr [ebx + eax*4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + esi * 4 + 0x1C)); /* fadd dword ptr [esp + esi*4 + 0x1c] */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = esp + esi * 4 + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + eax * 4)); /* fmul dword ptr [ebp + eax*4] */
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FFB4C; /* jne: not equal / not zero */

loc_000FFBAE: ;
    edx = MEM32(esp + 0x860);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FFC4E; /* jle: less or equal (signed <=) */

loc_000FFBBD: ;
    edi = MEM32(esp + 0x830);
    eax = MEM32(esp + 0x840);
    ecx = MEM32(esp + 0x850);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_000FFBF0;

loc_000FFBE4: ;
    eax = MEM32(esp + 0x18);
    goto loc_000FFBF0;

    /* nop */

loc_000FFBF0: ;
    fp_push(MEMF(eax + edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFBFEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFBFE: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(0x2A831C)); /* fld float */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + edi)); /* fmul dword ptr [edx + edi] */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFC22u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFC22: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4)); /* fmul dword ptr [ebx + eax*4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + esi * 4 + 0x1C)); /* fadd dword ptr [esp + esi*4 + 0x1c] */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = esp + esi * 4 + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + eax * 4)); /* fmul dword ptr [ebp + eax*4] */
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FFBE4; /* jne: not equal / not zero */

loc_000FFC4E: ;
    edx = MEM32(esp + 0x864);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FFCEE; /* jle: less or equal (signed <=) */

loc_000FFC5D: ;
    edi = MEM32(esp + 0x834);
    eax = MEM32(esp + 0x844);
    ecx = MEM32(esp + 0x854);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_000FFC90;

loc_000FFC84: ;
    eax = MEM32(esp + 0x18);
    goto loc_000FFC90;

    /* nop */

loc_000FFC90: ;
    fp_push(MEMF(eax + edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFC9Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFC9E: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    esi = eax;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x2A831C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + edi)); /* fmul dword ptr [eax + edi] */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x281BD0)); /* fadd qword ptr [0x281bd0] */
    PUSH32(esp, 0x000FFCC2u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFCC2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4)); /* fmul dword ptr [ebx + eax*4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + esi * 4 + 0x1C)); /* fadd dword ptr [esp + esi*4 + 0x1c] */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = esp + esi * 4 + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + eax * 4)); /* fmul dword ptr [ebp + eax*4] */
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000FFC84; /* jne: not equal / not zero */

loc_000FFCEE: ;
    PUSH32(esp, 8);
    ecx = esp + 0x20;
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FFCFCu); RECOMP_ABI_CALL(0x000D7FD0u, sub_000D7FD0); /* call 0x000D7FD0 */

loc_000FFCFC: ;
    eax = MEM32(esp + 0x874);
    edx = MEM32(esp + 0x878);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x828;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
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
    ecx = ebx;
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
    ecx = eax;
    edi = eax + edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x28;
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
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FFD60
 * Original: 0x000FFD60 - 0x000FFF9A (570 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFD60(void)
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

loc_000FFD60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0EC)); /* fmul dword ptr [0x22c0ec] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi);
    MEM32(esi + eax * 4) = ecx;
    edx = MEM32(esi + 4);
    MEM32(esi + eax * 4 + 4) = edx;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + eax * 4 + -4);
    MEM32(esi + eax * 4 + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + -4) = edx;
    PUSH32(esp, 0x000FFDACu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFDAC: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ebp = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0EC)); /* fmul dword ptr [0x22c0ec] */
    PUSH32(esp, 0x000FFDC1u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000FFDC1: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FFF1F; /* jl: less (signed <) */

loc_000FFDD4: ;
    edx = ecx + -4;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edx;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = ecx + edx * 4;
    MEM32(esp + 0x1C) = ecx;

loc_000FFDE8: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2A8818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2A8818;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_push(MEMF(esi + edx * 4 + -4)); /* fld float */
    edx = esi + edx * 4 + -4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + 4)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(edx)); /* fld float */
    edx = eax + ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x2A8818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2A8818;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = esi + ecx * 4 + -4;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -4)); /* fmul dword ptr [eax - 4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -4)); /* fmul dword ptr [eax - 4] */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + ecx * 4 + -4;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x2A8818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2A8818;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -4)); /* fmul dword ptr [eax - 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = esi + ecx * 4 + -4;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x2A8818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2A8818;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = edx + ebp;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if ((_fa != 0)) goto loc_000FFDE8; /* jne: not equal / not zero */

loc_000FFF1B: ;
    ecx = MEM32(esp + 0x1C);

loc_000FFF1F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FFF80; /* jle: less or equal (signed <=) */

loc_000FFF23: ;
    MEM32(esp + 0x1C) = ecx;

loc_000FFF27: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_push(MEMF(esi + edx * 4 + -4)); /* fld float */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2A8818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2A8818;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    edx = esi + edx * 4 + -4;
    fp_push(MEMF(edx + 4)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 4)); /* fld float */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(edx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    ecx = MEM32(esp + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(esp + 0x1C) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if ((_fa != 0)) goto loc_000FFF27; /* jne: not equal / not zero */

loc_000FFF80: ;
    ecx = MEM32(esp + 0x24);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FFFA0
 * Original: 0x000FFFA0 - 0x00100001 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FFFA0: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    ecx = eax * 4 + 8;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x3C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = 2;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001000DF(); return; } /* jl: less (signed <) */

loc_000FFFED: ;
    ebx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x2C);
    eax = ebx + 4;
    edx = ebp + 8;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00100001(); return; /* fallthrough 0x00100001 */

}

/**
 * sub_00100001
 * Original: 0x00100001 - 0x00100005 (4 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100001: ;
    MEM32(esp + 0x14) = ebp;

    g_seh_ebp = ebp; sub_00100005(); return; /* fallthrough 0x00100005 */

}

/**
 * sub_00100005
 * Original: 0x00100005 - 0x00100009 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100005: ;
    _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esp + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_00100009(); return; /* fallthrough 0x00100009 */

}

/**
 * sub_00100009
 * Original: 0x00100009 - 0x0010000D (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100009(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100009: ;
    MEM32(esp + 0x10) = ebx;

    g_seh_ebp = ebp; sub_0010000D(); return; /* fallthrough 0x0010000D */

}

/**
 * sub_0010000D
 * Original: 0x0010000D - 0x00100014 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010000D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010000D: ;
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00100014(); return; /* fallthrough 0x00100014 */

}

/**
 * sub_00100014
 * Original: 0x00100014 - 0x00100017 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100014(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100014: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00100017(); return; /* fallthrough 0x00100017 */

}

/**
 * sub_00100017
 * Original: 0x00100017 - 0x0010001A (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100017(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100017: ;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

    g_seh_ebp = ebp; sub_0010001A(); return; /* fallthrough 0x0010001A */

}

/**
 * sub_0010001A
 * Original: 0x0010001A - 0x00100041 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010001A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_0010001A: ;
    ebx = ebx * 8 + 0xA;
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(esp + 0x38);
    /* nop */
    ebp = MEM32(esp + 0x20);
    fp_push(MEMF(ebp + esi * 4)); /* fld float */
    ebp = MEM32(eax + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -8)); /* fmul dword ptr [edx - 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00100041(); return; /* fallthrough 0x00100041 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100030
 * Original: 0x00100030 - 0x00100041 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00100030: ;
    ebp = MEM32(esp + 0x20);
    fp_push(MEMF(ebp + esi * 4)); /* fld float */
    ebp = MEM32(eax + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -8)); /* fmul dword ptr [edx - 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00100041(); return; /* fallthrough 0x00100041 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100041
 * Original: 0x00100041 - 0x00100044 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100041(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100041: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00100044(); return; /* fallthrough 0x00100044 */

}

/**
 * sub_00100044
 * Original: 0x00100044 - 0x00100047 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100044: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00100047(); return; /* fallthrough 0x00100047 */

}

/**
 * sub_00100047
 * Original: 0x00100047 - 0x00100049 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100047(void)
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

loc_00100047: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */

    g_seh_ebp = ebp; sub_00100049(); return; /* fallthrough 0x00100049 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100049
 * Original: 0x00100049 - 0x0010004C (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100049(void)
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

loc_00100049: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ebp * 4)); /* fmul dword ptr [ebx + ebp*4] */

    g_seh_ebp = ebp; sub_0010004C(); return; /* fallthrough 0x0010004C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010004C
 * Original: 0x0010004C - 0x00100050 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010004C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010004C: ;
    ebp = MEM32(esp + 0x10);

    g_seh_ebp = ebp; sub_00100050(); return; /* fallthrough 0x00100050 */

}

/**
 * sub_00100050
 * Original: 0x00100050 - 0x00100053 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00100050(void)
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

loc_00100050: ;
    MEMF(ecx + -40) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_00100053(); return; /* fallthrough 0x00100053 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100053
 * Original: 0x00100053 - 0x00100056 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100053(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100053: ;
    ebx = MEM32(eax + -4);

    g_seh_ebp = ebp; sub_00100056(); return; /* fallthrough 0x00100056 */

}

/**
 * sub_00100056
 * Original: 0x00100056 - 0x00100059 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100056(void)
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

loc_00100056: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ebx * 4)); /* fmul dword ptr [edi + ebx*4] */

    g_seh_ebp = ebp; sub_00100059(); return; /* fallthrough 0x00100059 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100059
 * Original: 0x00100059 - 0x001000C0 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00100059(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00100059: ;
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + ebp)); /* fld float */
    ebp = MEM32(eax + -16);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    ebx = MEM32(esp + 0x38);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ebp * 4)); /* fmul dword ptr [ebx + ebp*4] */
    MEMF(ecx + -32) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(eax + -16);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ebp * 4)); /* fmul dword ptr [edi + ebp*4] */
    ebp = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + ebp + -16)); /* fld float */
    ebp = MEM32(eax + -12);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -16)); /* fmul dword ptr [edx - 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ebp * 4)); /* fmul dword ptr [ebx + ebp*4] */
    MEMF(ecx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(eax + -12);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ebp * 4)); /* fmul dword ptr [edi + ebp*4] */
    ebp = MEM32(esp + 0x20);
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + esi * 4 + -4)); /* fld float */
    ebp = MEM32(eax + -8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -12)); /* fmul dword ptr [edx - 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ebp * 4)); /* fmul dword ptr [ebx + ebp*4] */
    MEMF(ecx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(eax + -8);

    g_seh_ebp = ebp; sub_001000C0(); return; /* fallthrough 0x001000C0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001000C0
 * Original: 0x001000C0 - 0x001000C3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000C0(void)
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

loc_001000C0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ebp * 4)); /* fmul dword ptr [edi + ebp*4] */

    g_seh_ebp = ebp; sub_001000C3(); return; /* fallthrough 0x001000C3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001000C3
 * Original: 0x001000C3 - 0x001000C7 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001000C3: ;
    ebp = MEM32(esp + 0x28);

    g_seh_ebp = ebp; sub_001000C7(); return; /* fallthrough 0x001000C7 */

}

/**
 * sub_001000C7
 * Original: 0x001000C7 - 0x001000CA (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001000C7: ;
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFFFFFDu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001000CA(); return; /* fallthrough 0x001000CA */

}

/**
 * sub_001000CA
 * Original: 0x001000CA - 0x001000CC (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001000CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */

    g_seh_ebp = ebp; sub_001000CC(); return; /* fallthrough 0x001000CC */

}

/**
 * sub_001000CC
 * Original: 0x001000CC - 0x001000CE (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000CC(void)
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

loc_001000CC: ;
    fp_top() = -fp_top(); /* fchs */

    g_seh_ebp = ebp; sub_001000CE(); return; /* fallthrough 0x001000CE */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001000CE
 * Original: 0x001000CE - 0x001000D1 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001000CE(void)
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

loc_001000CE: ;
    MEMF(ecx + -12) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_001000D1(); return; /* fallthrough 0x001000D1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001000D1
 * Original: 0x001000D1 - 0x001000DB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001000D1: ;
    if (_flags /* jl: less (signed <) */) { g_seh_ebp = ebp; sub_00100030(); return; }

loc_001000D7: ;
    ebp = MEM32(esp + 0x34);

    g_seh_ebp = ebp; sub_001000DB(); return; /* fallthrough 0x001000DB */

}

/**
 * sub_001000DB
 * Original: 0x001000DB - 0x001000DF (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001000DB: ;
    eax = MEM32(esp + 0x18);

    g_seh_ebp = ebp; sub_001000DF(); return; /* fallthrough 0x001000DF */

}

/**
 * sub_001000DF
 * Original: 0x001000DF - 0x0010015A (123 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000DF(void)
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

loc_001000DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010013E; /* jge: greater or equal (signed >=) */

loc_001000E5: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    ecx = ecx + eax * 4;
    eax = edx + esi * 4;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = edx;
    /* nop */

loc_00100110: ;
    edx = eax + ebp;
    fp_push(MEMF(edx + esi)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + edx * 4)); /* fmul dword ptr [ebx + edx*4] */
    MEMF(ecx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + edx * 4)); /* fmul dword ptr [edi + edx*4] */
    edx = MEM32(esp + 0x28);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_00100110; /* jne: not equal / not zero */

loc_0010013E: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010014Fu); RECOMP_ABI_CALL(0x000D7FD0u, sub_000D7FD0); /* call 0x000D7FD0 */

loc_0010014F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0010015A
 * Original: 0x0010015A - 0x001001AE (84 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010015A(void)
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

loc_0010015A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001001AB; /* jle: less or equal (signed <=) */

loc_00100169: ;
    eax = ZX16(LO16(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;

loc_00100173: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + 0x10);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    if (CMP_EQ(_fa, _fb)) goto loc_0010019D; /* je: equal / zero */

loc_00100181: ;
    esi = MEM32(ebp + 0xC);
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX16(LO16(ebx));

loc_00100190: ;
    fp_push(MEMF(eax + ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_00100190; /* jne: not equal / not zero */

loc_0010019D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00100173; /* jne: not equal / not zero */

loc_001001A9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001001AB: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001001AE
 * Original: 0x001001AE - 0x0010021A (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001001AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001001AE: ;
    PUSH32(esp, ebp);
    ebp = esp + -84;
    _fb = (uint32_t)(0xC28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x64);
    SET_LO16(eax, MEM16(edi + 2));
    _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    ebx = 0x94;
    MEM32(ebp + 0x24) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x68);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax * 2 + -2);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 0x78)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x78), 0 (16-bit) */
    MEM32(ebp + 0x44) = eax;
    eax = MEM32(ebp + 0x74);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00100295(); return; } /* je: equal / zero */

loc_001001EC: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    edx = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010028D(); return; } /* jge: greater or equal (signed >=) */

loc_001001FB: ;
    ebx = esi;
    ecx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x94);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + eax + 0x7C;
    eax = ebx + eax + 0x7C;
    MEM32(ebp + 0x50) = edx;

    g_seh_ebp = ebp; sub_0010021A(); return; /* fallthrough 0x0010021A */

}

/**
 * sub_0010021A
 * Original: 0x0010021A - 0x00100236 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010021A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010021A: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(eax + -84)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + -84), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100265(); return; } /* jle: less or equal (signed <=) */

loc_00100225: ;
    esi = eax + -80;
    MEM32(ebp + 0x78) = esi;
    edx = ecx + -80;
    ebx = ecx + -124;
    esi = eax + -124;
    g_seh_ebp = ebp; sub_00100239(); return; /* tail jmp 0x00100239 */

}

/**
 * sub_00100236
 * Original: 0x00100236 - 0x00100265 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100236(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100236: ;
    edx = MEM32(ebp + 0x28);
    SET_LO16(edi, MEM16(esi));
    MEM16(ebx) = LO16(edi);
    edi = MEM32(ebp + 0x78);
    edi = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + -84);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00100236; /* jl: less (signed <) */

loc_00100262: ;
    edi = MEM32(ebp + 0x64);

    g_seh_ebp = ebp; sub_00100265(); return; /* fallthrough 0x00100265 */

}

/**
 * sub_00100239
 * Original: 0x00100239 - 0x00100265 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100239(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100239: ;
    SET_LO16(edi, MEM16(esi));
    MEM16(ebx) = LO16(edi);
    edi = MEM32(ebp + 0x78);
    edi = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + -84);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100236(); return; } /* jl: less (signed <) */

loc_00100262: ;
    edi = MEM32(ebp + 0x64);

    g_seh_ebp = ebp; sub_00100265(); return; /* fallthrough 0x00100265 */

}

/**
 * sub_00100265
 * Original: 0x00100265 - 0x0010028D (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100265(void)
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

loc_00100265: ;
    fp_push(MEMF(eax)); /* fld float */
    ebx = 0x94;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO16(edx, MEM16(eax + -84));
    MEM16(ecx + -84) = LO16(edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0010021A(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0010028D(); return; /* fallthrough 0x0010028D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010028D
 * Original: 0x0010028D - 0x00100295 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010028D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010028D: ;
    eax = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x6C) = eax;

    g_seh_ebp = ebp; sub_00100295(); return; /* fallthrough 0x00100295 */

}

/**
 * sub_00100295
 * Original: 0x00100295 - 0x001002EF (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100295(void)
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

loc_00100295: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x70);
    fp_push(MEMF(0x281F58)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + 0x18) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001002C1; /* jle: less or equal (signed <=) */

loc_001002A8: ;
    eax = ebp + -2888;

loc_001002AE: ;
    esi = eax + -140;
    MEMF(eax) = (float)fp_top(); /* fst */
    MEM32(ebp + ecx * 4 + -68) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001002AE; /* jl: less (signed <) */

loc_001002C1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 0x70)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x70), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00100C27(); return; } /* jne: not equal / not zero */

loc_001002CE: ;
    _fa = (uint32_t)(MEM16(ebp + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x7C), 0 (16-bit) */
    esi = MEM32(ebp + 0x60);
    ecx = MEM32(ebp + -68);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0010048D(); return; } /* jne: not equal / not zero */

loc_001002DF: ;
    eax = MEM32(ebp + 0x64);
    SET_LO16(edx, MEM16(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x44) (16-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101796(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001002EF(); return; /* fallthrough 0x001002EF */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001002EF
 * Original: 0x001002EF - 0x00100389 (154 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001002EF(void)
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

loc_001002EF: ;
    edi = MEM32(ebp + 0x5C);
    eax = SX16(LO16(edx));
    edi = edi + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    MEM32(ebp + 0x14) = edi;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100368; /* jne: not equal / not zero */

loc_00100333: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebp + 0x40);
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM16(ecx + 2) = LO16(edx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM16(ecx) = LO16(edx);
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM16(ecx + 0x28) = 2;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); /* fst st(1) */
    fp_pop(); /* fstp st(0) */

loc_00100368: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x2C) = eax;
    MEM32(ebp + 0x78) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100480(); return; } /* jge: greater or equal (signed >=) */

loc_0010037D: ;
    eax = SX16(LO16(edx));
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = eax;

    g_seh_ebp = ebp; sub_00100389(); return; /* fallthrough 0x00100389 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100389
 * Original: 0x00100389 - 0x00100401 (120 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100389(void)
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

loc_00100389: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x78);
    edi = MEM32(ebp + 0x5C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = edi + eax * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + esi)); /* fld float */
    edi = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    edi = MEM32(ebp + 0x78);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0010041F(); return; } /* jne: not equal / not zero */

loc_001003EA: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebp + 0x40);
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM16(ecx) = LO16(edx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM16(ecx + 2) = LO16(edi);

    g_seh_ebp = ebp; sub_00100401(); return; /* fallthrough 0x00100401 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100401
 * Original: 0x00100401 - 0x0010040F (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100401(void)
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

loc_00100401: ;
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM16(ecx + 0x28) = 2;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */

    g_seh_ebp = ebp; sub_0010040F(); return; /* fallthrough 0x0010040F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010040F
 * Original: 0x0010040F - 0x0010041F (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0010040F(void)
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

loc_0010040F: ;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); /* fst st(1) */
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_0010041F(); return; /* fallthrough 0x0010041F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010041F
 * Original: 0x0010041F - 0x00100480 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010041F(void)
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

loc_0010041F: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x38)); /* fmul dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100470; /* jne: not equal / not zero */

loc_0010043A: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebp + 0x38);
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM16(ecx) = LO16(edx);
    MEM16(ecx + 2) = LO16(edi);
    MEM32(ecx + 0x2C) = ebx;
    MEM16(ecx + 0x28) = 2;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); /* fst st(1) */
    fp_pop(); /* fstp st(0) */

loc_00100470: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x78) = edi;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100389(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00100480(); return; /* fallthrough 0x00100480 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100480
 * Original: 0x00100480 - 0x0010048D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100480: ;
    edx = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x44) (16-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001002EF(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0010048D(); return; /* fallthrough 0x0010048D */

}

/**
 * sub_0010048D
 * Original: 0x0010048D - 0x001004AF (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010048D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010048D: ;
    _fa = (uint32_t)(MEM16(ebp + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x7C), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00100857(); return; } /* jne: not equal / not zero */

loc_00100497: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101796(); return; } /* jle: less or equal (signed <=) */

loc_001004A3: ;
    edi = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x28) = eax;

    g_seh_ebp = ebp; sub_001004AF(); return; /* fallthrough 0x001004AF */

}

/**
 * sub_001004AF
 * Original: 0x001004AF - 0x001004D9 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001004AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001004AF: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100845(); return; } /* jge: greater or equal (signed >=) */

loc_001004D6: ;
    edx = SX16(LO16(edx));

    g_seh_ebp = ebp; sub_001004D9(); return; /* fallthrough 0x001004D9 */

}

/**
 * sub_001004D9
 * Original: 0x001004D9 - 0x00100857 (894 bytes, 293 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001004D9(void)
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

loc_001004D9: ;
    ebx = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = SX16(LO16(eax));
    ebx = ebx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0xC)); /* fadd dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x20)); /* fadd dword ptr [ebp + 0x20] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00100546; /* jle: less or equal (signed <=) */

loc_00100510: ;
    ebx = MEM32(ebp + 0x70);
    eax = edi + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx * 2);
    ebx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + -80;
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    ebx = MEM32(ebp + 0x70);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(eax + ebx * 4)); /* fimul dword ptr [eax + ebx*4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x68)); /* fadd dword ptr [ebp + 0x68] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00100510; /* jl: less (signed <) */

loc_00100546: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001005EF; /* jne: not equal / not zero */

loc_00100565: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_001005B4; /* jle: less or equal (signed <=) */

loc_00100577: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x78) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x2C) = eax;

loc_00100589: ;
    eax = MEM32(ebp + 0x2C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00100589; /* jl: less (signed <) */

loc_001005B4: ;
    eax = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x4C);
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_st1() = fp_top(); /* fst st(1) */
    MEM32(ecx + edx * 4 + 0x30) = ebx;
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + edx * 4 + 0x2C) = ebx;
    ebx = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM16(ecx + 0x28) = LO16(ebx);
    goto loc_001005F2;

loc_001005EF: ;
    eax = MEM32(ebp + 0x4C);

loc_001005F2: ;
    ebx = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x78) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00100835; /* jge: greater or equal (signed >=) */

loc_00100607: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = eax;

loc_00100613: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x78);
    edi = MEM32(ebp + 0x5C);
    ebx = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = edi + eax * 4;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + esi)); /* fadd dword ptr [edi + esi] */
    edi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) goto loc_001006C4; /* jle: less or equal (signed <=) */

loc_00100664: ;
    ebx = MEM32(ebp + 0x70);
    edi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(0xFFFFFF84u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFF84u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(int32_t)SMEM16(edi + ebx * 2);
    edi = edi + edi * 4;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x50) = edi;
    edi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(0xFFFFFFB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFB0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(edi + ebx * 4)); /* fild */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edi = MEM32(ebp + 0x50);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x48)); /* fadd dword ptr [ebp + 0x48] */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_00100664; /* jl: less (signed <) */

loc_001006C4: ;
    edi = MEM32(ebp + 0x34);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100773; /* jne: not equal / not zero */

loc_001006E6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100735; /* jle: less or equal (signed <=) */

loc_001006F8: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x3C) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x50) = eax;

loc_0010070A: ;
    eax = MEM32(ebp + 0x50);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x3C);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0010070A; /* jl: less (signed <) */

loc_00100735: ;
    eax = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    MEM16(ecx + edx * 2) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x78));
    fp_st1() = fp_top(); /* fst st(1) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edx * 4 + 0x30) = eax;
    MEM32(ecx + edx * 4 + 0x2C) = eax;
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x28) = LO16(eax);

loc_00100773: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x38)); /* fmul dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100821; /* jne: not equal / not zero */

loc_00100792: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_001007E1; /* jle: less or equal (signed <=) */

loc_001007A4: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x50) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x3C) = eax;

loc_001007B6: ;
    eax = MEM32(ebp + 0x3C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001007B6; /* jl: less (signed <) */

loc_001007E1: ;
    eax = MEM32(ebp + 0x38);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    MEM32(ecx + edx * 4 + 0x30) = MEM32(ecx + edx * 4 + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + edx * 2) = LO16(eax);
    fp_st1() = fp_top(); /* fst st(1) */
    SET_LO16(eax, MEM16(ebp + 0x78));
    fp_pop(); /* fstp st(0) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(eax);

loc_00100821: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebp + 0x78));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00100613; /* jl: less (signed <) */

loc_00100835: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001004D9; /* jl: less (signed <) */

loc_00100845: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x94;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x34) = edi;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001004AF(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00100857(); return; /* fallthrough 0x00100857 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100845
 * Original: 0x00100845 - 0x00100857 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100845(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100845: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x94;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x34) = edi;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001004AF(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00100857(); return; /* fallthrough 0x00100857 */

}

/**
 * sub_00100857
 * Original: 0x00100857 - 0x0010087A (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100857(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100857: ;
    _fa = (uint32_t)(MEM16(ebp + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x7C), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00101796(); return; } /* jne: not equal / not zero */

loc_00100862: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010178E(); return; } /* jle: less or equal (signed <=) */

loc_0010086E: ;
    edi = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x28) = eax;

    g_seh_ebp = ebp; sub_0010087A(); return; /* fallthrough 0x0010087A */

}

/**
 * sub_0010087A
 * Original: 0x0010087A - 0x001008A4 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010087A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010087A: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100C10(); return; } /* jge: greater or equal (signed >=) */

loc_001008A1: ;
    edx = SX16(LO16(edx));

    g_seh_ebp = ebp; sub_001008A4(); return; /* fallthrough 0x001008A4 */

}

/**
 * sub_001008A4
 * Original: 0x001008A4 - 0x001009DE (314 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001008A4(void)
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

loc_001008A4: ;
    ebx = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = SX16(LO16(eax));
    ebx = ebx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0xC)); /* fadd dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x20)); /* fadd dword ptr [ebp + 0x20] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00100911; /* jle: less or equal (signed <=) */

loc_001008DB: ;
    ebx = MEM32(ebp + 0x70);
    eax = edi + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx * 2);
    ebx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + -80;
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    ebx = MEM32(ebp + 0x70);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(eax + ebx * 4)); /* fimul dword ptr [eax + ebx*4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x68)); /* fadd dword ptr [ebp + 0x68] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001008DB; /* jl: less (signed <) */

loc_00100911: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001009BA; /* jne: not equal / not zero */

loc_00100930: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010097F; /* jle: less or equal (signed <=) */

loc_00100942: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x78) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x50) = eax;

loc_00100954: ;
    eax = MEM32(ebp + 0x50);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00100954; /* jl: less (signed <) */

loc_0010097F: ;
    eax = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x4C);
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_st1() = fp_top(); /* fst st(1) */
    MEM32(ecx + edx * 4 + 0x30) = ebx;
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + edx * 4 + 0x2C) = ebx;
    ebx = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM16(ecx + 0x28) = LO16(ebx);
    goto loc_001009BD;

loc_001009BA: ;
    eax = MEM32(ebp + 0x4C);

loc_001009BD: ;
    ebx = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x78) = ebx;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00100C00(); return; } /* jge: greater or equal (signed >=) */

loc_001009D2: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = eax;

    g_seh_ebp = ebp; sub_001009DE(); return; /* fallthrough 0x001009DE */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001009DE
 * Original: 0x001009DE - 0x00100C00 (546 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001009DE(void)
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

loc_001009DE: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x78);
    edi = MEM32(ebp + 0x5C);
    ebx = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = edi + eax * 4;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + esi)); /* fadd dword ptr [edi + esi] */
    edi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100A8F; /* jle: less or equal (signed <=) */

loc_00100A2F: ;
    ebx = MEM32(ebp + 0x70);
    edi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(0xFFFFFF84u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFF84u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(int32_t)SMEM16(edi + ebx * 2);
    edi = edi + edi * 4;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x50) = edi;
    edi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(0xFFFFFFB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFB0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(edi + ebx * 4)); /* fild */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edi = MEM32(ebp + 0x50);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x48)); /* fadd dword ptr [ebp + 0x48] */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_00100A2F; /* jl: less (signed <) */

loc_00100A8F: ;
    edi = MEM32(ebp + 0x34);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100B3E; /* jne: not equal / not zero */

loc_00100AB1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100B00; /* jle: less or equal (signed <=) */

loc_00100AC3: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x50) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x3C) = eax;

loc_00100AD5: ;
    eax = MEM32(ebp + 0x3C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00100AD5; /* jl: less (signed <) */

loc_00100B00: ;
    eax = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    MEM16(ecx + edx * 2) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x78));
    fp_st1() = fp_top(); /* fst st(1) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edx * 4 + 0x30) = eax;
    MEM32(ecx + edx * 4 + 0x2C) = eax;
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x28) = LO16(eax);

loc_00100B3E: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x38)); /* fmul dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100BEC; /* jne: not equal / not zero */

loc_00100B5D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100BAC; /* jle: less or equal (signed <=) */

loc_00100B6F: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x50) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x3C) = eax;

loc_00100B81: ;
    eax = MEM32(ebp + 0x3C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00100B81; /* jl: less (signed <) */

loc_00100BAC: ;
    eax = MEM32(ebp + 0x38);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    MEM32(ecx + edx * 4 + 0x30) = MEM32(ecx + edx * 4 + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + edx * 2) = LO16(eax);
    fp_st1() = fp_top(); /* fst st(1) */
    SET_LO16(eax, MEM16(ebp + 0x78));
    fp_pop(); /* fstp st(0) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(eax);

loc_00100BEC: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebp + 0x78));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001009DE; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00100C00(); return; /* fallthrough 0x00100C00 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100C00
 * Original: 0x00100C00 - 0x00100C10 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100C00: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001008A4(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00100C10(); return; /* fallthrough 0x00100C10 */

}

/**
 * sub_00100C10
 * Original: 0x00100C10 - 0x00100C27 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100C10: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x94;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x34) = edi;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0010087A(); return; } /* jne: not equal / not zero */

loc_00100C22: ;
    g_seh_ebp = ebp; sub_0010178E(); return; /* tail jmp 0x0010178E */

}

/**
 * sub_00100C27
 * Original: 0x00100C27 - 0x00101434 (2061 bytes, 674 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100C27(void)
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

loc_00100C27: ;
    _fa = (uint32_t)(MEM16(ebp + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x7C), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100F1A; /* jne: not equal / not zero */

loc_00100C32: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(edi));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x4C) = esi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101796(); return; } /* jge: greater or equal (signed >=) */

loc_00100C44: ;
    ecx = MEM32(ebp + 0x5C);
    eax = SX16(LO16(esi));
    ecx = ecx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(ebp + 0x14) = ecx;
    ecx = MEM32(ebp + 0x60);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100D28; /* jne: not equal / not zero */

loc_00100C8F: ;
    ecx = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    edi = ecx + -1;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00100CCD; /* jl: less (signed <) */

loc_00100CA8: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x70) = eax;

loc_00100CAF: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100CCD; /* jnp: not parity */

loc_00100CC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00100CAF; /* jge: greater or equal (signed >=) */

loc_00100CCD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    ecx = ebp + ecx * 4 + -72;
    eax = MEM32(ecx);
    MEM32(ebp + 0x70) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00100CF3; /* jle: less or equal (signed <=) */

loc_00100CDA: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + edx + -68) = edi;
    edx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00100CDA; /* jg: greater (signed >) */

loc_00100CF3: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(ebp + edx * 4 + -68) = eax;
    edx = MEM32(ebp + 0x40);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(eax + 2) = LO16(esi);
    MEM16(eax) = LO16(esi);
    MEM32(eax + 0x30) = ebx;
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x28) = 2;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00100D28: ;
    eax = MEM32(ebp + 0x24);
    edx = esi + eax;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x2C) = edx;
    MEM32(ebp + 0x78) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00100F0A; /* jge: greater or equal (signed >=) */

loc_00100D3E: ;
    eax = SX16(LO16(esi));
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = eax;

loc_00100D4A: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(ebp + 0x5C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = SX16(LO16(edx));
    ecx = ecx + eax * 4;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    ecx = MEM32(ebp + 0x60);
    fp_push(MEMF(edi + ecx)); /* fld float */
    edi = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100E44; /* jne: not equal / not zero */

loc_00100DAE: ;
    ecx = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    edi = ecx + -1;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_00100DE6; /* jl: less (signed <) */

loc_00100DC4: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x70) = eax;

loc_00100DCB: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100DE6; /* jnp: not parity */

loc_00100DDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100DCB; /* jge: greater or equal (signed >=) */

loc_00100DE6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    ecx = ebp + ecx * 4 + -72;
    eax = MEM32(ecx);
    MEM32(ebp + 0x70) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00100E0C; /* jle: less or equal (signed <=) */

loc_00100DF3: ;
    esi = MEM32(ebp + 0x70);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    edi = MEM32(ebp + esi + -72);
    MEM32(ebp + esi + -68) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00100DF3; /* jg: greater (signed >) */

loc_00100E09: ;
    esi = MEM32(ebp + 0x4C);

loc_00100E0C: ;
    MEM32(ebp + edx * 4 + -68) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edx = MEM32(ebp + 0x40);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ebp + 0x78);
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(eax) = LO16(esi);
    MEM16(eax + 2) = LO16(edx);
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x28) = 2;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00100E44: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x38)); /* fmul dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100EFA; /* jne: not equal / not zero */

loc_00100E63: ;
    ecx = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    edi = ecx + -1;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_00100E9B; /* jl: less (signed <) */

loc_00100E79: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x70) = eax;

loc_00100E80: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100E9B; /* jnp: not parity */

loc_00100E92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100E80; /* jge: greater or equal (signed >=) */

loc_00100E9B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    ecx = ebp + ecx * 4 + -72;
    eax = MEM32(ecx);
    MEM32(ebp + 0x70) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00100EC1; /* jle: less or equal (signed <=) */

loc_00100EA8: ;
    esi = MEM32(ebp + 0x70);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    edi = MEM32(ebp + esi + -72);
    MEM32(ebp + esi + -68) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00100EA8; /* jg: greater (signed >) */

loc_00100EBE: ;
    esi = MEM32(ebp + 0x4C);

loc_00100EC1: ;
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(ebp + edx * 4 + -68) = eax;
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp + 0x38);
    MEM32(eax + 0x7C) = edx;
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp + 0x78);
    MEM16(eax) = LO16(esi);
    fp_pop(); /* fstp st(0) */
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x28) = 2;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00100EFA: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x78) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00100D4A; /* jl: less (signed <) */

loc_00100F0A: ;
    esi = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x4C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00100C44; /* jl: less (signed <) */

loc_00100F1A: ;
    _fa = (uint32_t)(MEM16(ebp + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x7C), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010140E; /* jne: not equal / not zero */

loc_00100F24: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101796(); return; } /* jle: less or equal (signed <=) */

loc_00100F30: ;
    edi = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x28) = eax;

loc_00100F3C: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x30) = ecx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001013FC; /* jge: greater or equal (signed >=) */

loc_00100F63: ;
    ecx = SX16(LO16(ecx));

loc_00100F66: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edx = MEM32(ebp + 0x5C);
    esi = MEM32(ebp + 0x60);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + eax * 4;
    MEM32(ebp + 0x14) = edx;
    fp_push(MEMF(edx)); /* fld float */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x144);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0xC)); /* fadd dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = edx;
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x20)); /* fadd dword ptr [ebp + 0x20] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00100FD8; /* jle: less or equal (signed <=) */

loc_00100FA3: ;
    esi = MEM32(ebp + 0x70);
    edx = edi + -124;
    edx = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    esi = MEM32(ebp + 0x60);
    edx = edx + edx * 4;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + edx * 4)); /* fld float */
    esi = MEM32(ebp + 0x70);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ecx (32-bit) */
    edx = edi + -80;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(edx + esi * 4)); /* fimul dword ptr [edx + esi*4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x68)); /* fadd dword ptr [ebp + 0x68] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00100FA3; /* jl: less (signed <) */

loc_00100FD8: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001010E9; /* jne: not equal / not zero */

loc_00100FF7: ;
    esi = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM32(ebp + 0x70) = edx;
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00101036; /* jl: less (signed <) */

loc_00101011: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x78) = eax;

loc_00101018: ;
    eax = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101036; /* jnp: not parity */

loc_0010102A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00101018; /* jge: greater or equal (signed >=) */

loc_00101036: ;
    eax = MEM32(ebp + esi * 4 + -72);
    esi = MEM32(ebp + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(ebp + 0x70) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0010105D; /* jle: less or equal (signed <=) */

loc_00101044: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + edx + -68) = esi;
    edx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00101044; /* jg: greater (signed >) */

loc_0010105D: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + edx * 4 + -68) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001010A6; /* jle: less or equal (signed <=) */

loc_00101069: ;
    edx = eax + 0x2C;
    MEM32(ebp + 0x78) = edx;
    edx = edi + -80;
    MEM32(ebp + 0x68) = edx;
    edx = edi + -124;
    MEM32(ebp + 0x50) = edx;

loc_0010107B: ;
    edx = MEM32(ebp + 0x50);
    SET_LO16(edx, MEM16(edx));
    esi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + esi * 2) = LO16(edx);
    edx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x78);
    edx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ecx (32-bit) */
    MEM32(esi) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0010107B; /* jl: less (signed <) */

loc_001010A6: ;
    edx = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x30);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ebp + 0x4C);
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    MEM16(eax + ecx * 2) = LO16(edx);
    fp_pop(); /* fstp st(0) */
    MEM32(eax + ecx * 4 + 0x30) = ebx;
    MEM32(eax + ecx * 4 + 0x2C) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x28) = LO16(esi);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + eax * 4 + -72);
    fp_push(MEMF(eax + 0x8C)); /* fld float */
    goto loc_001010EC;

loc_001010E9: ;
    edx = MEM32(ebp + 0x4C);

loc_001010EC: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x2C) = edx;
    MEM32(ebp + 0x78) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001013EC; /* jge: greater or equal (signed >=) */

loc_00101101: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = eax;

loc_0010110E: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = SX16(LO16(edx));
    edx = MEM32(ebp + 0x5C);
    edx = edx + eax * 4;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x144);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    edx = MEM32(ebp + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + edx)); /* fadd dword ptr [esi + edx] */
    esi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + esi * 4)); /* fld float */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) goto loc_001011B5; /* jle: less or equal (signed <=) */

loc_0010115F: ;
    ebx = edx;

loc_00101161: ;
    edx = edi + -124;
    edx = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    _fb = (uint32_t)(0xFFFFFFB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFB0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + edx * 4;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push((double)SMEM32(edi + esi * 4)); /* fild */
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    fp_push(MEMF(ebx + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    edi = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x48)); /* fadd dword ptr [ebp + 0x48] */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_00101161; /* jl: less (signed <) */

loc_001011B2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001011B5: ;
    edx = MEM32(ebp + 0x78);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    esi = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001012CB; /* jne: not equal / not zero */

loc_001011DA: ;
    fp_pop(); /* fstp st(0) */
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00101216; /* jl: less (signed <) */

loc_001011F1: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x50) = eax;

loc_001011F8: ;
    eax = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101216; /* jnp: not parity */

loc_0010120A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001011F8; /* jge: greater or equal (signed >=) */

loc_00101216: ;
    eax = MEM32(ebp + esi * 4 + -72);
    esi = MEM32(ebp + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(ebp + 0x70) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0010123D; /* jle: less or equal (signed <=) */

loc_00101224: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + edx + -68) = esi;
    edx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00101224; /* jg: greater (signed >) */

loc_0010123D: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + edx * 4 + -68) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101286; /* jle: less or equal (signed <=) */

loc_00101249: ;
    edx = eax + 0x2C;
    MEM32(ebp + 0x50) = edx;
    edx = edi + -80;
    MEM32(ebp + 0x68) = edx;
    edx = edi + -124;
    MEM32(ebp + 0x3C) = edx;

loc_0010125B: ;
    edx = MEM32(ebp + 0x3C);
    SET_LO16(edx, MEM16(edx));
    esi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + esi * 2) = LO16(edx);
    edx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x50);
    edx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ecx (32-bit) */
    MEM32(esi) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0010125B; /* jl: less (signed <) */

loc_00101286: ;
    edx = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x30);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    SET_LO16(edx, MEM16(ebp + 0x4C));
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(eax + ecx * 2) = LO16(edx);
    edx = MEM32(ebp + 0x78);
    fp_pop(); /* fstp st(0) */
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    MEM32(eax + ecx * 4 + 0x30) = ebx;
    MEM32(eax + ecx * 4 + 0x2C) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x28) = LO16(esi);
    esi = MEM32(ebp + 0x18);
    eax = MEM32(ebp + esi * 4 + -72);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_001012CB: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x38)); /* fmul dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001013DC; /* jne: not equal / not zero */

loc_001012EA: ;
    fp_pop(); /* fstp st(0) */
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00101326; /* jl: less (signed <) */

loc_00101301: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x50) = eax;

loc_00101308: ;
    eax = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101326; /* jnp: not parity */

loc_0010131A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00101308; /* jge: greater or equal (signed >=) */

loc_00101326: ;
    eax = MEM32(ebp + esi * 4 + -72);
    esi = MEM32(ebp + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(ebp + 0x70) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0010134D; /* jle: less or equal (signed <=) */

loc_00101334: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + edx + -68) = esi;
    edx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00101334; /* jg: greater (signed >) */

loc_0010134D: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + edx * 4 + -68) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101396; /* jle: less or equal (signed <=) */

loc_00101359: ;
    edx = eax + 0x2C;
    MEM32(ebp + 0x50) = edx;
    edx = edi + -80;
    MEM32(ebp + 0x68) = edx;
    edx = edi + -124;
    MEM32(ebp + 0x3C) = edx;

loc_0010136B: ;
    edx = MEM32(ebp + 0x3C);
    SET_LO16(edx, MEM16(edx));
    esi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + esi * 2) = LO16(edx);
    edx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x50);
    edx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ecx (32-bit) */
    MEM32(esi) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0010136B; /* jl: less (signed <) */

loc_00101396: ;
    edx = MEM32(ebp + 0x38);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x30);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    SET_LO16(edx, MEM16(ebp + 0x4C));
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + ecx * 4 + 0x30) = MEM32(eax + ecx * 4 + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + ecx * 2) = LO16(edx);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(ebp + 0x78);
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    MEM32(eax + ecx * 4 + 0x2C) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x28) = LO16(esi);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + eax * 4 + -72);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_001013DC: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x78) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0010110E; /* jl: less (signed <) */

loc_001013EC: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00100F66; /* jl: less (signed <) */

loc_001013FC: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x94;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x34) = edi;
    if ((_fa != 0)) goto loc_00100F3C; /* jne: not equal / not zero */

loc_0010140E: ;
    _fa = (uint32_t)(MEM16(ebp + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x7C), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00101796(); return; } /* jne: not equal / not zero */

loc_00101419: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + -68);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010178E(); return; } /* jle: less or equal (signed <=) */

loc_00101428: ;
    edi = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x50) = edi;
    MEM32(ebp + 0x28) = eax;

    g_seh_ebp = ebp; sub_00101434(); return; /* fallthrough 0x00101434 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101434
 * Original: 0x00101434 - 0x0010145E (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101434: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010177C(); return; } /* jge: greater or equal (signed >=) */

loc_0010145B: ;
    edx = SX16(LO16(edx));

    g_seh_ebp = ebp; sub_0010145E(); return; /* fallthrough 0x0010145E */

}

/**
 * sub_0010145E
 * Original: 0x0010145E - 0x00101583 (293 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010145E(void)
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

loc_0010145E: ;
    esi = MEM32(ebp + 0x5C);
    ebx = MEM32(ebp + 0x60);
    eax = SX16(LO16(eax));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi + eax * 4;
    MEM32(ebp + 0x14) = esi;
    fp_push(MEMF(esi)); /* fld float */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x144);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0xC)); /* fadd dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = esi;
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x20)); /* fadd dword ptr [ebp + 0x20] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_001014CF; /* jle: less or equal (signed <=) */

loc_0010149A: ;
    ebx = MEM32(ebp + 0x70);
    esi = edi + -124;
    esi = (uint32_t)(int32_t)SMEM16(esi + ebx * 2);
    ebx = MEM32(ebp + 0x60);
    esi = esi + esi * 4;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + esi * 4)); /* fld float */
    ebx = MEM32(ebp + 0x70);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    esi = edi + -80;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esi + ebx * 4)); /* fimul dword ptr [esi + ebx*4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x68)); /* fadd dword ptr [ebp + 0x68] */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0010149A; /* jl: less (signed <) */

loc_001014CF: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010155F; /* jne: not equal / not zero */

loc_001014EA: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010152A; /* jle: less or equal (signed <=) */

loc_001014FA: ;
    ebx = edi + -80;
    MEM32(ebp + 0x70) = ebx;
    ebx = edi + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x68) = ebx;

loc_00101509: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x70);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101509; /* jl: less (signed <) */

loc_0010152A: ;
    eax = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x4C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_st1() = fp_top(); /* fst st(1) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    fp_pop(); /* fstp st(0) */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM32(ecx + edx * 4 + 0x30) = esi;
    MEM32(ecx + edx * 4 + 0x2C) = esi;
    esi = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_00101562;

loc_0010155F: ;
    eax = MEM32(ebp + 0x4C);

loc_00101562: ;
    esi = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x78) = esi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010176C(); return; } /* jge: greater or equal (signed >=) */

loc_00101577: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = eax;

    g_seh_ebp = ebp; sub_00101583(); return; /* fallthrough 0x00101583 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101583
 * Original: 0x00101583 - 0x001015D6 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00101583(void)
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

loc_00101583: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = SX16(LO16(esi));
    esi = MEM32(ebp + 0x5C);
    esi = esi + eax * 4;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x144);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    esi = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    esi = MEM32(ebp + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + esi)); /* fadd dword ptr [ebx + esi] */
    ebx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101631(); return; } /* jle: less or equal (signed <=) */

    g_seh_ebp = ebp; sub_001015D6(); return; /* fallthrough 0x001015D6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001015D6
 * Original: 0x001015D6 - 0x00101631 (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001015D6(void)
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

loc_001015D6: ;
    ebx = MEM32(ebp + 0x70);
    esi = edi + -124;
    esi = (uint32_t)(int32_t)SMEM16(esi + ebx * 2);
    _fb = (uint32_t)(0xFFFFFFB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFB0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + esi * 4;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push((double)SMEM32(edi + ebx * 4)); /* fild */
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    ebx = esi + edi;
    edi = MEM32(ebp + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edx (32-bit) */
    fp_push(MEMF(edi + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x48)); /* fadd dword ptr [ebp + 0x48] */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + esi * 4)); /* fld float */
    edi = MEM32(ebp + 0x50);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_001015D6; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00101631(); return; /* fallthrough 0x00101631 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101631
 * Original: 0x00101631 - 0x0010176C (315 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101631(void)
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

loc_00101631: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001016C5; /* jne: not equal / not zero */

loc_0010164C: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010168C; /* jle: less or equal (signed <=) */

loc_0010165C: ;
    ebx = edi + -80;
    MEM32(ebp + 0x70) = ebx;
    ebx = edi + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x68) = ebx;

loc_0010166B: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x70);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010166B; /* jl: less (signed <) */

loc_0010168C: ;
    eax = MEM32(ebp + 0x40);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x78);
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEM16(ecx + edx * 2) = LO16(eax);
    fp_st1() = fp_top(); /* fst st(1) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_pop(); /* fstp st(0) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx + edx * 2 + 2) = LO16(esi);
    MEM32(ecx + edx * 4 + 0x30) = eax;
    MEM32(ecx + edx * 4 + 0x2C) = eax;
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x28) = LO16(eax);
    goto loc_001016C8;

loc_001016C5: ;
    esi = MEM32(ebp + 0x78);

loc_001016C8: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x38)); /* fmul dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010175C; /* jne: not equal / not zero */

loc_001016E3: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_00101723; /* jle: less or equal (signed <=) */

loc_001016F3: ;
    ebx = edi + -80;
    MEM32(ebp + 0x70) = ebx;
    ebx = edi + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x68) = ebx;

loc_00101702: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x70);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101702; /* jl: less (signed <) */

loc_00101723: ;
    eax = MEM32(ebp + 0x38);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x78);
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEM16(ecx + edx * 2) = LO16(eax);
    fp_st1() = fp_top(); /* fst st(1) */
    eax = MEM32(ebp + 0x30);
    fp_pop(); /* fstp st(0) */
    MEM16(ecx + edx * 2 + 2) = LO16(esi);
    MEM32(ecx + edx * 4 + 0x2C) = 1;
    MEM32(ecx + edx * 4 + 0x30) = MEM32(ecx + edx * 4 + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x28) = LO16(eax);

loc_0010175C: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x78) = esi;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101583(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0010176C(); return; /* fallthrough 0x0010176C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010176C
 * Original: 0x0010176C - 0x0010177C (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010176C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010176C: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x44)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x44) (16-bit) */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010145E(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0010177C(); return; /* fallthrough 0x0010177C */

}

/**
 * sub_0010177C
 * Original: 0x0010177C - 0x00101796 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0010177C(void)
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

loc_0010177C: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x94;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x50) = edi;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00101434(); return; } /* jne: not equal / not zero */

loc_0010178E: ;
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00101798(); return; /* tail jmp 0x00101798 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010178E
 * Original: 0x0010178E - 0x00101796 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0010178E(void)
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

loc_0010178E: ;
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00101798(); return; /* tail jmp 0x00101798 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101796
 * Original: 0x00101796 - 0x0010181C (134 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101796(void)
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

loc_00101796: ;
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), eax (32-bit) */
    MEM32(ebp + 0x78) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101814; /* jle: less or equal (signed <=) */

loc_001017A2: ;
    ecx = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001017A8: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + eax * 4 + -68;
    eax = MEM32(edx);
    esi = MEM32(eax + 0x88);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(eax + 0x7C);
    MEM32(ecx) = esi;
    SET_LO16(esi, MEM16(eax + 0x28));
    MEM16(ecx + -84) = LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x28), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00101802; /* jle: less or equal (signed <=) */

loc_001017CF: ;
    edx = eax;
    MEM32(ebp + 0x68) = eax;
    esi = ecx + -80;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -124;

loc_001017DD: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(ebx);
    ebx = MEM32(eax);
    MEM32(esi) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001017DD; /* jl: less (signed <) */

loc_00101802: ;
    eax = MEM32(ebp + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    MEM32(ebp + 0x78) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001017A8; /* jl: less (signed <) */

loc_00101814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101798
 * Original: 0x00101798 - 0x0010181C (132 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101798(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101798: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), eax (32-bit) */
    MEM32(ebp + 0x78) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101814; /* jle: less or equal (signed <=) */

loc_001017A2: ;
    ecx = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001017A8: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + eax * 4 + -68;
    eax = MEM32(edx);
    esi = MEM32(eax + 0x88);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(eax + 0x7C);
    MEM32(ecx) = esi;
    SET_LO16(esi, MEM16(eax + 0x28));
    MEM16(ecx + -84) = LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x28), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00101802; /* jle: less or equal (signed <=) */

loc_001017CF: ;
    edx = eax;
    MEM32(ebp + 0x68) = eax;
    esi = ecx + -80;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -124;

loc_001017DD: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(ebx);
    ebx = MEM32(eax);
    MEM32(esi) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001017DD; /* jl: less (signed <) */

loc_00101802: ;
    eax = MEM32(ebp + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    MEM32(ebp + 0x78) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001017A8; /* jl: less (signed <) */

loc_00101814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0010181C
 * Original: 0x0010181C - 0x00101D6C (1360 bytes, 442 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010181C(void)
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

loc_0010181C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx + 2));
    _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(ebx + eax * 2 + -2));
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x24), 0 (16-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -16) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00101904; /* je: equal / zero */

loc_00101852: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    edx = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001018F3; /* jge: greater or equal (signed >=) */

loc_00101861: ;
    eax = MEM32(ebp + 0x20);
    edi = esi;
    ecx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x94);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + eax + 0x7C;
    eax = edi + eax + 0x7C;
    MEM32(ebp + -20) = edx;

loc_00101883: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(eax + -84)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + -84), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001018CB; /* jle: less or equal (signed <=) */

loc_0010188E: ;
    esi = eax + -80;
    MEM32(ebp + 0x14) = esi;
    edx = ecx + -80;
    edi = ecx + -124;
    esi = eax + -124;
    goto loc_001018A2;

loc_0010189F: ;
    edx = MEM32(ebp + -8);

loc_001018A2: ;
    SET_LO16(ebx, MEM16(esi));
    MEM16(edi) = LO16(ebx);
    ebx = MEM32(ebp + 0x14);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + -84);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010189F; /* jl: less (signed <) */

loc_001018CB: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO16(edx, MEM16(eax + -84));
    MEM16(ecx + -84) = LO16(edx);
    edx = 0x94;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00101883; /* jne: not equal / not zero */

loc_001018F3: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + -16);
    edx = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = eax;

loc_00101904: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    fp_push(MEMF(0x281F58)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101934; /* jle: less or equal (signed <=) */

loc_00101917: ;
    eax = ebp + -2932;

loc_0010191D: ;
    edi = eax + -140;
    MEMF(eax) = (float)fp_top(); /* fst */
    MEM32(ebp + ecx * 4 + -112) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010191D; /* jl: less (signed <) */

loc_00101934: ;
    _fa = (uint32_t)(MEM16(ebp + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x1C), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00101C63; /* jne: not equal / not zero */

loc_0010193F: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 0 (16-bit) */
    ecx = MEM32(ebp + -112);
    if (CMP_NE(_fa, _fb)) goto loc_001019C2; /* jne: not equal / not zero */

loc_00101949: ;
    SET_LO16(edx, MEM16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010204B(); return; } /* jge: greater or equal (signed >=) */

loc_00101955: ;
    edi = MEM32(ebp + 8);
    eax = SX16(LO16(edx));
    fp_push(MEMF(edi + eax * 4)); /* fld float */
    edi = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + edi)); /* fld float */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001019BA; /* jne: not equal / not zero */

loc_0010198B: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_push(MEMF(ebp + -4)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(edx);
    MEM32(ecx + 0x2C) = eax;
    MEM16(ecx + 0x28) = LO16(eax);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); /* fst st(1) */
    fp_pop(); /* fstp st(0) */

loc_001019BA: ;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101955; /* jl: less (signed <) */

loc_001019C2: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00101B10; /* jne: not equal / not zero */

loc_001019CD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010204B(); return; } /* jle: less or equal (signed <=) */

loc_001019D9: ;
    edx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_001019E2: ;
    SET_LO16(eax, MEM16(edx + -84));
    MEM16(ebp + 0x24) = LO16(eax);
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00101B01; /* jge: greater or equal (signed >=) */

loc_00101A08: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);

loc_00101A0C: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + edi * 4)); /* fadd dword ptr [eax + edi*4] */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + esi)); /* fadd dword ptr [eax + esi] */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00101A62; /* jle: less or equal (signed <=) */

loc_00101A36: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    eax = edx + -80;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(eax + esi * 4)); /* fimul dword ptr [eax + esi*4] */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00101A36; /* jl: less (signed <) */

loc_00101A62: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00101AEE; /* jne: not equal / not zero */

loc_00101A7D: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_00101ABD; /* jle: less or equal (signed <=) */

loc_00101A8D: ;
    edi = edx + -80;
    MEM32(ebp + 0x1C) = edi;
    edi = edx + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + -4) = edi;

loc_00101A9C: ;
    edi = MEM32(ebp + -4);
    SET_LO16(edi, MEM16(edi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + esi * 2) = LO16(edi);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101A9C; /* jl: less (signed <) */

loc_00101ABD: ;
    eax = MEM32(ebp + -12);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x24);
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x14);
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_st1() = fp_top(); /* fst st(1) */
    MEM16(ecx + ebx * 2) = LO16(eax);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_00101AF1;

loc_00101AEE: ;
    eax = MEM32(ebp + 0x14);

loc_00101AF1: ;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00101A0C; /* jl: less (signed <) */

loc_00101B01: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001019E2; /* jne: not equal / not zero */

loc_00101B10: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0010204B(); return; } /* jne: not equal / not zero */

loc_00101B1B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00102043(); return; } /* jle: less or equal (signed <=) */

loc_00101B27: ;
    edx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_00101B30: ;
    SET_LO16(eax, MEM16(edx + -84));
    MEM16(ebp + 0x24) = LO16(eax);
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00101C4F; /* jge: greater or equal (signed >=) */

loc_00101B56: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);

loc_00101B5A: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + edi * 4)); /* fadd dword ptr [eax + edi*4] */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + esi)); /* fadd dword ptr [eax + esi] */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00101BB0; /* jle: less or equal (signed <=) */

loc_00101B84: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    eax = edx + -80;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(eax + esi * 4)); /* fimul dword ptr [eax + esi*4] */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00101B84; /* jl: less (signed <) */

loc_00101BB0: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00101C3C; /* jne: not equal / not zero */

loc_00101BCB: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_00101C0B; /* jle: less or equal (signed <=) */

loc_00101BDB: ;
    edi = edx + -80;
    MEM32(ebp + 0x1C) = edi;
    edi = edx + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + -4) = edi;

loc_00101BEA: ;
    edi = MEM32(ebp + -4);
    SET_LO16(edi, MEM16(edi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + esi * 2) = LO16(edi);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101BEA; /* jl: less (signed <) */

loc_00101C0B: ;
    eax = MEM32(ebp + -12);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x24);
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x14);
    MEMF(ecx + 0x8C) = (float)fp_top(); /* fst */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_st1() = fp_top(); /* fst st(1) */
    MEM16(ecx + ebx * 2) = LO16(eax);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_00101C3F;

loc_00101C3C: ;
    eax = MEM32(ebp + 0x14);

loc_00101C3F: ;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00101B5A; /* jl: less (signed <) */

loc_00101C4F: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00101B30; /* jne: not equal / not zero */

loc_00101C5E: ;
    g_seh_ebp = ebp; sub_00102043(); return; /* tail jmp 0x00102043 */

loc_00101C63: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00101D4C; /* jne: not equal / not zero */

loc_00101C6E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ebx));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(esi) (16-bit) */
    MEM32(ebp + 0x14) = edi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010204B(); return; } /* jge: greater or equal (signed >=) */

loc_00101C7F: ;
    ecx = MEM32(ebp + 8);
    eax = SX16(LO16(edi));
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + ecx)); /* fld float */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00101D3E; /* jne: not equal / not zero */

loc_00101CB9: ;
    ecx = MEM32(ebp + -20);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    esi = ecx + -1;
    fp_push(MEMF(ebp + -4)); /* fld float */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_00101CEC; /* jl: less (signed <) */

loc_00101CD0: ;
    ebx = ebp + edx * 4 + -116;

loc_00101CD4: ;
    eax = MEM32(ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101CEC; /* jnp: not parity */

loc_00101CE3: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00101CD4; /* jge: greater or equal (signed >=) */

loc_00101CEC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    ecx = ebp + ecx * 4 + -116;
    eax = MEM32(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00101D06; /* jle: less or equal (signed <=) */

loc_00101CF6: ;
    edi = MEM32(ebp + esi * 4 + -116);
    MEM32(ebp + esi * 4 + -112) = edi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00101CF6; /* jg: greater (signed >) */

loc_00101D03: ;
    edi = MEM32(ebp + 0x14);

loc_00101D06: ;
    ebx = MEM32(ebp + 0x10);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + -16);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + edx * 4 + -112) = eax;
    edx = MEM32(ebp + -12);
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_pop(); /* fstp st(0) */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x2C) = edx;
    MEM16(eax + 0x28) = LO16(edx);
    edx = MEM32(ebp + -28);
    MEM16(eax) = LO16(edi);
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00101D3E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(esi) (16-bit) */
    MEM32(ebp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00101C7F; /* jl: less (signed <) */

loc_00101D4C: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00101EF8(); return; } /* jne: not equal / not zero */

loc_00101D57: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0010204B(); return; } /* jle: less or equal (signed <=) */

loc_00101D63: ;
    edx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

    g_seh_ebp = ebp; sub_00101D6C(); return; /* fallthrough 0x00101D6C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101D6C
 * Original: 0x00101D6C - 0x00101D95 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101D6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101D6C: ;
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + -84));
    MEM32(ebp + -24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x24) = ecx;
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101EE9(); return; } /* jge: greater or equal (signed >=) */

loc_00101D92: ;
    edi = SX16(LO16(ecx));

    g_seh_ebp = ebp; sub_00101D95(); return; /* fallthrough 0x00101D95 */

}

/**
 * sub_00101D95
 * Original: 0x00101D95 - 0x00101EE9 (340 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101D95(void)
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

loc_00101D95: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + esi * 4)); /* fadd dword ptr [eax + esi*4] */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + ecx)); /* fadd dword ptr [eax + ecx] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00101DEA; /* jle: less or equal (signed <=) */

loc_00101DBF: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    eax = edx + -80;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(eax + ecx * 4)); /* fimul dword ptr [eax + ecx*4] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00101DBF; /* jl: less (signed <) */

loc_00101DE7: ;
    ebx = MEM32(ebp + 0x10);

loc_00101DEA: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00101ED6; /* jne: not equal / not zero */

loc_00101E09: ;
    esi = MEM32(ebp + -20);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(ebp + -4)); /* fld float */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_00101E3A; /* jl: less (signed <) */

loc_00101E1E: ;
    ebx = ebp + ecx * 4 + -116;

loc_00101E22: ;
    eax = MEM32(ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [eax + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101E3A; /* jnp: not parity */

loc_00101E31: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00101E22; /* jge: greater or equal (signed >=) */

loc_00101E3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    eax = MEM32(ebp + -20);
    eax = MEM32(ebp + eax * 4 + -116);
    MEM32(ebp + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00101E5E; /* jle: less or equal (signed <=) */

loc_00101E48: ;
    esi = MEM32(ebp + 0x1C);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ecx (32-bit) */
    ebx = MEM32(ebp + esi + -116);
    MEM32(ebp + esi + -112) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_00101E48; /* jg: greater (signed >) */

loc_00101E5E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + ecx * 4 + -112) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101E98; /* jle: less or equal (signed <=) */

loc_00101E68: ;
    ebx = edx + -80;
    MEM32(ebp + 0x1C) = ebx;
    ebx = edx + -124;
    ecx = eax + 0x2C;
    MEM32(ebp + -4) = ebx;

loc_00101E77: ;
    ebx = MEM32(ebp + -4);
    SET_LO16(ebx, MEM16(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x1C);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101E77; /* jl: less (signed <) */

loc_00101E98: ;
    ecx = MEM32(ebp + -12);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ebx = MEM32(ebp + 0x10);
    MEMF(eax + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x7C) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(eax + edi * 2) = LO16(ecx);
    ecx = MEM32(ebp + 0x24);
    fp_pop(); /* fstp st(0) */
    MEM32(eax + edi * 4 + 0x2C) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x28) = LO16(ecx);
    eax = MEM32(ebp + -20);
    eax = MEM32(ebp + eax * 4 + -116);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00101ED6: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00101D95; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00101EE9(); return; /* fallthrough 0x00101EE9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101EE9
 * Original: 0x00101EE9 - 0x00101EF8 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101EE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101EE9: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00101D6C(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00101EF8(); return; /* fallthrough 0x00101EF8 */

}

/**
 * sub_00101EF8
 * Original: 0x00101EF8 - 0x00101F1B (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101EF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101EF8: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0010204B(); return; } /* jne: not equal / not zero */

loc_00101F03: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + -112);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00102043(); return; } /* jle: less or equal (signed <=) */

loc_00101F12: ;
    edx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

    g_seh_ebp = ebp; sub_00101F1B(); return; /* fallthrough 0x00101F1B */

}

/**
 * sub_00101F1B
 * Original: 0x00101F1B - 0x00101F45 (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101F1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101F1B: ;
    SET_LO16(eax, MEM16(edx + -84));
    MEM16(ebp + 0x24) = LO16(eax);
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00102034(); return; } /* jge: greater or equal (signed >=) */

loc_00101F41: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);

    g_seh_ebp = ebp; sub_00101F45(); return; /* fallthrough 0x00101F45 */

}

/**
 * sub_00101F45
 * Original: 0x00101F45 - 0x00101FD5 (144 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101F45(void)
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

loc_00101F45: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + edi * 4)); /* fadd dword ptr [eax + edi*4] */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + esi)); /* fadd dword ptr [eax + esi] */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00101F9B; /* jle: less or equal (signed <=) */

loc_00101F6F: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    eax = edx + -80;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(eax + esi * 4)); /* fimul dword ptr [eax + esi*4] */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x1C)); /* fadd dword ptr [ebp + 0x1c] */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00101F6F; /* jl: less (signed <) */

loc_00101F9B: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00102021(); return; } /* jne: not equal / not zero */

loc_00101FB6: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101FF6(); return; } /* jle: less or equal (signed <=) */

loc_00101FC6: ;
    edi = edx + -80;
    MEM32(ebp + 0x1C) = edi;
    edi = edx + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + -4) = edi;

    g_seh_ebp = ebp; sub_00101FD5(); return; /* fallthrough 0x00101FD5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00101FD5
 * Original: 0x00101FD5 - 0x00101FF6 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101FD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101FD5: ;
    edi = MEM32(ebp + -4);
    SET_LO16(edi, MEM16(edi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + esi * 2) = LO16(edi);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00101FD5; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00101FF6(); return; /* fallthrough 0x00101FF6 */

}

/**
 * sub_00101FF6
 * Original: 0x00101FF6 - 0x00102021 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00101FF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00101FF6: ;
    eax = MEM32(ebp + -12);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    esi = MEM32(ebp + 0x24);
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x14);
    MEM16(ecx + ebx * 2) = LO16(eax);
    fp_st1() = fp_top(); /* fst st(1) */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    g_seh_ebp = ebp; sub_00102024(); return; /* tail jmp 0x00102024 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102010
 * Original: 0x00102010 - 0x00102021 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00102010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00102010: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    g_seh_ebp = ebp; sub_00102024(); return; /* tail jmp 0x00102024 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102021
 * Original: 0x00102021 - 0x00102034 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102021(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102021: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101F45(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00102034(); return; /* fallthrough 0x00102034 */

}

/**
 * sub_00102024
 * Original: 0x00102024 - 0x00102034 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102024(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102024: ;
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -16) (16-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00101F45(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00102034(); return; /* fallthrough 0x00102034 */

}

/**
 * sub_00102034
 * Original: 0x00102034 - 0x0010204B (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00102034(void)
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

loc_00102034: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00101F1B(); return; } /* jne: not equal / not zero */

loc_00102043: ;
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_0010204D(); return; /* tail jmp 0x0010204D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102043
 * Original: 0x00102043 - 0x0010204B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00102043(void)
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

loc_00102043: ;
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_0010204D(); return; /* tail jmp 0x0010204D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010204B
 * Original: 0x0010204B - 0x001020D0 (133 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010204B(void)
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

loc_0010204B: ;
    fp_pop(); /* fstp st(0) */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001020CB; /* jle: less or equal (signed <=) */

loc_00102057: ;
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010205D: ;
    edx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + edx * 4 + -112;
    eax = MEM32(edx);
    esi = MEM32(eax + 0x88);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(eax + 0x7C);
    MEM32(ecx) = esi;
    SET_LO16(esi, MEM16(eax + 0x28));
    MEM16(ecx + -84) = LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x28), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001020BA; /* jle: less or equal (signed <=) */

loc_00102087: ;
    edx = eax;
    MEM32(ebp + 0x24) = eax;
    esi = ecx + -80;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -124;

loc_00102095: ;
    ebx = MEM32(ebp + 0x24);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(ebx);
    ebx = MEM32(eax);
    MEM32(esi) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102095; /* jl: less (signed <) */

loc_001020BA: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010205D; /* jl: less (signed <) */

loc_001020CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010204D
 * Original: 0x0010204D - 0x001020D0 (131 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010204D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010204D: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001020CB; /* jle: less or equal (signed <=) */

loc_00102057: ;
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010205D: ;
    edx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + edx * 4 + -112;
    eax = MEM32(edx);
    esi = MEM32(eax + 0x88);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(eax + 0x7C);
    MEM32(ecx) = esi;
    SET_LO16(esi, MEM16(eax + 0x28));
    MEM16(ecx + -84) = LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x28), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001020BA; /* jle: less or equal (signed <=) */

loc_00102087: ;
    edx = eax;
    MEM32(ebp + 0x24) = eax;
    esi = ecx + -80;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -124;

loc_00102095: ;
    ebx = MEM32(ebp + 0x24);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(ebx);
    ebx = MEM32(eax);
    MEM32(esi) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102095; /* jl: less (signed <) */

loc_001020BA: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010205D; /* jl: less (signed <) */

loc_001020CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001020D0
 * Original: 0x001020D0 - 0x0010218B (187 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001020D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001020D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM16(ebp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x14), 2 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0010215A; /* jne: not equal / not zero */

loc_001020DC: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(edx, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102127; /* je: equal / zero */

loc_001020EB: ;
    eax = MEM32(ebp + 8);
    SET_LO16(esi, MEM16(eax));
    SET_LO16(edi, MEM16(eax + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00102112; /* jge: greater or equal (signed >=) */

loc_001020FD: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00102104; /* jge: greater or equal (signed >=) */

loc_00102102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00102104: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00102178;

loc_00102112: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00102119; /* jge: greater or equal (signed >=) */

loc_00102117: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00102119: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00102178;

loc_00102127: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00102131; /* jge: greater or equal (signed >=) */

loc_0010212F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00102131: ;
    edx = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102150; /* jl: less (signed <) */

loc_00102146: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00102178;

loc_00102150: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00102178;

loc_0010215A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x14), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102182; /* jne: not equal / not zero */

loc_00102163: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010216E; /* jge: greater or equal (signed >=) */

loc_0010216C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010216E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_00102178: ;
    ecx = MEM32(ebp + 0x18);
    MEM16(ecx) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00102187;

loc_00102182: ;
    eax = 0x80010004u;

loc_00102187: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010218B
 * Original: 0x0010218B - 0x00102431 (678 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010218B(void)
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

loc_0010218B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x6554;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102198u); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_00102198: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001021A0u); RECOMP_ABI_CALL(0x000D273Bu, sub_000D273B); /* call 0x000D273B */

loc_001021A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001022C7; /* je: equal / zero */

loc_001021A8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001025A9(); return; } /* jne: not equal / not zero */

loc_001021BA: ;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx + eax * 4;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    ebx = ebp + -340;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ebx + eax * 4;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    ecx = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00102233: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_MEM(edi); /* movups */

loc_00102297: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x1B); /* shufps */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm7 = XMM_ADD(xmm7, xmm0); /* addps */
    if ((_fa != 0)) goto loc_00102297; /* jne: not equal / not zero */

loc_001022B5: ;
    esi = MEM32(ebp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    XMM_STORE(edi, xmm7); /* movups */
    if (CMP_L(_fas, _fbs)) goto loc_00102233; /* jl: less (signed <) */

loc_001022C5: ;
    goto loc_001022DF;

loc_001022C7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -340;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001022DCu); RECOMP_ABI_CALL(0x0010015Au, sub_0010015A); /* call 0x0010015A */

loc_001022DC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001022DF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    fp_push(0.0); /* fldz */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00102318; /* jle: less or equal (signed <=) */

loc_001022EE: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x144);
    edx = ebp + edx + -26264;

loc_001022FD: ;
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(edx) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x144;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001022FD; /* jl: less (signed <) */

loc_00102318: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    ecx = eax + 0x51;
    MEM32(ebp + -4) = eax;
    eax = eax + eax * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -8) = eax;
    _fb = (uint32_t)(0x51) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x51;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    esi = MEM32(ebp + 0xC);
    edi = ebp + -25940;
    ecx = 1;

loc_00102346: ;
    fp_push(0.0); /* fldz */
    ebx = MEM32(ebp + -4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = ebx;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = edx;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00102364: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x51) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x51;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x51) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x51;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + edx * 4) = (float)fp_top(); /* fst */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(edi + ebx * 4) = (float)fp_top(); /* fst */
    if ((_fa != 0)) goto loc_00102364; /* jne: not equal / not zero */

loc_0010237D: ;
    esi = MEM32(ebp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebp + 0x10) (16-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_00102346; /* jl: less (signed <) */

loc_00102389: ;
    eax = MEM32(ebp + 0x28);
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001023C7; /* jne: not equal / not zero */

loc_00102395: ;
    esi = MEM32(ebp + 0x2C);
    ebx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001023C5u); RECOMP_ABI_CALL(0x001001AEu, sub_001001AE); /* call 0x001001AE */

loc_001023C5: ;
    goto loc_00102402;

loc_001023C7: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001025A9(); return; } /* jne: not equal / not zero */

loc_001023D1: ;
    ecx = MEM32(ebp + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    ebx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001023FFu); RECOMP_ABI_CALL(0x0010181Cu, sub_0010181C); /* call 0x0010181C */

loc_001023FF: ;
    esi = MEM32(ebp + 0x2C);

loc_00102402: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + -1;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001024C5(); return; } /* jle: less or equal (signed <=) */

loc_0010241A: ;
    ecx = MEM32(ebp + 0x28);
    _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_0010243A(); return; /* tail jmp 0x0010243A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102431
 * Original: 0x00102431 - 0x001024C5 (148 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102431(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102431: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, MEM16(ecx + esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102475; /* jne: not equal / not zero */

loc_00102444: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edx * 4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00102473u); RECOMP_ABI_CALL(0x001001AEu, sub_001001AE); /* call 0x001001AE */

loc_00102473: ;
    goto loc_001024AE;

loc_00102475: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001025A9(); return; } /* jne: not equal / not zero */

loc_0010247F: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edx * 4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001024AEu); RECOMP_ABI_CALL(0x0010181Cu, sub_0010181C); /* call 0x0010181C */

loc_001024AE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + -1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102431; /* jl: less (signed <) */

loc_001024C2: ;
    esi = MEM32(ebp + 0x2C);

    g_seh_ebp = ebp; sub_001024C5(); return; /* fallthrough 0x001024C5 */

}

/**
 * sub_0010243A
 * Original: 0x0010243A - 0x001024C5 (139 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010243A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010243A: ;
    SET_LO16(ecx, MEM16(ecx + esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102475; /* jne: not equal / not zero */

loc_00102444: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edx * 4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00102473u); RECOMP_ABI_CALL(0x001001AEu, sub_001001AE); /* call 0x001001AE */

loc_00102473: ;
    goto loc_001024AE;

loc_00102475: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001025A9(); return; } /* jne: not equal / not zero */

loc_0010247F: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edx * 4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001024AEu); RECOMP_ABI_CALL(0x0010181Cu, sub_0010181C); /* call 0x0010181C */

loc_001024AE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + -1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00102431(); return; } /* jl: less (signed <) */

loc_001024C2: ;
    esi = MEM32(ebp + 0x2C);

    g_seh_ebp = ebp; sub_001024C5(); return; /* fallthrough 0x001024C5 */

}

/**
 * sub_001024C5
 * Original: 0x001024C5 - 0x001025A9 (228 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001024C5(void)
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

loc_001024C5: ;
    eax = MEM32(ebp + 0x28);
    SET_LO16(eax, MEM16(eax + edi * 2 + -2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102506; /* jne: not equal / not zero */

loc_001024D3: ;
    PUSH32(esp, 2);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + edi * 2 + -4));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax + edi * 2 + -2);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edi * 4 + -4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00102504u); RECOMP_ABI_CALL(0x001001AEu, sub_001001AE); /* call 0x001001AE */

loc_00102504: ;
    goto loc_00102541;

loc_00102506: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001025A9(); return; } /* jne: not equal / not zero */

loc_00102510: ;
    PUSH32(esp, 2);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + edi * 2 + -4));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax + edi * 2 + -2);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edi * 4 + -4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00102541u); RECOMP_ABI_CALL(0x0010181Cu, sub_0010181C); /* call 0x0010181C */

loc_00102541: ;
    edx = MEM32(ebp + 0x30);
    ecx = edx + 0x88;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_00102566; /* jne: not equal / not zero */

loc_0010255F: ;
    fp_push(MEMF(edx + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx)); /* fdiv dword ptr [ecx] */
    goto loc_00102568;

loc_00102566: ;
    fp_push(0.0); /* fldz */

loc_00102568: ;
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = MEM32(ebp + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_0010257A; /* jle: less or equal (signed <=) */

loc_00102574: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0010257A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx + 0x28)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x28), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001025A5; /* jle: less or equal (signed <=) */

loc_00102582: ;
    ecx = edx + 0x2C;

loc_00102585: ;
    _fa = (uint32_t)(MEM16(edx + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + esi * 2), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102599; /* jl: less (signed <) */

loc_0010258C: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    fp_push((double)SMEM32(ecx)); /* fild */
    eax = ebx + eax * 4;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_00102599: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102585; /* jl: less (signed <) */

loc_001025A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001025AE(); return; /* tail jmp 0x001025AE */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001025A9
 * Original: 0x001025A9 - 0x001025B3 (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001025A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001025A9: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001025AE
 * Original: 0x001025AE - 0x001025B3 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001025AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001025AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001025C0
 * Original: 0x001025C0 - 0x00102B32 (1394 bytes, 366 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001025C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001025C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + eax * 2;
    ebp = MEM32(esp + 0x24);
    ebp = ebp << 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    ebx = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_00102892; /* jne: not equal / not zero */

loc_001025F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102750; /* jne: not equal / not zero */

loc_001025FE: ;
    edi = edi;

loc_00102600: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00102600; /* jg: greater (signed >) */

loc_0010273D: ;
    goto loc_00102B2D;

    /* nop */
    /* nop */

loc_00102750: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00102750; /* jg: greater (signed >) */

loc_0010288D: ;
    goto loc_00102B2D;

loc_00102892: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001029F0; /* jne: not equal / not zero */

loc_0010289E: ;
    edi = edi;

loc_001028A0: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001028A0; /* jg: greater (signed >) */

loc_001029DD: ;
    goto loc_00102B2D;

    /* nop */
    /* nop */

loc_001029F0: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + esi + 0x10); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001029F0; /* jg: greater (signed >) */

loc_00102B2D: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00102B40
 * Original: 0x00102B40 - 0x00102CEA (426 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x2C);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + eax * 2;
    ebp = MEM32(esp + 0x28);
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    ebx = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00102E4A(); return; } /* jne: not equal / not zero */

loc_00102B72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00102CF0(); return; } /* jne: not equal / not zero */

loc_00102B7E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00102CF0(); return; } /* jne: not equal / not zero */

loc_00102B8A: ;
    /* nop */

loc_00102B90: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 4;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00102B90; /* jg: greater (signed >) */

loc_00102CE5: ;
    g_seh_ebp = ebp; sub_00103125(); return; /* tail jmp 0x00103125 */

}

/**
 * sub_00102CF0
 * Original: 0x00102CF0 - 0x00102E4A (346 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102CF0: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 4;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00102CF0; /* jg: greater (signed >) */

loc_00102E45: ;
    g_seh_ebp = ebp; sub_00103125(); return; /* tail jmp 0x00103125 */

}

/**
 * sub_00102D00
 * Original: 0x00102D00 - 0x00102E4A (330 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102D00: ;
    xmm3 = XMM_MEM(ecx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_SUB(xmm4, xmm6); /* subps */
    xmm7 = XMM_ADD(xmm7, xmm5); /* addps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 4;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) { g_seh_ebp = ebp; sub_00102CF0(); return; } /* jg: greater (signed >) */

loc_00102E45: ;
    g_seh_ebp = ebp; sub_00103125(); return; /* tail jmp 0x00103125 */

}

/**
 * sub_00102E4A
 * Original: 0x00102E4A - 0x0010312A (736 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102E4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102FD0; /* jne: not equal / not zero */

loc_00102E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102FD0; /* jne: not equal / not zero */

loc_00102E62: ;
    /* nop */
    /* nop */

loc_00102E70: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 4;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00102E70; /* jg: greater (signed >) */

loc_00102FC5: ;
    goto loc_00103125;

    /* nop */

loc_00102FD0: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 8, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 8, xmm4); /* movhps */
    XMM_STORE_LOW(edx, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 8, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(ecx); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x40)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm4 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm5 = XMM_MEM(ebp + esi); /* movups */
    xmm4 = XMM_MUL(xmm4, xmm5); /* mulps */
    xmm6 = XMM_MEM(ebx + 0x70); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm6); /* mulps */
    xmm7 = XMM_MEM(ebp + ecx); /* movups */
    xmm6 = XMM_MUL(xmm6, xmm7); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x60)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm7 = XMM_SUB(xmm7, xmm5); /* subps */
    esi = esi + ebp * 2;
    ecx = ecx + ebp * 2;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm3); /* unpckhps */
    xmm6 = xmm4; /* movaps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm7); /* unpckhps */
    XMM_STORE_LOW(edi + 0x10, xmm0); /* movlps */
    XMM_STORE_LOW(edi + 0x18, xmm4); /* movlps */
    XMM_STORE_HIGH(eax + edi + 0x10, xmm0); /* movhps */
    XMM_STORE_HIGH(eax + edi + 0x18, xmm4); /* movhps */
    XMM_STORE_LOW(edx + 0x10, xmm2); /* movlps */
    XMM_STORE_LOW(edx + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(eax + edx + 0x10, xmm2); /* movhps */
    XMM_STORE_HIGH(eax + edx + 0x18, xmm6); /* movhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 4;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00102FD0; /* jg: greater (signed >) */

loc_00103125: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00103125
 * Original: 0x00103125 - 0x0010312A (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103125(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103125: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00103130
 * Original: 0x00103130 - 0x001032DB (427 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + eax * 2;
    ebp = MEM32(esp + 0x18);
    ebp = ebp << 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    ecx = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_00103220; /* jne: not equal / not zero */

loc_0010315D: ;
    /* nop */

loc_00103160: ;
    XMM_LOAD_LOW(xmm0, edi); /* movlps */
    XMM_LOAD_LOW(xmm1, edi + 0x10); /* movlps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    XMM_LOAD_LOW(xmm2, eax + edi); /* movlps */
    XMM_LOAD_LOW(xmm3, eax + edi + 0x10); /* movlps */
    xmm2 = XMM_UNPACK_LOW(xmm2, xmm3); /* unpcklps */
    XMM_LOAD_LOW(xmm4, edx); /* movlps */
    XMM_LOAD_LOW(xmm5, edx + 0x10); /* movlps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    XMM_LOAD_LOW(xmm6, eax + edx); /* movlps */
    XMM_LOAD_LOW(xmm7, eax + edx + 0x10); /* movlps */
    xmm6 = XMM_UNPACK_LOW(xmm6, xmm7); /* unpcklps */
    XMM_STORE_LOW(esi, xmm0); /* movlps */
    XMM_STORE_LOW(esi + 8, xmm2); /* movlps */
    XMM_STORE_LOW(esi + 0x10, xmm4); /* movlps */
    XMM_STORE_LOW(esi + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(ebp + esi, xmm0); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 8, xmm2); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x10, xmm4); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x18, xmm6); /* movhps */
    esi = esi + ebp * 2;
    XMM_LOAD_LOW(xmm0, edi + 8); /* movlps */
    XMM_LOAD_LOW(xmm1, edi + 0x18); /* movlps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    XMM_LOAD_LOW(xmm2, eax + edi + 8); /* movlps */
    XMM_LOAD_LOW(xmm3, eax + edi + 0x18); /* movlps */
    xmm2 = XMM_UNPACK_LOW(xmm2, xmm3); /* unpcklps */
    XMM_LOAD_LOW(xmm4, edx + 8); /* movlps */
    XMM_LOAD_LOW(xmm5, edx + 0x18); /* movlps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    XMM_LOAD_LOW(xmm6, eax + edx + 8); /* movlps */
    XMM_LOAD_LOW(xmm7, eax + edx + 0x18); /* movlps */
    xmm6 = XMM_UNPACK_LOW(xmm6, xmm7); /* unpcklps */
    XMM_STORE_LOW(esi, xmm0); /* movlps */
    XMM_STORE_LOW(esi + 8, xmm2); /* movlps */
    XMM_STORE_LOW(esi + 0x10, xmm4); /* movlps */
    XMM_STORE_LOW(esi + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(ebp + esi, xmm0); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 8, xmm2); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x10, xmm4); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x18, xmm6); /* movhps */
    esi = esi + ebp * 2;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103160; /* jg: greater (signed >) */

loc_00103217: ;
    goto loc_001032D7;

    /* nop */

loc_00103220: ;
    XMM_LOAD_LOW(xmm0, edi); /* movlps */
    XMM_LOAD_LOW(xmm1, eax + edi); /* movlps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    XMM_LOAD_LOW(xmm2, edx); /* movlps */
    XMM_LOAD_LOW(xmm3, eax + edx); /* movlps */
    xmm2 = XMM_UNPACK_LOW(xmm2, xmm3); /* unpcklps */
    XMM_LOAD_LOW(xmm4, edi + 0x10); /* movlps */
    XMM_LOAD_LOW(xmm5, eax + edi + 0x10); /* movlps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    XMM_LOAD_LOW(xmm6, edx + 0x10); /* movlps */
    XMM_LOAD_LOW(xmm7, eax + edx + 0x10); /* movlps */
    xmm6 = XMM_UNPACK_LOW(xmm6, xmm7); /* unpcklps */
    XMM_STORE_LOW(esi, xmm0); /* movlps */
    XMM_STORE_LOW(esi + 8, xmm2); /* movlps */
    XMM_STORE_LOW(esi + 0x10, xmm4); /* movlps */
    XMM_STORE_LOW(esi + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(ebp + esi, xmm0); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 8, xmm2); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x10, xmm4); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x18, xmm6); /* movhps */
    esi = esi + ebp * 2;
    XMM_LOAD_LOW(xmm0, edi + 8); /* movlps */
    XMM_LOAD_LOW(xmm1, eax + edi + 8); /* movlps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    XMM_LOAD_LOW(xmm2, edx + 8); /* movlps */
    XMM_LOAD_LOW(xmm3, eax + edx + 8); /* movlps */
    xmm2 = XMM_UNPACK_LOW(xmm2, xmm3); /* unpcklps */
    XMM_LOAD_LOW(xmm4, edi + 0x18); /* movlps */
    XMM_LOAD_LOW(xmm5, eax + edi + 0x18); /* movlps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    XMM_LOAD_LOW(xmm6, edx + 0x18); /* movlps */
    XMM_LOAD_LOW(xmm7, eax + edx + 0x18); /* movlps */
    xmm6 = XMM_UNPACK_LOW(xmm6, xmm7); /* unpcklps */
    XMM_STORE_LOW(esi, xmm0); /* movlps */
    XMM_STORE_LOW(esi + 8, xmm2); /* movlps */
    XMM_STORE_LOW(esi + 0x10, xmm4); /* movlps */
    XMM_STORE_LOW(esi + 0x18, xmm6); /* movlps */
    XMM_STORE_HIGH(ebp + esi, xmm0); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 8, xmm2); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x10, xmm4); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 0x18, xmm6); /* movhps */
    esi = esi + ebp * 2;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103220; /* jg: greater (signed >) */

loc_001032D7: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001032E0
 * Original: 0x001032E0 - 0x001033D0 (240 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001032E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x24);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + eax * 2;
    ebp = MEM32(esp + 0x20);
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x24);
    /* nop */
    /* nop */

loc_00103310: ;
    XMM_LOAD_LOW(xmm0, edi); /* movlps */
    XMM_LOAD_LOW(xmm1, eax + edi); /* movlps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    XMM_LOAD_LOW(xmm2, edx); /* movlps */
    XMM_LOAD_LOW(xmm3, eax + edx); /* movlps */
    xmm2 = XMM_UNPACK_LOW(xmm2, xmm3); /* unpcklps */
    XMM_LOAD_LOW(xmm4, edi + 0x10); /* movlps */
    XMM_LOAD_LOW(xmm5, eax + edi + 0x10); /* movlps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    XMM_LOAD_LOW(xmm6, edx + 0x10); /* movlps */
    XMM_LOAD_LOW(xmm7, eax + edx + 0x10); /* movlps */
    xmm6 = XMM_UNPACK_LOW(xmm6, xmm7); /* unpcklps */
    XMM_STORE_LOW(esi, xmm0); /* movlps */
    XMM_STORE_LOW(esi + 8, xmm2); /* movlps */
    XMM_STORE_LOW(ebx, xmm4); /* movlps */
    XMM_STORE_LOW(ebx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(ebp + esi, xmm0); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 8, xmm2); /* movhps */
    XMM_STORE_HIGH(ebp + ebx, xmm4); /* movhps */
    XMM_STORE_HIGH(ebp + ebx + 8, xmm6); /* movhps */
    esi = esi + ebp * 2;
    ebx = ebx + ebp * 2;
    XMM_LOAD_LOW(xmm0, edi + 8); /* movlps */
    XMM_LOAD_LOW(xmm1, eax + edi + 8); /* movlps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    XMM_LOAD_LOW(xmm2, edx + 8); /* movlps */
    XMM_LOAD_LOW(xmm3, eax + edx + 8); /* movlps */
    xmm2 = XMM_UNPACK_LOW(xmm2, xmm3); /* unpcklps */
    XMM_LOAD_LOW(xmm4, edi + 0x18); /* movlps */
    XMM_LOAD_LOW(xmm5, eax + edi + 0x18); /* movlps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    XMM_LOAD_LOW(xmm6, edx + 0x18); /* movlps */
    XMM_LOAD_LOW(xmm7, eax + edx + 0x18); /* movlps */
    xmm6 = XMM_UNPACK_LOW(xmm6, xmm7); /* unpcklps */
    XMM_STORE_LOW(esi, xmm0); /* movlps */
    XMM_STORE_LOW(esi + 8, xmm2); /* movlps */
    XMM_STORE_LOW(ebx, xmm4); /* movlps */
    XMM_STORE_LOW(ebx + 8, xmm6); /* movlps */
    XMM_STORE_HIGH(ebp + esi, xmm0); /* movhps */
    XMM_STORE_HIGH(ebp + esi + 8, xmm2); /* movhps */
    XMM_STORE_HIGH(ebp + ebx, xmm4); /* movhps */
    XMM_STORE_HIGH(ebp + ebx + 8, xmm6); /* movhps */
    esi = esi + ebp * 2;
    ebx = ebx + ebp * 2;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103310; /* jg: greater (signed >) */

loc_001033CB: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001033D0
 * Original: 0x001033D0 - 0x00103480 (176 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001033D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001033D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edi = esi + ecx * 4;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001035DF(); return; } /* je: equal / zero */

loc_001033EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001034F0(); return; } /* jne: not equal / not zero */

loc_001033FC: ;
    /* nop */

loc_00103400: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103400; /* jg: greater (signed >) */

loc_00103466: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00103480(); return; /* fallthrough 0x00103480 */

}

/**
 * sub_00103480
 * Original: 0x00103480 - 0x001034EC (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103480: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103480; /* jg: greater (signed >) */

loc_001034E7: ;
    g_seh_ebp = ebp; sub_0010380C(); return; /* tail jmp 0x0010380C */

}

/**
 * sub_001034F0
 * Original: 0x001034F0 - 0x001035DF (239 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001034F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001034F0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001034F0; /* jg: greater (signed >) */

loc_00103559: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    /* nop */

loc_00103570: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103570; /* jg: greater (signed >) */

loc_001035DA: ;
    g_seh_ebp = ebp; sub_0010380C(); return; /* tail jmp 0x0010380C */

}

/**
 * sub_001035DF
 * Original: 0x001035DF - 0x0010380F (560 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001035DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001035DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103700; /* jne: not equal / not zero */

loc_001035ED: ;
    /* nop */

loc_001035F0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movaps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001035F0; /* jg: greater (signed >) */

loc_00103668: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103680: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movaps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103680; /* jg: greater (signed >) */

loc_001036F9: ;
    goto loc_0010380C;

    edi = edi;

loc_00103700: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movups */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103700; /* jg: greater (signed >) */

loc_0010377B: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    edi = edi;

loc_00103790: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movups */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103790; /* jg: greater (signed >) */

loc_0010380C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010380C
 * Original: 0x0010380C - 0x0010380F (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010380C(void)
{

loc_0010380C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00103810
 * Original: 0x00103810 - 0x00103840 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edi = esi + ecx * 4;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00103A1F(); return; } /* je: equal / zero */

loc_0010382E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00103930(); return; } /* jne: not equal / not zero */

loc_0010383C: ;
    /* nop */

    g_seh_ebp = ebp; sub_00103840(); return; /* fallthrough 0x00103840 */

}

/**
 * sub_00103840
 * Original: 0x00103840 - 0x0010392C (236 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103840: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103840; /* jg: greater (signed >) */

loc_001038A6: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    /* nop */

loc_001038C0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001038C0; /* jg: greater (signed >) */

loc_00103927: ;
    g_seh_ebp = ebp; sub_00103C4C(); return; /* tail jmp 0x00103C4C */

}

/**
 * sub_00103930
 * Original: 0x00103930 - 0x00103A1F (239 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103930: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103930; /* jg: greater (signed >) */

loc_00103999: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    /* nop */

loc_001039B0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm2); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001039B0; /* jg: greater (signed >) */

loc_00103A1A: ;
    g_seh_ebp = ebp; sub_00103C4C(); return; /* tail jmp 0x00103C4C */

}

/**
 * sub_00103A1F
 * Original: 0x00103A1F - 0x00103C4F (560 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103A1F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103A1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103B40; /* jne: not equal / not zero */

loc_00103A2D: ;
    /* nop */

loc_00103A30: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movaps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103A30; /* jg: greater (signed >) */

loc_00103AA8: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103AC0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + esi + 0x10)); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movaps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103AC0; /* jg: greater (signed >) */

loc_00103B39: ;
    goto loc_00103C4C;

    edi = edi;

loc_00103B40: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movups */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103B40; /* jg: greater (signed >) */

loc_00103BBB: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    edi = edi;

loc_00103BD0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(eax + edx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + edi + 0x10); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(eax + edx + 0x10)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_UNPACK_LOW(xmm1, xmm2); /* unpcklps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm2); /* unpckhps */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm3); /* unpckhps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + edi + 0x10, xmm5); /* movups */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + esi + 0x10, xmm6); /* movups */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103BD0; /* jg: greater (signed >) */

loc_00103C4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00103C4C
 * Original: 0x00103C4C - 0x00103C4F (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103C4C(void)
{

loc_00103C4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00103C50
 * Original: 0x00103C50 - 0x00103E95 (581 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edi = esi + ecx * 2;
    ebp = ebx + ecx * 2;
    edx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103D90; /* jne: not equal / not zero */

loc_00103C78: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103D90; /* jne: not equal / not zero */

loc_00103C84: ;
    /* nop */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103C90: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + ebx)); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + ebx, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + ebp, xmm2); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103C90; /* jg: greater (signed >) */

loc_00103CFB: ;
    ecx = MEM32(esp + 0x1C);
    esi = esi + ecx;
    edi = edi + ecx;
    ebx = ebx + ecx;
    ebp = ebp + ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00103D10: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2 + 0x10)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + ebx)); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + ebx, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + ebp, xmm2); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103D10; /* jg: greater (signed >) */

loc_00103D7C: ;
    goto loc_00103E90;

    /* nop */
    /* nop */
    /* nop */

loc_00103D90: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + ebx, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + ebp, xmm2); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103D90; /* jg: greater (signed >) */

loc_00103DFF: ;
    ecx = MEM32(esp + 0x1C);
    esi = esi + ecx;
    edi = edi + ecx;
    ebx = ebx + ecx;
    ebp = ebp + ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    /* nop */

loc_00103E20: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2 + 0x10)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + ebx, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + ebp, xmm2); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103E20; /* jg: greater (signed >) */

loc_00103E90: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00103EA0
 * Original: 0x00103EA0 - 0x001040E5 (581 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edi = esi + ecx * 2;
    ebp = ebx + ecx * 2;
    edx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103FE0; /* jne: not equal / not zero */

loc_00103EC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0xF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103FE0; /* jne: not equal / not zero */

loc_00103ED4: ;
    /* nop */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103EE0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + ebx)); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + ebx, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + ebp, xmm2); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103EE0; /* jg: greater (signed >) */

loc_00103F4B: ;
    ecx = MEM32(esp + 0x1C);
    esi = esi + ecx;
    edi = edi + ecx;
    ebx = ebx + ecx;
    ebp = ebp + ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00103F60: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2 + 0x10)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(eax + esi)); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, XMM_MEM(eax + ebx)); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movaps */
    XMM_STORE(eax + ebx, xmm3); /* movaps */
    XMM_STORE(eax + edi, xmm1); /* movaps */
    XMM_STORE(eax + ebp, xmm2); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103F60; /* jg: greater (signed >) */

loc_00103FCC: ;
    goto loc_001040E0;

    /* nop */
    /* nop */
    /* nop */

loc_00103FE0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + ebx, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + ebp, xmm2); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00103FE0; /* jg: greater (signed >) */

loc_0010404F: ;
    ecx = MEM32(esp + 0x1C);
    esi = esi + ecx;
    edi = edi + ecx;
    ebx = ebx + ecx;
    ebp = ebp + ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */
    /* nop */

loc_00104070: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm0 = XMM_MEM(edx + eax * 2 + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + edi); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_MEM(edx + eax * 2); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_MEM(eax + ebp); /* movups */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(edx + eax * 2 + 0x10)); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    xmm1 = XMM_MEM(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm2 = XMM_MEM(eax + ebx); /* movups */
    xmm7 = xmm2; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm3 = XMM_ADD(xmm3, xmm7); /* addps */
    XMM_STORE(eax + esi, xmm0); /* movups */
    XMM_STORE(eax + ebx, xmm3); /* movups */
    XMM_STORE(eax + edi, xmm1); /* movups */
    XMM_STORE(eax + ebp, xmm2); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_G((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104070; /* jg: greater (signed >) */

loc_001040E0: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001040F0
 * Original: 0x001040F0 - 0x001041DF (239 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001040F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001040F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001041CA; /* jne: not equal / not zero */

loc_00104112: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xC (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00104130; /* je: equal / zero */

loc_0010411A: ;
    xmm0.f[0] = (xmm0.f[0] < MEMF(esi) ? xmm0.f[0] : MEMF(esi)); /* minss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((((_fas < 0) != (_fb != 0)) || _fa == 0)) goto loc_001041C3; /* jle: less or equal (signed <=) */

loc_00104128: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xC (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010411A; /* jne: not equal / not zero */

loc_00104130: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x10 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010414C; /* je: equal / zero */

loc_00104138: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001041B9; /* jl: less (signed <) */

loc_00104141: ;
    xmm0 = XMM_MIN(xmm0, XMM_MEM(esi)); /* minps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_LE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001041A1; /* jle: less or equal (signed <=) */

loc_0010414C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010418E; /* jl: less (signed <) */

loc_00104151: ;
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    goto loc_00104160;

    /* nop */

loc_00104160: ;
    xmm0 = XMM_MIN(xmm0, XMM_MEM(esi)); /* minps */
    xmm1 = XMM_MIN(xmm1, XMM_MEM(esi + 0x10)); /* minps */
    (void)0; /* prefetcht0: cache/ordering hint, nothing to model */
    xmm2 = XMM_MIN(xmm2, XMM_MEM(esi + 0x20)); /* minps */
    xmm3 = XMM_MIN(xmm3, XMM_MEM(esi + 0x30)); /* minps */
    (void)0; /* prefetcht0: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104160; /* jge: greater or equal (signed >=) */

loc_00104185: ;
    xmm0 = XMM_MIN(xmm0, xmm2); /* minps */
    xmm1 = XMM_MIN(xmm1, xmm3); /* minps */
    xmm0 = XMM_MIN(xmm0, xmm1); /* minps */

loc_0010418E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0010419E; /* jl: less (signed <) */

loc_00104193: ;
    xmm0 = XMM_MIN(xmm0, XMM_MEM(esi)); /* minps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104193; /* jge: greater or equal (signed >=) */

loc_0010419E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001041A1: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xEE); /* shufps */
    xmm1 = XMM_MIN(xmm1, xmm0); /* minps */
    xmm0.f[0] = xmm1.f[0]; /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm0.f[0] = (xmm0.f[0] < xmm1.f[0] ? xmm0.f[0] : xmm1.f[0]); /* minss */
    if (_flags /* jle: less or equal (signed <=) */) goto loc_001041C3;

loc_001041B9: ;
    xmm0.f[0] = (xmm0.f[0] < MEMF(esi) ? xmm0.f[0] : MEMF(esi)); /* minss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_001041B9; /* jg: greater (signed >) */

loc_001041C3: ;
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001041CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010419E; /* jl: less (signed <) */

loc_001041CF: ;
    xmm1 = XMM_MEM(esi); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MIN(xmm0, xmm1); /* minps */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001041CF; /* jge: greater or equal (signed >=) */

loc_001041DD: ;
    goto loc_0010419E;

}

/**
 * sub_001041E0
 * Original: 0x001041E0 - 0x001043D6 (502 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001041E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001041E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (((_fas < 0) != (_fb != 0))) goto loc_0010431D; /* jl: less (signed <) */

loc_00104200: ;
    edi = MEM32(esi + -8);
    edx = MEM32(esi + -4);
    if ((_fa == 0)) goto loc_0010431D; /* je: equal / zero */

loc_0010420C: ;
    edx = edx & edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas < 0)) goto loc_001042A2; /* jl: less (signed <) */

loc_00104214: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104273; /* jl: less (signed <) */

loc_00104219: ;
    goto loc_00104220;

    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00104220: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104231; /* jl: less (signed <) */

loc_00104227: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010432A; /* je: equal / zero */

loc_0010422D: ;
    edi = MEM32(esi);
    edx = ebx;

loc_00104231: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104243; /* jl: less (signed <) */

loc_00104238: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010433B; /* je: equal / zero */

loc_0010423E: ;
    edi = MEM32(esi + 8);
    edx = ecx;

loc_00104243: ;
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104255; /* jl: less (signed <) */

loc_0010424A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010434D; /* je: equal / zero */

loc_00104250: ;
    edi = MEM32(esi + 0x10);
    edx = ebx;

loc_00104255: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104267; /* jl: less (signed <) */

loc_0010425C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010435F; /* je: equal / zero */

loc_00104262: ;
    edi = MEM32(esi + 0x18);
    edx = ecx;

loc_00104267: ;
    edx = edx & edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas < 0)) goto loc_001042B0; /* jl: less (signed <) */

loc_0010426B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104220; /* jge: greater or equal (signed >=) */

loc_00104273: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_0010431D; /* jle: less or equal (signed <=) */

loc_0010427C: ;
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    ebx = ebx & ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas < 0)) goto loc_00104304; /* jl: less (signed <) */

loc_00104289: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104297; /* jl: less (signed <) */

loc_0010428D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104371; /* je: equal / zero */

loc_00104293: ;
    edi = ecx;
    edx = ebx;

loc_00104297: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0010427C; /* jg: greater (signed >) */

loc_0010429D: ;
    goto loc_0010431D;

loc_001042A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001042FF; /* jl: less (signed <) */

loc_001042A7: ;
    goto loc_001042B0;

    /* nop */

loc_001042B0: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001042C1; /* ja: above (unsigned >) */

loc_001042B7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104380; /* je: equal / zero */

loc_001042BD: ;
    edi = MEM32(esi);
    edx = ebx;

loc_001042C1: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001042D3; /* ja: above (unsigned >) */

loc_001042C8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104391; /* je: equal / zero */

loc_001042CE: ;
    edi = MEM32(esi + 8);
    edx = ecx;

loc_001042D3: ;
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001042E5; /* ja: above (unsigned >) */

loc_001042DA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001043A3; /* je: equal / zero */

loc_001042E0: ;
    edi = MEM32(esi + 0x10);
    edx = ebx;

loc_001042E5: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001042F7; /* ja: above (unsigned >) */

loc_001042EC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001043B5; /* je: equal / zero */

loc_001042F2: ;
    edi = MEM32(esi + 0x18);
    edx = ecx;

loc_001042F7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001042B0; /* jge: greater or equal (signed >=) */

loc_001042FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_0010431D; /* jle: less or equal (signed <=) */

loc_00104304: ;
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00104317; /* ja: above (unsigned >) */

loc_0010430D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001043C7; /* je: equal / zero */

loc_00104313: ;
    edi = ecx;
    edx = ebx;

loc_00104317: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_00104304; /* jg: greater (signed >) */

loc_0010431D: ;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = edx;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010432A: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104231; /* jbe: below or equal (unsigned <=) */

loc_00104334: ;
    edi = ebx;
    goto loc_00104231;

loc_0010433B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104243; /* jbe: below or equal (unsigned <=) */

loc_00104346: ;
    edi = ecx;
    goto loc_00104243;

loc_0010434D: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104255; /* jbe: below or equal (unsigned <=) */

loc_00104358: ;
    edi = ebx;
    goto loc_00104255;

loc_0010435F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104267; /* jbe: below or equal (unsigned <=) */

loc_0010436A: ;
    edi = ecx;
    goto loc_00104267;

loc_00104371: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104297; /* jbe: below or equal (unsigned <=) */

loc_00104379: ;
    edi = ecx;
    goto loc_00104297;

loc_00104380: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001042C1; /* jae: above or equal (unsigned >=) */

loc_0010438A: ;
    edi = ebx;
    goto loc_001042C1;

loc_00104391: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001042D3; /* jae: above or equal (unsigned >=) */

loc_0010439C: ;
    edi = ecx;
    goto loc_001042D3;

loc_001043A3: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001042E5; /* jae: above or equal (unsigned >=) */

loc_001043AE: ;
    edi = ebx;
    goto loc_001042E5;

loc_001043B5: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001042F7; /* jae: above or equal (unsigned >=) */

loc_001043C0: ;
    edi = ecx;
    goto loc_001042F7;

loc_001043C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00104317; /* jae: above or equal (unsigned >=) */

loc_001043CF: ;
    edi = ecx;
    goto loc_00104317;

}

/**
 * sub_001043E0
 * Original: 0x001043E0 - 0x001044AC (204 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001043E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001043E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    mm0 = MMX_PINSRW(mm0, MEM16(esi), 0u); /* pinsrw */
    mm0 = MMX_PSHUFW(mm0, 0u); /* pshufw */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00104408; /* je: equal / zero */

loc_001043FE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((((_fas < 0) != (_fb != 0)) || _fa == 0)) goto loc_0010448E; /* jle: less or equal (signed <=) */

loc_00104408: ;
    mm1 = mm0; /* movq */

loc_0010440B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 6 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00104422; /* je: equal / zero */

loc_00104413: ;
    mm1 = MMX_PINSRW(mm1, MEM16(esi), 0u); /* pinsrw */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PMINSW(mm0, mm1); /* pminsw */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((((_fas < 0) != (_fb != 0)) || _fa == 0)) goto loc_0010448E; /* jle: less or equal (signed <=) */

loc_00104420: ;
    goto loc_0010440B;

loc_00104422: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104464; /* jl: less (signed <) */

loc_00104427: ;
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm3 = mm0; /* movq */
    goto loc_00104440;

    /* nop */
    /* nop */

loc_00104440: ;
    mm0 = MMX_PMINSW(mm0, MMX_MEM(esi)); /* pminsw */
    mm1 = MMX_PMINSW(mm1, MMX_MEM(esi + 8)); /* pminsw */
    mm2 = MMX_PMINSW(mm2, MMX_MEM(esi + 0x10)); /* pminsw */
    mm3 = MMX_PMINSW(mm3, MMX_MEM(esi + 0x18)); /* pminsw */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    (void)0; /* prefetcht0: cache/ordering hint, nothing to model */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104440; /* jge: greater or equal (signed >=) */

loc_0010445B: ;
    mm0 = MMX_PMINSW(mm0, mm2); /* pminsw */
    mm1 = MMX_PMINSW(mm1, mm3); /* pminsw */
    mm0 = MMX_PMINSW(mm0, mm1); /* pminsw */

loc_00104464: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_0010448E; /* jle: less or equal (signed <=) */

loc_00104469: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104479; /* jl: less (signed <) */

loc_0010446E: ;
    mm0 = MMX_PMINSW(mm0, MMX_MEM(esi)); /* pminsw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010446E; /* jge: greater or equal (signed >=) */

loc_00104479: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_0010448E; /* jle: less or equal (signed <=) */

loc_0010447E: ;
    mm1 = mm0; /* movq */

loc_00104481: ;
    mm1 = MMX_PINSRW(mm1, MEM16(esi), 0u); /* pinsrw */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PMINSW(mm0, mm1); /* pminsw */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_00104481; /* jg: greater (signed >) */

loc_0010448E: ;
    mm1 = mm0; /* movq */
    mm0 = MMX_PUNPCKHDQ(mm0, mm0); /* punpckhdq */
    mm1 = MMX_PMINSW(mm1, mm0); /* pminsw */
    mm0 = mm1; /* movq */
    mm1 = MMX_PSRLD(mm1, 16u); /* psrld */
    mm0 = MMX_PMINSW(mm0, mm1); /* pminsw */
    eax = mm0.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    MEM16(edi) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001044B0
 * Original: 0x001044B0 - 0x0010459F (239 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001044B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001044B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010458A; /* jne: not equal / not zero */

loc_001044D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xC (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001044F0; /* je: equal / zero */

loc_001044DA: ;
    xmm0.f[0] = (xmm0.f[0] > MEMF(esi) ? xmm0.f[0] : MEMF(esi)); /* maxss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((((_fas < 0) != (_fb != 0)) || _fa == 0)) goto loc_00104583; /* jle: less or equal (signed <=) */

loc_001044E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xC (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001044DA; /* jne: not equal / not zero */

loc_001044F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x10 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010450C; /* je: equal / zero */

loc_001044F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104579; /* jl: less (signed <) */

loc_00104501: ;
    xmm0 = XMM_MAX(xmm0, XMM_MEM(esi)); /* maxps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_LE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104561; /* jle: less or equal (signed <=) */

loc_0010450C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010454E; /* jl: less (signed <) */

loc_00104511: ;
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    goto loc_00104520;

    /* nop */

loc_00104520: ;
    xmm0 = XMM_MAX(xmm0, XMM_MEM(esi)); /* maxps */
    xmm1 = XMM_MAX(xmm1, XMM_MEM(esi + 0x10)); /* maxps */
    (void)0; /* prefetcht0: cache/ordering hint, nothing to model */
    xmm2 = XMM_MAX(xmm2, XMM_MEM(esi + 0x20)); /* maxps */
    xmm3 = XMM_MAX(xmm3, XMM_MEM(esi + 0x30)); /* maxps */
    (void)0; /* prefetcht0: cache/ordering hint, nothing to model */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104520; /* jge: greater or equal (signed >=) */

loc_00104545: ;
    xmm0 = XMM_MAX(xmm0, xmm2); /* maxps */
    xmm1 = XMM_MAX(xmm1, xmm3); /* maxps */
    xmm0 = XMM_MAX(xmm0, xmm1); /* maxps */

loc_0010454E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0010455E; /* jl: less (signed <) */

loc_00104553: ;
    xmm0 = XMM_MAX(xmm0, XMM_MEM(esi)); /* maxps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104553; /* jge: greater or equal (signed >=) */

loc_0010455E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00104561: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xEE); /* shufps */
    xmm1 = XMM_MAX(xmm1, xmm0); /* maxps */
    xmm0.f[0] = xmm1.f[0]; /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm0.f[0] = (xmm0.f[0] > xmm1.f[0] ? xmm0.f[0] : xmm1.f[0]); /* maxss */
    if (_flags /* jle: less or equal (signed <=) */) goto loc_00104583;

loc_00104579: ;
    xmm0.f[0] = (xmm0.f[0] > MEMF(esi) ? xmm0.f[0] : MEMF(esi)); /* maxss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_00104579; /* jg: greater (signed >) */

loc_00104583: ;
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010458A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010455E; /* jl: less (signed <) */

loc_0010458F: ;
    xmm1 = XMM_MEM(esi); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MAX(xmm0, xmm1); /* maxps */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010458F; /* jge: greater or equal (signed >=) */

loc_0010459D: ;
    goto loc_0010455E;

}

/**
 * sub_001045A0
 * Original: 0x001045A0 - 0x00104796 (502 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001045A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001045A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (((_fas < 0) != (_fb != 0))) goto loc_001046DD; /* jl: less (signed <) */

loc_001045C0: ;
    edi = MEM32(esi + -8);
    edx = MEM32(esi + -4);
    if ((_fa == 0)) goto loc_001046DD; /* je: equal / zero */

loc_001045CC: ;
    edx = edx & edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00104662; /* jge: greater or equal (signed >=) */

loc_001045D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104633; /* jl: less (signed <) */

loc_001045D9: ;
    goto loc_001045E0;

    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001045E0: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001045F1; /* jb: below (unsigned <) */

loc_001045E7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001046EA; /* je: equal / zero */

loc_001045ED: ;
    edi = MEM32(esi);
    edx = ebx;

loc_001045F1: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104603; /* jb: below (unsigned <) */

loc_001045F8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001046FB; /* je: equal / zero */

loc_001045FE: ;
    edi = MEM32(esi + 8);
    edx = ecx;

loc_00104603: ;
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104615; /* jb: below (unsigned <) */

loc_0010460A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010470D; /* je: equal / zero */

loc_00104610: ;
    edi = MEM32(esi + 0x10);
    edx = ebx;

loc_00104615: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104627; /* jb: below (unsigned <) */

loc_0010461C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010471F; /* je: equal / zero */

loc_00104622: ;
    edi = MEM32(esi + 0x18);
    edx = ecx;

loc_00104627: ;
    edx = edx & edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00104670; /* jge: greater or equal (signed >=) */

loc_0010462B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001045E0; /* jge: greater or equal (signed >=) */

loc_00104633: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_001046DD; /* jle: less or equal (signed <=) */

loc_0010463C: ;
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    ebx = ebx & ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001046C4; /* jge: greater or equal (signed >=) */

loc_00104649: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104657; /* jb: below (unsigned <) */

loc_0010464D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104731; /* je: equal / zero */

loc_00104653: ;
    edi = ecx;
    edx = ebx;

loc_00104657: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0010463C; /* jg: greater (signed >) */

loc_0010465D: ;
    goto loc_001046DD;

loc_00104662: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_001046BF; /* jl: less (signed <) */

loc_00104667: ;
    goto loc_00104670;

    /* nop */

loc_00104670: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00104681; /* jg: greater (signed >) */

loc_00104677: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104740; /* je: equal / zero */

loc_0010467D: ;
    edi = MEM32(esi);
    edx = ebx;

loc_00104681: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00104693; /* jg: greater (signed >) */

loc_00104688: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104751; /* je: equal / zero */

loc_0010468E: ;
    edi = MEM32(esi + 8);
    edx = ecx;

loc_00104693: ;
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001046A5; /* jg: greater (signed >) */

loc_0010469A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104763; /* je: equal / zero */

loc_001046A0: ;
    edi = MEM32(esi + 0x10);
    edx = ebx;

loc_001046A5: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001046B7; /* jg: greater (signed >) */

loc_001046AC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104775; /* je: equal / zero */

loc_001046B2: ;
    edi = MEM32(esi + 0x18);
    edx = ecx;

loc_001046B7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104670; /* jge: greater or equal (signed >=) */

loc_001046BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_001046DD; /* jle: less or equal (signed <=) */

loc_001046C4: ;
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001046D7; /* jg: greater (signed >) */

loc_001046CD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00104787; /* je: equal / zero */

loc_001046D3: ;
    edi = ecx;
    edx = ebx;

loc_001046D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_001046C4; /* jg: greater (signed >) */

loc_001046DD: ;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = edx;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001046EA: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001045F1; /* jbe: below or equal (unsigned <=) */

loc_001046F4: ;
    edi = ebx;
    goto loc_001045F1;

loc_001046FB: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104603; /* jbe: below or equal (unsigned <=) */

loc_00104706: ;
    edi = ecx;
    goto loc_00104603;

loc_0010470D: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104615; /* jbe: below or equal (unsigned <=) */

loc_00104718: ;
    edi = ebx;
    goto loc_00104615;

loc_0010471F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104627; /* jbe: below or equal (unsigned <=) */

loc_0010472A: ;
    edi = ecx;
    goto loc_00104627;

loc_00104731: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104657; /* jbe: below or equal (unsigned <=) */

loc_00104739: ;
    edi = ecx;
    goto loc_00104657;

loc_00104740: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00104681; /* jae: above or equal (unsigned >=) */

loc_0010474A: ;
    edi = ebx;
    goto loc_00104681;

loc_00104751: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00104693; /* jae: above or equal (unsigned >=) */

loc_0010475C: ;
    edi = ecx;
    goto loc_00104693;

loc_00104763: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001046A5; /* jae: above or equal (unsigned >=) */

loc_0010476E: ;
    edi = ebx;
    goto loc_001046A5;

loc_00104775: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001046B7; /* jae: above or equal (unsigned >=) */

loc_00104780: ;
    edi = ecx;
    goto loc_001046B7;

loc_00104787: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001046D7; /* jae: above or equal (unsigned >=) */

loc_0010478F: ;
    edi = ecx;
    goto loc_001046D7;

}

/**
 * sub_001047A0
 * Original: 0x001047A0 - 0x0010486C (204 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001047A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001047A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    mm0 = MMX_PINSRW(mm0, MEM16(esi), 0u); /* pinsrw */
    mm0 = MMX_PSHUFW(mm0, 0u); /* pshufw */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001047C8; /* je: equal / zero */

loc_001047BE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((((_fas < 0) != (_fb != 0)) || _fa == 0)) goto loc_0010484E; /* jle: less or equal (signed <=) */

loc_001047C8: ;
    mm1 = mm0; /* movq */

loc_001047CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 6 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001047E2; /* je: equal / zero */

loc_001047D3: ;
    mm1 = MMX_PINSRW(mm1, MEM16(esi), 0u); /* pinsrw */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PMAXSW(mm0, mm1); /* pmaxsw */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((((_fas < 0) != (_fb != 0)) || _fa == 0)) goto loc_0010484E; /* jle: less or equal (signed <=) */

loc_001047E0: ;
    goto loc_001047CB;

loc_001047E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104824; /* jl: less (signed <) */

loc_001047E7: ;
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm3 = mm0; /* movq */
    goto loc_00104800;

    /* nop */
    /* nop */

loc_00104800: ;
    mm0 = MMX_PMAXSW(mm0, MMX_MEM(esi)); /* pmaxsw */
    mm1 = MMX_PMAXSW(mm1, MMX_MEM(esi + 8)); /* pmaxsw */
    mm2 = MMX_PMAXSW(mm2, MMX_MEM(esi + 0x10)); /* pmaxsw */
    mm3 = MMX_PMAXSW(mm3, MMX_MEM(esi + 0x18)); /* pmaxsw */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    (void)0; /* prefetcht0: cache/ordering hint, nothing to model */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104800; /* jge: greater or equal (signed >=) */

loc_0010481B: ;
    mm0 = MMX_PMAXSW(mm0, mm2); /* pmaxsw */
    mm1 = MMX_PMAXSW(mm1, mm3); /* pmaxsw */
    mm0 = MMX_PMAXSW(mm0, mm1); /* pmaxsw */

loc_00104824: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_0010484E; /* jle: less or equal (signed <=) */

loc_00104829: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_L((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00104839; /* jl: less (signed <) */

loc_0010482E: ;
    mm0 = MMX_PMAXSW(mm0, MMX_MEM(esi)); /* pmaxsw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_0010482E; /* jge: greater or equal (signed >=) */

loc_00104839: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) goto loc_0010484E; /* jle: less or equal (signed <=) */

loc_0010483E: ;
    mm1 = mm0; /* movq */

loc_00104841: ;
    mm1 = MMX_PINSRW(mm1, MEM16(esi), 0u); /* pinsrw */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PMAXSW(mm0, mm1); /* pmaxsw */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_00104841; /* jg: greater (signed >) */

loc_0010484E: ;
    mm1 = mm0; /* movq */
    mm0 = MMX_PUNPCKHDQ(mm0, mm0); /* punpckhdq */
    mm1 = MMX_PMAXSW(mm1, mm0); /* pmaxsw */
    mm0 = mm1; /* movq */
    mm1 = MMX_PSRLD(mm1, 16u); /* psrld */
    mm0 = MMX_PMAXSW(mm0, mm1); /* pmaxsw */
    eax = mm0.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    MEM16(edi) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00104870
 * Original: 0x00104870 - 0x001048BD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104870: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41A7);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41A7);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0x7FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001048BD
 * Original: 0x001048BD - 0x00104905 (72 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001048BD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001048BD: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001048C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001048BFu); } /* indirect call */
    }

loc_001048C5: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x9701A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9701A0), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_001048E7; /* jne: not equal / not zero */

loc_001048D1: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x24C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24C), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001048E7; /* jne: not equal / not zero */

loc_001048DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD64); PUSH32(esp, 0x001048E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001048E1u); } /* indirect call */
    }

loc_001048E7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD60); PUSH32(esp, 0x001048EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001048E8u); } /* indirect call */
    }

loc_001048EE: ;
    SET_LO8(ecx, LO8(ebx));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001048F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001048F2u); } /* indirect call */
    }

loc_001048F8: ;
    eax = esi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00104908
 * Original: 0x00104908 - 0x0010494D (69 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104908(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104908: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104944; /* jbe: below or equal (unsigned <=) */

loc_00104915: ;
    eax = MEM32(esi);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010493E; /* je: equal / zero */

loc_0010491E: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010492E; /* je: equal / zero */

loc_00104925: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x14); PUSH32(esp, 0x0010492Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104926u); } /* indirect call */
    }

loc_0010492A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104938; /* je: equal / zero */

loc_0010492E: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, 0x00104938u); RECOMP_ABI_CALL(0x000B17F9u, sub_000B17F9); /* call 0x000B17F9 */

loc_00104938: ;
    eax = MEM32(esi);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0;
    _fa = (uint32_t)(MEM32(eax + edi * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0010493E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104915; /* jb: below (unsigned <) */

loc_00104944: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010494D
 * Original: 0x0010494D - 0x0010496B (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010494D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010494D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010495Du); RECOMP_ABI_CALL(0x00104908u, sub_00104908); /* call 0x00104908 */

loc_0010495D: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00104964u); RECOMP_ABI_CALL(0x000B17F9u, sub_000B17F9); /* call 0x000B17F9 */

loc_00104964: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010496B
 * Original: 0x0010496B - 0x0010497B (16 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010496B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010496B: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    POP32(esp, eax);
    SET_LO8(eax, ((_fa == 0)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010497B
 * Original: 0x0010497B - 0x00104A13 (152 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010497B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010497B: ;
    eax = MEM32(0x2F939C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001049B0; /* je: equal / zero */

loc_0010498A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104993u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_00104993: ;
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, 0x0010499Eu); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_0010499E: ;
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, 0x001049A9u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001049A9: ;
    MEM32(0x2F939C) = MEM32(0x2F939C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x2F939C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001049B0: ;
    PUSH32(esp, 0x10494D);
    PUSH32(esp, 0x98BA30);
    PUSH32(esp, 0x001049BFu); RECOMP_ABI_CALL(0x00104908u, sub_00104908); /* call 0x00104908 */

loc_001049BF: ;
    esi = 0x10496B;
    PUSH32(esp, esi);
    PUSH32(esp, 0x98BBF0);
    PUSH32(esp, 0x001049CFu); RECOMP_ABI_CALL(0x00104908u, sub_00104908); /* call 0x00104908 */

loc_001049CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x98BA40);
    PUSH32(esp, 0x001049DAu); RECOMP_ABI_CALL(0x00104908u, sub_00104908); /* call 0x00104908 */

loc_001049DA: ;
    MEM32(0x2F9398) = MEM32(0x2F9398) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x2F9398)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x22);
    POP32(esp, ecx);
    PUSH32(esp, 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98B9A0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = 0x98BA60;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x970254) = ebx;
    MEM32(0x98BBE8) = ebx;
    MEM32(0x98BBE4) = ebx;
    MEM32(0x98BAD0) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00104A13
 * Original: 0x00104A13 - 0x00104A94 (129 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104A13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104A13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00104A87; /* jbe: below or equal (unsigned <=) */

loc_00104A2A: ;
    edi = MEM32(ebx);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104A43u); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_00104A43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00104A50; /* jne: not equal / not zero */

loc_00104A49: ;
    MEM32(ebx) = edi;
    MEM32(ebx + 8) = esi;
    goto loc_00104A8D;

loc_00104A50: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104A67; /* je: equal / zero */

loc_00104A54: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    esi = edi;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104A64u); RECOMP_ABI_CALL(0x000B17F9u, sub_000B17F9); /* call 0x000B17F9 */

loc_00104A64: ;
    esi = MEM32(ebp + -4);

loc_00104A67: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + esi * 4;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0xC);

loc_00104A87: ;
    MEM32(ebx + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00104A8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00104A94
 * Original: 0x00104A94 - 0x00104B76 (226 bytes, 80 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104A94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104A94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104AD3; /* jne: not equal / not zero */

loc_00104AA7: ;
    esi = MEM32(0x98BA44);
    edi = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x98BA40;
    MEM32(ebp + 8) = eax;
    if ((_fa != 0)) goto loc_00104B03; /* jne: not equal / not zero */

loc_00104ABE: ;
    eax = MEM32(0x98BBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F9398)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2F9398) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104B03; /* jb: below (unsigned <) */

loc_00104ACB: ;
    PUSH32(esp, ecx);

loc_00104ACC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104AD1u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_00104AD1: ;
    goto loc_00104B33;

loc_00104AD3: ;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x98BBF0;
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_00104AF0; /* je: equal / zero */

loc_00104AE0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x970254)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x970254) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104ACB; /* jb: below (unsigned <) */

loc_00104AE8: ;
    MEM32(0x2F9398) = edi;
    goto loc_00104B00;

loc_00104AF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F9398)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x2F9398) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00104ACB; /* jae: above or equal (unsigned >=) */

loc_00104AF8: ;
    eax = edi + 1;
    MEM32(0x970254) = eax;

loc_00104B00: ;
    esi = MEM32(ebp + 0xC);

loc_00104B03: ;
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104B0Du); RECOMP_ABI_CALL(0x00104A13u, sub_00104A13); /* call 0x00104A13 */

loc_00104B0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104B33; /* je: equal / zero */

loc_00104B11: ;
    eax = MEM32(ebx);
    esi = eax + esi * 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104B1F; /* je: equal / zero */

loc_00104B1B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    goto loc_00104ACC;

loc_00104B1F: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104B2Du); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_00104B2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00104B37; /* jne: not equal / not zero */

loc_00104B33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00104B6F;

loc_00104B37: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = 1;
    eax = MEM32(esi);
    MEM32(eax) = edi;
    eax = MEM32(esi);
    MEM32(eax + 8) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00104B6D; /* jne: not equal / not zero */

loc_00104B55: ;
    eax = MEM32(0x98BBE8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x970254)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x970254) (32-bit) */
    MEM32(0x98BBE8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00104B6D; /* jbe: below or equal (unsigned <=) */

loc_00104B68: ;
    MEM32(0x970254) = eax;

loc_00104B6D: ;
    eax = MEM32(esi);

loc_00104B6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00104B76
 * Original: 0x00104B76 - 0x00104BD6 (96 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104B76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104B76: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00104B8F; /* jge: greater or equal (signed >=) */

loc_00104B83: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x98BA40;
    goto loc_00104B96;

loc_00104B8F: ;
    esi = eax;
    edi = 0x98BBF0;

loc_00104B96: ;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00104BA2; /* jne: not equal / not zero */

loc_00104B9C: ;
    MEM32(0x98BBE8) = MEM32(0x98BBE8) - 1;
    _fa = (uint32_t)(MEM32(0x98BBE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00104BA2: ;
    eax = MEM32(edi);
    ebx = esi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, MEM32(eax + ebx));
    PUSH32(esp, 0x00104BB1u); RECOMP_ABI_CALL(0x000B17F9u, sub_000B17F9); /* call 0x000B17F9 */

loc_00104BB1: ;
    eax = MEM32(edi);
    MEM32(ebx + eax) = MEM32(ebx + eax) & 0;
    _fa = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104BCC; /* jbe: below or equal (unsigned <=) */

loc_00104BBB: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00104BBF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104BCC; /* jne: not equal / not zero */

loc_00104BC4: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00104BBF; /* ja: above (unsigned >) */

loc_00104BCC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00104BD6
 * Original: 0x00104BD6 - 0x00104C36 (96 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104BD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104BD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00104BF9; /* jb: below (unsigned <) */

loc_00104BF6: ;
    MEM32(ebp + 8) = ebx;

loc_00104BF9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00104C22; /* jbe: below or equal (unsigned <=) */

loc_00104C00: ;
    edi = MEM32(edx);
    esi = MEM32(esi);

loc_00104C04: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + ecx);
    SET_LO8(edx, MEM8(eax + 0x2A8C28));
    eax = (uint32_t)(int32_t)SMEM8(esi + ecx);
    SET_LO8(eax, MEM8(eax + 0x2A8C28));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104C2C; /* jne: not equal / not zero */

loc_00104C1C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104C04; /* jb: below (unsigned <) */

loc_00104C22: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00104C27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00104C2C: ;
    ecx = ZX8(LO8(eax));
    eax = ZX8(LO8(edx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00104C27;

}

/**
 * sub_00104C36
 * Original: 0x00104C36 - 0x00104CF2 (188 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104C36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104C36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -40;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -40) = eax;
    edx = eax + 1;

loc_00104C4B: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104C4B; /* jne: not equal / not zero */

loc_00104C52: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x98BA34);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -36) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00104C89; /* jbe: below or equal (unsigned <=) */

loc_00104C66: ;
    eax = MEM32(0x98BA30);
    esi = MEM32(eax + ebx * 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104C7Eu); RECOMP_ABI_CALL(0x00104BD6u, sub_00104BD6); /* call 0x00104BD6 */

loc_00104C7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00104CB7; /* je: equal / zero */

loc_00104C84: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00104C66; /* jb: below (unsigned <) */

loc_00104C89: ;
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98BA30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104C97u); RECOMP_ABI_CALL(0x00104A13u, sub_00104A13); /* call 0x00104A13 */

loc_00104C97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104CB3; /* je: equal / zero */

loc_00104C9B: ;
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104CA9u); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_00104CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104CBB; /* jne: not equal / not zero */

loc_00104CAD: ;
    MEM32(0x98BA34) = MEM32(0x98BA34) - 1;
    _fa = (uint32_t)(MEM32(0x98BA34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00104CB3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00104CEB;

loc_00104CB7: ;
    eax = esi;
    goto loc_00104CEB;

loc_00104CBB: ;
    ecx = MEM32(0x98BA30);
    esi = MEM32(ebp + 8);
    MEM32(ecx + ebx * 4) = eax;
    ecx = eax + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -36);
    edi = MEM32(eax);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;

loc_00104CEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00104CF2
 * Original: 0x00104CF2 - 0x00104F5A (616 bytes, 211 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104CF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104CF2: ;
    PUSH32(esp, ebp);
    eax = 0x2188;
    ebp = esp + -84;
    PUSH32(esp, 0x00104D01u); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_00104D01: ;
    eax = MEM32(ebp + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x50) = edi;
    MEM32(ebp + 0x4C) = ebx;
    MEM32(ebp + 0x48) = ebx;
    if ((_fa == 0)) goto loc_00104D21; /* je: equal / zero */

loc_00104D1C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D42; /* je: equal / zero */

loc_00104D21: ;
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 2;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00104D2F; /* jne: not equal / not zero */

loc_00104D2A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D42; /* je: equal / zero */

loc_00104D2F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D39; /* je: equal / zero */

loc_00104D34: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D42; /* je: equal / zero */

loc_00104D39: ;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104D4E; /* jne: not equal / not zero */

loc_00104D3E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104D4E; /* jne: not equal / not zero */

loc_00104D42: ;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0x00104D49u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_00104D49: ;
    goto loc_00104EFF;

loc_00104D4E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D5A; /* je: equal / zero */

loc_00104D53: ;
    MEM32(ebp + 0x68) = 0x14;

loc_00104D5A: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, 0x00104D66u); RECOMP_ABI_CALL(0x00104A94u, sub_00104A94); /* call 0x00104A94 */

loc_00104D66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00104EFF; /* je: equal / zero */

loc_00104D71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104E52; /* je: equal / zero */

loc_00104D79: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104DCF; /* jne: not equal / not zero */

loc_00104D7E: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = ebp + -308;
    PUSH32(esp, 0x98BAE0);
    PUSH32(esp, 0xAA8404);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104D97u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_00104D97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = ebp + -308;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104DB2u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_00104DB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x50) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00104EF7; /* je: equal / zero */

loc_00104DBD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104DC4u); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_00104DC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00104ECF; /* je: equal / zero */

loc_00104DCF: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0x00104DDAu); RECOMP_ABI_CALL(0x00104C36u, sub_00104C36); /* call 0x00104C36 */

loc_00104DDA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x6C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00104ED2; /* je: equal / zero */

loc_00104DE7: ;
    edi = MEM32(ebp + 0x74);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(ebp + 0x70);
    if (CMP_NE(_fa, _fb)) goto loc_00104DF6; /* jne: not equal / not zero */

loc_00104DF1: ;
    edi = MEM32(ebx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00104DF6: ;
    eax = esi + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00104ED2; /* ja: above (unsigned >) */

loc_00104E02: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00104E0Bu); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_00104E0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00104ED2; /* je: equal / zero */

loc_00104E16: ;
    ecx = MEM32(ebp + 0x5C);
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    ecx = MEM32(ecx);
    MEM32(eax + 8) = ecx;
    esi = MEM32(ebx + 0x18);
    eax = esi + 1;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00104E33u); RECOMP_ABI_CALL(0x00104A13u, sub_00104A13); /* call 0x00104A13 */

loc_00104E33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104ECF; /* je: equal / zero */

loc_00104E3B: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x4C);
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ecx;
    MEM32(ebp + 0x48) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00104E55;

loc_00104E52: ;
    edi = MEM32(ebp + 0x74);

loc_00104E55: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104F25; /* je: equal / zero */

loc_00104E5E: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104E67u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_00104E67: ;
    eax = MEM32(ebp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104F03; /* jne: not equal / not zero */

loc_00104E72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 0x00104E7Fu); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_00104E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104ECF; /* je: equal / zero */

loc_00104E84: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104F13; /* je: equal / zero */

loc_00104E8C: ;
    ebx = 0x2000;

loc_00104E91: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00104E99; /* jae: above or equal (unsigned >=) */

loc_00104E97: ;
    esi = edi;

loc_00104E99: ;
    PUSH32(esp, 0);
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8500;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 0x00104EAFu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_00104EAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104ECF; /* je: equal / zero */

loc_00104EB3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104ECF; /* jne: not equal / not zero */

loc_00104EB8: ;
    PUSH32(esp, esi);
    eax = ebp + -8500;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104EC9u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_00104EC9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00104E91; /* jne: not equal / not zero */

loc_00104ECD: ;
    goto loc_00104F13;

loc_00104ECF: ;
    ebx = MEM32(ebp + 0x6C);

loc_00104ED2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x50), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104EE0; /* je: equal / zero */

loc_00104ED8: ;
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 0x00104EE0u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00104EE0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104EEE; /* je: equal / zero */

loc_00104EE6: ;
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, 0x00104EEEu); RECOMP_ABI_CALL(0x000B17F9u, sub_000B17F9); /* call 0x000B17F9 */

loc_00104EEE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104EF7; /* je: equal / zero */

loc_00104EF4: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00104EF7: ;
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, 0x00104EFFu); RECOMP_ABI_CALL(0x00104B76u, sub_00104B76); /* call 0x00104B76 */

loc_00104EFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00104F50;

loc_00104F03: ;
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104F13u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_00104F13: ;
    eax = MEM32(ebp + 0x5C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00104F23u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_00104F23: ;
    goto loc_00104F3F;

loc_00104F25: ;
    ecx = MEM32(ebp + 0x68);
    edi = MEM32(ebp + 0x5C);
    esi = MEM32(ebp + 0x64);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = eax;
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

loc_00104F3F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x50), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104F4D; /* je: equal / zero */

loc_00104F45: ;
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 0x00104F4Du); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00104F4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00104F50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00104F5A
 * Original: 0x00104F5A - 0x00104F87 (45 bytes, 14 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104F5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00104F5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(0x98BAD0));
    PUSH32(esp, MEM32(0x98BBE4));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104F83u); RECOMP_ABI_CALL(0x00104CF2u, sub_00104CF2); /* call 0x00104CF2 */

loc_00104F83: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00104F9C
 * Original: 0x00104F9C - 0x00104FE6 (74 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104F9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104F9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104FA5u); RECOMP_ABI_CALL(0x0010497Bu, sub_0010497B); /* call 0x0010497B */

loc_00104FA5: ;
    eax = MEM32(ebp + 0xC);
    esi = eax + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00104FAD: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104FAD; /* jne: not equal / not zero */

loc_00104FB4: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xC) = eax;
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_00104FC0; /* jne: not equal / not zero */

loc_00104FBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00104FE2;

loc_00104FC0: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104FD3u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_00104FD3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x2F939C) = eax;
    eax = ecx;

loc_00104FE2: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00104FE6
 * Original: 0x00104FE6 - 0x0010504B (101 bytes, 37 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00104FE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104FE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(0x98B9C4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(0x98B9C8) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    MEM32(0x98B9CC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(0x98B9D0) = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM32(0x98B9C0) = eax;
    MEM32(0x98B9D8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105023u); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_00105023: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x98B9D4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00105046; /* je: equal / zero */

loc_0010502C: ;
    PUSH32(esp, edi);
    ecx = esi;
    esi = MEM32(ebp + 0x1C);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_00105046: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0010504B
 * Original: 0x0010504B - 0x0010506B (32 bytes, 12 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010504B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0010504B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105067u); RECOMP_ABI_CALL(0x00104FE6u, sub_00104FE6); /* call 0x00104FE6 */

loc_00105067: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0010506B
 * Original: 0x0010506B - 0x0010512D (194 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010506B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010506B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x970254);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x98BA44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98BA44), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00105121; /* jbe: below or equal (unsigned <=) */

loc_00105091: ;
    ecx = MEM32(0x98BA40);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010510E; /* je: equal / zero */

loc_0010509E: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010510E; /* ja: above (unsigned >) */

loc_001050A4: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 2 (8-bit) */
    esi = ebp + -4;
    if (TEST_NZ(_fa, _fb)) goto loc_001050B0; /* jne: not equal / not zero */

loc_001050AD: ;
    esi = ebp + -8;

loc_001050B0: ;
    ecx = MEM32(0x98BBF4);
    goto loc_001050C9;

loc_001050B8: ;
    eax = MEM32(esi);
    edx = MEM32(0x98BBF0);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001050CD; /* je: equal / zero */

loc_001050C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_001050C9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001050B8; /* jb: below (unsigned <) */

loc_001050CD: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00105129; /* jb: below (unsigned <) */

loc_001050D5: ;
    ebx = MEM32(esi);
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98BBF0);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001050E8u); RECOMP_ABI_CALL(0x00104A13u, sub_00104A13); /* call 0x00104A13 */

loc_001050E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105129; /* je: equal / zero */

loc_001050EC: ;
    MEM32(edi) = ebx;
    eax = MEM32(0x98BBF0);
    MEM32(eax + ebx * 4) = edi;
    eax = MEM32(ebp + -4);
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F9398)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2F9398) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00105109; /* jae: above or equal (unsigned >=) */

loc_00105104: ;
    MEM32(0x2F9398) = eax;

loc_00105109: ;
    eax = MEM32(ebp + -16);
    MEM32(esi) = eax;

loc_0010510E: ;
    eax = MEM32(ebp + -12);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x98BA44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x98BA44) (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00105091; /* jb: below (unsigned <) */

loc_00105121: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00105124: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00105129: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00105124;

}

/**
 * sub_0010512D
 * Original: 0x0010512D - 0x001051E1 (180 bytes, 65 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010512D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010512D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x98BA30);
    eax = MEM32(ebp + 8);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    SET_LO16(ecx, MEM16(eax + 0x18));
    MEM16(edx + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM16(edx + 6) = LO16(ecx);
    ecx = MEM32(eax + 4);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(edx + 4));
    ebx = ecx;
    edi = edi + edi * 4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + edi * 2 + 0xC;
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
    ecx = ebx;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001051D5; /* jbe: below or equal (unsigned <=) */

loc_00105183: ;
    edi = edx + 0x10;
    MEM32(ebp + 8) = edi;

loc_00105189: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + esi * 4);
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001051AF; /* jge: greater or equal (signed >=) */

loc_00105196: ;
    edi = ebx * 4 + 4;
    ebx = MEM32(0x98BA40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebx);
    edi = MEM32(edi);
    MEM32(ecx + 8) = edi;
    edi = MEM32(ebp + 8);

loc_001051AF: ;
    ebx = MEM32(ecx);
    MEM32(edi + -4) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edi) = ebx;
    ebx = ZX16(MEM16(edx + 4));
    SET_LO16(ecx, MEM16(ecx + 8));
    ebx = esi + ebx * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + ebx * 2 + 0xC) = LO16(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x18) (32-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00105189; /* jb: below (unsigned <) */

loc_001051D5: ;
    eax = MEM32(eax + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001051E1
 * Original: 0x001051E1 - 0x00105233 (82 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001051E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001051E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001051F3; /* jb: below (unsigned <) */

loc_001051EE: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    goto loc_0010522F;

loc_001051F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + ecx;
    ecx = MEM32(0x98BA30);
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + esi * 4);
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105214u); RECOMP_ABI_CALL(0x001051E1u, sub_001051E1); /* call 0x001051E1 */

loc_00105214: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(edi) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105224u); RECOMP_ABI_CALL(0x001051E1u, sub_001051E1); /* call 0x001051E1 */

loc_00105224: ;
    MEM16(edi + 2) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0xC));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0010522F: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00105233
 * Original: 0x00105233 - 0x00105267 (52 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00105233(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105233: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + -116;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105243u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_00105243: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi + 4));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105255u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_00105255: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebp + -116;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105262u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_00105262: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00105267
 * Original: 0x00105267 - 0x00105397 (304 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00105267(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105267: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001052D1; /* jne: not equal / not zero */

loc_0010527B: ;
    esi = MEM32(0x98B9C0);
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(0x98B9B8);
    ebx = ebp + -28;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = edi;
    MEM32(ebp + 0xC) = 0x98B9A0;
    if ((_fa == 0)) goto loc_001052C3; /* je: equal / zero */

loc_0010529B: ;
    MEM32(0x98BA0C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x70);
    POP32(esp, ecx);
    MEM32(0x98BA10) = ecx;
    edi = 0x98BA14;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x98B9D4) = MEM32(0x98B9D4) + ecx;
    _fa = (uint32_t)(MEM32(0x98B9D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x98B9F0) = MEM32(0x98B9F0) + ecx;
    _fa = (uint32_t)(MEM32(0x98B9F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001052CF;

loc_001052C3: ;
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98BA0C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001052CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001052D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(0x2F939C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001052E0u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_001052E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010538E; /* je: equal / zero */

loc_001052E9: ;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(0x2F939C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001052FFu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_001052FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010538E; /* je: equal / zero */

loc_00105307: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010538E; /* jne: not equal / not zero */

loc_0010530F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105390; /* je: equal / zero */

loc_00105316: ;
    PUSH32(esp, 8);
    MEM16(0x98BA60) = 0x70;
    MEM16(0x98BA62) = LO16(eax);
    MEM32(0x98BA68) = edi;
    MEM32(0x98BA64) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105338u); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_00105338: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010538E; /* je: equal / zero */

loc_0010533F: ;
    eax = MEM32(0x98B9B8);
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFDCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x98B9C4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105353u); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_00105353: ;
    PUSH32(esp, 0xC);
    esi = 0x98BA60;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105361u); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_00105361: ;
    PUSH32(esp, 0x98BA6C);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010536Cu); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_0010536C: ;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x2F939C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010537Fu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0010537F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010538E; /* je: equal / zero */

loc_00105383: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010538E; /* jne: not equal / not zero */

loc_00105389: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00105390;

loc_0010538E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00105390: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00105397
 * Original: 0x00105397 - 0x00105469 (210 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00105397(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105397: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001053A2u); RECOMP_ABI_CALL(0x0010506Bu, sub_0010506B); /* call 0x0010506B */

loc_001053A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001053A8; /* jne: not equal / not zero */

loc_001053A6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001053A8: ;
    ecx = MEM32(0x2F9398);
    eax = MEM32(0x98BBF4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + eax * 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = eax * 4 + 0xC;
    if (CMP_BE(_fa, _fb)) goto loc_001053E1; /* jbe: below or equal (unsigned <=) */

loc_001053C9: ;
    edx = MEM32(0x98BBF0);
    edx = MEM32(edx + esi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001053DC; /* je: equal / zero */

loc_001053D9: ;
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001053DC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001053C9; /* jb: below (unsigned <) */

loc_001053E1: ;
    esi = eax + 3;
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x98BA34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98BA34), edi (32-bit) */
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00105426; /* jbe: below or equal (unsigned <=) */

loc_001053F5: ;
    eax = ZX16(LO16(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0010562F(); return; } /* jne: not equal / not zero */

loc_00105400: ;
    eax = MEM32(0x98BA30);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(eax + 0x18);
    ebx = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    ecx = ebx + ecx * 2 + 0xF;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x98BA34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x98BA34) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001053F5; /* jb: below (unsigned <) */

loc_00105426: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    MEM32(ebp + -20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105433u); RECOMP_ABI_CALL(0x000B179Cu, sub_000B179C); /* call 0x000B179C */

loc_00105433: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00105636(); return; } /* je: equal / zero */

loc_0010543D: ;
    eax = MEM32(0x2F9398);
    MEM32(ebx + 4) = eax;
    eax = MEM32(0x98BBF4);
    _fb = (uint32_t)(MEM32(0x2F9398)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x2F9398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 8) = esi;
    MEM32(ebx) = eax;
    ecx = MEM32(0x2F9398);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x98BBF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x98BBF4) (32-bit) */
    edx = ebx + 0xC;
    MEM32(ebp + -4) = ecx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001054A6(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_00105469(); return; /* fallthrough 0x00105469 */

}

/**
 * sub_00105469
 * Original: 0x00105469 - 0x001054A6 (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105469(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105469: ;
    eax = MEM32(0x98BBF0);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105491; /* je: equal / zero */

loc_00105475: ;
    ecx = MEM32(eax + 8);
    esi = eax + 0x10;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    ecx = eax;
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
    esi = MEM32(ebp + -12);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105491: ;
    ecx = MEM32(ebp + -4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x98BBF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x98BBF4) (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00105469; /* jb: below (unsigned <) */

loc_001054A0: ;
    ecx = MEM32(0x2F9398);

    g_seh_ebp = ebp; sub_001054A6(); return; /* fallthrough 0x001054A6 */

}

/**
 * sub_001054A6
 * Original: 0x001054A6 - 0x0010562F (393 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001054A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001054A6: ;
    eax = MEM32(ebx);
    edx = ecx;
    eax = eax + eax * 4;
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebx + eax * 4 + 0xC;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00105523; /* jbe: below or equal (unsigned <=) */

loc_001054C3: ;
    eax = MEM32(0x98BBF0);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105514; /* je: equal / zero */

loc_001054CF: ;
    esi = MEM32(ebx);
    ecx = edi;
    edi = MEM32(eax + 8);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + esi * 4;
    esi = ecx + esi * 4;
    MEM32(esi + ebx + 0xC) = edi;
    esi = MEM32(ebx);
    edi = MEM32(ebp + -16);
    esi = esi + esi * 4;
    ecx = ecx + esi * 4;
    MEM32(ecx + ebx + 0x10) = edx;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + 0x10;
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
    ecx = edx;
    edx = MEM32(ebp + -8);
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
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -12);
    MEM32(ebp + -8) = edx;

loc_00105514: ;
    edi = MEM32(ebp + -4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2F9398)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x2F9398) (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001054C3; /* jb: below (unsigned <) */

loc_00105523: ;
    PUSH32(esp, 0x104BD6);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(0x98BA34));
    PUSH32(esp, MEM32(0x98BA30));
    PUSH32(esp, 0x0010553Bu); RECOMP_ABI_CALL(0x00151B90u, sub_00151B90); /* call 0x00151B90 */

loc_0010553B: ;
    edi = MEM32(0x98BA34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00105551u); RECOMP_ABI_CALL(0x0010512Du, sub_0010512D); /* call 0x0010512D */

loc_00105551: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(0x98BA34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98BA34), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0010557D; /* jbe: below or equal (unsigned <=) */

loc_0010555E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010556F; /* je: equal / zero */

loc_00105563: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x0010556Fu); RECOMP_ABI_CALL(0x0010512Du, sub_0010512D); /* call 0x0010512D */

loc_0010556F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x98BA34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x98BA34) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0010555E; /* jb: below (unsigned <) */

loc_0010557D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105586u); RECOMP_ABI_CALL(0x001051E1u, sub_001051E1); /* call 0x001051E1 */

loc_00105586: ;
    MEM16(esi) = LO16(eax);
    PUSH32(esp, MEM32(0x98BA34));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105597u); RECOMP_ABI_CALL(0x001051E1u, sub_001051E1); /* call 0x001051E1 */

loc_00105597: ;
    MEM16(esi + 2) = LO16(eax);
    ecx = MEM32(0x98B9D4);
    eax = 0x88;
    PUSH32(esp, ecx);
    esi = 0x98B9D4;
    PUSH32(esp, esi);
    MEM32(0x98B9B8) = eax;
    MEM32(0x98B9B4) = 0x46534358;
    MEM32(0x98B9BC) = 1;
    MEM32(ebp + -12) = ecx;
    MEM32(0x98B9D4) = eax;
    PUSH32(esp, 0x001055D3u); RECOMP_ABI_CALL(0x00105233u, sub_00105233); /* call 0x00105233 */

loc_001055D3: ;
    eax = MEM32(0x98B9D4);
    ecx = MEM32(0x98B9D8);
    eax = ecx + eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x98B9F0) = eax;
    eax = MEM32(ebp + -20);
    PUSH32(esp, ebx);
    edi = 0x98B9F0;
    PUSH32(esp, edi);
    MEM32(0x98B9F4) = eax;
    PUSH32(esp, 0x001055FEu); RECOMP_ABI_CALL(0x00105233u, sub_00105233); /* call 0x00105233 */

loc_001055FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x0010560Au); RECOMP_ABI_CALL(0x00105267u, sub_00105267); /* call 0x00105267 */

loc_0010560A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0010563A(); return; } /* je: equal / zero */

loc_0010560E: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105617u); RECOMP_ABI_CALL(0x00105267u, sub_00105267); /* call 0x00105267 */

loc_00105617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0010563A(); return; } /* je: equal / zero */

loc_0010561B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00105622u); RECOMP_ABI_CALL(0x00105267u, sub_00105267); /* call 0x00105267 */

loc_00105622: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0010563A(); return; } /* je: equal / zero */

loc_00105626: ;
    MEM32(ebp + -8) = 1;
    g_seh_ebp = ebp; sub_00105655(); return; /* tail jmp 0x00105655 */

}

/**
 * sub_0010562F
 * Original: 0x0010562F - 0x00105636 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010562F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010562F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00105636u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

    g_seh_ebp = ebp; sub_00105636(); return; /* fallthrough 0x00105636 */

}

/**
 * sub_00105636
 * Original: 0x00105636 - 0x0010563A (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105636(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105636: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00105677(); return; /* tail jmp 0x00105677 */

}

/**
 * sub_0010563A
 * Original: 0x0010563A - 0x0010567C (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010563A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010563A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, 0x0010564Au); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_0010564A: ;
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, 0x00105655u); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_00105655: ;
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, 0x00105660u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00105660: ;
    eax = MEM32(ebp + -12);
    MEM32(0x2F939C) = MEM32(0x2F939C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x2F939C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x98B9D4) = eax;
    PUSH32(esp, 0x00105674u); RECOMP_ABI_CALL(0x0010497Bu, sub_0010497B); /* call 0x0010497B */

loc_00105674: ;
    eax = MEM32(ebp + -8);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00105655
 * Original: 0x00105655 - 0x0010567C (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105655(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105655: ;
    PUSH32(esp, MEM32(0x2F939C));
    PUSH32(esp, 0x00105660u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00105660: ;
    eax = MEM32(ebp + -12);
    MEM32(0x2F939C) = MEM32(0x2F939C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x2F939C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x98B9D4) = eax;
    PUSH32(esp, 0x00105674u); RECOMP_ABI_CALL(0x0010497Bu, sub_0010497B); /* call 0x0010497B */

loc_00105674: ;
    eax = MEM32(ebp + -8);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00105677
 * Original: 0x00105677 - 0x0010567C (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105677(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105677: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0010567C
 * Original: 0x0010567C - 0x00105681 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010567C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010567C: ;
    g_seh_ebp = ebp; sub_0010497B(); return; /* tail jmp 0x0010497B */

}

/**
 * sub_00105682
 * Original: 0x00105682 - 0x00105688 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105682(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105682: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BAE0)); return; /* indirect tail jmp */

}

/**
 * sub_00105694
 * Original: 0x00105694 - 0x0010569A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105694(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105694: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BAF0)); return; /* indirect tail jmp */

}

/**
 * sub_0010569A
 * Original: 0x0010569A - 0x001056A0 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010569A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010569A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BAF4)); return; /* indirect tail jmp */

}

/**
 * sub_00105778
 * Original: 0x00105778 - 0x0010577E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105778: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB90)); return; /* indirect tail jmp */

}

/**
 * sub_0010577E
 * Original: 0x0010577E - 0x00105784 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010577E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010577E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB94)); return; /* indirect tail jmp */

}

/**
 * sub_00105784
 * Original: 0x00105784 - 0x0010578A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105784(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105784: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB98)); return; /* indirect tail jmp */

}

/**
 * sub_00105940
 * Original: 0x00105940 - 0x00105946 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105940: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BCF8)); return; /* indirect tail jmp */

}

/**
 * sub_001059AC
 * Original: 0x001059AC - 0x001059B2 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001059AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001059AC: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD44)); return; /* indirect tail jmp */

}

/**
 * sub_001059E8
 * Original: 0x001059E8 - 0x001059EE (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001059E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001059E8: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD6C)); return; /* indirect tail jmp */

}

/**
 * sub_001059EE
 * Original: 0x001059EE - 0x001059F4 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001059EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001059EE: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD70)); return; /* indirect tail jmp */

}

/**
 * sub_001059F4
 * Original: 0x001059F4 - 0x001059FA (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001059F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001059F4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD74)); return; /* indirect tail jmp */

}

/**
 * sub_001059FA
 * Original: 0x001059FA - 0x00105A00 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001059FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001059FA: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD80)); return; /* indirect tail jmp */

}

/**
 * sub_00105A12
 * Original: 0x00105A12 - 0x00105A18 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105A12: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD90)); return; /* indirect tail jmp */

}

/**
 * sub_00105A18
 * Original: 0x00105A18 - 0x00105A1E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105A18: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD94)); return; /* indirect tail jmp */

}

/**
 * sub_00105A1E
 * Original: 0x00105A1E - 0x00105A24 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105A1E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BD98)); return; /* indirect tail jmp */

}

/**
 * sub_00105A36
 * Original: 0x00105A36 - 0x00105A3C (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105A36: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BDB0)); return; /* indirect tail jmp */

}

/**
 * sub_00105A50
 * Original: 0x00105A50 - 0x00105A78 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105A50: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00105A72; /* jns: not sign (positive) */

loc_00105A6A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00105A72: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00105A77; /* jle: less or equal (signed <=) */

loc_00105A76: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00105A77: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00105A80
 * Original: 0x00105A80 - 0x00105AE1 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105A80: ;
    ecx = MEM32(0x9A3BC0);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    if ((_fas >= 0)) goto loc_00105A94; /* jns: not sign (positive) */

loc_00105A8F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00105A94: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x9A3AC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x9A3AC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105AB2; /* jne: not equal / not zero */

loc_00105AAA: ;
    MEM16(edx * 2 + 0x9A3BE0) = MEM16(edx * 2 + 0x9A3BE0) + 1;
    _fa = (uint32_t)(MEM16(edx * 2 + 0x9A3BE0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00105AB2: ;
    MEM8(eax) = LO8(edx);
    SET_LO16(edx, MEM16(edx * 2 + 0x9A3BE0));
    MEM16(eax + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 1) = LO8(ebx);
    MEM32(eax + 0xC) = edx;
    MEM32(0x9A3BC0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00105AF0
 * Original: 0x00105AF0 - 0x00105AF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105AF0(void)
{

loc_00105AF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00105B00
 * Original: 0x00105B00 - 0x00105B40 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105B00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105B2D; /* jl: less (signed <) */

loc_00105B08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00105B2D; /* jge: greater or equal (signed >=) */

loc_00105B0F: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105B2A; /* jne: not equal / not zero */

loc_00105B17: ;
    PUSH32(esp, 0x2A8D60);
    PUSH32(esp, 0x00105B21u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105B21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_00105B2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00105B2D: ;
    PUSH32(esp, 0x2A8D28);
    PUSH32(esp, 0x00105B37u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105B37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

}

/**
 * sub_00105B50
 * Original: 0x00105B50 - 0x00105B7E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105B50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x9A4020;
    /* nop */

loc_00105B60: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105B72; /* je: equal / zero */

loc_00105B65: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4460) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9A4460 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105B60; /* jl: less (signed <) */

loc_00105B71: ;
    esp += 4; return; /* ret */

loc_00105B72: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    _fb = (uint32_t)(0x9A4020) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x9A4020;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00105B80
 * Original: 0x00105B80 - 0x00105BED (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105B87u); RECOMP_ABI_CALL(0x00105B50u, sub_00105B50); /* call 0x00105B50 */

loc_00105B87: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105BA1; /* jne: not equal / not zero */

loc_00105B8F: ;
    PUSH32(esp, 0x2A8DC4);
    PUSH32(esp, 0x00105B99u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105B99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00105BA1: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00105BACu); RECOMP_ABI_CALL(0x0010BDA0u, sub_0010BDA0); /* call 0x0010BDA0 */

loc_00105BAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00105BC8; /* jne: not equal / not zero */

loc_00105BB6: ;
    PUSH32(esp, 0x2A8D8C);
    PUSH32(esp, 0x00105BC0u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105BC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00105BC8: ;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 2) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x2C) = 0x200;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00105BF0
 * Original: 0x00105BF0 - 0x00105C7C (140 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105BF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105C09; /* jne: not equal / not zero */

loc_00105BF8: ;
    PUSH32(esp, 0x2A8DF8);
    PUSH32(esp, 0x00105C02u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105C02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00105C09: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x00105C31u); RECOMP_ABI_CALL(0x0010BE20u, sub_0010BE20); /* call 0x0010BE20 */

loc_00105C31: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00105C3Au); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_00105C3A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105C53; /* jne: not equal / not zero */

loc_00105C42: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00105C4Bu); RECOMP_ABI_CALL(0x0010C690u, sub_0010C690); /* call 0x0010C690 */

loc_00105C4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105C53: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105C5Cu); RECOMP_ABI_CALL(0x0010C4A0u, sub_0010C4A0); /* call 0x0010C4A0 */

loc_00105C5C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00105C68u); RECOMP_ABI_CALL(0x0010C4B0u, sub_0010C4B0); /* call 0x0010C4B0 */

loc_00105C68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105C80
 * Original: 0x00105C80 - 0x00105CC2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105C80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105CC0; /* je: equal / zero */

loc_00105C8C: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105CC0; /* jne: not equal / not zero */

loc_00105C93: ;
    _fa = (uint32_t)(MEM32(0x9A3BC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9A3BC4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105CAC; /* jne: not equal / not zero */

loc_00105C9C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00105CA9u); RECOMP_ABI_CALL(0x0010C6F0u, sub_0010C6F0); /* call 0x0010C6F0 */

loc_00105CA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105CAC: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 8) = 0;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00105CC0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105CD0
 * Original: 0x00105CD0 - 0x00105D90 (192 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105CDEu); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_00105CDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105CF2; /* je: equal / zero */

loc_00105CE6: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00105CEFu); RECOMP_ABI_CALL(0x0010BF70u, sub_0010BF70); /* call 0x0010BF70 */

loc_00105CEF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105CF2: ;
    PUSH32(esp, 0x00105CF7u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00105CF7: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x30);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x18) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00105D11; /* jge: greater or equal (signed >=) */

loc_00105D0F: ;
    eax = ecx;

loc_00105D11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00105D2E; /* jne: not equal / not zero */

loc_00105D1F: ;
    MEM8(esi + 1) = 3;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00105D2Au); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00105D2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105D2E: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105D39u); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_00105D39: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00105D47u); RECOMP_ABI_CALL(0x0010C570u, sub_0010C570); /* call 0x0010C570 */

loc_00105D47: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00105D54u); RECOMP_ABI_CALL(0x0010C470u, sub_0010C470); /* call 0x0010C470 */

loc_00105D54: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(esi + 1) = 2;
    MEM8(esi + 3) = 0;
    PUSH32(esp, 0x00105D67u); RECOMP_ABI_CALL(0x0010C4C0u, sub_0010C4C0); /* call 0x0010C4C0 */

loc_00105D67: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00105D74u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_00105D74: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105D81u); RECOMP_ABI_CALL(0x0010BF10u, sub_0010BF10); /* call 0x0010BF10 */

loc_00105D81: ;
    esi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00105D8Cu); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00105D8C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105D90
 * Original: 0x00105D90 - 0x00105E00 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105D90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105DAD; /* jne: not equal / not zero */

loc_00105D99: ;
    PUSH32(esp, 0x2A8E80);
    PUSH32(esp, 0x00105DA3u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105DA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105DAD: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00105DC9; /* jge: greater or equal (signed >=) */

loc_00105DB5: ;
    PUSH32(esp, 0x2A8E54);
    PUSH32(esp, 0x00105DBFu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105DBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105DC9: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105DE5; /* jne: not equal / not zero */

loc_00105DD1: ;
    PUSH32(esp, 0x2A8E2C);
    PUSH32(esp, 0x00105DDBu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105DDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105DE5: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105DEF; /* jne: not equal / not zero */

loc_00105DEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105DEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105DF7u); RECOMP_ABI_CALL(0x00105CD0u, sub_00105CD0); /* call 0x00105CD0 */

loc_00105DF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 2) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105E00
 * Original: 0x00105E00 - 0x00105E05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105E00: ;
    g_seh_ebp = ebp; sub_00105D90(); return; /* tail jmp 0x00105D90 */

}

/**
 * sub_00105E10
 * Original: 0x00105E10 - 0x00105F3C (300 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00105E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105E10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00105E2Bu); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00105E2B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105E48; /* jne: not equal / not zero */

loc_00105E32: ;
    PUSH32(esp, 0x2A8F28);
    PUSH32(esp, 0x00105E3Cu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105E3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00105E48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00105E62; /* jge: greater or equal (signed >=) */

loc_00105E4C: ;
    PUSH32(esp, 0x2A8EFC);
    PUSH32(esp, 0x00105E56u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105E56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00105E62: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105E7C; /* jne: not equal / not zero */

loc_00105E66: ;
    PUSH32(esp, 0x2A8ED4);
    PUSH32(esp, 0x00105E70u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105E70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00105E7C: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105E88; /* jne: not equal / not zero */

loc_00105E82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00105E88: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105EA3; /* je: equal / zero */

loc_00105E8F: ;
    PUSH32(esp, 0x2A8EA8);
    PUSH32(esp, 0x00105E99u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105E99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00105EA3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00105EB0u); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_00105EB0: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105EC3; /* jne: not equal / not zero */

loc_00105EB9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00105EC3: ;
    PUSH32(esp, 0x00105EC8u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00105EC8: ;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 8) = ebx;
    _fa = (uint32_t)(MEM32(0x9A3BC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9A3BC4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105EE4; /* jne: not equal / not zero */

loc_00105EDA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00105EE1u); RECOMP_ABI_CALL(0x0010C6F0u, sub_0010C6F0); /* call 0x0010C6F0 */

loc_00105EE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105EE4: ;
    PUSH32(esp, 0x00105EE9u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00105EE9: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105EF8u); RECOMP_ABI_CALL(0x00105CD0u, sub_00105CD0); /* call 0x00105CD0 */

loc_00105EF8: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00105F22; /* jg: greater (signed >) */

loc_00105F01: ;
    PUSH32(esp, 0x00105F06u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00105F06: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105F1D; /* je: equal / zero */

loc_00105F0D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00105F13u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00105F10u); } /* indirect call */
    }

loc_00105F13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_00105F1D: ;
    PUSH32(esp, 0x00105F22u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00105F22: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x00105F32u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00105F32: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00105F40
 * Original: 0x00105F40 - 0x00105F64 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105F40: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00105F5B; /* je: equal / zero */

loc_00105F48: ;
    PUSH32(esp, 0x2A8F50);
    PUSH32(esp, 0x00105F52u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105F52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_00105F5B: ;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_00105E10(); return; /* tail jmp 0x00105E10 */

}

/**
 * sub_00105F70
 * Original: 0x00105F70 - 0x0010600A (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105F70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00105F83u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00105F83: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105F9E; /* jne: not equal / not zero */

loc_00105F8A: ;
    PUSH32(esp, 0x2A8FB0);
    PUSH32(esp, 0x00105F94u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105F94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105F9E: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106005; /* je: equal / zero */

loc_00105FA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105FB2; /* jne: not equal / not zero */

loc_00105FA9: ;
    eax = MEM32(esi + 0x14);
    MEM8(esi + 1) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105FB2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105FCB; /* jne: not equal / not zero */

loc_00105FB9: ;
    PUSH32(esp, 0x2A8F84);
    PUSH32(esp, 0x00105FC3u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00105FC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00105FCB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105FD1u); RECOMP_ABI_CALL(0x0010BF70u, sub_0010BF70); /* call 0x0010BF70 */

loc_00105FD1: ;
    PUSH32(esp, 0x00105FD6u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00105FD6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105FDFu); RECOMP_ABI_CALL(0x0010BE90u, sub_0010BE90); /* call 0x0010BE90 */

loc_00105FDF: ;
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x00105FEBu); RECOMP_ABI_CALL(0x00105C80u, sub_00105C80); /* call 0x00105C80 */

loc_00105FEB: ;
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x00105FF4u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00105FF4: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00106002u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00106002: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00106005: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106010
 * Original: 0x00106010 - 0x0010608B (123 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00106023u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00106023: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010603E; /* jne: not equal / not zero */

loc_0010602A: ;
    PUSH32(esp, 0x2A9000);
    PUSH32(esp, 0x00106034u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106034: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010603E: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106086; /* je: equal / zero */

loc_00106045: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106052; /* jne: not equal / not zero */

loc_00106049: ;
    eax = MEM32(esi + 0x14);
    MEM8(esi + 1) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00106052: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010606B; /* jne: not equal / not zero */

loc_00106059: ;
    PUSH32(esp, 0x2A8FD4);
    PUSH32(esp, 0x00106063u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106063: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010606B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106071u); RECOMP_ABI_CALL(0x0010BF40u, sub_0010BF40); /* call 0x0010BF40 */

loc_00106071: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    MEM8(esi + 3) = 1;
    PUSH32(esp, 0x00106083u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00106083: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00106086: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106090
 * Original: 0x00106090 - 0x00106111 (129 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001060D8; /* jne: not equal / not zero */

loc_0010609B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001060A5u); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_001060A5: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    MEM8(esi + 1) = LO8(eax);
    PUSH32(esp, 0x001060B4u); RECOMP_ABI_CALL(0x0010BE90u, sub_0010BE90); /* call 0x0010BE90 */

loc_001060B4: ;
    SET_LO8(ecx, MEM8(esi + 1));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001060C9; /* je: equal / zero */

loc_001060C4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001060D7; /* jne: not equal / not zero */

loc_001060C9: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x001060D4u); RECOMP_ABI_CALL(0x00105C80u, sub_00105C80); /* call 0x00105C80 */

loc_001060D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001060D7: ;
    POP32(esp, edi);

loc_001060D8: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010610F; /* jne: not equal / not zero */

loc_001060DE: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001060E7u); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_001060E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010610F; /* jne: not equal / not zero */

loc_001060EF: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001060F8u); RECOMP_ABI_CALL(0x0010BE90u, sub_0010BE90); /* call 0x0010BE90 */

loc_001060F8: ;
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x00106104u); RECOMP_ABI_CALL(0x00105C80u, sub_00105C80); /* call 0x00105C80 */

loc_00106104: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 1;
    MEM8(esi + 3) = 0;

loc_0010610F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106120
 * Original: 0x00106120 - 0x0010614F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106126u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00106126: ;
    esi = 0x9A4020;
    goto loc_00106130;

    /* nop */

loc_00106130: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010613E; /* jne: not equal / not zero */

loc_00106135: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010613Bu); RECOMP_ABI_CALL(0x00106090u, sub_00106090); /* call 0x00106090 */

loc_0010613B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010613E: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4460) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A4460 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106130; /* jl: less (signed <) */

loc_00106149: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

}

/**
 * sub_00106150
 * Original: 0x00106150 - 0x001061FD (173 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106150: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0010616Bu); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_0010616B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106188; /* jne: not equal / not zero */

loc_00106172: ;
    PUSH32(esp, 0x2A9050);
    PUSH32(esp, 0x0010617Cu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_0010617C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00106188: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106197; /* jne: not equal / not zero */

loc_0010618E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106194u); RECOMP_ABI_CALL(0x00105F70u, sub_00105F70); /* call 0x00105F70 */

loc_00106194: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00106197: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001061A0; /* jne: not equal / not zero */

loc_0010619B: ;
    MEM32(esi + 0x14) = ebx;
    goto loc_001061B7;

loc_001061A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001061AA; /* jne: not equal / not zero */

loc_001061A5: ;
    eax = MEM32(esi + 0x14);
    goto loc_001061B2;

loc_001061AA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001061E7; /* jne: not equal / not zero */

loc_001061AF: ;
    eax = MEM32(esi + 0xC);

loc_001061B2: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_001061B7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001061C7; /* jge: greater or equal (signed >=) */

loc_001061BE: ;
    MEM32(esi + 0x14) = 0;
    goto loc_001061D1;

loc_001061C7: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001061D1; /* jle: less or equal (signed <=) */

loc_001061CE: ;
    MEM32(esi + 0x14) = ecx;

loc_001061D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001061DDu); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_001061DD: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001061E7: ;
    PUSH32(esp, 0x2A9028);
    PUSH32(esp, 0x001061F1u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001061F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00106200
 * Original: 0x00106200 - 0x0010621F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010621B; /* jne: not equal / not zero */

loc_00106208: ;
    PUSH32(esp, 0x2A9074);
    PUSH32(esp, 0x00106212u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106212: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_0010621B: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00106220
 * Original: 0x00106220 - 0x00106278 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010623D; /* jne: not equal / not zero */

loc_00106229: ;
    PUSH32(esp, 0x2A9098);
    PUSH32(esp, 0x00106233u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106233: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010623D: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0xFFFFF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106267; /* jl: less (signed <) */

loc_00106246: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010624Fu); RECOMP_ABI_CALL(0x0010C610u, sub_0010C610); /* call 0x0010C610 */

loc_0010624F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106258u); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_00106258: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106267; /* jne: not equal / not zero */

loc_00106260: ;
    eax = 0xFFFFFFFBu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00106267: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106270u); RECOMP_ABI_CALL(0x0010C4B0u, sub_0010C4B0); /* call 0x0010C4B0 */

loc_00106270: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106280
 * Original: 0x00106280 - 0x00106291 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106280: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010628Au); RECOMP_ABI_CALL(0x00106220u, sub_00106220); /* call 0x00106220 */

loc_0010628A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_001062A0
 * Original: 0x001062A0 - 0x001062D2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001062A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001062A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001062C5; /* jne: not equal / not zero */

loc_001062A8: ;
    PUSH32(esp, 0x2A90C4);
    PUSH32(esp, 0x001062B2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001062B2: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_001062C5: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001062E0
 * Original: 0x001062E0 - 0x001062FF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001062E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001062E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001062FB; /* jne: not equal / not zero */

loc_001062E8: ;
    PUSH32(esp, 0x2A90F0);
    PUSH32(esp, 0x001062F2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001062F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_001062FB: ;
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00106300
 * Original: 0x00106300 - 0x00106320 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106300: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010631B; /* jne: not equal / not zero */

loc_00106308: ;
    PUSH32(esp, 0x2A9120);
    PUSH32(esp, 0x00106312u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106312: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_0010631B: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00106320
 * Original: 0x00106320 - 0x00106370 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106320: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010635D; /* jl: less (signed <) */

loc_00106328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010635D; /* jge: greater or equal (signed >=) */

loc_0010632F: ;
    eax = MEM32(eax * 4 + 0x9A3C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010635D; /* je: equal / zero */

loc_0010633A: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010634A; /* jl: less (signed <) */

loc_00106342: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010634A; /* jge: greater or equal (signed >=) */

loc_00106347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010634A: ;
    PUSH32(esp, 0x2A916C);
    PUSH32(esp, 0x00106354u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106354: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_0010635D: ;
    PUSH32(esp, 0x2A9148);
    PUSH32(esp, 0x00106367u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106367: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

}

/**
 * sub_00106370
 * Original: 0x00106370 - 0x00106446 (214 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106370: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106382u); RECOMP_ABI_CALL(0x00106320u, sub_00106320); /* call 0x00106320 */

loc_00106382: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001063AF; /* jge: greater or equal (signed >=) */

loc_0010638B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(edx) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001063AF: ;
    esi = MEM32(esi * 4 + 0x9A3C20);
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xF), 1 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001063E5; /* jne: not equal / not zero */

loc_001063BD: ;
    edi = MEM32(esi + 0x118);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001063DC; /* jle: less or equal (signed <=) */

loc_001063C9: ;
    /* nop */

loc_001063D0: ;
    _fb = (uint32_t)(MEM32(esi + eax * 4 + 0x11C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + eax * 4 + 0x11C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001063D0; /* jl: less (signed <) */

loc_001063DC: ;
    eax = MEM32(esi + ebx * 4 + 0x11C);
    goto loc_00106409;

loc_001063E5: ;
    edi = ZX16(MEM16(esi + 0x118));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00106401; /* jle: less or equal (signed <=) */

loc_001063F2: ;
    edx = ZX16(MEM16(esi + eax * 2 + 0x11A));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001063F2; /* jl: less (signed <) */

loc_00106401: ;
    eax = ZX16(MEM16(esi + ebx * 2 + 0x11A));

loc_00106409: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x100);
    edx = esi + 0x10;
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106422u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_00106422: ;
    ecx = MEM32(esi + 0x110);
    edx = MEM32(esp + 0x2C);
    MEM32(edx) = ecx;
    eax = MEM32(esi + 0x114);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00106450
 * Original: 0x00106450 - 0x0010645F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106450: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x9A3C20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106460
 * Original: 0x00106460 - 0x0010646A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106460(void)
{

loc_00106460: ;
    eax = MEM32(esp + 4);
    MEM32(0x9A3BC4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00106470
 * Original: 0x00106470 - 0x00106490 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106470: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106488; /* jne: not equal / not zero */

loc_0010647A: ;
    PUSH32(esp, 0x2A9190);
    PUSH32(esp, 0x00106484u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106484: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106488: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001064B0
 * Original: 0x001064B0 - 0x001064B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001064B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001064B0: ;
    g_seh_ebp = ebp; sub_0010D770(); return; /* tail jmp 0x0010D770 */

}

/**
 * sub_001064C0
 * Original: 0x001064C0 - 0x0010657E (190 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001064C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001064C0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x124);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001064F0u); RECOMP_ABI_CALL(0x00106370u, sub_00106370); /* call 0x00106370 */

loc_001064F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106504; /* jge: greater or equal (signed >=) */

loc_001064F7: ;
    eax = 0xFFFFFFFDu;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106504: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, 0x00106520u); RECOMP_ABI_CALL(0x00106450u, sub_00106450); /* call 0x00106450 */

loc_00106520: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x00106541u); RECOMP_ABI_CALL(0x0010BE20u, sub_0010BE20); /* call 0x0010BE20 */

loc_00106541: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010654Au); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_0010654A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010656A; /* jne: not equal / not zero */

loc_00106552: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010655Bu); RECOMP_ABI_CALL(0x0010C690u, sub_0010C690); /* call 0x0010C690 */

loc_0010655B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010656A: ;
    MEM32(esi + 0xC) = edi;
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = edi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106580
 * Original: 0x00106580 - 0x001065E9 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00106593u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00106593: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001065E7; /* je: equal / zero */

loc_0010659A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001065A9; /* jne: not equal / not zero */

loc_001065A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001065A6u); RECOMP_ABI_CALL(0x00105F70u, sub_00105F70); /* call 0x00105F70 */

loc_001065A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001065A9: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001065CA; /* je: equal / zero */

loc_001065B1: ;
    PUSH32(esp, edi);
    MEM8(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x001065C1u); RECOMP_ABI_CALL(0x0010C690u, sub_0010C690); /* call 0x0010C690 */

loc_001065C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001065C7u); RECOMP_ABI_CALL(0x0010C6C0u, sub_0010C6C0); /* call 0x0010C6C0 */

loc_001065C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001065CA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    ecx = 0x11;
    edi = esi;
    PUSH32(esp, 3);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x001065E3u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_001065E3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_001065E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001065F0
 * Original: 0x001065F0 - 0x00106611 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001065F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001065F0: ;
    PUSH32(esp, esi);
    esi = 0x9A4020;

loc_001065F6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106604; /* jne: not equal / not zero */

loc_001065FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106601u); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_00106601: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00106604: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4460) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A4460 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001065F6; /* jl: less (signed <) */

loc_0010660F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106620
 * Original: 0x00106620 - 0x00106648 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106620: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106644u); RECOMP_ABI_CALL(0x00106370u, sub_00106370); /* call 0x00106370 */

loc_00106644: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106650
 * Original: 0x00106650 - 0x0010667A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106650: ;
    eax = MEM32(0x9A3C00);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010665Bu); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_0010665B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9A3C00) = eax;
    MEM32(0x9A3AA0) = 0xFFFFFFFFu;
    MEM32(0x9A3C04) = eax;
    MEM32(0x97025C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00106680
 * Original: 0x00106680 - 0x001066B5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106680: ;
    eax = MEM32(0x9A3C00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001066B4; /* je: equal / zero */

loc_00106689: ;
    ecx = MEM32(0x9A3AA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001066B4; /* jl: less (signed <) */

loc_00106693: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106699u); RECOMP_ABI_CALL(0x00106300u, sub_00106300); /* call 0x00106300 */

loc_00106699: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001066AF; /* je: equal / zero */

loc_001066A1: ;
    eax = MEM32(0x9A3C00);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001066ACu); RECOMP_ABI_CALL(0x00105F70u, sub_00105F70); /* call 0x00105F70 */

loc_001066AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001066AF: ;
    g_seh_ebp = ebp; sub_00106650(); return; /* tail jmp 0x00106650 */

loc_001066B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001066C0
 * Original: 0x001066C0 - 0x0010695F (671 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001066C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001066C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x9A3AA0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001066FC; /* je: equal / zero */

loc_001066E4: ;
    PUSH32(esp, 0x2A9270);
    PUSH32(esp, 0x001066EEu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001066EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001066FC: ;
    eax = MEM32(0x9A3C00);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106707u); RECOMP_ABI_CALL(0x00106300u, sub_00106300); /* call 0x00106300 */

loc_00106707: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106959; /* jne: not equal / not zero */

loc_00106713: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi * 4 + 0x9A3C20);
    SET_LO8(eax, MEM8(ebp + 0xF));
    MEM8(esp + 0x20) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = ebp + 0x118;
    if (CMP_NE(_fa, _fb)) goto loc_00106739; /* jne: not equal / not zero */

loc_0010672C: ;
    MEM32(esp + 0xC) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_00106744;

loc_00106739: ;
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_00106744: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00106861; /* jne: not equal / not zero */

loc_0010674E: ;
    eax = MEM32(0x970258);
    ecx = 3;
    edi = 0x2A926C;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00106784; /* je: equal / zero */

loc_00106765: ;
    PUSH32(esp, 0x2A9238);

loc_0010676A: ;
    PUSH32(esp, 0x0010676Fu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_0010676F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00106777u); RECOMP_ABI_CALL(0x00106650u, sub_00106650); /* call 0x00106650 */

loc_00106777: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106784: ;
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(edx, MEM8(eax + 4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(eax + 7));
    SET_LO8(ebx, MEM8(eax + 6));
    eax = ZX8(LO8(ecx));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(LO8(edx));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001067B1; /* jle: less or equal (signed <=) */

loc_001067AA: ;
    PUSH32(esp, 0x2A9204);
    goto loc_0010676A;

loc_001067B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, LO8(ecx));
    SET_LO16(ecx, ZX8(LO8(edx)));
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(ecx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM16(ebp + 0xC) = LO16(eax);
    eax = ZX16(LO16(eax));
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001067E0; /* jne: not equal / not zero */

loc_001067CE: ;
    edx = eax * 4 + 0x120;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 4) = edx;
    goto loc_001067F0;

loc_001067E0: ;
    eax = eax + eax + 0x11C;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 4) = eax;

loc_001067F0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    eax = MEM32(0x970258);
    if (CMP_NE(_fa, _fb)) goto loc_0010682D; /* jne: not equal / not zero */

loc_001067FA: ;
    edx = ZX8(MEM8(eax + 9));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 0xB));
    esi = 3;
    SET_LO8(ecx, MEM8(eax + 0xA));
    eax = ZX8(MEM8(eax + 8));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx) = eax;
    goto loc_00106866;

loc_0010682D: ;
    ecx = ZX8(MEM8(eax + 9));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 0xB));
    esi = 3;
    SET_LO8(edx, MEM8(eax + 0xA));
    eax = ZX8(MEM8(eax + 8));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x14);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ecx) = LO16(eax);
    goto loc_00106866;

loc_00106861: ;
    esi = 1;

loc_00106866: ;
    eax = MEM32(0x97025C);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106917; /* jge: greater or equal (signed >=) */

loc_00106881: ;
    edi = MEM32(0x9A3C04);

loc_00106887: ;
    SET_LO8(eax, MEM8(ebp + 0xF));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = MEM32(0x970258);
    SET_HI8(edx, MEM8(eax + esi * 4 + 3));
    ecx = ZX8(MEM8(eax + esi * 4 + 1));
    SET_LO8(edx, MEM8(eax + esi * 4 + 2));
    eax = ZX8(MEM8(eax + esi * 4));
    if (CMP_NE(_fa, _fb)) goto loc_001068C2; /* jne: not equal / not zero */

loc_001068A6: ;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001068B6u); RECOMP_ABI_CALL(0x00105A50u, sub_00105A50); /* call 0x00105A50 */

loc_001068B6: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edi * 4) = eax;
    goto loc_001068E4;

loc_001068C2: ;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001068D2u); RECOMP_ABI_CALL(0x00105A50u, sub_00105A50); /* call 0x00105A50 */

loc_001068D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF0000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001068FF; /* jne: not equal / not zero */

loc_001068DC: ;
    ecx = MEM32(esp + 0x1C);
    MEM16(ecx + edi * 2) = LO16(eax);

loc_001068E4: ;
    edi = MEM32(0x9A3C04);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9A3C04) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106909; /* jge: greater or equal (signed >=) */

loc_001068F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106887; /* jl: less (signed <) */

loc_001068FD: ;
    goto loc_00106917;

loc_001068FF: ;
    PUSH32(esp, 0x2A91C0);
    goto loc_0010676A;

loc_00106909: ;
    edi = 3;
    PUSH32(esp, 0x00106913u); RECOMP_ABI_CALL(0x00106650u, sub_00106650); /* call 0x00106650 */

loc_00106913: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106955; /* jl: less (signed <) */

loc_00106917: ;
    edx = MEM32(0x970258);
    eax = MEM32(0x97025C);
    ecx = MEM32(0x9A3C00);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106930u); RECOMP_ABI_CALL(0x00105F40u, sub_00105F40); /* call 0x00105F40 */

loc_00106930: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010694B; /* jge: greater or equal (signed >=) */

loc_00106937: ;
    edi = 4;
    PUSH32(esp, 0x00106941u); RECOMP_ABI_CALL(0x00106650u, sub_00106650); /* call 0x00106650 */

loc_00106941: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010694B: ;
    edx = MEM32(0x9A3C00);
    edi = (uint32_t)(int32_t)SMEM8(edx + 1);

loc_00106955: ;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, ebp);

loc_00106959: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106960
 * Original: 0x00106960 - 0x001069B6 (86 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00106978u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00106978: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00106980u); RECOMP_ABI_CALL(0x00105B80u, sub_00105B80); /* call 0x00105B80 */

loc_00106980: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001069A0; /* je: equal / zero */

loc_00106986: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010698Eu); RECOMP_ABI_CALL(0x00105BF0u, sub_00105BF0); /* call 0x00105BF0 */

loc_0010698E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001069A0; /* jge: greater or equal (signed >=) */

loc_00106995: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010699Bu); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_0010699B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001069A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001069ADu); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_001069AD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001069C0
 * Original: 0x001069C0 - 0x00106A16 (86 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001069C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001069C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001069D8u); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_001069D8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001069E0u); RECOMP_ABI_CALL(0x00105B80u, sub_00105B80); /* call 0x00105B80 */

loc_001069E0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106A00; /* je: equal / zero */

loc_001069E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001069EEu); RECOMP_ABI_CALL(0x001064C0u, sub_001064C0); /* call 0x001064C0 */

loc_001069EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106A00; /* jge: greater or equal (signed >=) */

loc_001069F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001069FBu); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_001069FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00106A00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00106A0Du); RECOMP_ABI_CALL(0x00105A80u, sub_00105A80); /* call 0x00105A80 */

loc_00106A0D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00106A20
 * Original: 0x00106A20 - 0x00106BC5 (421 bytes, 140 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106A20: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106A41; /* jne: not equal / not zero */

loc_00106A2B: ;
    PUSH32(esp, 0x2A9328);
    PUSH32(esp, 0x00106A35u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106A41: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00106A5F; /* jg: greater (signed >) */

loc_00106A49: ;
    PUSH32(esp, 0x2A9300);
    PUSH32(esp, 0x00106A53u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106A53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106A5F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00106A70u); RECOMP_ABI_CALL(0x00105B00u, sub_00105B00); /* call 0x00105B00 */

loc_00106A70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106BBF; /* jl: less (signed <) */

loc_00106A7B: ;
    eax = MEM32(0x9A3AA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106A9A; /* jl: less (signed <) */

loc_00106A84: ;
    PUSH32(esp, 0x2A92D0);
    PUSH32(esp, 0x00106A8Eu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106A8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106A9A: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9A3AA0) = ebp;
    MEM32(0x9A3C04) = 0;
    ecx = 0x47;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp * 4 + 0x9A3C20) = esi;
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00106B2A; /* jne: not equal / not zero */

loc_00106AC7: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00106AD6u); RECOMP_ABI_CALL(0x001069C0u, sub_001069C0); /* call 0x001069C0 */

loc_00106AD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x9A3C00) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00106AF9; /* jne: not equal / not zero */

loc_00106AE2: ;
    PUSH32(esp, 0x2A92A4);
    PUSH32(esp, 0x00106AECu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00106AEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106AF9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00106B13u); RECOMP_ABI_CALL(0x00106370u, sub_00106370); /* call 0x00106370 */

loc_00106B13: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106BBE; /* jl: less (signed <) */

loc_00106B1E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x114) = ecx;
    goto loc_00106B53;

loc_00106B2A: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00106B35u); RECOMP_ABI_CALL(0x00106960u, sub_00106960); /* call 0x00106960 */

loc_00106B35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x9A3C00) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00106AE2; /* je: equal / zero */

loc_00106B41: ;
    PUSH32(esp, 0x100);
    eax = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106B50u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_00106B50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00106B53: ;
    SET_LO8(edx, MEM8(esp + 0x38));
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x28);
    MEM8(esi + 0xF) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0x110) = ecx;
    ecx = MEM32(esp + 0x30);
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + 0xE) = 0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x97025C) = eax;
    eax = MEM32(0x9A3C00);
    PUSH32(esp, eax);
    MEM32(0x970258) = ecx;
    PUSH32(esp, 0x00106B94u); RECOMP_ABI_CALL(0x00105F40u, sub_00105F40); /* call 0x00105F40 */

loc_00106B94: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106BB5; /* jge: greater or equal (signed >=) */

loc_00106B9D: ;
    ecx = MEM32(0x9A3C00);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106BA9u); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_00106BA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00106BB5: ;
    MEM32(esi + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00106BBE: ;
    POP32(esp, edi);

loc_00106BBF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106BD0
 * Original: 0x00106BD0 - 0x00106BD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106BD0: ;
    g_seh_ebp = ebp; sub_001066C0(); return; /* tail jmp 0x001066C0 */

}

/**
 * sub_00106BE0
 * Original: 0x00106BE0 - 0x00106C0D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106BE0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106C09u); RECOMP_ABI_CALL(0x00106A20u, sub_00106A20); /* call 0x00106A20 */

loc_00106C09: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106C10
 * Original: 0x00106C10 - 0x00106C3D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106C10: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106C39u); RECOMP_ABI_CALL(0x00106A20u, sub_00106A20); /* call 0x00106A20 */

loc_00106C39: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106C40
 * Original: 0x00106C40 - 0x00106C6D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106C40: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106C69u); RECOMP_ABI_CALL(0x00106A20u, sub_00106A20); /* call 0x00106A20 */

loc_00106C69: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106C70
 * Original: 0x00106C70 - 0x00106C9D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106C70: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106C99u); RECOMP_ABI_CALL(0x00106A20u, sub_00106A20); /* call 0x00106A20 */

loc_00106C99: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106CA0
 * Original: 0x00106CA0 - 0x00106CCB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106CA0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x800);
    eax = 0x9A9980;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106CC7u); RECOMP_ABI_CALL(0x00106BE0u, sub_00106BE0); /* call 0x00106BE0 */

loc_00106CC7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106CD0
 * Original: 0x00106CD0 - 0x00106CFB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106CD0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x800);
    eax = 0x9A9980;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106CF7u); RECOMP_ABI_CALL(0x00106C10u, sub_00106C10); /* call 0x00106C10 */

loc_00106CF7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106D00
 * Original: 0x00106D00 - 0x00106D2B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106D00: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x800);
    eax = 0x9A9980;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106D27u); RECOMP_ABI_CALL(0x00106C40u, sub_00106C40); /* call 0x00106C40 */

loc_00106D27: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106D30
 * Original: 0x00106D30 - 0x00106D5B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106D30: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x800);
    eax = 0x9A9980;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00106D57u); RECOMP_ABI_CALL(0x00106C70u, sub_00106C70); /* call 0x00106C70 */

loc_00106D57: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106D60
 * Original: 0x00106D60 - 0x00106DB1 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106D60: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106D7Au); RECOMP_ABI_CALL(0x00106CA0u, sub_00106CA0); /* call 0x00106CA0 */

loc_00106D7A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106DAF; /* jl: less (signed <) */

loc_00106D81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106D87u); RECOMP_ABI_CALL(0x00106BD0u, sub_00106BD0); /* call 0x00106BD0 */

loc_00106D87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106DA8; /* je: equal / zero */

loc_00106D8F: ;
    /* nop */

loc_00106D90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106DAC; /* je: equal / zero */

loc_00106D95: ;
    PUSH32(esp, 0x00106D9Au); RECOMP_ABI_CALL(0x00109BE0u, sub_00109BE0); /* call 0x00109BE0 */

loc_00106D9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106DA0u); RECOMP_ABI_CALL(0x00106BD0u, sub_00106BD0); /* call 0x00106BD0 */

loc_00106DA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106D90; /* jne: not equal / not zero */

loc_00106DA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00106DAC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00106DAF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106DC0
 * Original: 0x00106DC0 - 0x00106DD5 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106DC0: ;
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = 0;
    g_seh_ebp = ebp; sub_00106D60(); return; /* tail jmp 0x00106D60 */

}

/**
 * sub_00106DE0
 * Original: 0x00106DE0 - 0x00106DE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106DE0: ;
    g_seh_ebp = ebp; sub_0010DDB0(); return; /* tail jmp 0x0010DDB0 */

}

/**
 * sub_00106DF0
 * Original: 0x00106DF0 - 0x00106DF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106DF0: ;
    g_seh_ebp = ebp; sub_0010EA80(); return; /* tail jmp 0x0010EA80 */

}

/**
 * sub_00106E00
 * Original: 0x00106E00 - 0x00106E05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106E00: ;
    g_seh_ebp = ebp; sub_0010ED80(); return; /* tail jmp 0x0010ED80 */

}

/**
 * sub_00106E10
 * Original: 0x00106E10 - 0x00106E25 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106E10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106E1C; /* jne: not equal / not zero */

loc_00106E18: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00106E1C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E480(); return; /* tail jmp 0x0010E480 */

}

/**
 * sub_00106E30
 * Original: 0x00106E30 - 0x00106E42 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106E30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106E39; /* jne: not equal / not zero */

loc_00106E38: ;
    esp += 4; return; /* ret */

loc_00106E39: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010EAD0(); return; /* tail jmp 0x0010EAD0 */

}

/**
 * sub_00106E50
 * Original: 0x00106E50 - 0x00106E62 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106E50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106E59; /* jne: not equal / not zero */

loc_00106E58: ;
    esp += 4; return; /* ret */

loc_00106E59: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010EDE0(); return; /* tail jmp 0x0010EDE0 */

}

/**
 * sub_00106E70
 * Original: 0x00106E70 - 0x00106E85 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106E70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106E7C; /* jne: not equal / not zero */

loc_00106E78: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00106E7C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E440(); return; /* tail jmp 0x0010E440 */

}

/**
 * sub_00106E90
 * Original: 0x00106E90 - 0x00106EA2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106EA1; /* je: equal / zero */

loc_00106E98: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010EC80(); return; /* tail jmp 0x0010EC80 */

loc_00106EA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00106EB0
 * Original: 0x00106EB0 - 0x00106EB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106EB0: ;
    g_seh_ebp = ebp; sub_0010DE40(); return; /* tail jmp 0x0010DE40 */

}

/**
 * sub_00106EC0
 * Original: 0x00106EC0 - 0x00106ED5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106EC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106ECC; /* jne: not equal / not zero */

loc_00106EC8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00106ECC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E080(); return; /* tail jmp 0x0010E080 */

}

/**
 * sub_00106EE0
 * Original: 0x00106EE0 - 0x00106EF5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106EE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106EEC; /* jne: not equal / not zero */

loc_00106EE8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00106EEC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E090(); return; /* tail jmp 0x0010E090 */

}

/**
 * sub_00106F00
 * Original: 0x00106F00 - 0x00106F12 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106F00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106F09; /* jne: not equal / not zero */

loc_00106F08: ;
    esp += 4; return; /* ret */

loc_00106F09: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E0A0(); return; /* tail jmp 0x0010E0A0 */

}

/**
 * sub_00106F20
 * Original: 0x00106F20 - 0x00106F32 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106F20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106F29; /* jne: not equal / not zero */

loc_00106F28: ;
    esp += 4; return; /* ret */

loc_00106F29: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010ECC0(); return; /* tail jmp 0x0010ECC0 */

}

/**
 * sub_00106F40
 * Original: 0x00106F40 - 0x00106F52 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106F40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106F49; /* jne: not equal / not zero */

loc_00106F48: ;
    esp += 4; return; /* ret */

loc_00106F49: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010ED50(); return; /* tail jmp 0x0010ED50 */

}

/**
 * sub_00106F60
 * Original: 0x00106F60 - 0x00106F7E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106F60: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106F7D; /* je: equal / zero */

loc_00106F68: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106F7D; /* je: equal / zero */

loc_00106F70: ;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0010E940(); return; /* tail jmp 0x0010E940 */

loc_00106F7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00106F80
 * Original: 0x00106F80 - 0x00106F9E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106F80: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106F9D; /* je: equal / zero */

loc_00106F88: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106F9D; /* je: equal / zero */

loc_00106F90: ;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0010E9B0(); return; /* tail jmp 0x0010E9B0 */

loc_00106F9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00106FA0
 * Original: 0x00106FA0 - 0x00106FB2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106FA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106FB1; /* je: equal / zero */

loc_00106FA8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E2F0(); return; /* tail jmp 0x0010E2F0 */

loc_00106FB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00106FC0
 * Original: 0x00106FC0 - 0x00106FC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106FC0: ;
    g_seh_ebp = ebp; sub_0010E390(); return; /* tail jmp 0x0010E390 */

}

/**
 * sub_00106FD0
 * Original: 0x00106FD0 - 0x00106FD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106FD0(void)
{

loc_00106FD0: ;
    eax = MEM32(0x2F93A0);
    esp += 4; return; /* ret */

}

/**
 * sub_00106FE0
 * Original: 0x00106FE0 - 0x00106FEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106FE0(void)
{

loc_00106FE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x2F93A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00106FF0
 * Original: 0x00106FF0 - 0x00106FFC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106FF0: ;
    eax = MEM32(0x9702D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106FFB; /* je: equal / zero */

loc_00106FF9: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00106FFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107000
 * Original: 0x00107000 - 0x0010700C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107000: ;
    eax = MEM32(0x9702D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010700B; /* je: equal / zero */

loc_00107009: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_0010700B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107010
 * Original: 0x00107010 - 0x001070A6 (150 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010703F; /* jle: less or equal (signed <=) */

loc_00107022: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x18;

loc_00107026: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x0010702Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010702Cu); } /* indirect call */
    }

loc_0010702F: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107026; /* jl: less (signed <) */

loc_0010703E: ;
    POP32(esp, ebp);

loc_0010703F: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010704Du); RECOMP_ABI_CALL(0x0010F430u, sub_0010F430); /* call 0x0010F430 */

loc_0010704D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x00107059u); RECOMP_ABI_CALL(0x0010F4D0u, sub_0010F4D0); /* call 0x0010F4D0 */

loc_00107059: ;
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x4C) = ebx;
    MEM8(esi + 0x71) = LO8(ebx);
    MEM32(esi + 0x8C) = 0x7FFFFFFF;
    MEM32(esi + 0x90) = 0xFFFFFFFFu;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA4) = ebx;
    edx = MEM32(0x97030C);
    MEM32(esi + 0xA0) = edx;
    esi = MEM32(esi + 0x74);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001070A2; /* je: equal / zero */

loc_00107099: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010709Fu); RECOMP_ABI_CALL(0x0010EFA0u, sub_0010EFA0); /* call 0x0010EFA0 */

loc_0010709F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001070A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001070B0
 * Original: 0x001070B0 - 0x0010713F (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001070B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001070B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    edx = MEM32(esi + 8);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001070CEu); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_001070CE: ;
    eax = MEM32(0x2F93A0);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001070DDu); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_001070DD: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001070EAu); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_001070EA: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001070F5u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_001070F5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001070FEu); RECOMP_ABI_CALL(0x0010BF40u, sub_0010BF40); /* call 0x0010BF40 */

loc_001070FE: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00107107u); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_00107107: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107124u); RECOMP_ABI_CALL(0x0010BDE0u, sub_0010BDE0); /* call 0x0010BDE0 */

loc_00107124: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00107130u); RECOMP_ABI_CALL(0x0010BEE0u, sub_0010BEE0); /* call 0x0010BEE0 */

loc_00107130: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010713Au); RECOMP_ABI_CALL(0x00107010u, sub_00107010); /* call 0x00107010 */

loc_0010713A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107140
 * Original: 0x00107140 - 0x001071B3 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107147u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00107147: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00107154u); RECOMP_ABI_CALL(0x00110380u, sub_00110380); /* call 0x00110380 */

loc_00107154: ;
    ecx = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107160u); RECOMP_ABI_CALL(0x00110390u, sub_00110390); /* call 0x00110390 */

loc_00107160: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010716Au); RECOMP_ABI_CALL(0x001103A0u, sub_001103A0); /* call 0x001103A0 */

loc_0010716A: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00107173u); RECOMP_ABI_CALL(0x0010F4F0u, sub_0010F4F0); /* call 0x0010F4F0 */

loc_00107173: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107190; /* jne: not equal / not zero */

loc_0010717D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107190; /* je: equal / zero */

loc_00107184: ;
    MEM32(esi + 0x14) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0010718Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010718Au); } /* indirect call */
    }

loc_0010718D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107190: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001071A0; /* je: equal / zero */

loc_00107197: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010719Du); RECOMP_ABI_CALL(0x0010F0E0u, sub_0010F0E0); /* call 0x0010F0E0 */

loc_0010719D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001071A0: ;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEM8(esi + 0xA8) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

}

/**
 * sub_001071C0
 * Original: 0x001071C0 - 0x00107233 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001071C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001071C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001071D7; /* jne: not equal / not zero */

loc_001071C9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2A9354;
    g_seh_ebp = ebp; sub_0010BA40(); return; /* tail jmp 0x0010BA40 */

loc_001071D7: ;
    eax = MEM32(0x9702D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001071F3; /* je: equal / zero */

loc_001071E0: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001071E9u); RECOMP_ABI_CALL(0x0010F4F0u, sub_0010F4F0); /* call 0x0010F4F0 */

loc_001071E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x9702D8); PUSH32(esp, 0x001071F0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001071EAu); } /* indirect call */
    }

loc_001071F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001071F3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107203; /* je: equal / zero */

loc_001071FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00107200u); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_00107200: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107203: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107228; /* jne: not equal / not zero */

loc_00107209: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107215u); RECOMP_ABI_CALL(0x001107A0u, sub_001107A0); /* call 0x001107A0 */

loc_00107215: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107228; /* je: equal / zero */

loc_0010721F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00107225u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00107222u); } /* indirect call */
    }

loc_00107225: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107228: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010722Eu); RECOMP_ABI_CALL(0x00107140u, sub_00107140); /* call 0x00107140 */

loc_0010722E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107240
 * Original: 0x00107240 - 0x0010725E (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107240: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107259; /* jne: not equal / not zero */

loc_00107248: ;
    PUSH32(esp, 0x2A937C);
    PUSH32(esp, 0x00107252u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107252: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107259: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00107260
 * Original: 0x00107260 - 0x0010728E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107260: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107279; /* jne: not equal / not zero */

loc_00107269: ;
    MEM32(0x9A9948) = 0x176A;
    MEM32(0x9702C0) = eax;
    esp += 4; return; /* ret */

loc_00107279: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107288; /* jne: not equal / not zero */

loc_0010727E: ;
    MEM32(0x9A9948) = 0x1388;

loc_00107288: ;
    MEM32(0x9702C0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00107290
 * Original: 0x00107290 - 0x00107333 (163 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010730E; /* je: equal / zero */

loc_0010729D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010730E; /* je: equal / zero */

loc_001072A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001072EB; /* jne: not equal / not zero */

loc_001072A5: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001072AEu); RECOMP_ABI_CALL(0x0010FD00u, sub_0010FD00); /* call 0x0010FD00 */

loc_001072AE: ;
    edi = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001072BDu); RECOMP_ABI_CALL(0x0010FCB0u, sub_0010FCB0); /* call 0x0010FCB0 */

loc_001072BD: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001072CCu); RECOMP_ABI_CALL(0x0010FCD0u, sub_0010FCD0); /* call 0x0010FCD0 */

loc_001072CC: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi));
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x88);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001072EB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    MEM32(ecx) = 1;
    edx = MEM32(esi + 0x88);
    ecx = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010730E: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107321u); RECOMP_ABI_CALL(0x001103B0u, sub_001103B0); /* call 0x001103B0 */

loc_00107321: ;
    eax = MEM32(edi);
    edx = MEM32(esi + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107340
 * Original: 0x00107340 - 0x00107347 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107340: ;
    MEM32(0x9702DC) = MEM32(0x9702DC) + 1;
    _fa = (uint32_t)(MEM32(0x9702DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}
