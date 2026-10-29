/**
 * DOAU1 - Recompiled code chunk 46
 * Functions: 250 (0x0016B824 - 0x00170050)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0016B824
 * Original: 0x0016B824 - 0x0016B826 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B824(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B824: ;
    eax = esi;

    g_seh_ebp = ebp; sub_0016B826(); return; /* fallthrough 0x0016B826 */

}

/**
 * sub_0016B826
 * Original: 0x0016B826 - 0x0016B848 (34 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B826: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B82Fu); RECOMP_ABI_CALL(0x001607F0u, sub_001607F0); /* call 0x001607F0 */

loc_0016B82F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B848(); return; } /* je: equal / zero */

loc_0016B833: ;
    ecx = MEM32(0x180E48);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016B844u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_0016B844: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B848
 * Original: 0x0016B848 - 0x0016B855 (13 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B848(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B848: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B854; /* je: equal / zero */

loc_0016B84C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016B854u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_0016B854: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0016B855(); return; /* fallthrough 0x0016B855 */

}

/**
 * sub_0016B855
 * Original: 0x0016B855 - 0x0016B858 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B855(void)
{

loc_0016B855: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B860
 * Original: 0x0016B860 - 0x0016B887 (39 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B860: ;
    edx = MEM32(0x180E48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B893(); return; } /* je: equal / zero */

loc_0016B86A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x780000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B887(); return; } /* je: equal / zero */

loc_0016B879: ;
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B884u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

loc_0016B884: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B887
 * Original: 0x0016B887 - 0x0016B893 (12 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B887(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016B893(); return; } /* je: equal / zero */

loc_0016B88B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B893u); RECOMP_ABI_CALL(0x0016B4B0u, sub_0016B4B0); /* call 0x0016B4B0 */

    g_seh_ebp = ebp; sub_0016B893(); return; /* fallthrough 0x0016B893 */

}

/**
 * sub_0016B893
 * Original: 0x0016B893 - 0x0016B896 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B893(void)
{

loc_0016B893: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B8A0
 * Original: 0x0016B8A0 - 0x0016B8F7 (87 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B8A0(void)
{

loc_0016B8A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    XMM_STORE_LOW(eax, xmm2); /* movlps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 2); /* shufps */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016B900
 * Original: 0x0016B900 - 0x0016B9FA (250 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B900(void)
{

loc_0016B900: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm0); /* addps */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm0); /* addps */
    xmm4 = XMM_MEM(eax + 0x20); /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MUL(xmm4, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm0); /* addps */
    xmm5 = XMM_MEM(eax + 0x30); /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm5, 0); /* shufps */
    xmm4 = XMM_ADD(xmm4, xmm1); /* addps */
    xmm5 = XMM_MUL(xmm5, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm5 = XMM_ADD(xmm5, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    ecx = MEM32(esp + 4);
    xmm5 = XMM_ADD(xmm5, xmm0); /* addps */
    xmm5 = XMM_ADD(xmm5, xmm1); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    XMM_STORE(ecx + 0x10, xmm3); /* movaps */
    XMM_STORE(ecx + 0x20, xmm4); /* movaps */
    XMM_STORE(ecx + 0x30, xmm5); /* movaps */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016BA00
 * Original: 0x0016BA00 - 0x0016BA2D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BA00(void)
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

loc_0016BA00: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_0016BA68(); return; } /* jp: parity */

loc_0016BA12: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_0016BA2D(); return; } /* jp: parity */

loc_0016BA25: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    g_seh_ebp = ebp; sub_0016BA40(); return; /* tail jmp 0x0016BA40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BA2D
 * Original: 0x0016BA2D - 0x0016BA40 (19 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016BA2D(void)
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

loc_0016BA2D: ;
    fp_push(MEMF(0x281BF0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0016BA40u); RECOMP_ABI_CALL(0x0016C170u, sub_0016C170); /* call 0x0016C170 */

    g_seh_ebp = ebp; sub_0016BA40(); return; /* fallthrough 0x0016BA40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BA40
 * Original: 0x0016BA40 - 0x0016BA68 (40 bytes, 13 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016BA40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016BA40: ;
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BA68
 * Original: 0x0016BA68 - 0x0016BACE (102 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016BA68(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016BA68: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016BA72u); RECOMP_ABI_CALL(0x0016C1D0u, sub_0016C1D0); /* call 0x0016C1D0 */

loc_0016BA72: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281BEC)); /* fmul dword ptr [0x281bec] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016BA86u); RECOMP_ABI_CALL(0x0016C150u, sub_0016C150); /* call 0x0016C150 */

loc_0016BA86: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x17EF98)); /* fmul dword ptr [eax*4 + 0x17ef98] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x17EF9C)); /* fmul dword ptr [eax*4 + 0x17ef9c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x17EF18)); /* fmul dword ptr [eax*4 + 0x17ef18] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x17EF1C)); /* fmul dword ptr [eax*4 + 0x17ef1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BAD0
 * Original: 0x0016BAD0 - 0x0016BAD7 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BAD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016BAD0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BAE0
 * Original: 0x0016BAE0 - 0x0016BAFF (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016BAE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016BAE0: ;
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
 * sub_0016BB00
 * Original: 0x0016BB00 - 0x0016BB59 (89 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BB00(void)
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

loc_0016BB00: ;
    PUSH32(esp, ecx);
    eax = 0xBE800000u;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp) = eax;
    fp_push(MEMF(0x2F4040)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x2F4044)); /* fld float */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C24C) - fp_top()); /* fsubr dword ptr [0x22c24c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BB60
 * Original: 0x0016BB60 - 0x0016BB71 (17 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BB60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016BB60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016BB6Au); RECOMP_ABI_CALL(0x0016BB00u, sub_0016BB00); /* call 0x0016BB00 */

loc_0016BB6A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BB80
 * Original: 0x0016BB80 - 0x0016BBAF (47 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BB80(void)
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

loc_0016BB80: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0016BB92u); RECOMP_ABI_CALL(0x0016BB00u, sub_0016BB00); /* call 0x0016BB00 */

loc_0016BB92: ;
    eax = MEM32(esp + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    eax = eax & 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BBB0
 * Original: 0x0016BBB0 - 0x0016BBF2 (66 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016BBB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016BBB0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0016BBDBu); RECOMP_ABI_CALL(0x0016BB00u, sub_0016BB00); /* call 0x0016BB00 */

loc_0016BBDB: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BC00
 * Original: 0x0016BC00 - 0x0016BF6D (877 bytes, 278 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BC00(void)
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

loc_0016BC00: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    edx = MEM32(eax + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(eax + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x30);
    MEM32(esp) = edx;
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x1C) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x10) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x1C);
    fp_push(MEMF(esp)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x2C);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(esp) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x30) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x30);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    eax = MEM32(eax + 0x34);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_0016BF6D(); return; } /* jp: parity */

loc_0016BF62: ;
    eax = 0xFFFFFFFFu;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016BF6D
 * Original: 0x0016BF6D - 0x0016C064 (247 bytes, 68 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016BF6D(void)
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

loc_0016BF6D: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C064(); return; } /* je: equal / zero */

loc_0016BF79: ;
    ecx = MEM32(esp + 0x5C);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0016BF92u); RECOMP_ABI_CALL(0x0016BB00u, sub_0016BB00); /* call 0x0016BB00 */

loc_0016BF92: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x30);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x5C) = edx;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016C064
 * Original: 0x0016C064 - 0x0016C144 (224 bytes, 70 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C064(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C064: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x1C);
    eax = eax & 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = edx;
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = edx;
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x38);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = edx;
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(esp + 0x14);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = edx;
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x3C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = edx;
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(esp + 8);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = edx;
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x40);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x40) = edx;
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(esp);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = edx;
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(esp + 0x44);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x44) = edx;
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x48);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = edx;
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4C) = edx;
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(esp + 0x50);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    MEM32(ecx + 0x3C) = eax;
    MEM32(esp + 0x50) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016C150
 * Original: 0x0016C150 - 0x0016C159 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C150(void)
{

loc_0016C150: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C160
 * Original: 0x0016C160 - 0x0016C169 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016C160: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016C170
 * Original: 0x0016C170 - 0x0016C1C2 (82 bytes, 37 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0016C170(void)
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

loc_0016C170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 8)); /* fld float */
    SET_HI8(ecx, 0); /* xor self */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -8) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 8] */
    /* wait - FPU sync */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -4) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = expm1(fp_top() * 0.69314718055994530942); /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(MEM16(ebp + -3)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -3), 1 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016C1A8; /* je: equal / zero */

loc_0016C1A4: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */

loc_0016C1A8: ;
    _fa = (uint32_t)(MEM16(ebp + -7)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -7), 0x40 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016C1B2; /* jne: not equal / not zero */

loc_0016C1B0: ;
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */

loc_0016C1B2: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0016C1B8; /* je: equal / zero */

loc_0016C1B6: ;
    fp_top() = -fp_top(); /* fchs */

loc_0016C1B8: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016C1D0
 * Original: 0x0016C1D0 - 0x0016C1DB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C1D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016C1D0: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016C1E0
 * Original: 0x0016C1E0 - 0x0016C1E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C1E0(void)
{

loc_0016C1E0: ;
    eax = MEM32(ecx + eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C1F0
 * Original: 0x0016C1F0 - 0x0016C1F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C1F0(void)
{

loc_0016C1F0: ;
    MEM32(edx + ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C200
 * Original: 0x0016C200 - 0x0016C204 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C200(void)
{

loc_0016C200: ;
    MEM8(edx + ecx) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C204
 * Original: 0x0016C204 - 0x0016C257 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016C204(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C204: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1D0), eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM32(ecx + 0x1B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1B8), 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C281(); return; } /* jne: not equal / not zero */

loc_0016C222: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    edx = 0xC0000000u;
    eax = 0x80000000u;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C257(); return; } /* je: equal / zero */

loc_0016C23C: ;
    ebx = MEM32(ecx + 8);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C257(); return; } /* je: equal / zero */

loc_0016C245: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C257(); return; } /* je: equal / zero */

loc_0016C24B: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0016C279(); return; /* tail jmp 0x0016C279 */

}

/**
 * sub_0016C257
 * Original: 0x0016C257 - 0x0016C276 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C257(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C257: ;
    ebx = MEM32(ecx + 8);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C276(); return; } /* jne: not equal / not zero */

loc_0016C260: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C276(); return; } /* je: equal / zero */

loc_0016C268: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016C276(); return; } /* je: equal / zero */

loc_0016C26E: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0016C279(); return; /* tail jmp 0x0016C279 */

}

/**
 * sub_0016C276
 * Original: 0x0016C276 - 0x0016C279 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C276(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C276: ;
    eax = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0016C279(); return; /* fallthrough 0x0016C279 */

}

/**
 * sub_0016C279
 * Original: 0x0016C279 - 0x0016C281 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C279(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C279: ;
    POP32(esp, esi);
    MEM32(edi + 0x600800) = eax;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0016C281(); return; /* fallthrough 0x0016C281 */

}

/**
 * sub_0016C281
 * Original: 0x0016C281 - 0x0016C286 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C281(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C281: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C286
 * Original: 0x0016C286 - 0x0016C2DF (89 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C286(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C286: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0xFFFFFF00u;
    MEM8(ecx + 0x6813C8) = 0;
    eax = edx + 0x100;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016C2A1: ;
    edx = esi + eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016C2AF; /* jne: not equal / not zero */

loc_0016C2A9: ;
    edx = MEM32(ecx + 0x3240);

loc_0016C2AF: ;
    SET_LO8(edx, MEM8(eax + -256));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x100));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x6813C9) = LO8(edx);
    edx = esi + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C2A1; /* jb: below (unsigned <) */

loc_0016C2DB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C2E0
 * Original: 0x0016C2E0 - 0x0016C2E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C2E0(void)
{

loc_0016C2E0: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C2F0
 * Original: 0x0016C2F0 - 0x0016C377 (135 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016C2F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C340; /* je: equal / zero */

loc_0016C2FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C340; /* je: equal / zero */

loc_0016C300: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0016C318; /* jbe: below or equal (unsigned <=) */

loc_0016C310: ;
    eax = 0x8876086Cu;
    esp += 8; return; /* ret 4 */

loc_0016C318: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x30 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0016C321; /* jne: not equal / not zero */

loc_0016C31D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0016C310; /* jne: not equal / not zero */

loc_0016C321: ;
    ecx = eax;
    if (4) _cf = (int)(((ecx) >> ((4) - 1)) & 1);
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0016C310; /* jb: below (unsigned <) */

loc_0016C32E: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0016C310; /* jb: below (unsigned <) */

loc_0016C336: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0016C310; /* ja: above (unsigned >) */

loc_0016C33B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0016C310; /* ja: above (unsigned >) */

loc_0016C340: ;
    eax = MEM32(edx + 0x30);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0016C310; /* ja: above (unsigned >) */

loc_0016C34D: ;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C363; /* je: equal / zero */

loc_0016C355: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C363; /* je: equal / zero */

loc_0016C35A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C363; /* je: equal / zero */

loc_0016C35F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0016C310; /* jne: not equal / not zero */

loc_0016C363: ;
    eax = MEM32(edx + 0xC);
    ecx = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8876086Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C380
 * Original: 0x0016C380 - 0x0016C38F (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016C380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C38Au); RECOMP_ABI_CALL(0x00167960u, sub_00167960); /* call 0x00167960 */

loc_0016C38A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C390
 * Original: 0x0016C390 - 0x0016C394 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C390(void)
{

loc_0016C390: ;
    MEM32(edx + ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C3A0
 * Original: 0x0016C3A0 - 0x0016C3A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C3A0(void)
{

loc_0016C3A0: ;
    eax = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C3B0
 * Original: 0x0016C3B0 - 0x0016C3C1 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C3B0(void)
{

loc_0016C3B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x140) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C3D0
 * Original: 0x0016C3D0 - 0x0016C403 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016C3D0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0016C3DC; /* je: equal / zero */

loc_0016C3D5: ;
    eax = 3;
    goto loc_0016C3E8;

loc_0016C3DC: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016C3E8: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C400u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016C400: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C410
 * Original: 0x0016C410 - 0x0016C41C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C410(void)
{

loc_0016C410: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C41Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016C41B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C420
 * Original: 0x0016C420 - 0x0016C42C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C420: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C430
 * Original: 0x0016C430 - 0x0016C44C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C430: ;
    _fb = (uint32_t)(0xC0000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016C450
 * Original: 0x0016C450 - 0x0016C477 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C450: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016C480
 * Original: 0x0016C480 - 0x0016C48E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C480: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C490
 * Original: 0x0016C490 - 0x0016C491 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C490(void)
{

loc_0016C490: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C4A0
 * Original: 0x0016C4A0 - 0x0016C4B4 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C4A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C4C0
 * Original: 0x0016C4C0 - 0x0016C4DB (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C4C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016C4E0
 * Original: 0x0016C4E0 - 0x0016C4F7 (23 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C4E0: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016C500
 * Original: 0x0016C500 - 0x0016C50C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C500: ;
    _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C510
 * Original: 0x0016C510 - 0x0016C52C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C510: ;
    _fb = (uint32_t)(0xC0000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016C530
 * Original: 0x0016C530 - 0x0016C557 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C530: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016C560
 * Original: 0x0016C560 - 0x0016C56E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C560: ;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C570
 * Original: 0x0016C570 - 0x0016C587 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016C570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C570: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C584; /* je: equal / zero */

loc_0016C580: ;
    eax = MEM32(eax + ecx);
    esp += 4; return; /* ret */

loc_0016C584: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016C590
 * Original: 0x0016C590 - 0x0016C673 (227 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C590: ;
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0016C5A4; /* jb: below (unsigned <) */

loc_0016C59F: ;
    PUSH32(esp, 0x0016C5A4u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016C5A4: ;
    MEM32(eax) = 0xC0180;
    MEM32(eax + 4) = 2;
    ecx = 3;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x180190;
    MEM32(eax + 0x14) = 4;
    MEM32(eax + 0x18) = 9;
    MEM32(eax + 0x1C) = 0xA;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 8;
    MEM32(eax + 0x2C) = 0x401A8;
    MEM32(eax + 0x30) = 0xC;
    MEM32(eax + 0x34) = 0x41D6C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x38) = edi;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0016C610; /* jb: below (unsigned <) */

loc_0016C60B: ;
    PUSH32(esp, 0x0016C610u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016C610: ;
    MEM32(eax) = 0x409FC;
    ecx = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x100A50;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = 0x3F800000;
    MEM32(eax + 0x1C) = 0x416BC;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0x41E78;
    MEM32(eax + 0x28) = 0x210000;
    MEM32(eax + 0x2C) = 0x41D80;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = 0x41E68;
    MEM32(eax + 0x38) = 0x7F800000;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0016C670u); RECOMP_ABI_CALL(0x00167960u, sub_00167960); /* call 0x00167960 */

loc_0016C670: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C680
 * Original: 0x0016C680 - 0x0016C788 (264 bytes, 66 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x180E48);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C695; /* jb: below (unsigned <) */

loc_0016C690: ;
    PUSH32(esp, 0x0016C695u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016C695: ;
    MEM32(eax) = 0x40000;
    MEM32(eax + 4) = 0xD;
    MEM32(eax + 8) = 0x42000;
    MEM32(eax + 0xC) = 0xE;
    MEM32(eax + 0x10) = 0x44000;
    MEM32(eax + 0x14) = 0x10;
    MEM32(eax + 0x18) = 0x46000;
    MEM32(eax + 0x1C) = 0x11;
    MEM32(eax + 0x20) = 0x4A000;
    MEM32(eax + 0x24) = 0x12;
    MEM32(eax + 0x28) = 0x42180;
    MEM32(eax + 0x2C) = 7;
    MEM32(eax + 0x30) = 0x442FC;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 3;
    MEM32(eax + 0xC) = edx;
    ebx = esi + 0x194C;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x14) = ecx;
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x192C;
    ebp = ecx;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x1930) = edx;
    MEM32(eax + 0x10) = 0x86184;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = 0xB;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x19;
    MEM32(eax) = 0x1C4184;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x11;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0016C590(); return; /* tail jmp 0x0016C590 */

}

/**
 * sub_0016C790
 * Original: 0x0016C790 - 0x0016C79D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x180E48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0016C7A0(); return; /* tail jmp 0x0016C7A0 */

}

/**
 * sub_0016C7A0
 * Original: 0x0016C7A0 - 0x0016C7BD (29 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C7A0: ;
    PUSH32(esp, 0x175E80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C7ABu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_0016C7AB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C7A0; /* jb: below (unsigned <) */

loc_0016C7B1: ;
    esi = 0x39;
    edi = 0x17F038;
    g_seh_ebp = ebp; sub_0016C7C0(); return; /* tail jmp 0x0016C7C0 */

}

/**
 * sub_0016C7C0
 * Original: 0x0016C7C0 - 0x0016C852 (146 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C7C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C7DB; /* je: equal / zero */

loc_0016C7C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C7DB; /* je: equal / zero */

loc_0016C7CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C7DB; /* je: equal / zero */

loc_0016C7D2: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C7DBu); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_0016C7DB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C7C0; /* jb: below (unsigned <) */

loc_0016C7E7: ;
    esi = MEM32(ebx + 0x1A20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x0016C7FFu); RECOMP_ABI_CALL(0x00160D30u, sub_00160D30); /* call 0x00160D30 */

loc_0016C7FF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C801: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C803: ;
    edx = ZX8(MEM8(edi + 0x17F018));
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C812u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016C812: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C803; /* jb: below (unsigned <) */

loc_0016C818: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C821u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016C821: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C829u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0016C829: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C801; /* jb: below (unsigned <) */

loc_0016C82F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C83Au); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016C83A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C845u); RECOMP_ABI_CALL(0x00161CE0u, sub_00161CE0); /* call 0x00161CE0 */

loc_0016C845: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C84Eu); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_0016C84E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C860
 * Original: 0x0016C860 - 0x0016C98F (303 bytes, 96 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016C860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C860: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD2C); PUSH32(esp, 0x0016C86Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C864u); } /* indirect call */
    }

loc_0016C86A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C882; /* jne: not equal / not zero */

loc_0016C870: ;
    eax = MEM32(esi + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD30); PUSH32(esp, 0x0016C882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C87Cu); } /* indirect call */
    }

loc_0016C882: ;
    eax = MEM32(esi + 0x1A04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C8AD; /* je: equal / zero */

loc_0016C88C: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C895; /* je: equal / zero */

loc_0016C893: ;
    eax = ecx;

loc_0016C895: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x1A04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016C8A7u); RECOMP_ABI_CALL(0x00160C60u, sub_00160C60); /* call 0x00160C60 */

loc_0016C8A7: ;
    MEM32(esi + 0x1A04) = ebp;

loc_0016C8AD: ;
    eax = MEM32(esi + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C8D8; /* je: equal / zero */

loc_0016C8B7: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C8C0; /* je: equal / zero */

loc_0016C8BE: ;
    eax = ecx;

loc_0016C8C0: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x1A08);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016C8D2u); RECOMP_ABI_CALL(0x00160C60u, sub_00160C60); /* call 0x00160C60 */

loc_0016C8D2: ;
    MEM32(esi + 0x1A08) = ebp;

loc_0016C8D8: ;
    eax = MEM32(esi + 0x1A10);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016C90D; /* jbe: below or equal (unsigned <=) */

loc_0016C8E5: ;
    PUSH32(esp, edi);
    edi = esi + 0x1A14;
    /* nop */

loc_0016C8F0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C8FE; /* je: equal / zero */

loc_0016C8F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C8FCu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0016C8FC: ;
    MEM32(edi) = ebp;

loc_0016C8FE: ;
    eax = MEM32(esi + 0x1A10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016C8F0; /* jb: below (unsigned <) */

loc_0016C90C: ;
    POP32(esp, edi);

loc_0016C90D: ;
    eax = MEM32(esi + 0x1A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C924; /* je: equal / zero */

loc_0016C918: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C91Eu); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_0016C91E: ;
    MEM32(esi + 0x1A20) = ebp;

loc_0016C924: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A8C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C94B; /* je: equal / zero */

loc_0016C92C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016C934u); RECOMP_ABI_CALL(0x001653C0u, sub_001653C0); /* call 0x001653C0 */

loc_0016C934: ;
    eax = MEM32(esi + 0x1A8C);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C945u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016C945: ;
    MEM32(esi + 0x1A8C) = ebp;

loc_0016C94B: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A84)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A84), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C971; /* je: equal / zero */

loc_0016C953: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016C95Au); RECOMP_ABI_CALL(0x001653C0u, sub_001653C0); /* call 0x001653C0 */

loc_0016C95A: ;
    ecx = MEM32(esi + 0x1A84);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016C96Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016C96B: ;
    MEM32(esi + 0x1A84) = ebp;

loc_0016C971: ;
    eax = MEM32(esi + 0x1A88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C98C; /* je: equal / zero */

loc_0016C97B: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C986u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016C986: ;
    MEM32(esi + 0x1A88) = ebp;

loc_0016C98C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C990
 * Original: 0x0016C990 - 0x0016CA99 (265 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C990(void)
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

loc_0016C990: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0016C9B1; /* jb: below (unsigned <) */

loc_0016C9AD: ;
    MEM32(esp + 0x1C) = eax;

loc_0016C9B1: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C9BAu); RECOMP_ABI_CALL(0x0016D5C0u, sub_0016D5C0); /* call 0x0016D5C0 */

loc_0016C9BA: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x0016C9C7u); RECOMP_ABI_CALL(0x0016D5C0u, sub_0016D5C0); /* call 0x0016D5C0 */

loc_0016C9C7: ;
    edx = MEM32(ebp);
    ecx = MEM32(ebp + 0x30);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp + 4);
    MEM32(0x180DAC) = ecx;
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x1970) = edx;
    edx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFFFBFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1A10) = eax;
    MEM32(esi + 8) = edx;
    ecx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x30 (8-bit) */
    MEM32(esp + 0x2C) = eax;
    eax = edx;
    MEM32(esp + 0x24) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016CA1C; /* jne: not equal / not zero */

loc_0016CA16: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016CA28; /* jne: not equal / not zero */

loc_0016CA1C: ;
    eax = eax | 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x24) = edi;
    MEM32(esi + 8) = eax;

loc_0016CA28: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016CA34; /* jne: not equal / not zero */

loc_0016CA2F: ;
    edx = 0x11;

loc_0016CA34: ;
    eax = edx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEM32(esi + 0x196C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0016CA59; /* jge: greater or equal (signed >=) */

loc_0016CA53: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016CA59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esi + 0x96C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = ecx;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016CA71; /* jge: greater or equal (signed >=) */

loc_0016CA6B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0016CA71: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    MEMF(esi + 0x970) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_0016CA88; /* je: equal / zero */

loc_0016CA7C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x21 (8-bit) */
    ebx = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0016CA88; /* jne: not equal / not zero */

loc_0016CA86: ;
    ebx = edi;

loc_0016CA88: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    edi = 2;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CA99(); return; } /* je: equal / zero */

loc_0016CA92: ;
    edi = 4;
    g_seh_ebp = ebp; sub_0016CAA3(); return; /* tail jmp 0x0016CAA3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016CA99
 * Original: 0x0016CA99 - 0x0016CAA3 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CA99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CA99: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CAA3(); return; } /* je: equal / zero */

loc_0016CA9E: ;
    edi = 5;

    g_seh_ebp = ebp; sub_0016CAA3(); return; /* fallthrough 0x0016CAA3 */

}

/**
 * sub_0016CAA3
 * Original: 0x0016CAA3 - 0x0016CB65 (194 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CAA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CAA3: ;
    edx = ebp + 0x34;
    MEM32(0x180E18) = ebx;
    MEM32(0x180DA8) = edi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CB65(); return; } /* je: equal / zero */

loc_0016CABB: ;
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016CB24; /* jbe: below or equal (unsigned <=) */

loc_0016CAC3: ;
    eax = esi + 0x1A14;
    MEM32(esp + 0x64) = eax;
    eax = esi + 0x1A24;
    ecx = edx;
    MEM32(esp + 0x28) = edi;
    /* nop */

loc_0016CAE0: ;
    edx = MEM32(ecx);
    ebx = MEM32(edx);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(edi + 0xC) = ebx;
    ebx = MEM32(edx + 0x10);
    MEM32(edi + 0x10) = ebx;
    edx = MEM32(edx + 0x14);
    MEM32(edi + 0x14) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edx;
    if ((_fa != 0)) goto loc_0016CAE0; /* jne: not equal / not zero */

loc_0016CB24: ;
    ebp = MEM32(ebp + 0x40);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CEB4(); return; } /* je: equal / zero */

loc_0016CB2F: ;
    edx = MEM32(ebp);
    eax = esi + 0x1A6C;
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x14) = edx;
    MEM32(esi + 0x1A20) = eax;
    g_seh_ebp = ebp; sub_0016CEB4(); return; /* tail jmp 0x0016CEB4 */

}

/**
 * sub_0016CB65
 * Original: 0x0016CB65 - 0x0016CB9A (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CB65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CB65: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebp + 0x10);
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30000 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CBAE(); return; } /* ja: above (unsigned >) */

loc_0016CB7E: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CBA4(); return; } /* je: equal / zero */

loc_0016CB80: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CB9A(); return; } /* je: equal / zero */

loc_0016CB88: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CBBE(); return; } /* jne: not equal / not zero */

loc_0016CB90: ;
    MEM32(esp + 0x10) = 0x11;
    g_seh_ebp = ebp; sub_0016CBBE(); return; /* tail jmp 0x0016CBBE */

}

/**
 * sub_0016CB9A
 * Original: 0x0016CB9A - 0x0016CBA4 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CB9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CB9A: ;
    MEM32(esp + 0x10) = 0x1C;
    g_seh_ebp = ebp; sub_0016CBBE(); return; /* tail jmp 0x0016CBBE */

}

/**
 * sub_0016CBA4
 * Original: 0x0016CBA4 - 0x0016CBAE (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CBA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CBA4: ;
    MEM32(esp + 0x10) = 0x1E;
    g_seh_ebp = ebp; sub_0016CBBE(); return; /* tail jmp 0x0016CBBE */

}

/**
 * sub_0016CBAE
 * Original: 0x0016CBAE - 0x0016CBBE (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CBAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CBAE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CBBE(); return; } /* jne: not equal / not zero */

loc_0016CBB6: ;
    MEM32(esp + 0x10) = 0x12;

    g_seh_ebp = ebp; sub_0016CBBE(); return; /* fallthrough 0x0016CBBE */

}

/**
 * sub_0016CBBE
 * Original: 0x0016CBBE - 0x0016CC18 (90 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CBBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CBBE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x3C));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x38));
    ebx = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x0016CBDDu); RECOMP_ABI_CALL(0x0016D740u, sub_0016D740); /* call 0x0016D740 */

loc_0016CBDD: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016CC02u); RECOMP_ABI_CALL(0x0016DF50u, sub_0016DF50); /* call 0x0016DF50 */

loc_0016CC02: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CC18(); return; } /* je: equal / zero */

loc_0016CC0E: ;
    MEM32(esp + 0x10) = 1;
    g_seh_ebp = ebp; sub_0016CC20(); return; /* tail jmp 0x0016CC20 */

}

/**
 * sub_0016CC18
 * Original: 0x0016CC18 - 0x0016CC20 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CC18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CC18: ;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = edx;

    g_seh_ebp = ebp; sub_0016CC20(); return; /* fallthrough 0x0016CC20 */

}

/**
 * sub_0016CC20
 * Original: 0x0016CC20 - 0x0016CE2B (523 bytes, 167 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CC20: ;
    ecx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + edi + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3FFF (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0016CC4D; /* je: equal / zero */

loc_0016CC3D: ;
    /* nop */

loc_0016CC40: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3FFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016CC40; /* jne: not equal / not zero */

loc_0016CC49: ;
    MEM32(esp + 0x30) = eax;

loc_0016CC4D: ;
    PUSH32(esp, 0xBE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CC58u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016CC58: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CE1C; /* je: equal / zero */

loc_0016CC62: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1A84) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0016CCBA; /* jbe: below or equal (unsigned <=) */

loc_0016CC70: ;
    edx = esi + 0x1A14;
    MEM32(esp + 0x10) = edx;
    edi = esi + 0x1A24;
    MEM32(esp + 0x2C) = eax;

loc_0016CC84: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x0016CC9Bu); RECOMP_ABI_CALL(0x001685E0u, sub_001685E0); /* call 0x001685E0 */

loc_0016CC9B: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_0016CC84; /* jne: not equal / not zero */

loc_0016CCBA: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0x780 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CD0C; /* je: equal / zero */

loc_0016CCC4: ;
    ecx = MEM32(esi + 0x1A84);
    edx = MEM32(esp + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esi + 0x1A14);
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0x0016CCFCu); RECOMP_ABI_CALL(0x001636A0u, sub_001636A0); /* call 0x001636A0 */

loc_0016CCFC: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x0016CD0Cu); RECOMP_ABI_CALL(0x001653C0u, sub_001653C0); /* call 0x001653C0 */

loc_0016CD0C: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CDAD; /* je: equal / zero */

loc_0016CD18: ;
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CD40u); RECOMP_ABI_CALL(0x0016DF50u, sub_0016DF50); /* call 0x0016DF50 */

loc_0016CD40: ;
    ebx = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, 0xBE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CD56u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016CD56: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CE1C; /* je: equal / zero */

loc_0016CD60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esi + 0x1A88) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0016CDAD; /* jb: below (unsigned <) */

loc_0016CD6B: ;
    ecx = MEM32(esp + 0x1C);
    ebp = esi + 0x1A18;
    ebx = esi + 0x1A3C;
    MEM32(esp + 0x3C) = ecx;
    /* nop */

loc_0016CD80: ;
    MEM32(ebp) = ebx;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016CD94u); RECOMP_ABI_CALL(0x001685E0u, sub_001685E0); /* call 0x001685E0 */

loc_0016CD94: ;
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = eax;
    if ((_fa != 0)) goto loc_0016CD80; /* jne: not equal / not zero */

loc_0016CDA9: ;
    ebp = MEM32(esp + 0x64);

loc_0016CDAD: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CEB4(); return; } /* je: equal / zero */

loc_0016CDB8: ;
    ebp = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016CDC7u); RECOMP_ABI_CALL(0x0016D740u, sub_0016D740); /* call 0x0016D740 */

loc_0016CDC7: ;
    ecx = MEM32(esp + 0x40);
    ebx = eax;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016CDECu); RECOMP_ABI_CALL(0x0016DF50u, sub_0016DF50); /* call 0x0016DF50 */

loc_0016CDEC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + ebx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x3FFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016CE0B; /* je: equal / zero */

loc_0016CE01: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x3FFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016CE01; /* jne: not equal / not zero */

loc_0016CE0B: ;
    PUSH32(esp, 0xBE800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016CE16u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016CE16: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CE2B(); return; } /* jne: not equal / not zero */

loc_0016CE1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CE2B
 * Original: 0x0016CE2B - 0x0016CEB4 (137 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CE2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CE2B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esi + 0x1A6C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x1A8C) = ebx;
    MEM32(esi + 0x1A20) = eax;
    PUSH32(esp, 0x0016CE4Eu); RECOMP_ABI_CALL(0x001685E0u, sub_001685E0); /* call 0x001685E0 */

loc_0016CE4E: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0x780 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CEB4(); return; } /* je: equal / zero */

loc_0016CE58: ;
    ecx = MEM32(esi + 0x1A20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x4C) = 0x80000001u;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0x0016CE8Eu); RECOMP_ABI_CALL(0x001636A0u, sub_001636A0); /* call 0x001636A0 */

loc_0016CE8E: ;
    SET_LO8(edx, MEM8(ebp + 0x175CB0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    MEM32(esp + 0x54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016CEA8; /* jne: not equal / not zero */

loc_0016CEA0: ;
    MEM32(esp + 0x48) = 0x84000001u;

loc_0016CEA8: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016CEB4u); RECOMP_ABI_CALL(0x001653C0u, sub_001653C0); /* call 0x001653C0 */

    g_seh_ebp = ebp; sub_0016CEB4(); return; /* fallthrough 0x0016CEB4 */

}

/**
 * sub_0016CEB4
 * Original: 0x0016CEB4 - 0x0016CF26 (114 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CEB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CEB4: ;
    eax = MEM32(esi + 0x1A10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016CEDC; /* jbe: below or equal (unsigned <=) */

loc_0016CEC0: ;
    ebx = esi + 0x1A14;

loc_0016CEC6: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016CECEu); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_0016CECE: ;
    eax = MEM32(esi + 0x1A10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016CEC6; /* jb: below (unsigned <) */

loc_0016CEDC: ;
    eax = MEM32(esi + 0x1A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CEEC; /* je: equal / zero */

loc_0016CEE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CEECu); RECOMP_ABI_CALL(0x00160870u, sub_00160870); /* call 0x00160870 */

loc_0016CEEC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016CEF8; /* jb: below (unsigned <) */

loc_0016CEF3: ;
    PUSH32(esp, 0x0016CEF8u); RECOMP_ABI_CALL(0x0016B760u, sub_0016B760); /* call 0x0016B760 */

loc_0016CEF8: ;
    ecx = MEM32(esi + 0x1A10);
    MEM32(eax) = 0xC0120;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 1;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CF30
 * Original: 0x0016CF30 - 0x0016CF5E (46 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CF30: ;
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAC800000u);
    PUSH32(esp, 0x60);
    ebx = ecx;
    PUSH32(esp, 0x0016CF45u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_0016CF45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x2488) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016CF5E(); return; } /* jne: not equal / not zero */

loc_0016CF4F: ;
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CF5E
 * Original: 0x0016CF5E - 0x0016D3F5 (1175 bytes, 348 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CF5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CF5E: ;
    PUSH32(esp, edi);
    edi = eax + 0x20;
    MEM32(ebx + 0x30) = eax;
    eax = edi + 0x20;
    MEM32(ebx + 0x248C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x2490) = edi;
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    PUSH32(esp, 0x0016CF84u); RECOMP_ABI_CALL(0x0016AEC0u, sub_0016AEC0); /* call 0x0016AEC0 */

loc_0016CF84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016D3EA; /* jl: less (signed <) */

loc_0016CF8C: ;
    PUSH32(esp, esi);
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0xFF7F7F;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx + 0x1C28;
    ecx = esi;
    MEM32(ebx + 0x94C) = 0x40;
    PUSH32(esp, 0x0016CFAEu); RECOMP_ABI_CALL(0x0016F6C8u, sub_0016F6C8); /* call 0x0016F6C8 */

loc_0016CFAE: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0016CFC5u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016CFC5: ;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0016CFDFu); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016CFDF: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0016CFF9u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016CFF9: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x0016D010u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D010: ;
    edx = MEM32(esp + 0x4C);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xA);
    ecx = esi;
    MEM32(ebx + 0x247C) = edx;
    PUSH32(esp, 0x0016D031u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D031: ;
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    MEM32(ebx + 0x2480) = ecx;
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x0016D052u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D052: ;
    edx = MEM32(ebx + 0x2490);
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1F);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    ecx = esi;
    MEM32(ebx + 0x2484) = eax;
    PUSH32(esp, 0x0016D078u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D078: ;
    ecx = MEM32(ebx + 0x248C);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0016D091u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D091: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10000000);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0016D0AEu); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D0AE: ;
    ecx = MEM32(ebx + 0x30);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x0016D0C4u); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D0C4: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0016D0DBu); RECOMP_ABI_CALL(0x0016F327u, sub_0016F327); /* call 0x0016F327 */

loc_0016D0DB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x206E);
    ecx = esi;
    PUSH32(esp, 0x0016D0F5u); RECOMP_ABI_CALL(0x0016F03Au, sub_0016F03A); /* call 0x0016F03A */

loc_0016D0F5: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D101u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D101: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016D110u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D110: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D11Fu); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D11F: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D12Bu); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D12B: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016D13Au); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D13A: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D149u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D149: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D155u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D155: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016D161u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D161: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D16Du); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D16D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D179u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D179: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016D185u); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016D185: ;
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x97);
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x0016D19Bu); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D19B: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x0016D1AEu); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D1AE: ;
    eax = esp + 0x160;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9F);
    PUSH32(esp, 0x10);
    ecx = esi;
    PUSH32(esp, 0x0016D1C4u); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D1C4: ;
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x11);
    ecx = esi;
    PUSH32(esp, 0x0016D1D7u); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D1D7: ;
    edx = esp + 0x130;
    PUSH32(esp, edx);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0x0016D1EAu); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D1EA: ;
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57);
    PUSH32(esp, 0x13);
    ecx = esi;
    PUSH32(esp, 0x0016D1FDu); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D1FD: ;
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x14);
    ecx = esi;
    PUSH32(esp, 0x0016D210u); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D210: ;
    edx = esp + 0x140;
    PUSH32(esp, edx);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0x0016D223u); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D223: ;
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x16);
    ecx = esi;
    PUSH32(esp, 0x0016D236u); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D236: ;
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x18);
    ecx = esi;
    PUSH32(esp, 0x0016D249u); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D249: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x19);
    ecx = esi;
    PUSH32(esp, 0x0016D25Cu); RECOMP_ABI_CALL(0x0016F3F6u, sub_0016F3F6); /* call 0x0016F3F6 */

loc_0016D25C: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0xC);
    MEM32(ebx + 0x934) = eax;
    edx = eax;
    MEM32(ebx + 0x1C20) = ecx;
    MEM32(0x18099C) = edx;
    eax = MEM32(ebx + 0x24);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x80000000u) = eax;
    RECOMP_UNIMPL("wbinvd", 0x0016D284u); /* TODO: wbinvd */
    ecx = ebx;
    PUSH32(esp, 0x0016D28Du); RECOMP_ABI_CALL(0x0016B2D0u, sub_0016B2D0); /* call 0x0016B2D0 */

loc_0016D28D: ;
    ecx = MEM32(ebx + 0x1C20);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(ebx);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016D2BC; /* je: equal / zero */

loc_0016D2A2: ;
    PUSH32(esp, 0x0016D2A7u); RECOMP_ABI_CALL(0x0016AC90u, sub_0016AC90); /* call 0x0016AC90 */

loc_0016D2A7: ;
    eax = MEM32(ebx + 0x1C20);
    eax = MEM32(eax + 0x44);
    ecx = MEM32(ebx);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016D2A2; /* jne: not equal / not zero */

loc_0016D2BC: ;
    MEM32(-2147483648) = 0xDEADBEEFu;
    PUSH32(esp, 0x0016D2CBu); RECOMP_ABI_CALL(0x0016C680u, sub_0016C680); /* call 0x0016C680 */

loc_0016D2CB: ;
    edi = MEM32(esp + 0x174);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0016D2DAu); RECOMP_ABI_CALL(0x0016C990u, sub_0016C990); /* call 0x0016C990 */

loc_0016D2DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016D3E9; /* jl: less (signed <) */

loc_0016D2E2: ;
    edx = MEM32(ebx + 0x1A18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016D2EEu); RECOMP_ABI_CALL(0x001636A0u, sub_001636A0); /* call 0x001636A0 */

loc_0016D2EE: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D30Du); RECOMP_ABI_CALL(0x0016E21Du, sub_0016E21D); /* call 0x0016E21D */

loc_0016D30D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016D3E9; /* jl: less (signed <) */

loc_0016D315: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016D31Cu); RECOMP_ABI_CALL(0x0016B3F0u, sub_0016B3F0); /* call 0x0016B3F0 */

loc_0016D31C: ;
    /* nop */

loc_0016D320: ;
    PUSH32(esp, 0x0016D325u); RECOMP_ABI_CALL(0x00164F80u, sub_00164F80); /* call 0x00164F80 */

loc_0016D325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D320; /* jne: not equal / not zero */

loc_0016D329: ;
    PUSH32(esp, 4);
    MEM32(ebx + 0x794) = 0x1834F0;
    PUSH32(esp, 0x0016D33Au); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0016D33A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0016D341u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0016D341: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x46;
    edi = 0x1833D8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x1833DC) = 0x10;
    eax = MEM32(ebx + 0x1A20);
    ecx = MEM32(ebx + 0x1A14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016D36Cu); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_0016D36C: ;
    PUSH32(esp, 0x0016D371u); RECOMP_ABI_CALL(0x0016C790u, sub_0016C790); /* call 0x0016C790 */

loc_0016D371: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016D385u); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_0016D385: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D3D9; /* je: equal / zero */

loc_0016D395: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D3D9; /* je: equal / zero */

loc_0016D39C: ;
    edx = ebx + 0x1DE4;
    ecx = ebx + 0x2478;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    edx = MEM32(ebx + 0x1A18);
    ecx = ebx + 0x8D4;
    _fb = (uint32_t)(0x8DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x8DC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = 0x165D30;
    MEM32(eax + 0x20) = 0xABCDEF00u;

loc_0016D3D9: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0016D3E0u); RECOMP_ABI_CALL(0x00163260u, sub_00163260); /* call 0x00163260 */

loc_0016D3E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016D3E7u); RECOMP_ABI_CALL(0x001632B0u, sub_001632B0); /* call 0x001632B0 */

loc_0016D3E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016D3E9: ;
    POP32(esp, esi);

loc_0016D3EA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D400
 * Original: 0x0016D400 - 0x0016D5AC (428 bytes, 134 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016D400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D400: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0016D45B; /* je: equal / zero */

loc_0016D40A: ;
    PUSH32(esp, 0x0016D40Fu); RECOMP_ABI_CALL(0x0016B7C0u, sub_0016B7C0); /* call 0x0016B7C0 */

loc_0016D40F: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x24);
    ecx = esi;
    MEM32(esi) = edx;
    PUSH32(esp, 0x0016D428u); RECOMP_ABI_CALL(0x0016B2D0u, sub_0016B2D0); /* call 0x0016B2D0 */

loc_0016D428: ;
    eax = MEM32(esi + 0x1C20);
    eax = MEM32(eax + 0x44);
    ecx = MEM32(esi + 0x24);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016D45B; /* je: equal / zero */

loc_0016D43E: ;
    edi = edi;

loc_0016D440: ;
    PUSH32(esp, 0x0016D445u); RECOMP_ABI_CALL(0x0016AC90u, sub_0016AC90); /* call 0x0016AC90 */

loc_0016D445: ;
    edx = MEM32(esi + 0x1C20);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(esi + 0x24);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016D440; /* jne: not equal / not zero */

loc_0016D45B: ;
    ebp = esi + 0x1C28;

loc_0016D461: ;
    ecx = ebp;
    PUSH32(esp, 0x0016D468u); RECOMP_ABI_CALL(0x0016E490u, sub_0016E490); /* call 0x0016E490 */

loc_0016D468: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D461; /* jne: not equal / not zero */

loc_0016D46C: ;
    ecx = esi;
    PUSH32(esp, 0x0016D473u); RECOMP_ABI_CALL(0x0016C860u, sub_0016C860); /* call 0x0016C860 */

loc_0016D473: ;
    ecx = esi;
    PUSH32(esp, 0x0016D47Au); RECOMP_ABI_CALL(0x0016AF60u, sub_0016AF60); /* call 0x0016AF60 */

loc_0016D47A: ;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D49E; /* je: equal / zero */

loc_0016D484: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016D49E; /* jne: not equal / not zero */

loc_0016D498: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D49Eu); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_0016D49E: ;
    PUSH32(esp, ebx);
    edi = esi + 0xF98;
    ebx = 4;
    /* nop */

loc_0016D4B0: ;
    eax = MEM32(edi + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D4D1; /* je: equal / zero */

loc_0016D4B7: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016D4D1; /* jne: not equal / not zero */

loc_0016D4CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D4D1u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_0016D4D1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D4F1; /* je: equal / zero */

loc_0016D4D7: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016D4F1; /* jne: not equal / not zero */

loc_0016D4EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D4F1u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_0016D4F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016D4B0; /* jne: not equal / not zero */

loc_0016D4F7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0016D500: ;
    eax = MEM32(edi + 0x183320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D524; /* je: equal / zero */

loc_0016D50A: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0016D524; /* jne: not equal / not zero */

loc_0016D51E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D524u); RECOMP_ABI_CALL(0x00160750u, sub_00160750); /* call 0x00160750 */

loc_0016D524: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016D500; /* jb: below (unsigned <) */

loc_0016D52F: ;
    edi = esi + 0x7D4;
    ebx = 0x40;
    /* nop */

loc_0016D540: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D551; /* je: equal / zero */

loc_0016D546: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D551u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016D551: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016D540; /* jne: not equal / not zero */

loc_0016D557: ;
    eax = MEM32(esi + 0x2488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0016D56D; /* je: equal / zero */

loc_0016D562: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D56Du); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016D56D: ;
    esi = MEM32(esi + 0x7A4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D582; /* je: equal / zero */

loc_0016D577: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D582u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_0016D582: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D59A; /* je: equal / zero */

loc_0016D589: ;
    ecx = ebp;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x0016D59Au); RECOMP_ABI_CALL(0x0016FADAu, sub_0016FADA); /* call 0x0016FADA */

loc_0016D59A: ;
    ecx = 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x183318;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D5B0
 * Original: 0x0016D5B0 - 0x0016D5BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D5B0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp);
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D5C0
 * Original: 0x0016D5C0 - 0x0016D622 (98 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D5C0: ;
    eax = MEM32(esp + 4);
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016D61F; /* ja: above (unsigned >) */

loc_0016D5CC: ;
    ecx = ZX8(MEM8(ecx + 0x16D64C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x16D624); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0016D5DAu) goto loc_0016D5DA;
    if (_jt == 0x0016D5E2u) goto loc_0016D5E2;
    if (_jt == 0x0016D5EAu) goto loc_0016D5EA;
    if (_jt == 0x0016D5F2u) goto loc_0016D5F2;
    if (_jt == 0x0016D5FAu) goto loc_0016D5FA;
    if (_jt == 0x0016D602u) goto loc_0016D602;
    if (_jt == 0x0016D60Au) goto loc_0016D60A;
    if (_jt == 0x0016D612u) goto loc_0016D612;
    if (_jt == 0x0016D61Au) goto loc_0016D61A;
    if (_jt == 0x0016D61Fu) goto loc_0016D61F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016D5DA: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_0016D5E2: ;
    eax = 0x1E;
    esp += 8; return; /* ret 4 */

loc_0016D5EA: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_0016D5F2: ;
    eax = 0x1C;
    esp += 8; return; /* ret 4 */

loc_0016D5FA: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_0016D602: ;
    eax = 0x30;
    esp += 8; return; /* ret 4 */

loc_0016D60A: ;
    eax = 0x2E;
    esp += 8; return; /* ret 4 */

loc_0016D612: ;
    eax = 0x31;
    esp += 8; return; /* ret 4 */

loc_0016D61A: ;
    eax = 0x2F;

loc_0016D61F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D680
 * Original: 0x0016D680 - 0x0016D69A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D680: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D695; /* je: equal / zero */

loc_0016D68B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016D697; /* jle: less or equal (signed <=) */

loc_0016D690: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016D697; /* jg: greater (signed >) */

loc_0016D695: ;
    SET_LO8(eax, 1);

loc_0016D697: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D6A0
 * Original: 0x0016D6A0 - 0x0016D6A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6A0: ;
    eax = eax | 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D6B0
 * Original: 0x0016D6B0 - 0x0016D6BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6B0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D6C0
 * Original: 0x0016D6C0 - 0x0016D6DF (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x42 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016D6DA; /* jae: above or equal (unsigned >=) */

loc_0016D6C9: ;
    _fa = (uint32_t)(MEM8(eax + 0x175CB0)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x175CB0), 0x3C (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016D6DA; /* je: equal / zero */

loc_0016D6D2: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0016D6DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D6E0
 * Original: 0x0016D6E0 - 0x0016D6F5 (21 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6E0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D700
 * Original: 0x0016D700 - 0x0016D70D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D700: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D710
 * Original: 0x0016D710 - 0x0016D72B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D710: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016D72B(); return; } /* je: equal / zero */

loc_0016D719: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016D72B(); return; } /* je: equal / zero */

loc_0016D71E: ;
    eax = ZX8(MEM8(eax + 0x175CB0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D72B
 * Original: 0x0016D72B - 0x0016D733 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D72B(void)
{

loc_0016D72B: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D740
 * Original: 0x0016D740 - 0x0016D772 (50 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D740: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax + 0x175CB0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0016D760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x175DB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x175DB8) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016D772(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016D769: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016D760; /* jb: below (unsigned <) */

loc_0016D76F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D772
 * Original: 0x0016D772 - 0x0016D77C (10 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D772(void)
{

loc_0016D772: ;
    eax = MEM32(ecx * 4 + 0x175DB8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D780
 * Original: 0x0016D780 - 0x0016D83B (187 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D780: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx + 0xD));
    eax = ZX8(MEM8(edx + 0x16D865));
    { uint32_t _jt = MEM32(eax * 4 + 0x16D83C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0016D796u) goto loc_0016D796;
    if (_jt == 0x0016D7BDu) goto loc_0016D7BD;
    if (_jt == 0x0016D7E9u) goto loc_0016D7E9;
    if (_jt == 0x0016D7F0u) goto loc_0016D7F0;
    if (_jt == 0x0016D7F7u) goto loc_0016D7F7;
    if (_jt == 0x0016D7FEu) goto loc_0016D7FE;
    if (_jt == 0x0016D805u) goto loc_0016D805;
    if (_jt == 0x0016D80Cu) goto loc_0016D80C;
    if (_jt == 0x0016D813u) goto loc_0016D813;
    if (_jt == 0x0016D81Au) goto loc_0016D81A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016D796: ;
    eax = 8;

loc_0016D79B: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi & 0xF00000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x2000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    goto loc_0016D7C7;

loc_0016D7BD: ;
    eax = 8;

loc_0016D7C2: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016D7C7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D827; /* je: equal / zero */

loc_0016D7CF: ;
    ecx = ZX8(MEM8(ecx + 0xD));
    _fb = (uint32_t)(0xFFFFFFD6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016D824; /* ja: above (unsigned >) */

loc_0016D7DB: ;
    ecx = ZX8(MEM8(ecx + 0x16D88C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x16D884); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0016D821u) goto loc_0016D821;
    if (_jt == 0x0016D835u) goto loc_0016D835;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016D7E9: ;
    eax = 4;
    goto loc_0016D79B;

loc_0016D7F0: ;
    eax = 4;
    goto loc_0016D7C2;

loc_0016D7F7: ;
    eax = 3;
    goto loc_0016D79B;

loc_0016D7FE: ;
    eax = 3;
    goto loc_0016D7C2;

loc_0016D805: ;
    eax = 1;
    goto loc_0016D79B;

loc_0016D80C: ;
    eax = 1;
    goto loc_0016D7C2;

loc_0016D813: ;
    eax = 9;
    goto loc_0016D7C2;

loc_0016D81A: ;
    eax = 0xA;
    goto loc_0016D7C2;

loc_0016D821: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016D824: ;
    esp += 12; return; /* ret 8 */

loc_0016D827: ;
    SET_LO8(edx, MEM8(edx + 0x175CB0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D821; /* je: equal / zero */

loc_0016D835: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D8A0
 * Original: 0x0016D8A0 - 0x0016D8E6 (70 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D8A0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(ecx * 4 + 0x16D8E8); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0016D8B2u) goto loc_0016D8B2;
    if (_jt == 0x0016D8BFu) goto loc_0016D8BF;
    if (_jt == 0x0016D8CCu) goto loc_0016D8CC;
    if (_jt == 0x0016D8D9u) goto loc_0016D8D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016D8B2: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x477FFF00;
    esp += 12; return; /* ret 8 */

loc_0016D8BF: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x4B7FFFFF;
    esp += 12; return; /* ret 8 */

loc_0016D8CC: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x43FFF800;
    esp += 12; return; /* ret 8 */

loc_0016D8D9: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x7149F2CA;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D910
 * Original: 0x0016D910 - 0x0016D9F0 (224 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DA19(); return; } /* jne: not equal / not zero */

loc_0016D920: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    edx = ecx;
    if (0x1C) _cf = (int)(((ecx) >> ((0x1C) - 1)) & 1);
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x14) _cf = (int)(((eax) >> ((0x14) - 1)) & 1);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x18) _cf = (int)(((edx) >> ((0x18) - 1)) & 1);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    ecx = ZX8(MEM8(esi + 0xD));
    ecx = ZX8(MEM8(ecx + 0x175CB0));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ebx = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = ebx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edi;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edi = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    esi = ZX8(MEM8(esi + 0xD));
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016D9AF; /* je: equal / zero */

loc_0016D9A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0016D9B1; /* jle: less or equal (signed <=) */

loc_0016D9AA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0016D9B1; /* jg: greater (signed >) */

loc_0016D9AF: ;
    SET_LO8(ecx, 1);

loc_0016D9B1: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0016D9C0; /* jle: less or equal (signed <=) */

loc_0016D9BE: ;
    eax = ebx;

loc_0016D9C0: ;
    edi = 1;
    ecx = eax;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0016D9CF; /* jle: less or equal (signed <=) */

loc_0016D9CD: ;
    edx = ebx;

loc_0016D9CF: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016D9FA(); return; } /* je: equal / zero */

loc_0016D9DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0016D9F0(); return; } /* jle: less or equal (signed <=) */

loc_0016D9E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0016D9F0(); return; } /* jg: greater (signed >) */

loc_0016D9E7: ;
    edx = edi * 4;
    g_seh_ebp = ebp; sub_0016D9FD(); return; /* tail jmp 0x0016D9FD */

}

/**
 * sub_0016D9F0
 * Original: 0x0016D9F0 - 0x0016D9FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D9F0: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016D9FD(); return; /* tail jmp 0x0016D9FD */

}

/**
 * sub_0016D9FA
 * Original: 0x0016D9FA - 0x0016D9FD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D9FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D9FA: ;
    edx = edi + edi;

    g_seh_ebp = ebp; sub_0016D9FD(); return; /* fallthrough 0x0016D9FD */

}

/**
 * sub_0016D9FD
 * Original: 0x0016D9FD - 0x0016DA19 (28 bytes, 12 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D9FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D9FD: ;
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0016DA19
 * Original: 0x0016DA19 - 0x0016DA60 (71 bytes, 24 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DA19(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DA19: ;
    edx = MEM32(esp + 0x10);
    ecx = eax;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = eax;
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 1;
    edx = MEM32(esp + 0x1C);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0016DA60
 * Original: 0x0016DA60 - 0x0016DAA2 (66 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DA60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edi + 0xD));
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0016DA79u); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0016DA79: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DAAD(); return; } /* jne: not equal / not zero */

loc_0016DA8B: ;
    edx = ZX8(MEM8(edi + 0xD));
    SET_LO8(eax, MEM8(edx + 0x175CB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) { g_seh_ebp = ebp; sub_0016DAA2(); return; } /* jns: not sign (positive) */

loc_0016DA99: ;
    MEM32(esi + 8) = 1;
    g_seh_ebp = ebp; sub_0016DAAD(); return; /* tail jmp 0x0016DAAD */

}

/**
 * sub_0016DAA2
 * Original: 0x0016DAA2 - 0x0016DAAD (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DAA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DAA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DAAD(); return; } /* je: equal / zero */

loc_0016DAA6: ;
    MEM32(esi + 8) = 2;

    g_seh_ebp = ebp; sub_0016DAAD(); return; /* fallthrough 0x0016DAAD */

}

/**
 * sub_0016DAAD
 * Original: 0x0016DAAD - 0x0016DACD (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DAAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DAAD: ;
    eax = MEM32(0x180E48);
    edx = MEM32(eax + 0x1A14);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DACD(); return; } /* jne: not equal / not zero */

loc_0016DAC2: ;
    eax = MEM32(eax + 0x196C);
    MEM32(esi + 0x10) = eax;
    g_seh_ebp = ebp; sub_0016DAD4(); return; /* tail jmp 0x0016DAD4 */

}

/**
 * sub_0016DACD
 * Original: 0x0016DACD - 0x0016DAD4 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DACD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DACD: ;
    MEM32(esi + 0x10) = 0x11;

    g_seh_ebp = ebp; sub_0016DAD4(); return; /* fallthrough 0x0016DAD4 */

}

/**
 * sub_0016DAD4
 * Original: 0x0016DAD4 - 0x0016DB11 (61 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DAD4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DAD4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016DAF4u); RECOMP_ABI_CALL(0x0016D910u, sub_0016D910); /* call 0x0016D910 */

loc_0016DAF4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016DB20
 * Original: 0x0016DB20 - 0x0016DB8C (108 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DB20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edi + 0xD));
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0016DB39u); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0016DB39: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0016DB67u); RECOMP_ABI_CALL(0x0016D910u, sub_0016D910); /* call 0x0016D910 */

loc_0016DB67: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x18) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    POP32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016DB90
 * Original: 0x0016DB90 - 0x0016DD2B (411 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DB90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(ebx + 0xD));
    eax = ZX8(MEM8(eax + 0x175CB0));
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DD70(); return; } /* jne: not equal / not zero */

loc_0016DBC4: ;
    eax = MEM32(ebx + 0xC);
    esi = ZX8(MEM8(ebx + 0xD));
    edx = eax;
    edi = eax;
    if (0x14) _cf = (int)(((edx) >> ((0x14) - 1)) & 1);
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x18) _cf = (int)(((edi) >> ((0x18) - 1)) & 1);
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x1C) _cf = (int)(((eax) >> ((0x1C) - 1)) & 1);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016DBEF; /* je: equal / zero */

loc_0016DBE5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0016DBF1; /* jle: less or equal (signed <=) */

loc_0016DBEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0016DBF1; /* jg: greater (signed >) */

loc_0016DBEF: ;
    SET_LO8(ecx, 1);

loc_0016DBF1: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0016DC95; /* je: equal / zero */

loc_0016DC0B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xE));
    esi = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = eax;
    ebp = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0016DC7C; /* je: equal / zero */

loc_0016DC24: ;
    MEM32(esp + 0x24) = ecx;

loc_0016DC28: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0016DC32; /* jbe: below or equal (unsigned <=) */

loc_0016DC30: ;
    ebx = esi;

loc_0016DC32: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0016DC40; /* jbe: below or equal (unsigned <=) */

loc_0016DC3C: ;
    ecx = MEM32(esp + 0x10);

loc_0016DC40: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((ebx) >> ((3) - 1)) & 1);
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(ebx)) >> 32) & 1);
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0016DC58; /* jbe: below or equal (unsigned <=) */

loc_0016DC57: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016DC58: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0016DC65; /* jbe: below or equal (unsigned <=) */

loc_0016DC60: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;

loc_0016DC65: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0016DC72; /* jbe: below or equal (unsigned <=) */

loc_0016DC6D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;

loc_0016DC72: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016DC28; /* jne: not equal / not zero */

loc_0016DC78: ;
    ebx = MEM32(esp + 0x2C);

loc_0016DC7C: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x7F)) >> 32) & 1);
    ebp = ebp + 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFF80u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x30));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ecx;

loc_0016DC95: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DCE3; /* je: equal / zero */

loc_0016DC9D: ;
    MEM32(esp + 0x2C) = ecx;

loc_0016DCA1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_0016DCA9; /* ja: above (unsigned >) */

loc_0016DCA7: ;
    esi = ebp;

loc_0016DCA9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_A(_fa, _fb)) goto loc_0016DCB1; /* ja: above (unsigned >) */

loc_0016DCAF: ;
    ecx = ebp;

loc_0016DCB1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0016DCD3; /* jbe: below or equal (unsigned <=) */

loc_0016DCD2: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016DCD3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0016DCD8; /* jbe: below or equal (unsigned <=) */

loc_0016DCD7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016DCD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0016DCDD; /* jbe: below or equal (unsigned <=) */

loc_0016DCDC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016DCDD: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016DCA1; /* jne: not equal / not zero */

loc_0016DCE3: ;
    ecx = MEM32(ebx + 0xC);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((eax) >> (32 - (0x14))) & 1);
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_0016DD03; /* ja: above (unsigned >) */

loc_0016DD01: ;
    edx = ebp;

loc_0016DD03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0016DD09; /* ja: above (unsigned >) */

loc_0016DD07: ;
    edi = ebp;

loc_0016DD09: ;
    eax = ZX8(MEM8(ebx + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DD3E(); return; } /* je: equal / zero */

loc_0016DD13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0016DD2B(); return; } /* jle: less or equal (signed <=) */

loc_0016DD18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0016DD2B(); return; } /* jg: greater (signed >) */

loc_0016DD1D: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016DD49(); return; /* tail jmp 0x0016DD49 */

}

/**
 * sub_0016DD2B
 * Original: 0x0016DD2B - 0x0016DD3E (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DD2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DD2B: ;
    eax = 1;
    ecx = edx;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016DD49(); return; /* tail jmp 0x0016DD49 */

}

/**
 * sub_0016DD3E
 * Original: 0x0016DD3E - 0x0016DD49 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DD3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DD3E: ;
    eax = 1;
    ecx = edx;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

    g_seh_ebp = ebp; sub_0016DD49(); return; /* fallthrough 0x0016DD49 */

}

/**
 * sub_0016DD49
 * Original: 0x0016DD49 - 0x0016DD70 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DD49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DD49: ;
    ecx = edi + edx;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = esi;
    ecx = MEM32(ebx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    esi = MEM32(esp + 0x44);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_0016DD98(); return; /* tail jmp 0x0016DD98 */

}

/**
 * sub_0016DD70
 * Original: 0x0016DD70 - 0x0016DDB3 (67 bytes, 25 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DD70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DD70: ;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(esp + 0x40);
    eax = edx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = esi;
    esi = MEM32(ebx + 0x10);
    edi = MEM32(esp + 0x44);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(edi) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0016DD98
 * Original: 0x0016DD98 - 0x0016DDB3 (27 bytes, 11 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DD98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DD98: ;
    esi = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0016DDC0
 * Original: 0x0016DDC0 - 0x0016DE04 (68 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DDC0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016DDD0; /* jne: not equal / not zero */

loc_0016DDCA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016DDD0u); RECOMP_ABI_CALL(0x0016B7E0u, sub_0016B7E0); /* call 0x0016B7E0 */

loc_0016DDD0: ;
    edx = MEM32(esp + 0x18);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016DDF5u); RECOMP_ABI_CALL(0x0016DB90u, sub_0016DB90); /* call 0x0016DB90 */

loc_0016DDF5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0016DE01; /* je: equal / zero */

loc_0016DDFB: ;
    MEM32(esi) = MEM32(esi) | 0xF0000000u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016DE01: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016DE10
 * Original: 0x0016DE10 - 0x0016DE98 (136 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DE10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_0016DE26; /* jne: not equal / not zero */

loc_0016DE20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016DE26u); RECOMP_ABI_CALL(0x0016B7E0u, sub_0016B7E0); /* call 0x0016B7E0 */

loc_0016DE26: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016DE4Fu); RECOMP_ABI_CALL(0x0016DB90u, sub_0016DB90); /* call 0x0016DB90 */

loc_0016DE4F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_0016DE5E; /* je: equal / zero */

loc_0016DE58: ;
    ecx = ecx | 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016DE5E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DE98(); return; } /* je: equal / zero */

loc_0016DE66: ;
    edx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(edx + 0x175CB0));
    esi = MEM32(eax + 4);
    edx = edx & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax));
    eax = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0016DE98
 * Original: 0x0016DE98 - 0x0016DEAB (19 bytes, 8 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DE98(void)
{

loc_0016DE98: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0016DEB0
 * Original: 0x0016DEB0 - 0x0016DF4C (156 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DEB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0016DECA; /* jne: not equal / not zero */

loc_0016DEC4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016DECAu); RECOMP_ABI_CALL(0x0016B7E0u, sub_0016B7E0); /* call 0x0016B7E0 */

loc_0016DECA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016DEF0u); RECOMP_ABI_CALL(0x0016DB90u, sub_0016DB90); /* call 0x0016DB90 */

loc_0016DEF0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    ecx = MEM32(esp + 0x2C);
    if (TEST_Z(_fa, _fb)) goto loc_0016DEFF; /* je: equal / zero */

loc_0016DEF9: ;
    ecx = ecx | 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016DEFF: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0016DF36; /* je: equal / zero */

loc_0016DF0F: ;
    edx = ZX8(MEM8(ebp + 0xD));
    edx = ZX8(MEM8(edx + 0x175CB0));
    ebx = MEM32(eax + 4);
    edx = edx & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax));
    eax = MEM32(eax + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edx;

loc_0016DF36: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016DF50
 * Original: 0x0016DF50 - 0x0016DFD2 (130 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DF50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(edi + 0x175CB0));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = ecx;
    MEM32(esp + 0x20) = esi;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DFD2(); return; } /* jne: not equal / not zero */

loc_0016DF78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016DFD2(); return; } /* je: equal / zero */

loc_0016DF7D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016DF87; /* jle: less or equal (signed <=) */

loc_0016DF82: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0016DFD2(); return; } /* jle: less or equal (signed <=) */

loc_0016DF87: ;
    ebp = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0016DF9E; /* jne: not equal / not zero */

loc_0016DF99: ;
    ebp = 1;

loc_0016DF9E: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0016DFB8; /* jne: not equal / not zero */

loc_0016DFAA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;

loc_0016DFB8: ;
    esi = MEM32(esp + 0x40);
    edi = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(esp + 0x10) = edx;
    g_seh_ebp = ebp; sub_0016E0B9(); return; /* tail jmp 0x0016E0B9 */

}

/**
 * sub_0016DFD2
 * Original: 0x0016DFD2 - 0x0016E039 (103 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DFD2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DFD2: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x0016DFDBu); RECOMP_ABI_CALL(0x0016D5B0u, sub_0016D5B0); /* call 0x0016D5B0 */

loc_0016DFDB: ;
    ecx = MEM32(esp + 0x2C);
    esi = eax;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0016DFEAu); RECOMP_ABI_CALL(0x0016D5B0u, sub_0016D5B0); /* call 0x0016D5B0 */

loc_0016DFEA: ;
    ecx = MEM32(esp + 0x30);
    edx = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0016DFF9u); RECOMP_ABI_CALL(0x0016D5B0u, sub_0016D5B0); /* call 0x0016D5B0 */

loc_0016DFF9: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016E012; /* je: equal / zero */

loc_0016E008: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0016E014; /* jle: less or equal (signed <=) */

loc_0016E00D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0016E014; /* jg: greater (signed >) */

loc_0016E012: ;
    SET_LO8(ecx, 1);

loc_0016E014: ;
    ebp = MEM32(esp + 0x34);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ecx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E044(); return; } /* jne: not equal / not zero */

loc_0016E029: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_0016E031; /* ja: above (unsigned >) */

loc_0016E02F: ;
    ecx = eax;

loc_0016E031: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E039(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016E035: ;
    ecx = esi;
    g_seh_ebp = ebp; sub_0016E041(); return; /* tail jmp 0x0016E041 */

}

/**
 * sub_0016E039
 * Original: 0x0016E039 - 0x0016E041 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E039: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = edx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E041(); return; } /* ja: above (unsigned >) */

loc_0016E03F: ;
    ecx = eax;

    g_seh_ebp = ebp; sub_0016E041(); return; /* fallthrough 0x0016E041 */

}

/**
 * sub_0016E041
 * Original: 0x0016E041 - 0x0016E044 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E041(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E041: ;
    ebp = ecx + 1;

    g_seh_ebp = ebp; sub_0016E044(); return; /* fallthrough 0x0016E044 */

}

/**
 * sub_0016E044
 * Original: 0x0016E044 - 0x0016E050 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E044: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E096(); return; } /* je: equal / zero */

loc_0016E04A: ;
    MEM32(esp + 0x2C) = ebp;
    g_seh_ebp = ebp; sub_0016E054(); return; /* tail jmp 0x0016E054 */

}

/**
 * sub_0016E050
 * Original: 0x0016E050 - 0x0016E054 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E050: ;
    edi = MEM32(esp + 0x28);

    g_seh_ebp = ebp; sub_0016E054(); return; /* fallthrough 0x0016E054 */

}

/**
 * sub_0016E054
 * Original: 0x0016E054 - 0x0016E096 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E054(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E054: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016E05A; /* jbe: below or equal (unsigned <=) */

loc_0016E058: ;
    edi = esi;

loc_0016E05A: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016E064; /* jbe: below or equal (unsigned <=) */

loc_0016E062: ;
    ecx = edx;

loc_0016E064: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    edi = edi >> 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0016E086; /* jbe: below or equal (unsigned <=) */

loc_0016E085: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016E086: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016E08B; /* jbe: below or equal (unsigned <=) */

loc_0016E08A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016E08B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0016E090; /* jbe: below or equal (unsigned <=) */

loc_0016E08F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016E090: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0016E050(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016E096(); return; /* fallthrough 0x0016E096 */

}

/**
 * sub_0016E096
 * Original: 0x0016E096 - 0x0016E0B9 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E096(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E096: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_0016E0B5; /* je: equal / zero */

loc_0016E0A2: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx + ecx * 2;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;

loc_0016E0B5: ;
    ecx = MEM32(esp + 0x3C);

    g_seh_ebp = ebp; sub_0016E0B9(); return; /* fallthrough 0x0016E0B9 */

}

/**
 * sub_0016E0B9
 * Original: 0x0016E0B9 - 0x0016E12D (116 bytes, 46 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E0B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E0B9: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x38);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x18);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x44);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x48);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edx) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E12D(); return; } /* je: equal / zero */

loc_0016E105: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x4C);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0016E12D
 * Original: 0x0016E12D - 0x0016E145 (24 bytes, 9 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E12D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E12D: ;
    eax = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0016E145
 * Original: 0x0016E145 - 0x0016E163 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E145(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E145: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016E156; /* je: equal / zero */

loc_0016E153: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0016E156: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E163(); return; } /* je: equal / zero */

loc_0016E15E: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0016E175(); return; /* tail jmp 0x0016E175 */

}

/**
 * sub_0016E163
 * Original: 0x0016E163 - 0x0016E172 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E163: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E172(); return; } /* je: equal / zero */

loc_0016E16B: ;
    eax = eax | 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0016E175(); return; /* tail jmp 0x0016E175 */

}

/**
 * sub_0016E172
 * Original: 0x0016E172 - 0x0016E175 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E172: ;
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0016E175(); return; /* fallthrough 0x0016E175 */

}

/**
 * sub_0016E175
 * Original: 0x0016E175 - 0x0016E185 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E175(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E175: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016E182; /* je: equal / zero */

loc_0016E17D: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016E182: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016E185
 * Original: 0x0016E185 - 0x0016E1A4 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E185(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E185: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x180998)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x180998), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E19E; /* jne: not equal / not zero */

loc_0016E18F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x180998);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD30); PUSH32(esp, 0x0016E19Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E198u); } /* indirect call */
    }

loc_0016E19E: ;
    eax = MEM32(0x180998);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E1A4
 * Original: 0x0016E1A4 - 0x0016E21D (121 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E1A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E1A4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016E1AFu); RECOMP_ABI_CALL(0x0016E185u, sub_0016E185); /* call 0x0016E185 */

loc_0016E1AF: ;
    ecx = eax;
    ebx = 0xFF;
    edi = 0xFF00;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    esi = 0x17F1F0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016E1CC: ;
    eax = MEM32(esi);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0016E1E7; /* je: equal / zero */

loc_0016E1D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x8AC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016E1CC; /* jb: below (unsigned <) */

loc_0016E1E7: ;
    eax = 0xB9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016E212; /* jae: above or equal (unsigned >=) */

loc_0016E1F0: ;
    esi = edx + edx * 2;
    esi = esi * 4 + 0x17F1F0;

loc_0016E1FA: ;
    ecx = MEM32(esi);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = esi;
    if ((_fa == 0)) goto loc_0016E212; /* je: equal / zero */

loc_0016E204: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E212; /* je: equal / zero */

loc_0016E20A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016E1FA; /* jb: below (unsigned <) */

loc_0016E212: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E21D
 * Original: 0x0016E21D - 0x0016E2E5 (200 bytes, 62 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016E21D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016E21D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016E230u); RECOMP_ABI_CALL(0x0016D5C0u, sub_0016D5C0); /* call 0x0016D5C0 */

loc_0016E230: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016E239u); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); /* call 0x0016D710 */

loc_0016E239: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016E23Eu); RECOMP_ABI_CALL(0x0016E1A4u, sub_0016E1A4); /* call 0x0016E1A4 */

loc_0016E23E: ;
    edi = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016E248u); RECOMP_ABI_CALL(0x0016E185u, sub_0016E185); /* call 0x0016E185 */

loc_0016E248: ;
    edx = MEM32(ebp + 0x14);
    edi = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = eax;
    ebx = 0xFF;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ecx;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0016E27D; /* jns: not sign (positive) */

loc_0016E277: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = ecx;

loc_0016E27D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0016E28F; /* jne: not equal / not zero */

loc_0016E283: ;
    ecx = MEM32(ebp + -12);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xE0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = ecx;

loc_0016E28F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E335(); return; } /* je: equal / zero */

loc_0016E299: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E2EA(); return; } /* jne: not equal / not zero */

loc_0016E29F: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E32E(); return; } /* je: equal / zero */

loc_0016E2A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x800000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E32E(); return; } /* je: equal / zero */

loc_0016E2AF: ;
    edi = esi + 0x820;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(edi) = 0xFE9156;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016E2C6u); RECOMP_ABI_CALL(0x0016F4F1u, sub_0016F4F1); /* call 0x0016F4F1 */

loc_0016E2C6: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi))) >> 32) & 1);
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edi + 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016E2E2u); RECOMP_ABI_CALL(0x0016F524u, sub_0016F524); /* call 0x0016F524 */

loc_0016E2E2: ;
    edi = MEM32(ebp + -20);

    g_seh_ebp = ebp; sub_0016E2E5(); return; /* fallthrough 0x0016E2E5 */

}

/**
 * sub_0016E2E5
 * Original: 0x0016E2E5 - 0x0016E2F8 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E2E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E2E5: ;
    eax = 0x800000;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E471(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016E2F8(); return; /* fallthrough 0x0016E2F8 */

}

/**
 * sub_0016E2EA
 * Original: 0x0016E2EA - 0x0016E2F8 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E2EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E2EA: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E471(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016E2F8(); return; /* fallthrough 0x0016E2F8 */

}

/**
 * sub_0016E2F8
 * Original: 0x0016E2F8 - 0x0016E32E (54 bytes, 18 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E2F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E2F8: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 0x7E4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x7DC) = eax;
    ecx = MEM32(ecx);
    MEM32(esi + 0x1B8) = eax;
    MEM32(esi + 0x1B4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0016E327
 * Original: 0x0016E327 - 0x0016E32E (7 bytes, 5 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E327(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E327: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0016E32E
 * Original: 0x0016E32E - 0x0016E335 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E32E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E32E: ;
    eax = 0x400000;
    g_seh_ebp = ebp; sub_0016E2EA(); return; /* tail jmp 0x0016E2EA */

}

/**
 * sub_0016E335
 * Original: 0x0016E335 - 0x0016E381 (76 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E335(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E335: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E2E5(); return; } /* je: equal / zero */

loc_0016E33A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E2E5(); return; } /* je: equal / zero */

loc_0016E341: ;
    edi = esi + 0x820;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(edi) = 0x1312D00;
    PUSH32(esp, 0x0016E358u); RECOMP_ABI_CALL(0x0016F4F1u, sub_0016F4F1); /* call 0x0016F4F1 */

loc_0016E358: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi))) >> 32) & 1);
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edi + 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = edx;
    PUSH32(esp, 0x0016E374u); RECOMP_ABI_CALL(0x0016F524u, sub_0016F524); /* call 0x0016F524 */

loc_0016E374: ;
    edi = MEM32(ebp + -20);
    eax = 0x400000;
    g_seh_ebp = ebp; sub_0016E2EA(); return; /* tail jmp 0x0016E2EA */

}

/**
 * sub_0016E381
 * Original: 0x0016E381 - 0x0016E45E (221 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E381(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E381: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E39E; /* jne: not equal / not zero */

loc_0016E387: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E39B; /* jne: not equal / not zero */

loc_0016E38F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xE0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E468(); return; } /* jne: not equal / not zero */

loc_0016E39B: ;
    ecx = MEM32(ebp + -4);

loc_0016E39E: ;
    edx = ZX16(MEM16(ecx + 4));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E46B(); return; } /* jne: not equal / not zero */

loc_0016E3AB: ;
    edx = ZX16(MEM16(ecx + 6));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E46B(); return; } /* jne: not equal / not zero */

loc_0016E3B8: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E468(); return; } /* jne: not equal / not zero */

loc_0016E3D3: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E468(); return; } /* jne: not equal / not zero */

loc_0016E3EC: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E468(); return; } /* jne: not equal / not zero */

loc_0016E405: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E46B(); return; } /* je: equal / zero */

loc_0016E40C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E42A; /* je: equal / zero */

loc_0016E412: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016E41E; /* je: equal / zero */

loc_0016E418: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E42A; /* jne: not equal / not zero */

loc_0016E41E: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E46B(); return; } /* je: equal / zero */

loc_0016E424: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E46B(); return; } /* jne: not equal / not zero */

loc_0016E42A: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E45E(); return; } /* je: equal / zero */

loc_0016E431: ;
    edi = MEM32(ebp + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E43A; /* jne: not equal / not zero */

loc_0016E438: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016E43A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E446; /* jne: not equal / not zero */

loc_0016E440: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E456; /* jne: not equal / not zero */

loc_0016E446: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016E456; /* je: equal / zero */

loc_0016E44C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E456; /* jne: not equal / not zero */

loc_0016E454: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016E456: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E2F8(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016E45E(); return; /* fallthrough 0x0016E45E */

}

/**
 * sub_0016E45E
 * Original: 0x0016E45E - 0x0016E468 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E45E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E45E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0016E327(); return; /* tail jmp 0x0016E327 */

}

/**
 * sub_0016E468
 * Original: 0x0016E468 - 0x0016E46B (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E468(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E468: ;
    ecx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_0016E46B(); return; /* fallthrough 0x0016E46B */

}

/**
 * sub_0016E46B
 * Original: 0x0016E46B - 0x0016E471 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E46B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E46B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ecx;

    g_seh_ebp = ebp; sub_0016E471(); return; /* fallthrough 0x0016E471 */

}

/**
 * sub_0016E471
 * Original: 0x0016E471 - 0x0016E482 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E471(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E471: ;
    edx = MEM32(ecx);
    MEM32(ebp + 0x10) = edx;
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E381(); return; } /* je: equal / zero */

loc_0016E480: ;
    g_seh_ebp = ebp; sub_0016E45E(); return; /* tail jmp 0x0016E45E */

}

/**
 * sub_0016E490
 * Original: 0x0016E490 - 0x0016E4A1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E490: ;
    eax = MEM32(ecx + 0x1BC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2 + 0x5D;
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E4B0
 * Original: 0x0016E4B0 - 0x0016E4B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016E4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E4B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E4C0
 * Original: 0x0016E4C0 - 0x0016E4C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E4C0(void)
{

loc_0016E4C0: ;
    eax = MEM32(ecx + eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E4D0
 * Original: 0x0016E4D0 - 0x0016E4D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E4D0(void)
{

loc_0016E4D0: ;
    MEM32(edx + ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E4E0
 * Original: 0x0016E4E0 - 0x0016E4E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E4E0(void)
{

loc_0016E4E0: ;
    SET_LO8(eax, MEM8(ecx + eax));
    esp += 4; return; /* ret */

}

/**
 * sub_0016E4F0
 * Original: 0x0016E4F0 - 0x0016E4F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E4F0(void)
{

loc_0016E4F0: ;
    MEM8(edx + ecx) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E500
 * Original: 0x0016E500 - 0x0016E513 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E500(void)
{

loc_0016E500: ;
    eax = MEM32(ecx + 0xB4);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x140) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016E520
 * Original: 0x0016E520 - 0x0016E523 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E520(void)
{

loc_0016E520: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E530
 * Original: 0x0016E530 - 0x0016E53D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E530: ;
    eax = MEM32(ecx);

loc_0016E532: ;
    ecx = MEM32(eax + 0x400700);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E532; /* jne: not equal / not zero */

loc_0016E53C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E540
 * Original: 0x0016E540 - 0x0016E588 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E540: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E650(); return; } /* je: equal / zero */

loc_0016E556: ;
    eax = MEM32(edi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E650(); return; } /* je: equal / zero */

loc_0016E564: ;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E588(); return; } /* jne: not equal / not zero */

loc_0016E575: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E588(); return; } /* je: equal / zero */

loc_0016E581: ;
    eax = 1;
    g_seh_ebp = ebp; sub_0016E58A(); return; /* tail jmp 0x0016E58A */

}

/**
 * sub_0016E588
 * Original: 0x0016E588 - 0x0016E58A (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016E588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E588: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0016E58A(); return; /* fallthrough 0x0016E58A */

}

/**
 * sub_0016E58A
 * Original: 0x0016E58A - 0x0016E650 (198 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E58A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E58A: ;
    edx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E62E; /* jne: not equal / not zero */

loc_0016E598: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E5AC; /* jne: not equal / not zero */

loc_0016E5A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E62E; /* je: equal / zero */

loc_0016E5AC: ;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016E62E; /* je: equal / zero */

loc_0016E5B8: ;
    SET_LO16(edx, 0x80C0);
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016E5E0; /* jne: not equal / not zero */

loc_0016E5D3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = ecx;

loc_0016E5E0: ;
    eax = MEM32(esi + 0x1BC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0xA4) = 1;
    _fa = (uint32_t)(MEM32(esi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E621; /* je: equal / zero */

loc_0016E5FD: ;
    ecx = MEM32(esi + 0x1C0);
    eax = eax + eax * 2;
    edx = MEM32(esi + eax * 4 + 0x178);
    eax = esi + eax * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E621; /* jne: not equal / not zero */

loc_0016E615: ;
    edx = MEM32(eax + 0x17C);
    MEM32(0x183618) = edx;

loc_0016E621: ;
    eax = MEM32(0x183618);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016E62Eu); RECOMP_ABI_CALL(0x0016C204u, sub_0016C204); /* call 0x0016C204 */

loc_0016E62E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(edi + 0x140) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x0016E649u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E643u); } /* indirect call */
    }

loc_0016E649: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016E650
 * Original: 0x0016E650 - 0x0016E657 (7 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E650: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016E660
 * Original: 0x0016E660 - 0x0016E687 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1BC);
    ebx = MEM32(esi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 2 + 0x5D;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E72C(); return; } /* je: equal / zero */

loc_0016E684: ;
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_0016E690(); return; /* tail jmp 0x0016E690 */

}

/**
 * sub_0016E690
 * Original: 0x0016E690 - 0x0016E72C (156 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E690: ;
    edi = MEM32(esi + 0x1C0);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    edx = MEM32(eax + 0x178);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E725; /* jne: not equal / not zero */

loc_0016E6A6: ;
    MEM32(ecx) = 0;
    eax = MEM32(eax + 0x17C);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x183618) = eax;
    PUSH32(esp, 0x0016E6BFu); RECOMP_ABI_CALL(0x0016C204u, sub_0016C204); /* call 0x0016C204 */

loc_0016E6BF: ;
    edi = MEM32(esi + 0x1BC);
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x7DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4 + 0x7DC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E6F2; /* jne: not equal / not zero */

loc_0016E6D2: ;
    eax = edi + edi * 2;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + esi + 0x1DC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016E6E7u); RECOMP_ABI_CALL(0x0016C286u, sub_0016C286); /* call 0x0016C286 */

loc_0016E6E7: ;
    MEM32(esi + edi * 4 + 0x7DC) = 0;

loc_0016E6F2: ;
    eax = MEM32(ebx + 0x40071C);
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x40071C) = eax;
    ecx = MEM32(esi + 0x1BC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0x1BC) = ecx;
    ecx = esi + edx * 4;
    edx = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E690; /* jne: not equal / not zero */

loc_0016E725: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E72C
 * Original: 0x0016E72C - 0x0016E732 (6 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E72C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E72C: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E740
 * Original: 0x0016E740 - 0x0016E793 (83 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E740: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x0016E750u); RECOMP_ABI_CALL(0x0016E520u, sub_0016E520); /* call 0x0016E520 */

loc_0016E750: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E764; /* je: equal / zero */

loc_0016E75A: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1D4) = edx;

loc_0016E764: ;
    ebx = MEM32(esi + 0x1C0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1D8) = eax;
    MEM32(esi + 0x1C0) = ebx;
    SET_LO8(ebx, MEM8(edi + 0x6013D4));
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0016E786u); RECOMP_ABI_CALL(0x0016E660u, sub_0016E660); /* call 0x0016E660 */

loc_0016E786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E793(); return; } /* je: equal / zero */

loc_0016E78F: ;
    ebp = ecx;
    g_seh_ebp = ebp; sub_0016E7AD(); return; /* tail jmp 0x0016E7AD */

}

/**
 * sub_0016E793
 * Original: 0x0016E793 - 0x0016E7AD (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E793(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E793: ;
    eax = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(MEM32(esi + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C0), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E7AD(); return; } /* jne: not equal / not zero */

loc_0016E7A1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C4) = eax;
    ebp = 2;

    g_seh_ebp = ebp; sub_0016E7AD(); return; /* fallthrough 0x0016E7AD */

}

/**
 * sub_0016E7AD
 * Original: 0x0016E7AD - 0x0016E84A (157 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E7AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E7AD: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E7E9; /* jne: not equal / not zero */

loc_0016E7B9: ;
    SET_LO16(edx, 0x80C0);
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    edx = MEM32(esi + 8);
    edx = edx & 0xC0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000000 (32-bit) */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016E7E9; /* jne: not equal / not zero */

loc_0016E7DC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = edx;

loc_0016E7E9: ;
    eax = 0x1000000;
    edi = edi;

loc_0016E7F0: ;
    MEM32(edi + 0x600100) = ecx;
    /* HOST_VBLANK_PROGRESS_WAIT: let the acknowledgement worker run. */
    if (MEM32(edi + 0x100) & 0x1000000u) {
        extern void xbox_Nv2aWaitProgress(void);
        xbox_Nv2aWaitProgress();
    }
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016E7F0; /* jne: not equal / not zero */

loc_0016E7FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esi + 0x194;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x0016E80Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E808u); } /* indirect call */
    }

loc_0016E80E: ;
    eax = MEM32(esi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E83A; /* je: equal / zero */

loc_0016E818: ;
    ecx = MEM32(esi + 0x1C0);
    edx = MEM32(esi + 0x1BC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0016E837u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016E835u); } /* indirect call */
    }

loc_0016E837: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016E83A: ;
    MEM8(edi + 0x6013D4) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E850
 * Original: 0x0016E850 - 0x0016E890 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(eax + 0x9100) = 1;
    edi = MEM32(esi + 0x840);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E972(); return; } /* je: equal / zero */

loc_0016E86F: ;
    ecx = MEM32(esi + edi * 8 + 0x830);
    ecx = ecx | MEM32(esi + edi * 8 + 0x834);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016E972(); return; } /* je: equal / zero */

loc_0016E883: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

    g_seh_ebp = ebp; sub_0016E890(); return; /* fallthrough 0x0016E890 */

}

/**
 * sub_0016E890
 * Original: 0x0016E890 - 0x0016E8E4 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E890: ;
    edx = edi + 1;
    edx = edx & 0x80000001u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0016E8A0; /* jns: not sign (positive) */

loc_0016E89B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016E8A0: ;
    MEM32(esi + 0x840) = edx;
    MEM32(esi + edi * 8 + 0x830) = ebx;
    MEM32(esi + edi * 8 + 0x834) = ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x844)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x844) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E8E4(); return; } /* jne: not equal / not zero */

loc_0016E8BC: ;
    eax = MEM32(esi + 0x848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x844) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E92E(); return; } /* je: equal / zero */

loc_0016E8D0: ;
    ecx = MEM32(esi + 0x84C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x848) = ebx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0016E8DFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016E8DDu); } /* indirect call */
    }

loc_0016E8DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0016E92E(); return; /* tail jmp 0x0016E92E */

}

/**
 * sub_0016E8E4
 * Original: 0x0016E8E4 - 0x0016E92E (74 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E8E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E8E4: ;
    eax = MEM32(esi + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esi + 0x820);
    if (CMP_A(_fa, _fb)) goto loc_0016E8F8; /* ja: above (unsigned >) */

loc_0016E8F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016E92E(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016E8F8: ;
    edx = MEM32(esi + 0x828);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x82C);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi + 0x828) = edx;
    eax = MEM32(esi + 0x828);
    PUSH32(esp, 1);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 0x82C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016E927u); RECOMP_ABI_CALL(0x0016F524u, sub_0016F524); /* call 0x0016F524 */

loc_0016E927: ;
    ecx = esi;
    PUSH32(esp, 0x0016E92Eu); RECOMP_ABI_CALL(0x0016E740u, sub_0016E740); /* call 0x0016E740 */

    g_seh_ebp = ebp; sub_0016E92E(); return; /* fallthrough 0x0016E92E */

}

/**
 * sub_0016E92E
 * Original: 0x0016E92E - 0x0016E972 (68 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E92E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E92E: ;
    eax = MEM32(esi + 0x840);
    ecx = MEM32(esi + eax * 8 + 0x830);
    ecx = ecx | MEM32(esi + eax * 8 + 0x834);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0016E96B; /* je: equal / zero */

loc_0016E944: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0016E94Du); RECOMP_ABI_CALL(0x0016F4F1u, sub_0016F4F1); /* call 0x0016F4F1 */

loc_0016E94D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x834)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + edi * 8 + 0x834) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016E96B; /* jb: below (unsigned <) */

loc_0016E956: ;
    if (CMP_A(_fa, _fb)) goto loc_0016E961; /* ja: above (unsigned >) */

loc_0016E958: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x830)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 8 + 0x830) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016E96B; /* jb: below (unsigned <) */

loc_0016E961: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0016E890(); return; } /* jl: less (signed <) */

loc_0016E96B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E972
 * Original: 0x0016E972 - 0x0016E980 (14 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E972(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E972: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0016E97Bu); RECOMP_ABI_CALL(0x0016F506u, sub_0016F506); /* call 0x0016F506 */

loc_0016E97B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E9A0
 * Original: 0x0016E9A0 - 0x0016EA02 (98 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E9A0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x180998);
    eax = MEM32(ecx + -356);
    _fb = (uint32_t)(0xFFFFFE9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFE9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E9F0; /* je: equal / zero */

loc_0016E9BA: ;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E9E6; /* je: equal / zero */

loc_0016E9C5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E9E6; /* je: equal / zero */

loc_0016E9CA: ;
    MEM32(eax + 0x68084C) = 0x800080;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x0016E9E3u); RECOMP_ABI_CALL(0x0016FADAu, sub_0016FADA); /* call 0x0016FADA */

loc_0016E9E3: ;
    esp += 8; return; /* ret 4 */

loc_0016E9E6: ;
    MEM32(eax + 0x68084C) = 0;

loc_0016E9F0: ;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x0016E9FFu); RECOMP_ABI_CALL(0x0016FADAu, sub_0016FADA); /* call 0x0016FADA */

loc_0016E9FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016EA10
 * Original: 0x0016EA10 - 0x0016EA58 (72 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EA10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x17FAE8);
    PUSH32(esp, 0x0016EA1Bu); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EA1B: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x17FAE4);
    PUSH32(esp, 0x0016EA2Bu); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EA2B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17FAA0);
    PUSH32(esp, 0x0016EA50u); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EA50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016EA60
 * Original: 0x0016EA60 - 0x0016EC93 (563 bytes, 167 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EA60: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    edx = edi;
    eax = edi;
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    esi = ecx;
    ecx = MEM32(esi);
    if (CMP_A(_fa, _fb)) goto loc_0016EC55; /* ja: above (unsigned >) */

loc_0016EA81: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x16EC94); /* switch: 14 entries, 10 targets */
    if (_jt == 0x0016EA88u) goto loc_0016EA88;
    if (_jt == 0x0016EB93u) goto loc_0016EB93;
    if (_jt == 0x0016EB9Bu) goto loc_0016EB9B;
    if (_jt == 0x0016EBC5u) goto loc_0016EBC5;
    if (_jt == 0x0016EBCBu) goto loc_0016EBCB;
    if (_jt == 0x0016EBE3u) goto loc_0016EBE3;
    if (_jt == 0x0016EBFCu) goto loc_0016EBFC;
    if (_jt == 0x0016EC16u) goto loc_0016EC16;
    if (_jt == 0x0016EC3Eu) goto loc_0016EC3E;
    if (_jt == 0x0016EC55u) goto loc_0016EC55;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016EA88: ;
    edi = MEM32(esi + 0x1C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    ecx = eax;
    ebp = ebp & 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x1C0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x30) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_0016EAD7; /* jg: greater (signed >) */

loc_0016EABB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EACA; /* je: equal / zero */

loc_0016EABF: ;
    edi = 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edi;

loc_0016EACA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016EAD3; /* jne: not equal / not zero */

loc_0016EAD0: ;
    edi = eax + 1;

loc_0016EAD3: ;
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016EAD7: ;
    eax = edi + ebp;
    MEM32(esi + 0x1C4) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D4), edx (32-bit) */
    MEM32(esi + 0x1C8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0016EB14; /* je: equal / zero */

loc_0016EAEE: ;
    ecx = esi;
    PUSH32(esp, 0x0016EAF5u); RECOMP_ABI_CALL(0x0016E520u, sub_0016E520); /* call 0x0016E520 */

loc_0016EAF5: ;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ecx;
    if ((_fas >= 0)) goto loc_0016EB14; /* jns: not sign (positive) */

loc_0016EB0C: ;
    MEM32(esp + 0x30) = 0;

loc_0016EB14: ;
    eax = MEM32(esi + 0x1CC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 2 + 0x5D;
    MEM32(esi + ecx * 4) = 1;
    ecx = MEM32(esp + 0x14);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    MEM32(eax + 0x178) = edi;
    MEM32(eax + 0x17C) = ecx;
    edx = MEM32(esi + 0x1CC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x1CC) = edx;
    PUSH32(esp, 0x0016EB52u); RECOMP_ABI_CALL(0x0016E660u, sub_0016E660); /* call 0x0016E660 */

loc_0016EB52: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EB91; /* je: equal / zero */

loc_0016EB5C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x1CC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = ecx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0016EB8Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016EB8Cu); } /* indirect call */
    }

loc_0016EB8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016EB91: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0016EB93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EB9B: ;
    ecx = MEM32(0x180EA0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + eax * 4;
    MEM32(0x180EA0) = ecx;
    ecx = eax * 4 + 0x1810B4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016EBB8u); RECOMP_ABI_CALL(0x00172600u, sub_00172600); /* call 0x00172600 */

loc_0016EBB8: ;
    PUSH32(esp, 0x0016EBBDu); RECOMP_ABI_CALL(0x0016B190u, sub_0016B190); /* call 0x0016B190 */

loc_0016EBBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EBC5: ;
    MEM32(0x180EA0) = MEM32(0x180EA0) - 1;
    _fa = (uint32_t)(MEM32(0x180EA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016EBCB: ;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EBD6u); RECOMP_ABI_CALL(0x00172600u, sub_00172600); /* call 0x00172600 */

loc_0016EBD6: ;
    PUSH32(esp, 0x0016EBDBu); RECOMP_ABI_CALL(0x0016B190u, sub_0016B190); /* call 0x0016B190 */

loc_0016EBDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EBE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1A4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x0016EBF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016EBEEu); } /* indirect call */
    }

loc_0016EBF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EBFC: ;
    eax = MEM32(ecx + 0x401A88);
    ecx = MEM32(ecx + 0x40186C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0016EC0Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016EC09u); } /* indirect call */
    }

loc_0016EC0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EC16: ;
    MEM32(ecx + 0x400750) = 0xE00050;
    MEM32(ecx + 0x400754) = eax;
    POP32(esp, edi);
    MEM32(ecx + 0x400750) = 0xDF0008;
    MEM32(ecx + 0x400754) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EC3E: ;
    eax = MEM32(ecx + 0x401A88);
    edx = MEM32(ecx + 0x40186C);
    POP32(esp, edi);
    MEM32(eax + ecx) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016EC55: ;
    PUSH32(esp, 0x17FAE8);
    PUSH32(esp, 0x0016EC5Fu); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EC5F: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x17FAE4);
    PUSH32(esp, 0x0016EC6Fu); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EC6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x17FAA0);
    PUSH32(esp, 0x0016EC87u); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EC87: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016ECD0
 * Original: 0x0016ECD0 - 0x0016ED5D (141 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ECD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ECD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    MEM32(esi + 0x400720) = 0;
    eax = MEM32(esi + 0x400100);
    ebp = MEM32(esi + 0x400704);
    ebx = MEM32(esi + 0x400108);
    ebp = ebp & 0x1FFC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016ED2F; /* je: equal / zero */

loc_0016ECFF: ;
    eax = ebp;
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x400100) = 0x1000;
    ecx = MEM32(edi);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0016ED13: ;
    edx = MEM32(ecx + 0x400700);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016ED13; /* jne: not equal / not zero */

loc_0016ED1D: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0016ED25u); RECOMP_ABI_CALL(0x00174E95u, sub_00174E95); /* call 0x00174E95 */

loc_0016ED25: ;
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016ED66(); return; } /* je: equal / zero */

loc_0016ED2F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x400100) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016ED66(); return; } /* je: equal / zero */

loc_0016ED39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100001 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016ED66(); return; } /* je: equal / zero */

loc_0016ED40: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    eax = MEM32(esi + 0x400708);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016ED66(); return; } /* jne: not equal / not zero */

loc_0016ED4B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016ED5D(); return; } /* jne: not equal / not zero */

loc_0016ED54: ;
    ecx = edi;
    PUSH32(esp, 0x0016ED5Bu); RECOMP_ABI_CALL(0x0016EA60u, sub_0016EA60); /* call 0x0016EA60 */

loc_0016ED5B: ;
    g_seh_ebp = ebp; sub_0016ED66(); return; /* tail jmp 0x0016ED66 */

}

/**
 * sub_0016ED5D
 * Original: 0x0016ED5D - 0x0016ED66 (9 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016ED5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_0016ED5D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016ED66u); RECOMP_ABI_CALL(0x0016EA10u, sub_0016EA10); /* call 0x0016EA10 */

    g_seh_ebp = ebp; sub_0016ED66(); return; /* fallthrough 0x0016ED66 */

}

/**
 * sub_0016ED66
 * Original: 0x0016ED66 - 0x0016ED7B (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ED66: ;
    POP32(esp, edi);
    MEM32(esi + 0x400720) = 1;
    eax = MEM32(esi + 0x400100);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED80
 * Original: 0x0016ED80 - 0x0016EF03 (387 bytes, 97 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ED80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x2100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100000 (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0016ED9F; /* je: equal / zero */

loc_0016ED95: ;
    MEM32(esi + 0x2100) = 0x100000;

loc_0016ED9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EDB0; /* je: equal / zero */

loc_0016EDA6: ;
    MEM32(esi + 0x2100) = 0x1000000;

loc_0016EDB0: ;
    edx = MEM32(esi + 0x2100);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    edi = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0016EE00; /* je: equal / zero */

loc_0016EDC2: ;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3250) = ebp;
    MEM32(esi + 0x2100) = edi;
    ecx = 0xFFFF;
    /* nop */

loc_0016EDE0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EDEE; /* je: equal / zero */

loc_0016EDE5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x3250);
    if ((_fa != 0)) goto loc_0016EDE0; /* jne: not equal / not zero */

loc_0016EDEE: ;
    MEM32(esi + 0x3258) = ebp;
    MEM32(esi + 0x3250) = edi;
    MEM32(esi + 0x2500) = edi;

loc_0016EE00: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EE6B; /* je: equal / zero */

loc_0016EE05: ;
    PUSH32(esp, 0x17FAE8);
    PUSH32(esp, 0x0016EE0Fu); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EE0F: ;
    edi = MEM32(-46137012);
    PUSH32(esp, 0x17FAE4);
    PUSH32(esp, 0x0016EE1Fu); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EE1F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17FAA0);
    PUSH32(esp, 0x0016EE35u); RECOMP_ABI_CALL(0x001725C0u, sub_001725C0); /* call 0x001725C0 */

loc_0016EE35: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    MEM32(esi + 0x2100) = 0x1000;
    MEM32(esi + 0x3228) = ebp;
    eax = MEM32(esi + 0x3240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3244) (32-bit) */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0016EE6B; /* je: equal / zero */

loc_0016EE5C: ;
    eax = MEM32(esi + 0x3244);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3244) = eax;

loc_0016EE6B: ;
    eax = MEM32(esi + 0x3220);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EEDA; /* je: equal / zero */

loc_0016EE76: ;
    eax = MEM32(esi + 0x3214);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016EEB3; /* jne: not equal / not zero */

loc_0016EE80: ;
    _fa = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2100), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EEB3; /* jne: not equal / not zero */

loc_0016EE88: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EE97; /* je: equal / zero */

loc_0016EE90: ;
    ecx = ebx;
    PUSH32(esp, 0x0016EE97u); RECOMP_ABI_CALL(0x0016ECD0u, sub_0016ECD0); /* call 0x0016ECD0 */

loc_0016EE97: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EEAA; /* je: equal / zero */

loc_0016EEA3: ;
    ecx = ebx;
    PUSH32(esp, 0x0016EEAAu); RECOMP_ABI_CALL(0x0016E740u, sub_0016E740); /* call 0x0016E740 */

loc_0016EEAA: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EE80; /* je: equal / zero */

loc_0016EEB3: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EEDA; /* je: equal / zero */

loc_0016EEBC: ;
    /* nop */

loc_0016EEC0: ;
    _fa = (uint32_t)(MEM8(esi + 0x2500)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2500), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016EEC0; /* jne: not equal / not zero */

loc_0016EEC9: ;
    eax = MEM32(esi + 0x3220);
    eax = eax & 0xFFFFEFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3220) = eax;

loc_0016EEDA: ;
    _fa = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2100), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EEEE; /* jne: not equal / not zero */

loc_0016EEE2: ;
    MEM32(esi + 0x3250) = edi;
    MEM32(esi + 0x2500) = edi;

loc_0016EEEE: ;
    ecx = MEM32(esi + 0x2100);
    eax = MEM32(esi + 0x2080);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EF10
 * Original: 0x0016EF10 - 0x0016EF20 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EF10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    /* nop */

    g_seh_ebp = ebp; sub_0016EF20(); return; /* fallthrough 0x0016EF20 */

}

/**
 * sub_0016EF20
 * Original: 0x0016EF20 - 0x0016EF77 (87 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EF20: ;
    esi = MEM32(edi + 0x100);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EF39; /* je: equal / zero */

loc_0016EF30: ;
    ecx = ebx;
    PUSH32(esp, 0x0016EF37u); RECOMP_ABI_CALL(0x0016ECD0u, sub_0016ECD0); /* call 0x0016ECD0 */

loc_0016EF37: ;
    ebp = eax;

loc_0016EF39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFFEFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016EFC6(); return; } /* je: equal / zero */

loc_0016EF45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EF56; /* je: equal / zero */

loc_0016EF4D: ;
    ecx = ebx;
    PUSH32(esp, 0x0016EF54u); RECOMP_ABI_CALL(0x0016E850u, sub_0016E850); /* call 0x0016E850 */

loc_0016EF54: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016EF56: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016EF98(); return; } /* je: equal / zero */

loc_0016EF5E: ;
    eax = MEM32(ebx + 0x820);
    eax = eax | MEM32(ebx + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0016EF80(); return; } /* jne: not equal / not zero */

loc_0016EF6C: ;
    ecx = ebx;
    PUSH32(esp, 0x0016EF73u); RECOMP_ABI_CALL(0x0016E740u, sub_0016E740); /* call 0x0016E740 */

loc_0016EF73: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0016EF98(); return; /* tail jmp 0x0016EF98 */

}

/**
 * sub_0016EF80
 * Original: 0x0016EF80 - 0x0016EF98 (24 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EF80: ;
    MEM32(edi + 0x600100) = 1;
    esi = MEM32(edi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016EF80; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016EF98(); return; /* fallthrough 0x0016EF98 */

}

/**
 * sub_0016EF98
 * Original: 0x0016EF98 - 0x0016EFC6 (46 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EF98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EF98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EFA9; /* je: equal / zero */

loc_0016EFA0: ;
    ecx = ebx;
    PUSH32(esp, 0x0016EFA7u); RECOMP_ABI_CALL(0x0016ED80u, sub_0016ED80); /* call 0x0016ED80 */

loc_0016EFA7: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016EFA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016EFC6(); return; } /* je: equal / zero */

loc_0016EFB1: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x8100)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x8100), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016EFC6(); return; } /* je: equal / zero */

loc_0016EFBC: ;
    MEM32(eax + 0x8100) = 1;

    g_seh_ebp = ebp; sub_0016EFC6(); return; /* fallthrough 0x0016EFC6 */

}

/**
 * sub_0016EFC6
 * Original: 0x0016EFC6 - 0x0016EFE7 (33 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EFC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EFC6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016EF20(); return; } /* jne: not equal / not zero */

loc_0016EFCE: ;
    ecx = MEM32(ebx + 0xB4);
    MEM32(ebx + 0xA4) = ebp;
    MEM32(edi + 0x140) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016EFE7
 * Original: 0x0016EFE7 - 0x0016EFFA (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EFE7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EFE7: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016EFFA
 * Original: 0x0016EFFA - 0x0016F03A (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EFFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EFFA: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x1DC;
    PUSH32(esp, esi);
    edx = eax + 0x100;
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x200;

loc_0016F021: ;
    eax = edx + ecx;
    MEM8(esi + eax) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(edi + eax) = LO8(ecx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016F021; /* jb: below (unsigned <) */

loc_0016F035: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016F03A
 * Original: 0x0016F03A - 0x0016F09D (99 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F03A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F03A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x118) = eax;
    eax = esi + 0x160;
    ecx = MEM32(eax);
    PUSH32(esp, 8);
    edi = 0x80;
    edx = ecx + 0x37F;
    PUSH32(esp, edi);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0016F082u); RECOMP_ABI_CALL(0x0017427Bu, sub_0017427B); /* call 0x0017427B */

loc_0016F082: ;
    eax = MEM32(esi + 0x100);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016F09D
 * Original: 0x0016F09D - 0x0016F0D1 (52 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F09D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F09D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0xC));
    eax = edx;
    PUSH32(esp, MEM32(ecx + 0x100));
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F0CAu); RECOMP_ABI_CALL(0x00174408u, sub_00174408); /* call 0x00174408 */

loc_0016F0CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016F0E0
 * Original: 0x0016F0E0 - 0x0016F0E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F0E0(void)
{

loc_0016F0E0: ;
    eax = MEM32(ecx + eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F0F0
 * Original: 0x0016F0F0 - 0x0016F0F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F0F0(void)
{

loc_0016F0F0: ;
    MEM32(edx + ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F100
 * Original: 0x0016F100 - 0x0016F10E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F100: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F110
 * Original: 0x0016F110 - 0x0016F111 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F110(void)
{

loc_0016F110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F120
 * Original: 0x0016F120 - 0x0016F123 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F120(void)
{

loc_0016F120: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016F130
 * Original: 0x0016F130 - 0x0016F146 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0016F130: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x80000000u));
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016F146
 * Original: 0x0016F146 - 0x0016F171 (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F146(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F146: ;
    MEM32(ecx) = 0xFD000000u;
    eax = MEM32(0xFD001804u);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFD001804u) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-44039872) = 0;
    MEM32(-50294464) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0016F171
 * Original: 0x0016F171 - 0x0016F1B2 (65 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F171(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F171: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x1800);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xA8) = eax;
    eax = MEM32(edx + 0x1808);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC0) = eax;
    edx = MEM32(edx + 0x10020C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xBC) = 0xFE502A;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0016F1B2
 * Original: 0x0016F1B2 - 0x0016F235 (131 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F1B2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F1B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(edi + 0x1830) = 0;
    MEM32(edi + 0x180C) = 0xF800;
    PUSH32(esp, 0x0016F1D1u); RECOMP_ABI_CALL(0x001737B4u, sub_001737B4); /* call 0x001737B4 */

loc_0016F1D1: ;
    MEM32(esi + 0xB4) = 1;
    MEM32(edi + 0x9200) = 0xDE86;
    MEM32(edi + 0x9210) = 0x1DCD;
    ecx = esi;
    MEM32(edi + 0x9420) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0016F200u); RECOMP_ABI_CALL(0x0017391Bu, sub_0017391B); /* call 0x0017391B */

loc_0016F200: ;
    ecx = esi;
    PUSH32(esp, 0x0016F207u); RECOMP_ABI_CALL(0x00173A19u, sub_00173A19); /* call 0x00173A19 */

loc_0016F207: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0016F210u); RECOMP_ABI_CALL(0x0016EFFAu, sub_0016EFFA); /* call 0x0016EFFA */

loc_0016F210: ;
    ecx = esi;
    PUSH32(esp, 0x0016F217u); RECOMP_ABI_CALL(0x00173AE8u, sub_00173AE8); /* call 0x00173AE8 */

loc_0016F217: ;
    ecx = esi;
    MEM32(esi + 0x134) = 2;
    PUSH32(esp, 0x0016F228u); RECOMP_ABI_CALL(0x00173B1Eu, sub_00173B1E); /* call 0x00173B1E */

loc_0016F228: ;
    ecx = esi;
    PUSH32(esp, 0x0016F22Fu); RECOMP_ABI_CALL(0x00173B4Eu, sub_00173B4E); /* call 0x00173B4E */

loc_0016F22F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F235
 * Original: 0x0016F235 - 0x0016F2CD (152 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F235(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F235: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x184C;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx & 0xFFFFFCFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;
    MEM32(eax) = ecx;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x200) = ebx;
    eax = MEM32(edi + 0xB4);
    MEM32(esi + 0x140) = eax;
    ecx = edi;
    PUSH32(esp, 0x0016F26Du); RECOMP_ABI_CALL(0x00173F30u, sub_00173F30); /* call 0x00173F30 */

loc_0016F26D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x9400) = ebp;
    MEM32(esi + 0x9410) = ebp;
    MEM32(esi + 0x400720) = ebp;
    ecx = edi;
    PUSH32(esp, 0x0016F288u); RECOMP_ABI_CALL(0x00175039u, sub_00175039); /* call 0x00175039 */

loc_0016F288: ;
    MEM32(esi + 0x400100) = ebx;
    MEM32(esi + 0x400140) = ebx;
    ecx = edi;
    PUSH32(esp, 0x0016F29Bu); RECOMP_ABI_CALL(0x00174FB8u, sub_00174FB8); /* call 0x00174FB8 */

loc_0016F29B: ;
    MEM32(esi + 0x2100) = ebx;
    eax = MEM32(edi + 0x11C);
    MEM32(esi + 0x2140) = eax;
    MEM32(edi + 0x840) = ebx;
    MEM32(edi + 0x844) = ebx;
    MEM32(edi + 0x820) = ebp;
    MEM32(edi + 0x824) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F2CD
 * Original: 0x0016F2CD - 0x0016F2F3 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016F2CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F2CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F2F3(); return; } /* je: equal / zero */

loc_0016F2D9: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 3;
    g_seh_ebp = ebp; sub_0016F323(); return; /* tail jmp 0x0016F323 */

}

/**
 * sub_0016F2F3
 * Original: 0x0016F2F3 - 0x0016F313 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F2F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F2F3: ;
    ecx = eax;
    ecx = ecx & 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    ecx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F313(); return; } /* je: equal / zero */

loc_0016F306: ;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 2;
    g_seh_ebp = ebp; sub_0016F323(); return; /* tail jmp 0x0016F323 */

}

/**
 * sub_0016F313
 * Original: 0x0016F313 - 0x0016F323 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F313: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

    g_seh_ebp = ebp; sub_0016F323(); return; /* fallthrough 0x0016F323 */

}

/**
 * sub_0016F323
 * Original: 0x0016F323 - 0x0016F327 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F323(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F323: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016F327
 * Original: 0x0016F327 - 0x0016F372 (75 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016F327(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F327: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    edx = ecx;
    edi = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F34Cu); RECOMP_ABI_CALL(0x0016F2CDu, sub_0016F2CD); /* call 0x0016F2CD */

loc_0016F34C: ;
    ebx = MEM32(ebp + -8);
    ecx = edx + 0x160;
    edx = MEM32(ecx);
    esi = edx + 1;
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    eax = ebx;
    POP32(esp, esi);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F375(); return; } /* je: equal / zero */

loc_0016F36B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F372(); return; } /* je: equal / zero */

loc_0016F36E: ;
    PUSH32(esp, 0x3D);
    g_seh_ebp = ebp; sub_0016F374(); return; /* tail jmp 0x0016F374 */

}

/**
 * sub_0016F372
 * Original: 0x0016F372 - 0x0016F374 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F372(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F372: ;
    PUSH32(esp, 3);

    g_seh_ebp = ebp; sub_0016F374(); return; /* fallthrough 0x0016F374 */

}

/**
 * sub_0016F374
 * Original: 0x0016F374 - 0x0016F375 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F374(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F374: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0016F375(); return; /* fallthrough 0x0016F375 */

}

/**
 * sub_0016F375
 * Original: 0x0016F375 - 0x0016F394 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F375(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F375: ;
    ebx = ebx << 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0x3000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F3A0(); return; } /* je: equal / zero */

loc_0016F386: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F394(); return; } /* jne: not equal / not zero */

loc_0016F38C: ;
    esi = esi | 0x30000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0016F3A0(); return; /* tail jmp 0x0016F3A0 */

}

/**
 * sub_0016F394
 * Original: 0x0016F394 - 0x0016F3A0 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F394(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F394: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F3A0(); return; } /* jne: not equal / not zero */

loc_0016F39A: ;
    esi = esi | 0x20000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0016F3A0(); return; /* fallthrough 0x0016F3A0 */

}

/**
 * sub_0016F3A0
 * Original: 0x0016F3A0 - 0x0016F3F6 (86 bytes, 31 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F3A0: ;
    ecx = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x700008) = eax;
    MEM32(ecx + 0x70000C) = eax;
    esi = esi | 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx + 0x70000;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edi) = esi;
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x700004) = eax;
    ecx = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) & 0;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016F3F6
 * Original: 0x0016F3F6 - 0x0016F420 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016F3F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F3F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x57 (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F420(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016F406: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x62) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x62;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F420(); return; } /* je: equal / zero */

loc_0016F40E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F420(); return; } /* je: equal / zero */

loc_0016F413: ;
    _fb = (uint32_t)(0x25) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x25;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0016F420(); return; } /* jne: not equal / not zero */

loc_0016F418: ;
    eax = 0x330;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0016F423(); return; /* tail jmp 0x0016F423 */

}

/**
 * sub_0016F420
 * Original: 0x0016F420 - 0x0016F423 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F420: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

    g_seh_ebp = ebp; sub_0016F423(); return; /* fallthrough 0x0016F423 */

}

/**
 * sub_0016F423
 * Original: 0x0016F423 - 0x0016F486 (99 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F423(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F423: ;
    ecx = ebx + 0x160;
    esi = MEM32(ecx);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016F44A; /* je: equal / zero */

loc_0016F436: ;
    eax = MEM32(ebx + 0x100);
    ecx = ebx;
    MEM32(ebx + eax * 4 + 0x144) = esi;
    PUSH32(esp, 0x0016F44Au); RECOMP_ABI_CALL(0x001744B6u, sub_001744B6); /* call 0x001744B6 */

loc_0016F44A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016F455u); RECOMP_ABI_CALL(0x00174441u, sub_00174441); /* call 0x00174441 */

loc_0016F455: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = esi;
    MEM16(ecx + 6) = 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0016F47Cu); RECOMP_ABI_CALL(0x0016F09Du, sub_0016F09D); /* call 0x0016F09D */

loc_0016F47C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016F486
 * Original: 0x0016F486 - 0x0016F4D3 (77 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F486(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F486: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);

loc_0016F48C: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016F4A7; /* je: equal / zero */

loc_0016F495: ;
    _fa = (uint32_t)(MEM8(esi + 0x2400)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2400), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016F4A7; /* je: equal / zero */

loc_0016F49E: ;
    _fa = (uint32_t)(MEM8(esi + 0x3220)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3220), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F4D3(); return; } /* je: equal / zero */

loc_0016F4A7: ;
    ecx = edi;
    PUSH32(esp, 0x0016F4AEu); RECOMP_ABI_CALL(0x0016ED80u, sub_0016ED80); /* call 0x0016ED80 */

loc_0016F4AE: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016F4BE; /* je: equal / zero */

loc_0016F4B7: ;
    ecx = edi;
    PUSH32(esp, 0x0016F4BEu); RECOMP_ABI_CALL(0x0016ECD0u, sub_0016ECD0); /* call 0x0016ECD0 */

loc_0016F4BE: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016F48C; /* je: equal / zero */

loc_0016F4CA: ;
    ecx = edi;
    PUSH32(esp, 0x0016F4D1u); RECOMP_ABI_CALL(0x0016E740u, sub_0016E740); /* call 0x0016E740 */

loc_0016F4D1: ;
    goto loc_0016F48C;

}

/**
 * sub_0016F4D3
 * Original: 0x0016F4D3 - 0x0016F4F1 (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F4D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F4D3: ;
    edx = MEM32(esp + 0xC);
    eax = esi + 0x3220;
    ecx = MEM32(eax);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    MEM32(eax) = 0;
    POP32(esp, esi);

loc_0016F4E9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016F4E9; /* jne: not equal / not zero */

loc_0016F4EE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016F4F1
 * Original: 0x0016F4F1 - 0x0016F506 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F4F1(void)
{

loc_0016F4F1: ;
    eax = MEM32(ecx);
    ecx = eax + 0x9410;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0x9400);
    ecx = MEM32(ecx);
    edx = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F506
 * Original: 0x0016F506 - 0x0016F524 (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F506(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F506: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x9140) = edx;
    MEM32(ecx + 0x818) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016F524
 * Original: 0x0016F524 - 0x0016F544 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016F524(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F524: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F544(); return; } /* je: equal / zero */

loc_0016F533: ;
    _fa = (uint32_t)(MEM32(ecx + 0x844)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x844), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F53C; /* jne: not equal / not zero */

loc_0016F53B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016F53C: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_0016F569(); return; /* tail jmp 0x0016F569 */

}

/**
 * sub_0016F544
 * Original: 0x0016F544 - 0x0016F569 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F544(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F544: ;
    eax = ecx + 0x844;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016F551; /* je: equal / zero */

loc_0016F54E: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016F551: ;
    MEM32(eax) = esi;
    edx = edi + 0x9410;
    eax = MEM32(edx);
    eax = MEM32(edi + 0x9400);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

    g_seh_ebp = ebp; sub_0016F569(); return; /* fallthrough 0x0016F569 */

}

/**
 * sub_0016F569
 * Original: 0x0016F569 - 0x0016F5AD (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F569(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F569: ;
    MEM32(ecx + esi * 8 + 0x830) = eax;
    MEM32(ecx + esi * 8 + 0x834) = edx;
    ebx = MEM32(ecx + 0x834);
    esi = MEM32(ecx + 0x83C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    edx = MEM32(ecx + 0x830);
    eax = MEM32(ecx + 0x838);
    if (CMP_B(_fa, _fb)) goto loc_0016F59D; /* jb: below (unsigned <) */

loc_0016F593: ;
    if (CMP_A(_fa, _fb)) goto loc_0016F599; /* ja: above (unsigned >) */

loc_0016F595: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016F59D; /* jb: below (unsigned <) */

loc_0016F599: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0016F5AD(); return; } /* jne: not equal / not zero */

loc_0016F59D: ;
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F5AD(); return; } /* je: equal / zero */

loc_0016F5A1: ;
    MEM32(ecx + 0x840) = MEM32(ecx + 0x840) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x840)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0016F5B6(); return; /* tail jmp 0x0016F5B6 */

}

/**
 * sub_0016F5AD
 * Original: 0x0016F5AD - 0x0016F5B6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F5AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F5AD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x840) = edx;

    g_seh_ebp = ebp; sub_0016F5B6(); return; /* fallthrough 0x0016F5B6 */

}

/**
 * sub_0016F5B6
 * Original: 0x0016F5B6 - 0x0016F5F2 (60 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F5B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F5B6: ;
    esi = MEM32(ecx + 0x840);
    eax = MEM32(ecx + esi * 8 + 0x830);
    esi = MEM32(ecx + esi * 8 + 0x834);
    ebx = eax;
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0016F5EB; /* je: equal / zero */

loc_0016F5D0: ;
    MEM32(edi + 0x9420) = eax;
    eax = ecx + 0x818;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F5EB; /* jne: not equal / not zero */

loc_0016F5E1: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x9140) = edx;
    MEM32(eax) = edx;

loc_0016F5EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016F5F2
 * Original: 0x0016F5F2 - 0x0016F681 (143 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F5F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F5F2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0016F642; /* jne: not equal / not zero */

loc_0016F600: ;
    ecx = esi + 0x844;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016F642; /* je: equal / zero */

loc_0016F60D: ;
    MEM32(esi + eax * 8 + 0x830) = edi;
    MEM32(esi + eax * 8 + 0x834) = edi;
    eax = MEM32(esi + 0x820);
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | MEM32(esi + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x848) = edi;
    if ((_fa == 0)) goto loc_0016F67C; /* je: equal / zero */

loc_0016F632: ;
    eax = MEM32(esi);
    MEM32(eax + 0x9140) = edi;
    MEM32(esi + 0x818) = edi;
    goto loc_0016F67C;

loc_0016F642: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3B9ACA00);
    PUSH32(esp, MEM32(esp + 0x1C));
    MEM32(esi + 0x848) = edx;
    PUSH32(esp, MEM32(esp + 0x1C));
    MEM32(esi + 0x84C) = eax;
    PUSH32(esp, 0x0016F666u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_0016F666: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2BB5C755);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F673u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_0016F673: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016F67Cu); RECOMP_ABI_CALL(0x0016F524u, sub_0016F524); /* call 0x0016F524 */

loc_0016F67C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016F681
 * Original: 0x0016F681 - 0x0016F6A6 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F681(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F681: ;
    edx = MEM32(0x22BCBC);
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 1), 2 (8-bit) */
    eax = MEM32(ecx);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F6C7(); return; } /* jne: not equal / not zero */

loc_0016F68F: ;
    ecx = ZX8(MEM8(ecx + 0xA));
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F6AD(); return; } /* je: equal / zero */

loc_0016F698: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0016F6A6(); return; } /* je: equal / zero */

loc_0016F69B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0016F6C7(); return; } /* jne: not equal / not zero */

loc_0016F69F: ;
    ecx = 0x108E48;
    g_seh_ebp = ebp; sub_0016F6B2(); return; /* tail jmp 0x0016F6B2 */

}

/**
 * sub_0016F6A6
 * Original: 0x0016F6A6 - 0x0016F6AD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F6A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F6A6: ;
    ecx = 0xE2194;
    g_seh_ebp = ebp; sub_0016F6B2(); return; /* tail jmp 0x0016F6B2 */

}

/**
 * sub_0016F6AD
 * Original: 0x0016F6AD - 0x0016F6B2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F6AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F6AD: ;
    ecx = 0xDAEBC;

    g_seh_ebp = ebp; sub_0016F6B2(); return; /* fallthrough 0x0016F6B2 */

}

/**
 * sub_0016F6B2
 * Original: 0x0016F6B2 - 0x0016F6C7 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F6B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F6B2: ;
    MEM32(eax + 0x680680) = ecx;
    ecx = eax + 0x6806A0;
    eax = MEM32(ecx);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_0016F6C7(); return; /* fallthrough 0x0016F6C7 */

}

/**
 * sub_0016F6C7
 * Original: 0x0016F6C7 - 0x0016F6C8 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F6C7(void)
{

loc_0016F6C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F6C8
 * Original: 0x0016F6C8 - 0x0016F737 (111 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016F6C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F6C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x16EF10);
    eax = esi + 0x84;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x0016F6E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F6DFu); } /* indirect call */
    }

loc_0016F6E5: ;
    eax = esi + 0x1AC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1B0) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x19C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM8(esi + 0x1A4) = 0;
    MEM8(esi + 0x1A6) = 4;
    MEM32(esi + 0x1A8) = ebx;
    MEM8(esi + 0x194) = 0;
    MEM8(esi + 0x196) = 4;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x1A0) = eax;
    MEM32(eax) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F733u); RECOMP_ABI_CALL(0x0016F146u, sub_0016F146); /* call 0x0016F146 */

loc_0016F733: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F73E(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016F737(); return; /* fallthrough 0x0016F737 */

}

/**
 * sub_0016F737
 * Original: 0x0016F737 - 0x0016F73E (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F737: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0016F826(); return; /* tail jmp 0x0016F826 */

}

/**
 * sub_0016F73E
 * Original: 0x0016F73E - 0x0016F778 (58 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F73E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F73E: ;
    ecx = esi;
    PUSH32(esp, 0x0016F745u); RECOMP_ABI_CALL(0x0016F171u, sub_0016F171); /* call 0x0016F171 */

loc_0016F745: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F737(); return; } /* je: equal / zero */

loc_0016F749: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(0x22BCE0); PUSH32(esp, 0x0016F756u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F750u); } /* indirect call */
    }

loc_0016F756: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    edi = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x16E540);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BCEC); PUSH32(esp, 0x0016F76Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F767u); } /* indirect call */
    }

loc_0016F76D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BCE8); PUSH32(esp, 0x0016F774u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F76Eu); } /* indirect call */
    }

loc_0016F774: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F77F(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0016F778(); return; /* fallthrough 0x0016F778 */

}

/**
 * sub_0016F778
 * Original: 0x0016F778 - 0x0016F77F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F778: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0016F825(); return; /* tail jmp 0x0016F825 */

}

/**
 * sub_0016F77F
 * Original: 0x0016F77F - 0x0016F825 (166 bytes, 55 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F77F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F77F: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x168) = MEM32(esi + 0x168) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x168)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x164;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(eax) = 0x16E9A0;
    { uint32_t _icall_target = MEM32(0x22BCC0); PUSH32(esp, 0x0016F79Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F794u); } /* indirect call */
    }

loc_0016F79A: ;
    ecx = esi;
    PUSH32(esp, 0x0016F7A1u); RECOMP_ABI_CALL(0x0016F1B2u, sub_0016F1B2); /* call 0x0016F1B2 */

loc_0016F7A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F778(); return; } /* je: equal / zero */

loc_0016F7A5: ;
    eax = esi + 0x2DC;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 2;
    edx = 0x100;

loc_0016F7BA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016F7BC: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0xFFFFFF00u;
    MEM8(edi + ecx) = LO8(eax);
    edi = 0x100;
    MEM8(ecx) = LO8(eax);
    MEM8(edi + ecx) = LO8(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0016F7BC; /* jb: below (unsigned <) */

loc_0016F7D8: ;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0x300)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x300;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016F7BA; /* jne: not equal / not zero */

loc_0016F7E4: ;
    edi = MEM32(0x22BD3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    SET_LO16(edx, 0x80C0);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 4);
    xbox_PortOut((edx & 0xFFFFu), (uint32_t)(LO8(eax)), 1); /* out dx, al */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0016F800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F7FEu); } /* indirect call */
    }

loc_0016F800: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -5) = MEM8(ebp + -5) | 0x1F;
    _fa = (uint32_t)(MEM8(ebp + -5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0016F812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016F810u); } /* indirect call */
    }

loc_0016F812: ;
    ecx = esi;
    MEM32(esi + 0xA0) = ebx;
    PUSH32(esp, 0x0016F81Fu); RECOMP_ABI_CALL(0x0016F235u, sub_0016F235); /* call 0x0016F235 */

loc_0016F81F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

    g_seh_ebp = ebp; sub_0016F825(); return; /* fallthrough 0x0016F825 */

}

/**
 * sub_0016F825
 * Original: 0x0016F825 - 0x0016F826 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F825: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_0016F826(); return; /* fallthrough 0x0016F826 */

}

/**
 * sub_0016F826
 * Original: 0x0016F826 - 0x0016F82A (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F826: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0016F82A
 * Original: 0x0016F82A - 0x0016F8B4 (138 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016F82A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F82A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F841u); RECOMP_ABI_CALL(0x0016F486u, sub_0016F486); /* call 0x0016F486 */

loc_0016F841: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0xC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -20) = eax;
    eax = 0x1FFC;
    ecx = edi * 4 + 0x10;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0xEA0000;
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -12) = ecx;
    ecx = edi * 4 + 0x30;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = edx + ecx + -1;
    MEM32(ebp + -16) = ecx;
    ecx = edi * 4 + 0x50;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi + 0x10024;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = edi + 0x40090;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    eax = edi;
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -4) = eax;

    g_seh_ebp = ebp; sub_0016F8B4(); return; /* fallthrough 0x0016F8B4 */

}

/**
 * sub_0016F8B4
 * Original: 0x0016F8B4 - 0x0016F8EE (58 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F8B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F8B4: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x0016F8BCu); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_0016F8BC: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x100244) = edx;
    MEM32(eax + 0x100248) = ecx;
    MEM32(eax + 0x400904) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0x400908) = ecx;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F8EE(); return; } /* je: equal / zero */

loc_0016F8E9: ;
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_0016F8F1(); return; /* tail jmp 0x0016F8F1 */

}

/**
 * sub_0016F8EE
 * Original: 0x0016F8EE - 0x0016F8F1 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F8EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F8EE: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0016F8F1(); return; /* fallthrough 0x0016F8F1 */

}

/**
 * sub_0016F8F1
 * Original: 0x0016F8F1 - 0x0016FA18 (295 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F8F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F8F1: ;
    MEM32(edx) = eax;
    edx = MEM32(ebp + 8);
    MEM32(edx) = eax;
    edx = MEM32(ebp + -12);
    MEM32(esi + 0x400750) = edx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0x400750) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0x400750) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x400754) = ecx;
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F8B4(); return; } /* jne: not equal / not zero */

loc_0016F934: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x100248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x400908)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x400908) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F8B4(); return; } /* jne: not equal / not zero */

loc_0016F949: ;
    eax = ecx;
    ecx = MEM32(eax + 0x100244);
    eax = MEM32(eax + 0x400904);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFC000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFC000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0016F8B4(); return; } /* jne: not equal / not zero */

loc_0016F964: ;
    ecx = 0x80000000u;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x18), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016FA05; /* je: equal / zero */

loc_0016F972: ;
    eax = MEM32(ebp + 0x1C);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x4000000;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x18), ecx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0016F98C; /* je: equal / zero */

loc_0016F987: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = eax;

loc_0016F98C: ;
    eax = edi * 4 + 0x90;
    eax = eax & 0x1FFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x18) = eax;
    ebx = esi + edi * 4 + 0x100300;

loc_0016F9A4: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x0016F9ACu); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_0016F9AC: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x18);
    MEM32(ebx) = eax;
    MEM32(esi + edi * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 4 + 0x400980)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 4 + 0x400980) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F9A4; /* jne: not equal / not zero */

loc_0016F9D2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FA05; /* je: equal / zero */

loc_0016F9D8: ;
    edi = edi | MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esi + 0x100324;
    edi = edi | 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = edi;
    edi = esi + 0x4009A0;

loc_0016F9F0: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x0016F9F8u); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_0016F9F8: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx) = eax;
    MEM32(edi) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F9F0; /* jne: not equal / not zero */

loc_0016FA05: ;
    eax = MEM32(ebp + -32);
    MEM32(esi + 0x3220) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0016FA18
 * Original: 0x0016FA18 - 0x0016FADA (194 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016FA18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016FA18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016FA2Fu); RECOMP_ABI_CALL(0x0016F486u, sub_0016F486); /* call 0x0016F486 */

loc_0016FA2F: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0x10024;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    ebx = edi * 4 + 0x10;
    ebx = ebx & 0x1FFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi + 0x40090;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0xEA0000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_0016FA61: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016FA69u); RECOMP_ABI_CALL(0x00173BBFu, sub_00173BBF); /* call 0x00173BBF */

loc_0016FA69: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(ecx) = edx;
    MEM32(esi + 0x400750) = ebx;
    MEM32(esi + 0x400754) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FA61; /* jne: not equal / not zero */

loc_0016FA87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi * 4 + 0x90;
    ecx = ecx & 0x1FFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + edi * 4 + 0x100300) = eax;
    ecx = ecx | 0xEA0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    MEM32(esi + edi * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016FAC7; /* je: equal / zero */

loc_0016FABB: ;
    MEM32(esi + 0x100324) = eax;
    MEM32(esi + 0x4009A0) = eax;

loc_0016FAC7: ;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x3220) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016FADA
 * Original: 0x0016FADA - 0x0016FB75 (155 bytes, 48 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016FADA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016FADA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = edi + 0x818;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FAFB; /* je: equal / zero */

loc_0016FAF3: ;
    MEM32(esi + 0x9140) = ebx;
    MEM32(eax) = ebx;

loc_0016FAFB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD2C); PUSH32(esp, 0x0016FB01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016FAFBu); } /* indirect call */
    }

loc_0016FB01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FB11; /* jne: not equal / not zero */

loc_0016FB05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD30); PUSH32(esp, 0x0016FB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016FB0Bu); } /* indirect call */
    }

loc_0016FB11: ;
    MEM32(ebp + -4) = ebx;

loc_0016FB14: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016FB20u); RECOMP_ABI_CALL(0x0016FA18u, sub_0016FA18); /* call 0x0016FA18 */

loc_0016FB20: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016FB14; /* jl: less (signed <) */

loc_0016FB29: ;
    MEM32(esi + 0x2044) = ebx;

loc_0016FB2F: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016FB4A; /* je: equal / zero */

loc_0016FB38: ;
    _fa = (uint32_t)(MEM8(esi + 0x2400)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2400), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016FB4A; /* je: equal / zero */

loc_0016FB41: ;
    _fa = (uint32_t)(MEM8(esi + 0x3220)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3220), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0016FB75(); return; } /* je: equal / zero */

loc_0016FB4A: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016FB51u); RECOMP_ABI_CALL(0x0016ED80u, sub_0016ED80); /* call 0x0016ED80 */

loc_0016FB51: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FB60; /* je: equal / zero */

loc_0016FB59: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016FB60u); RECOMP_ABI_CALL(0x0016ECD0u, sub_0016ECD0); /* call 0x0016ECD0 */

loc_0016FB60: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016FB2F; /* je: equal / zero */

loc_0016FB6C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016FB73u); RECOMP_ABI_CALL(0x0016E740u, sub_0016E740); /* call 0x0016E740 */

loc_0016FB73: ;
    goto loc_0016FB2F;

}

/**
 * sub_0016FB75
 * Original: 0x0016FB75 - 0x0016FC96 (289 bytes, 71 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FB75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016FB75: ;
    eax = esi + 0x3220;
    MEM32(eax) = ebx;

loc_0016FB7D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016FB7D; /* jne: not equal / not zero */

loc_0016FB82: ;
    MEM32(esi + 0x2500) = ebx;
    MEM32(esi + 0x3000) = ebx;
    MEM32(esi + 0x3050) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x3250) = ebx;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0016FBA9u); RECOMP_ABI_CALL(0x00173C37u, sub_00173C37); /* call 0x00173C37 */

loc_0016FBA9: ;
    MEM32(esi + 0x3210) = ebx;
    MEM32(esi + 0x3270) = ebx;
    eax = MEM32(esi + 0x2500);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x3200);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0x3250) = ebx;
    MEM32(ebp + -4) = ebx;

loc_0016FBE5: ;
    _fa = (uint32_t)(MEM32(edi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x108), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FC0C; /* je: equal / zero */

loc_0016FBED: ;
    ecx = MEM32(ebp + -4);
    eax = edi + 0x128;
    edx = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax + 0x10) = ebx;

loc_0016FC0C: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016FBE5; /* jb: below (unsigned <) */

loc_0016FC19: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0x3250) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x3200) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x2500) = eax;
    MEM32(esi + 0x2508) = ebx;
    MEM32(esi + 0x2140) = ebx;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x0016FC49u); RECOMP_ABI_CALL(0x00174E95u, sub_00174E95); /* call 0x00174E95 */

loc_0016FC49: ;
    eax = MEM32(edi + 0x14C);
    MEM32(esi + 0x100200) = eax;
    eax = MEM32(edi + 0x150);
    MEM32(esi + 0x100204) = eax;
    eax = MEM32(edi + 0x154);
    MEM32(esi + 0x200) = eax;
    eax = MEM32(edi + 0x158);
    MEM32(esi + 0x140) = eax;
    PUSH32(esp, ebx);
    eax = edi + 0x164;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCC0); PUSH32(esp, 0x0016FC87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016FC81u); } /* indirect call */
    }

loc_0016FC87: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BD40); PUSH32(esp, 0x0016FC91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016FC8Bu); } /* indirect call */
    }

loc_0016FC91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0016FCA0
 * Original: 0x0016FCA0 - 0x0016FCA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FCA0(void)
{

loc_0016FCA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016FCB0
 * Original: 0x0016FCB0 - 0x0016FCCE (30 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FCB0(void)
{

loc_0016FCB0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016FCD0
 * Original: 0x0016FCD0 - 0x0016FD17 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FCD0(void)
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

loc_0016FCD0: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    ecx = MEM32(ecx + 4);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = edx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x3F800000;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FD20
 * Original: 0x0016FD20 - 0x0016FD72 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FD20(void)
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

loc_0016FD20: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esi = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(eax + 0x10) = esi;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = edx;
    POP32(esp, esi);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = edx;
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x3F800000;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FD80
 * Original: 0x0016FD80 - 0x0016FDCE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016FD80(void)
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

loc_0016FD80: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esi = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(eax + 0x10) = esi;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = edx;
    POP32(esp, esi);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = edx;
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FDD0
 * Original: 0x0016FDD0 - 0x0016FE27 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016FDD0(void)
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

loc_0016FDD0: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esi = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(eax + 0x10) = esi;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = edx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx + 8);
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    MEM32(eax + 0x20) = esi;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = edx;
    POP32(esp, esi);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    ecx = MEM32(ecx + 0xC);
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = edx;
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FE30
 * Original: 0x0016FE30 - 0x0016FE7D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FE30(void)
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

loc_0016FE30: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    ecx = MEM32(ecx + 4);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = 0x3F800000;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FE80
 * Original: 0x0016FE80 - 0x0016FED9 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FE80(void)
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

loc_0016FE80: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = 0x3F800000;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FEE0
 * Original: 0x0016FEE0 - 0x0016FF35 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016FEE0(void)
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

loc_0016FEE0: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FF40
 * Original: 0x0016FF40 - 0x0016FF9F (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016FF40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016FF40: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = MEM32(eax);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 4);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    MEM32(ecx + 0x10) = edx;
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 8);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    MEM32(ecx + 0x20) = edx;
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    eax = MEM32(eax + 0xC);
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x30) = eax;
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016FFA0
 * Original: 0x0016FFA0 - 0x0017000E (110 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016FFA0: ;
    ecx = MEM32(0x180D54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00170037(); return; } /* je: equal / zero */

loc_0016FFB0: ;
    eax = MEM32(0x180D58);
    ecx = MEM32(0x180D5C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180D60);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180D64);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180D68);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180D6C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180D70);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180D74);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x180E48);
    ecx = MEM32(ecx + 0x794);

    g_seh_ebp = ebp; sub_0017000E(); return; /* fallthrough 0x0017000E */

}

/**
 * sub_0017000E
 * Original: 0x0017000E - 0x00170011 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017000E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017000E: ;
    ecx = MEM32(ecx + 4);

    g_seh_ebp = ebp; sub_00170011(); return; /* fallthrough 0x00170011 */

}

/**
 * sub_00170011
 * Original: 0x00170011 - 0x00170016 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170011(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170011: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00170019(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00170016(); return; /* fallthrough 0x00170016 */

}

/**
 * sub_00170016
 * Original: 0x00170016 - 0x00170019 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170016(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170016: ;
    eax = eax & 0xFFFFFFAAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00170019(); return; /* fallthrough 0x00170019 */

}

/**
 * sub_00170019
 * Original: 0x00170019 - 0x00170037 (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170019(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170019: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00170023; /* jne: not equal / not zero */

loc_0017001E: ;
    eax = eax & 0xFFFFFF55u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00170023: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017002D; /* jne: not equal / not zero */

loc_00170028: ;
    eax = eax & 0xFFFFAAFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0017002D: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00170037(); return; } /* jne: not equal / not zero */

loc_00170032: ;
    eax = eax & 0xFFFF55FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00170037(); return; /* fallthrough 0x00170037 */

}

/**
 * sub_00170037
 * Original: 0x00170037 - 0x00170038 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170037(void)
{

loc_00170037: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00170040
 * Original: 0x00170040 - 0x00170047 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170040(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00170040: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00170050
 * Original: 0x00170050 - 0x0017006F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00170050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00170050: ;
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
