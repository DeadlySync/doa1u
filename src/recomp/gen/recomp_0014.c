/**
 * DOAU1 - Recompiled code chunk 14
 * Functions: 250 (0x000836F0 - 0x0008C224)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000836F0
 * Original: 0x000836F0 - 0x000836F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000836F0: ;
    g_seh_ebp = ebp; sub_000B86C4(); return; /* tail jmp 0x000B86C4 */

}

/**
 * sub_00083700
 * Original: 0x00083700 - 0x00083705 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083700: ;
    g_seh_ebp = ebp; sub_000B86C9(); return; /* tail jmp 0x000B86C9 */

}

/**
 * sub_00083710
 * Original: 0x00083710 - 0x00083715 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083710: ;
    g_seh_ebp = ebp; sub_000B889C(); return; /* tail jmp 0x000B889C */

}

/**
 * sub_00083720
 * Original: 0x00083720 - 0x00083725 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083720: ;
    g_seh_ebp = ebp; sub_000B86E9(); return; /* tail jmp 0x000B86E9 */

}

/**
 * sub_00083730
 * Original: 0x00083730 - 0x00083735 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083730: ;
    g_seh_ebp = ebp; sub_000B88A1(); return; /* tail jmp 0x000B88A1 */

}

/**
 * sub_00083740
 * Original: 0x00083740 - 0x00083745 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083740: ;
    g_seh_ebp = ebp; sub_000B86EE(); return; /* tail jmp 0x000B86EE */

}

/**
 * sub_00083750
 * Original: 0x00083750 - 0x00083755 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083750: ;
    g_seh_ebp = ebp; sub_000B86F8(); return; /* tail jmp 0x000B86F8 */

}

/**
 * sub_00083760
 * Original: 0x00083760 - 0x00083765 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083760: ;
    g_seh_ebp = ebp; sub_000B86FD(); return; /* tail jmp 0x000B86FD */

}

/**
 * sub_00083770
 * Original: 0x00083770 - 0x00083796 (38 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083770: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x00083793u); RECOMP_ABI_CALL(0x000B8702u, sub_000B8702); /* call 0x000B8702 */

loc_00083793: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000837A0
 * Original: 0x000837A0 - 0x000837C6 (38 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000837A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000837A0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x000837C3u); RECOMP_ABI_CALL(0x000B871Eu, sub_000B871E); /* call 0x000B871E */

loc_000837C3: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000837D0
 * Original: 0x000837D0 - 0x00083800 (48 bytes, 16 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000837D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000837D0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000837FDu); RECOMP_ABI_CALL(0x000B873Fu, sub_000B873F); /* call 0x000B873F */

loc_000837FD: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00083830
 * Original: 0x00083830 - 0x00083860 (48 bytes, 16 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083830: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0008385Du); RECOMP_ABI_CALL(0x000B877Fu, sub_000B877F); /* call 0x000B877F */

loc_0008385D: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000838A0
 * Original: 0x000838A0 - 0x000838A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000838A0: ;
    g_seh_ebp = ebp; sub_000B87F6(); return; /* tail jmp 0x000B87F6 */

}

/**
 * sub_000838B0
 * Original: 0x000838B0 - 0x000838B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000838B0: ;
    g_seh_ebp = ebp; sub_000B87FF(); return; /* tail jmp 0x000B87FF */

}

/**
 * sub_000838C0
 * Original: 0x000838C0 - 0x000838C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000838C0: ;
    g_seh_ebp = ebp; sub_000B8808(); return; /* tail jmp 0x000B8808 */

}

/**
 * sub_000838D0
 * Original: 0x000838D0 - 0x000838EE (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000838D0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000838F0
 * Original: 0x000838F0 - 0x000838F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838F0(void)
{

loc_000838F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00083900
 * Original: 0x00083900 - 0x0008390A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083900(void)
{

loc_00083900: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083910
 * Original: 0x00083910 - 0x0008391A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083910(void)
{

loc_00083910: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083920
 * Original: 0x00083920 - 0x00083924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083920(void)
{

loc_00083920: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00083930
 * Original: 0x00083930 - 0x0008393A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083930(void)
{

loc_00083930: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083940
 * Original: 0x00083940 - 0x0008394A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083940(void)
{

loc_00083940: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083950
 * Original: 0x00083950 - 0x00083954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083950(void)
{

loc_00083950: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00083960
 * Original: 0x00083960 - 0x00083964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083960(void)
{

loc_00083960: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00083970
 * Original: 0x00083970 - 0x00083973 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083970(void)
{

loc_00083970: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00083980
 * Original: 0x00083980 - 0x000839D1 (81 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083980(void)
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

loc_00083980: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00083997; /* jp: parity */

loc_00083991: ;
    eax = 0xFFFFD8F0u;
    esp += 4; return; /* ret */

loc_00083997: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C8D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c8d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000839B0; /* jne: not equal / not zero */

loc_000839A8: ;
    MEM32(esp + 4) = 0x42C80000;

loc_000839B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x232578)); /* fmul dword ptr [0x232578] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C8D4)); /* fmul dword ptr [0x22c8d4] */
    g_seh_ebp = ebp; sub_001502D0(); return; /* tail jmp 0x001502D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000839E0
 * Original: 0x000839E0 - 0x00083A77 (151 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000839E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000839E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000839FE; /* je: equal / zero */

loc_000839E8: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000839F8u); RECOMP_ABI_CALL(0x000B88A1u, sub_000B88A1); /* call 0x000B88A1 */

loc_000839F8: ;
    MEM32(esi) = 0;

loc_000839FE: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = 0;
    edx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083A20u); RECOMP_ABI_CALL(0x000B86E9u, sub_000B86E9); /* call 0x000B86E9 */

loc_00083A20: ;
    eax = MEM32(0x2820C8);
    ecx = MEM32(esi + 8);
    edx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083A36u); RECOMP_ABI_CALL(0x000B86EEu, sub_000B86EE); /* call 0x000B86EE */

loc_00083A36: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(0x91E258);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083A4Au); RECOMP_ABI_CALL(0x000B86FDu, sub_000B86FD); /* call 0x000B86FD */

loc_00083A4A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x91E258);
    PUSH32(esp, 0x91E2B4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083A5Fu); RECOMP_ABI_CALL(0x000B86F8u, sub_000B86F8); /* call 0x000B86F8 */

loc_00083A5F: ;
    MEM32(esi) = 1;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083A80
 * Original: 0x00083A80 - 0x00083AA1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083A80(void)
{

loc_00083A80: ;
    edx = MEM32(ecx + 0x10);
    eax = ecx + 0x10;
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0x1C) = edx;
    ecx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083AA0u); RECOMP_ABI_CALL(0x000B86FDu, sub_000B86FD); /* call 0x000B86FD */

loc_00083AA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083AB0
 * Original: 0x00083AB0 - 0x00083AC6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AB0(void)
{

loc_00083AB0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(0x91E258);
    PUSH32(esp, 0x91E2B4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083AC5u); RECOMP_ABI_CALL(0x000B86F8u, sub_000B86F8); /* call 0x000B86F8 */

loc_00083AC5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083AD0
 * Original: 0x00083AD0 - 0x00083AE8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AD0(void)
{

loc_00083AD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    edx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083AE5u); RECOMP_ABI_CALL(0x000B86EEu, sub_000B86EE); /* call 0x000B86EE */

loc_00083AE5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083AF0
 * Original: 0x00083AF0 - 0x00083B10 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083B08; /* je: equal / zero */

loc_00083AF8: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083B08u); RECOMP_ABI_CALL(0x000B88A1u, sub_000B88A1); /* call 0x000B88A1 */

loc_00083B08: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083B10
 * Original: 0x00083B10 - 0x00083B3D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083B10: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083B3C; /* je: equal / zero */

loc_00083B18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x91E258);
    PUSH32(esp, edx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x00083B3Cu); RECOMP_ABI_CALL(0x000B8763u, sub_000B8763); /* call 0x000B8763 */

loc_00083B3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083B40
 * Original: 0x00083B40 - 0x00083B84 (68 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083B6C; /* je: equal / zero */

loc_00083B48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 8;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083B6Cu); RECOMP_ABI_CALL(0x000B871Eu, sub_000B871E); /* call 0x000B871E */

loc_00083B6C: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    MEM32(esi + 0x18) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083B90
 * Original: 0x00083B90 - 0x00083BF0 (96 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B90(void)
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

loc_00083B90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00083B98u); RECOMP_ABI_CALL(0x0004DBE0u, sub_0004DBE0); /* call 0x0004DBE0 */

loc_00083B98: ;
    ebx = eax;
    PUSH32(esp, 0x00083B9Fu); RECOMP_ABI_CALL(0x0004DBF0u, sub_0004DBF0); /* call 0x0004DBF0 */

loc_00083B9F: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083BB3; /* jge: greater or equal (signed >=) */

loc_00083BAD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00083BB3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236608)); /* fmul dword ptr [0x236608] */
    PUSH32(esp, 0x00083BC4u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00083BC4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00083BEC; /* je: equal / zero */

loc_00083BCC: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00083BD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    edx = esi + edi;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00083BE5u); RECOMP_ABI_CALL(0x001AB0B7u, sub_001AB0B7); /* call 0x001AB0B7 */

loc_00083BE5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00083BD0; /* jb: below (unsigned <) */

loc_00083BEB: ;
    POP32(esp, esi);

loc_00083BEC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083BF0
 * Original: 0x00083BF0 - 0x00083C24 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083C22; /* je: equal / zero */

loc_00083BF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 8;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083C1Cu); RECOMP_ABI_CALL(0x000B871Eu, sub_000B871E); /* call 0x000B871E */

loc_00083C1C: ;
    MEM32(esi) = 0;

loc_00083C22: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083C30
 * Original: 0x00083C30 - 0x00083C63 (51 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083C30: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083C60; /* je: equal / zero */

loc_00083C35: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(0x91E258);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083C60u); RECOMP_ABI_CALL(0x000B873Fu, sub_000B873F); /* call 0x000B873F */

loc_00083C60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083C70
 * Original: 0x00083C70 - 0x00083D41 (209 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083C70: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00083D3C; /* je: equal / zero */

loc_00083C7B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ecx + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00083CE0; /* jne: not equal / not zero */

loc_00083C86: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083CADu); RECOMP_ABI_CALL(0x000B87C3u, sub_000B87C3); /* call 0x000B87C3 */

loc_00083CAD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00083CB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083CD5u); RECOMP_ABI_CALL(0x000B87C3u, sub_000B87C3); /* call 0x000B87C3 */

loc_00083CD5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00083CB0; /* jl: less (signed <) */

loc_00083CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00083CE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(0x91E258);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083D07u); RECOMP_ABI_CALL(0x000B87C3u, sub_000B87C3); /* call 0x000B87C3 */

loc_00083D07: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00083D10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083D36u); RECOMP_ABI_CALL(0x000B87C3u, sub_000B87C3); /* call 0x000B87C3 */

loc_00083D36: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00083D10; /* jl: less (signed <) */

loc_00083D3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083D50
 * Original: 0x00083D50 - 0x00083D73 (35 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x91E368;
    ebx = 7;
    /* nop */

loc_00083D60: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00083D68u); RECOMP_ABI_CALL(0x00083B40u, sub_00083B40); /* call 0x00083B40 */

loc_00083D68: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00083D60; /* jne: not equal / not zero */

loc_00083D6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00083D80
 * Original: 0x00083D80 - 0x00083D92 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00083D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083D80: ;
    MEM32(0x91E258) = 0;
    PUSH32(esp, 0x00083D8Fu); RECOMP_ABI_CALL(0x00083670u, sub_00083670); /* call 0x00083670 */

loc_00083D8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00083DA0
 * Original: 0x00083DA0 - 0x00083DB3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083DA0: ;
    eax = MEM32(0x91E2C4);
    ecx = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x91E2F4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00083DC0
 * Original: 0x00083DC0 - 0x00083E1F (95 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083DC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x91E370;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00083DD4: ;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083DF3; /* jne: not equal / not zero */

loc_00083DDA: ;
    ebp = eax;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    esi = MEM32(ebp + 4);
    ebp = MEM32(ebp + 8);
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00083DF3; /* jne: not equal / not zero */

loc_00083DED: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083E0A; /* je: equal / zero */

loc_00083DF3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00083DD4; /* jb: below (unsigned <) */

loc_00083E02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00083E0A: ;
    eax = MEM32(esp + 0x28);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    MEM32(edi + 0x91E36C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00083E20
 * Original: 0x00083E20 - 0x00083E6F (79 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083E20: ;
    PUSH32(esp, edi);
    ecx = 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x91E280;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM32(0x91E2EC) = edx;
    MEM32(0x91E30C) = edx;
    MEM32(0x91E32C) = edx;
    MEM32(0x91E34C) = edx;
    MEM32(0x91E2C8) = edx;
    MEM32(0x91E274) = edx;
    MEM32(0x91E2D0) = 0xFFFFFFFFu;
    MEM32(0x91E2C4) = edx;
    MEM32(0x91E2CC) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083E70
 * Original: 0x00083E70 - 0x00083ED7 (103 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083E70: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + 0x91E2F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 1;
    MEM32(0x91E2C8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00083E9D; /* jne: not equal / not zero */

loc_00083E8F: ;
    MEM32(eax + 0x91E2EC) = esi;
    MEM32(0x91E2D0) = ecx;
    goto loc_00083EC2;

loc_00083E9D: ;
    MEM32(0x91E274) = esi;
    PUSH32(esp, 0x00083EA8u); RECOMP_ABI_CALL(0x0007D810u, sub_0007D810); /* call 0x0007D810 */

loc_00083EA8: ;
    ecx = eax;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + 0x91E2F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083ED5; /* jne: not equal / not zero */

loc_00083EB7: ;
    MEM32(ecx + 0x91E2EC) = esi;
    MEM32(0x91E2D0) = eax;

loc_00083EC2: ;
    PUSH32(esp, esi);
    MEM32(0x91E274) = 0;
    PUSH32(esp, 0x00083ED2u); RECOMP_ABI_CALL(0x00080120u, sub_00080120); /* call 0x00080120 */

loc_00083ED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083ED5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083EE0
 * Original: 0x00083EE0 - 0x00083F41 (97 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083EE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0x91E370;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00083EF4: ;
    ebp = eax;
    esi = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    edi = MEM32(ebp + 4);
    ebp = MEM32(ebp + 8);
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00083F0D; /* jne: not equal / not zero */

loc_00083F07: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083F29; /* je: equal / zero */

loc_00083F0D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00083EF4; /* jb: below (unsigned <) */

loc_00083F1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x80004005u;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00083F29: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(0x91E368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E368;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00083F37u); RECOMP_ABI_CALL(0x00083BF0u, sub_00083BF0); /* call 0x00083BF0 */

loc_00083F37: ;
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
 * sub_00083F50
 * Original: 0x00083F50 - 0x00083FE8 (152 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083F50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00083F58u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00083F58: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083F67; /* je: equal / zero */

loc_00083F61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00083F67: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x91E370;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_00083F78: ;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083F9E; /* jne: not equal / not zero */

loc_00083F7E: ;
    ebp = eax;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    esi = MEM32(ebp + 4);
    ebp = MEM32(ebp + 8);
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00083F9E; /* jne: not equal / not zero */

loc_00083F91: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083F9E; /* jne: not equal / not zero */

loc_00083F97: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083FBA; /* je: equal / zero */

loc_00083F9E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00083F78; /* jb: below (unsigned <) */

loc_00083FAD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00083FBA: ;
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00083FDE; /* jbe: below or equal (unsigned <=) */

loc_00083FC2: ;
    esi = MEM32(esp + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ebx = edx + 0x91E368;
    /* nop */

loc_00083FD0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00083FD8u); RECOMP_ABI_CALL(0x00083C30u, sub_00083C30); /* call 0x00083C30 */

loc_00083FD8: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00083FD0; /* jne: not equal / not zero */

loc_00083FDE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00083FF0
 * Original: 0x00083FF0 - 0x00084061 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083FF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00083FF8u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00083FF8: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008405D; /* jne: not equal / not zero */

loc_00084001: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00084004: ;
    _fa = (uint32_t)(MEM32(esi + 0x91E368)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x91E368), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084051; /* jne: not equal / not zero */

loc_0008400D: ;
    eax = MEM32(esi + 0x91E36C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084051; /* jne: not equal / not zero */

loc_00084017: ;
    eax = esi + 0x91E370;
    edx = eax;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00084032u); RECOMP_ABI_CALL(0x00071870u, sub_00071870); /* call 0x00071870 */

loc_00084032: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084051; /* je: equal / zero */

loc_00084039: ;
    ecx = MEM32(0x91E2C4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x91E280);
    PUSH32(esp, 0x0008404Eu); RECOMP_ABI_CALL(0x0007D060u, sub_0007D060); /* call 0x0007D060 */

loc_0008404E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00084051: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084004; /* jb: below (unsigned <) */

loc_0008405C: ;
    POP32(esp, esi);

loc_0008405D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084070
 * Original: 0x00084070 - 0x000840AB (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084070: ;
    eax = MEM32(0x91E278);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000840A9; /* je: equal / zero */

loc_0008407E: ;
    PUSH32(esp, esi);
    esi = 0x91E368;

loc_00084084: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008408Cu); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_0008408C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91E42C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91E42C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00084084; /* jl: less (signed <) */

loc_00084097: ;
    PUSH32(esp, edi);
    ecx = 0x91E42C;
    PUSH32(esp, 0x000840A2u); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_000840A2: ;
    MEM32(0x91E278) = edi;
    POP32(esp, esi);

loc_000840A9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000840B0
 * Original: 0x000840B0 - 0x000841C0 (272 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000840B0(void)
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

loc_000840B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000840CB; /* jp: parity */

loc_000840C1: ;
    MEM32(esp + 4) = 0xBF800000u;
    goto loc_000840E4;

loc_000840CB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000840E4; /* jne: not equal / not zero */

loc_000840DC: ;
    MEM32(esp + 4) = 0x3F800000;

loc_000840E4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000840FF; /* jp: parity */

loc_000840F5: ;
    MEM32(esp + 8) = 0xBF800000u;
    goto loc_00084118;

loc_000840FF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084118; /* jne: not equal / not zero */

loc_00084110: ;
    MEM32(esp + 8) = 0x3F800000;

loc_00084118: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00084133; /* jp: parity */

loc_00084129: ;
    MEM32(esp + 0xC) = 0xBF800000u;
    goto loc_0008414C;

loc_00084133: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008414C; /* jne: not equal / not zero */

loc_00084144: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_0008414C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00084167; /* jp: parity */

loc_0008415D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_0008417C;

loc_00084167: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008417C; /* jne: not equal / not zero */

loc_00084174: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D0)); /* fld float */

loc_0008417C: ;
    eax = MEM32(esp + 4);
    MEMF(0x91E2C0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x91E2B4) = eax;
    MEM32(0x91E2B8) = ecx;
    MEM32(0x91E2BC) = edx;
    esi = 0x91E2E8;
    edi = 4;
    goto loc_000841B0;

    /* nop */

loc_000841B0: ;
    ecx = esi;
    PUSH32(esp, 0x000841B7u); RECOMP_ABI_CALL(0x00083AB0u, sub_00083AB0); /* call 0x00083AB0 */

loc_000841B7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000841B0; /* jne: not equal / not zero */

loc_000841BD: ;
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
 * sub_000841C0
 * Original: 0x000841C0 - 0x00084210 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000841C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000841C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000841F4; /* jae: above or equal (unsigned >=) */

loc_000841C9: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x236578) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x236578;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(0x91E2B4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(0x91E2B8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(0x91E2BC) = ecx;
    MEM32(0x91E2C0) = edx;

loc_000841F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x91E2E8;
    edi = 4;

loc_00084200: ;
    ecx = esi;
    PUSH32(esp, 0x00084207u); RECOMP_ABI_CALL(0x00083AB0u, sub_00083AB0); /* call 0x00083AB0 */

loc_00084207: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084200; /* jne: not equal / not zero */

loc_0008420D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084210
 * Original: 0x00084210 - 0x0008429C (140 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084210: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebp;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0008423F; /* jne: not equal / not zero */

loc_00084222: ;
    ecx = MEM32(0x91E2D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008423F; /* je: equal / zero */

loc_0008422D: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x91E2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E2E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000835A0(); return; /* tail jmp 0x000835A0 */

loc_0008423F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x91E370;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_00084250;

    /* nop */

loc_00084250: ;
    _fa = (uint32_t)(MEM32(edx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + -8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008426E; /* jne: not equal / not zero */

loc_00084256: ;
    eax = edx;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ebx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008426E; /* jne: not equal / not zero */

loc_00084268: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084287; /* je: equal / zero */

loc_0008426E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084250; /* jb: below (unsigned <) */

loc_0008427D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00084287: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x91E368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E368;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00083B10(); return; /* tail jmp 0x00083B10 */

}

/**
 * sub_000842A0
 * Original: 0x000842A0 - 0x00084303 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000842A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000842A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x91E2D0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000842B6; /* jne: not equal / not zero */

loc_000842AD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    goto loc_000842BC;

loc_000842B6: ;
    edi = MEM32(0x91E278);

loc_000842BC: ;
    eax = MEM32(0x91E258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000842F6; /* je: equal / zero */

loc_000842C5: ;
    eax = MEM32(0x2821B0);
    ecx = esi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x91E2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E2E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000842DBu); RECOMP_ABI_CALL(0x00083AD0u, sub_00083AD0); /* call 0x00083AD0 */

loc_000842DB: ;
    ecx = MEM32(0x91E260);
    edx = MEM32(0x91E264);
    eax = MEM32(0x91E258);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000842F6u); RECOMP_ABI_CALL(0x000B87FFu, sub_000B87FF); /* call 0x000B87FF */

loc_000842F6: ;
    POP32(esp, edi);
    MEM32(0x91E27C) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084310
 * Original: 0x00084310 - 0x00084394 (132 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084310: ;
    eax = MEM32(0x91E258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084393; /* je: equal / zero */

loc_00084319: ;
    _fa = (uint32_t)(MEM32(0x91E2D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E2D0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084393; /* je: equal / zero */

loc_00084322: ;
    ecx = MEM32(0x91E264);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(0x91E260);
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
    ecx = MEM32(0x91E2D0);
    eax = MEM32(0x2821B0);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x91E2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E2E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00084359u); RECOMP_ABI_CALL(0x00083AD0u, sub_00083AD0); /* call 0x00083AD0 */

loc_00084359: ;
    ecx = MEM32(0x91E260);
    edx = MEM32(0x91E264);
    eax = MEM32(0x91E2D0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91E258);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3A98);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008437Eu); RECOMP_ABI_CALL(0x000B87F6u, sub_000B87F6); /* call 0x000B87F6 */

loc_0008437E: ;
    MEM32(0x91E27C) = 1;
    MEM32(0x91E25C) = 0;
    POP32(esp, edi);

loc_00084393: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000843A0
 * Original: 0x000843A0 - 0x000843E6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000843A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000843A0: ;
    ecx = MEM32(0x91E258);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000843E5; /* je: equal / zero */

loc_000843AA: ;
    eax = MEM32(0x91E2D0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000843C1u); RECOMP_ABI_CALL(0x000B8808u, sub_000B8808); /* call 0x000B8808 */

loc_000843C1: ;
    eax = MEM32(0x91E27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000843D6; /* jne: not equal / not zero */

loc_000843CB: ;
    MEM32(0x91E27C) = 2;
    esp += 4; return; /* ret */

loc_000843D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000843E5; /* jne: not equal / not zero */

loc_000843DB: ;
    MEM32(0x91E27C) = 5;

loc_000843E5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000843F0
 * Original: 0x000843F0 - 0x000843F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000843F0(void)
{

loc_000843F0: ;
    eax = ecx;
    MEM32(eax) = 0x23660C;
    esp += 4; return; /* ret */

}

/**
 * sub_00084400
 * Original: 0x00084400 - 0x00084408 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084400(void)
{

loc_00084400: ;
    eax = 0x80004001u;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00084410
 * Original: 0x00084410 - 0x00084418 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084410(void)
{

loc_00084410: ;
    eax = 0x80004001u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00084420
 * Original: 0x00084420 - 0x00084428 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084420(void)
{

loc_00084420: ;
    eax = 0x80004001u;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00084430
 * Original: 0x00084430 - 0x000844A5 (117 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00084430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084430: ;
    eax = MEM32(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x91E2EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x91E2EC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000844A0; /* jne: not equal / not zero */

loc_00084440: ;
    eax = MEM32(0x91E2C4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + eax * 4;
    edi = edi * 2 + 0x91E280;
    esi = ebx;
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
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
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
    MEM32(0x91E2C4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00084484; /* jne: not equal / not zero */

loc_00084475: ;
    PUSH32(esp, 0x0008447Au); RECOMP_ABI_CALL(0x00083FF0u, sub_00083FF0); /* call 0x00083FF0 */

loc_0008447A: ;
    MEM32(0x91E2C4) = 0;

loc_00084484: ;
    _fa = (uint32_t)(MEM32(0x91E270)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E270), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084498; /* jne: not equal / not zero */

loc_0008448D: ;
    PUSH32(esp, ebx);
    ecx = 0x91E42C;
    PUSH32(esp, 0x00084498u); RECOMP_ABI_CALL(0x00083C30u, sub_00083C30); /* call 0x00083C30 */

loc_00084498: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000844A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000844B0
 * Original: 0x000844B0 - 0x000844F5 (69 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000844B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000844B0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x2820C8);
    eax = MEM32(esp + 0xC);
    MEM32(0x91E26C) = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x91E2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E2E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E268) = eax;
    PUSH32(esp, 0x000844DCu); RECOMP_ABI_CALL(0x00083AD0u, sub_00083AD0); /* call 0x00083AD0 */

loc_000844DC: ;
    MEM32(0x91E27C) = 3;
    MEM32(0x91E25C) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00084500
 * Original: 0x00084500 - 0x00084545 (69 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00084500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084500: ;
    eax = MEM32(0x91E27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008451E; /* je: equal / zero */

loc_0008450A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008451E; /* je: equal / zero */

loc_0008450F: ;
    MEM32(0x91E27C) = 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0008451E: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x2820C8);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x91E2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x91E2E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E27C) = 6;
    PUSH32(esp, 0x00084540u); RECOMP_ABI_CALL(0x00083AD0u, sub_00083AD0); /* call 0x00083AD0 */

loc_00084540: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084550
 * Original: 0x00084550 - 0x00084687 (311 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084550(void)
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

loc_00084550: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084582; /* je: equal / zero */

loc_0008455E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 8;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00084582u); RECOMP_ABI_CALL(0x000B871Eu, sub_000B871E); /* call 0x000B871E */

loc_00084582: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    ebp = edi + 8;
    esi = ebp;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    edx = MEM32(0x91E258);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000845B4u); RECOMP_ABI_CALL(0x000B8702u, sub_000B8702); /* call 0x000B8702 */

loc_000845B4: ;
    esi = MEM32(edi + 0x18);
    eax = esp + 0x18;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 1;
    MEM32(esp + 0x10) = 4;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x1A;
    MEM32(esp + 0x20) = 0x19;
    MEM32(esp + 0x28) = 0x18;
    MEM32(esp + 0x30) = 0x17;
    _fb = (uint32_t)(0x2E6760) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E6760;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00084600;

    /* nop */

loc_00084600: ;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C8D4)); /* fmul dword ptr [0x22c8d4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00084611u); RECOMP_ABI_CALL(0x00083980u, sub_00083980); /* call 0x00083980 */

loc_00084611: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + ebx * 8 + 0x1C) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084600; /* jb: below (unsigned <) */

loc_00084621: ;
    eax = MEM32(ebp);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0008464Au); RECOMP_ABI_CALL(0x000B877Fu, sub_000B877F); /* call 0x000B877F */

loc_0008464A: ;
    eax = MEM32(0x91E278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084670; /* jne: not equal / not zero */

loc_00084653: ;
    _fa = (uint32_t)(MEM32(0x91E2D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E2D0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084670; /* je: equal / zero */

loc_0008465C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00084666u); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_00084666: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00084670: ;
    eax = 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008467Du); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_0008467D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084690
 * Original: 0x00084690 - 0x00084730 (160 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x91E2E8;
    /* nop */

loc_000846A0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000846A8u); RECOMP_ABI_CALL(0x000839E0u, sub_000839E0); /* call 0x000839E0 */

loc_000846A8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000846A0; /* jb: below (unsigned <) */

loc_000846B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC;
    edi = 0x91E280;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, ebx);
    MEM32(0x91E2C8) = ebx;
    MEM32(0x91E274) = ebx;
    MEM32(0x91E2C4) = ebx;
    MEM32(0x91E2D0) = 0xFFFFFFFFu;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM32(0x91E2CC) = ebx;
    MEM32(0x91E278) = ebx;
    PUSH32(esp, 0x000846EFu); RECOMP_ABI_CALL(0x000841C0u, sub_000841C0); /* call 0x000841C0 */

loc_000846EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = 0x91E42C;
    PUSH32(esp, 0x000846FDu); RECOMP_ABI_CALL(0x00083B40u, sub_00083B40); /* call 0x00083B40 */

loc_000846FD: ;
    ecx = MEM32(0x91E2D4);
    edx = MEM32(0x91E2D8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(0x91E2DC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = 0x91E42C;
    PUSH32(esp, 0x00084726u); RECOMP_ABI_CALL(0x00084550u, sub_00084550); /* call 0x00084550 */

loc_00084726: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91E270) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084730
 * Original: 0x00084730 - 0x00084792 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00084730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084730: ;
    eax = MEM32(0x91E258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008478F; /* je: equal / zero */

loc_00084739: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x91E2E8;
    edi = 4;

loc_00084745: ;
    ecx = esi;
    PUSH32(esp, 0x0008474Cu); RECOMP_ABI_CALL(0x00083AF0u, sub_00083AF0); /* call 0x00083AF0 */

loc_0008474C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084745; /* jne: not equal / not zero */

loc_00084752: ;
    ecx = 0x91E42C;
    PUSH32(esp, 0x0008475Cu); RECOMP_ABI_CALL(0x00083BF0u, sub_00083BF0); /* call 0x00083BF0 */

loc_0008475C: ;
    esi = 0x91E368;
    edi = 7;

loc_00084766: ;
    ecx = esi;
    PUSH32(esp, 0x0008476Du); RECOMP_ABI_CALL(0x00083BF0u, sub_00083BF0); /* call 0x00083BF0 */

loc_0008476D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084766; /* jne: not equal / not zero */

loc_00084773: ;
    PUSH32(esp, 0x00084778u); RECOMP_ABI_CALL(0x00083E20u, sub_00083E20); /* call 0x00083E20 */

loc_00084778: ;
    eax = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084783u); RECOMP_ABI_CALL(0x000B8A72u, sub_000B8A72); /* call 0x000B8A72 */

loc_00084783: ;
    POP32(esp, edi);
    MEM32(0x91E258) = 0;
    POP32(esp, esi);

loc_0008478F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000847A0
 * Original: 0x000847A0 - 0x000847B9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000847A0: ;
    eax = MEM32(0x91E2C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000847B8; /* jbe: below or equal (unsigned <=) */

loc_000847A9: ;
    PUSH32(esp, 0x000847AEu); RECOMP_ABI_CALL(0x00083FF0u, sub_00083FF0); /* call 0x00083FF0 */

loc_000847AE: ;
    MEM32(0x91E2C4) = 0;

loc_000847B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000847C0
 * Original: 0x000847C0 - 0x000848B5 (245 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000847C0: ;
    eax = MEM32(0x91E258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000848F3(); return; } /* je: equal / zero */

loc_000847CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000847D5u); RECOMP_ABI_CALL(0x000B889Cu, sub_000B889C); /* call 0x000B889C */

loc_000847D5: ;
    esi = 0x91E2E8;
    edi = 4;
    /* nop */

loc_000847E0: ;
    ecx = esi;
    PUSH32(esp, 0x000847E7u); RECOMP_ABI_CALL(0x00083A80u, sub_00083A80); /* call 0x00083A80 */

loc_000847E7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000847E0; /* jne: not equal / not zero */

loc_000847ED: ;
    eax = MEM32(0x91E2C8);
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000848F0(); return; } /* jne: not equal / not zero */

loc_00084800: ;
    _fa = (uint32_t)(MEM32(0x91E274)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E274), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008487C; /* jne: not equal / not zero */

loc_00084808: ;
    PUSH32(esp, 0x0008480Du); RECOMP_ABI_CALL(0x0007D810u, sub_0007D810); /* call 0x0007D810 */

loc_0008480D: ;
    esi = eax;
    edx = esi;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + 0x91E2E8;
    PUSH32(esp, 0x0008481Fu); RECOMP_ABI_CALL(0x00083580u, sub_00083580); /* call 0x00083580 */

loc_0008481F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084874; /* jne: not equal / not zero */

loc_00084823: ;
    PUSH32(esp, ebx);
    MEM32(edx + 0x91E2EC) = ebx;
    MEM32(0x91E2D0) = esi;
    MEM32(0x91E274) = 0;
    PUSH32(esp, 0x0008483Fu); RECOMP_ABI_CALL(0x00080120u, sub_00080120); /* call 0x00080120 */

loc_0008483F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x91E368;
    edi = 7;
    /* nop */

loc_00084850: ;
    eax = MEM32(0x91E278);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008485Du); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_0008485D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084850; /* jne: not equal / not zero */

loc_00084863: ;
    ecx = MEM32(0x91E278);
    PUSH32(esp, ecx);
    ecx = 0x91E42C;
    PUSH32(esp, 0x00084874u); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_00084874: ;
    _fa = (uint32_t)(MEM32(0x91E274)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E274), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000848F0(); return; } /* je: equal / zero */

loc_0008487C: ;
    ecx = 0x91E2E8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00084883: ;
    PUSH32(esp, 0x00084888u); RECOMP_ABI_CALL(0x00083560u, sub_00083560); /* call 0x00083560 */

loc_00084888: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x91E274) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000848A1; /* jne: not equal / not zero */

loc_00084891: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084883; /* jb: below (unsigned <) */

loc_0008489F: ;
    g_seh_ebp = ebp; sub_000848CE(); return; /* tail jmp 0x000848CE */

loc_000848A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000848A8u); RECOMP_ABI_CALL(0x00080120u, sub_00080120); /* call 0x00080120 */

loc_000848A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x91E368;
    edi = 7;

    g_seh_ebp = ebp; sub_000848B5(); return; /* fallthrough 0x000848B5 */

}

/**
 * sub_000848B5
 * Original: 0x000848B5 - 0x000848F0 (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000848B5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000848BDu); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_000848BD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000848B5; /* jne: not equal / not zero */

loc_000848C3: ;
    PUSH32(esp, ebx);
    ecx = 0x91E42C;
    PUSH32(esp, 0x000848CEu); RECOMP_ABI_CALL(0x00083C70u, sub_00083C70); /* call 0x00083C70 */

loc_000848CE: ;
    eax = MEM32(0x91E2CC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(0x91E2CC) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000848F0(); return; } /* jb: below (unsigned <) */

loc_000848DE: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(0x91E2CC) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000847A0(); return; /* tail jmp 0x000847A0 */

}

/**
 * sub_000848CE
 * Original: 0x000848CE - 0x000848F0 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000848CE: ;
    eax = MEM32(0x91E2CC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(0x91E2CC) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000848F0(); return; } /* jb: below (unsigned <) */

loc_000848DE: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(0x91E2CC) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000847A0(); return; /* tail jmp 0x000847A0 */

}

/**
 * sub_000848F0
 * Original: 0x000848F0 - 0x000848F3 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000848F0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_000848F3(); return; /* fallthrough 0x000848F3 */

}

/**
 * sub_000848F3
 * Original: 0x000848F3 - 0x000848F4 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848F3(void)
{

loc_000848F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084900
 * Original: 0x00084900 - 0x0008497D (125 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084900: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00084910;

    /* nop */

loc_00084910: ;
    ecx = MEM32(eax + 0x91E368);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008492E; /* je: equal / zero */

loc_0008491A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084910; /* jb: below (unsigned <) */

loc_00084925: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008492E: ;
    edi = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ecx;
    ecx = esi + 0x91E368;
    PUSH32(esp, 0x00084955u); RECOMP_ABI_CALL(0x00084550u, sub_00084550); /* call 0x00084550 */

loc_00084955: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x91E37C) = edx;
    PUSH32(esp, 0x00084966u); RECOMP_ABI_CALL(0x0007E3D0u, sub_0007E3D0); /* call 0x0007E3D0 */

loc_00084966: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084977; /* je: equal / zero */

loc_0008496D: ;
    MEM32(esi + 0x91E36C) = 1;

loc_00084977: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084980
 * Original: 0x00084980 - 0x00084A1C (156 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084980: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00084992u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00084992: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00084A14; /* jbe: below or equal (unsigned <=) */

loc_00084996: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008499Cu); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_0008499C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084A02; /* je: equal / zero */

loc_000849A3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x91E370;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000849B0: ;
    _fa = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000849CF; /* jne: not equal / not zero */

loc_000849B6: ;
    ebp = ecx;
    esi = MEM32(ebp);
    edi = MEM32(ebp + 4);
    ebp = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000849CF; /* jne: not equal / not zero */

loc_000849CA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000849DE; /* je: equal / zero */

loc_000849CF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000849B0; /* jb: below (unsigned <) */

loc_000849DE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084A02; /* jne: not equal / not zero */

loc_000849E3: ;
    ecx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esp;
    MEM32(esi) = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, edx);
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x000849FFu); RECOMP_ABI_CALL(0x00084900u, sub_00084900); /* call 0x00084900 */

loc_000849FF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00084A02: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00084A10u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_00084A10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084996; /* jb: below (unsigned <) */

loc_00084A14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084A20
 * Original: 0x00084A20 - 0x00084B17 (247 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084A20: ;
    eax = MEM32(0x91E258);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084A31; /* je: equal / zero */

loc_00084A2C: ;
    PUSH32(esp, 0x00084A31u); RECOMP_ABI_CALL(0x00084730u, sub_00084730); /* call 0x00084730 */

loc_00084A31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = 8;
    MEM32(esp + 4) = 4;
    MEM32(esp) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00084A77u); RECOMP_ABI_CALL(0x0004DBC0u, sub_0004DBC0); /* call 0x0004DBC0 */

loc_00084A77: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00084A80u); RECOMP_ABI_CALL(0x0004DBD0u, sub_0004DBD0); /* call 0x0004DBD0 */

loc_00084A80: ;
    PUSH32(esp, 0x91E258);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = 0xA;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00084AABu); RECOMP_ABI_CALL(0x000B89CFu, sub_000B89CF); /* call 0x000B89CF */

loc_00084AAB: ;
    edx = MEM32(0x282224);
    eax = MEM32(0x91E258);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084ABDu); RECOMP_ABI_CALL(0x000B86C4u, sub_000B86C4); /* call 0x000B86C4 */

loc_00084ABD: ;
    ecx = MEM32(0x2820C8);
    edx = MEM32(0x91E258);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084AD0u); RECOMP_ABI_CALL(0x000B86C4u, sub_000B86C4); /* call 0x000B86C4 */

loc_00084AD0: ;
    eax = MEM32(0x2821B0);
    ecx = MEM32(0x91E258);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00084AE2u); RECOMP_ABI_CALL(0x000B86C4u, sub_000B86C4); /* call 0x000B86C4 */

loc_00084AE2: ;
    edx = MEM32(0x91E258);
    PUSH32(esp, 0x2E67D0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084AF3u); RECOMP_ABI_CALL(0x000B86C9u, sub_000B86C9); /* call 0x000B86C9 */

loc_00084AF3: ;
    eax = MEM32(0x91E258);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084B00u); RECOMP_ABI_CALL(0x000B87E7u, sub_000B87E7); /* call 0x000B87E7 */

loc_00084B00: ;
    PUSH32(esp, 0x00084B05u); RECOMP_ABI_CALL(0x00084690u, sub_00084690); /* call 0x00084690 */

loc_00084B05: ;
    PUSH32(esp, 0x00084B0Au); RECOMP_ABI_CALL(0x00083D50u, sub_00083D50); /* call 0x00083D50 */

loc_00084B0A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00084B11u); RECOMP_ABI_CALL(0x00083B90u, sub_00083B90); /* call 0x00083B90 */

loc_00084B11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084B20
 * Original: 0x00084B20 - 0x00084B50 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084B20: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x84B64));
    { uint32_t _jt = MEM32(ecx * 4 + 0x84B50); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00084B32u) goto loc_00084B32;
    if (_jt == 0x00084B38u) goto loc_00084B38;
    if (_jt == 0x00084B3Eu) goto loc_00084B3E;
    if (_jt == 0x00084B44u) goto loc_00084B44;
    if (_jt == 0x00084B4Au) goto loc_00084B4A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00084B32: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00084B38: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_00084B3E: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_00084B44: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_00084B4A: ;
    eax = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00084BA0
 * Original: 0x00084BA0 - 0x00084BD4 (52 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084BA0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x84BE0));
    { uint32_t _jt = MEM32(ecx * 4 + 0x84BD4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00084BB2u) goto loc_00084BB2;
    if (_jt == 0x00084BB8u) goto loc_00084BB8;
    if (_jt == 0x00084BBEu) goto loc_00084BBE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00084BB2: ;
    eax = 0x23873C;
    esp += 4; return; /* ret */

loc_00084BB8: ;
    eax = 0x238738;
    esp += 4; return; /* ret */

loc_00084BBE: ;
    edx = MEM32(eax * 4 + 0x236CE0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084BD0u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00084BD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084BF0
 * Original: 0x00084BF0 - 0x00084C1D (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084BF0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x84C30));
    { uint32_t _jt = MEM32(ecx * 4 + 0x84C20); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00084C02u) goto loc_00084C02;
    if (_jt == 0x00084C05u) goto loc_00084C05;
    if (_jt == 0x00084C0Eu) goto loc_00084C0E;
    if (_jt == 0x00084C14u) goto loc_00084C14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00084C02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00084C05: ;
    SET_LO16(eax, MEM16(eax * 2 + 0x236BC4));
    esp += 4; return; /* ret */

loc_00084C0E: ;
    eax = 0x3086;
    esp += 4; return; /* ret */

loc_00084C14: ;
    SET_LO16(eax, MEM16(eax * 2 + 0x236BC8));
    esp += 4; return; /* ret */

}

/**
 * sub_00084C70
 * Original: 0x00084C70 - 0x00084C80 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084C7Cu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00084C7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084C80
 * Original: 0x00084C80 - 0x00084CB1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084C80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CA2; /* jne: not equal / not zero */

loc_00084C92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CA2; /* jne: not equal / not zero */

loc_00084C96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_00084CA2: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00084CC0
 * Original: 0x00084CC0 - 0x00084CF1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084CC0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CE2; /* jne: not equal / not zero */

loc_00084CD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CE2; /* jne: not equal / not zero */

loc_00084CD6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_00084CE2: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00084D00
 * Original: 0x00084D00 - 0x00084D14 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084D00: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084D20
 * Original: 0x00084D20 - 0x00084D34 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084D20: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A98);
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084D40
 * Original: 0x00084D40 - 0x00084D5E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084D40: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x6E9AA0);
    eax = ecx;
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084D60
 * Original: 0x00084D60 - 0x00084D7E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084D60: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x6E9AA0);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084D80
 * Original: 0x00084D80 - 0x00084D9A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084D80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x6E9AA0);
    eax = ecx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084DA0
 * Original: 0x00084DA0 - 0x00084DAE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00084DA0: ;
    PUSH32(esp, 0x00084DA5u); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_00084DA5: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00084DB0
 * Original: 0x00084DB0 - 0x00084DB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DB0(void)
{

loc_00084DB0: ;
    eax = MEM32(0x91E448);
    esp += 4; return; /* ret */

}

/**
 * sub_00084DC0
 * Original: 0x00084DC0 - 0x00084DCA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DC0(void)
{

loc_00084DC0: ;
    eax = MEM32(esp + 4);
    MEM32(0x91E448) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00084DD0
 * Original: 0x00084DD0 - 0x00084E76 (166 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084DD0: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0x84E90));
    { uint32_t _jt = MEM32(eax * 4 + 0x84E78); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00084DE2u) goto loc_00084DE2;
    if (_jt == 0x00084E02u) goto loc_00084E02;
    if (_jt == 0x00084E18u) goto loc_00084E18;
    if (_jt == 0x00084E27u) goto loc_00084E27;
    if (_jt == 0x00084E42u) goto loc_00084E42;
    if (_jt == 0x00084E5Bu) goto loc_00084E5B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00084DE2: ;
    PUSH32(esp, 0x00084DE7u); RECOMP_ABI_CALL(0x00084DA0u, sub_00084DA0); /* call 0x00084DA0 */

loc_00084DE7: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB)) >> 32) & 1);
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = MEM32(ecx * 8 + 0x236D08);
    edx = MEM32(ecx * 8 + 0x236D0C);
    esp += 4; return; /* ret */

loc_00084E02: ;
    PUSH32(esp, 0x00084E07u); RECOMP_ABI_CALL(0x00084DA0u, sub_00084DA0); /* call 0x00084DA0 */

loc_00084E07: ;
    edx = MEM32(0x236D34);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x236D30);
    if (CMP_NE(_fa, _fb)) goto loc_00084E41; /* jne: not equal / not zero */

loc_00084E16: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00084E18: ;
    eax = MEM32(edx * 8 + 0x236D08);
    edx = MEM32(edx * 8 + 0x236D0C);
    esp += 4; return; /* ret */

loc_00084E27: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00084E2Eu); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_00084E2E: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084E38u); RECOMP_ABI_CALL(0x00151F44u, sub_00151F44); /* call 0x00151F44 */

loc_00084E38: ;
    ecx = edx;
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_00084E41: ;
    esp += 4; return; /* ret */

loc_00084E42: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00084E49u); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_00084E49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x00084E51u); RECOMP_ABI_CALL(0x00151F44u, sub_00151F44); /* call 0x00151F44 */

loc_00084E51: ;
    ecx = edx;
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00084E5B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00084E62u); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_00084E62: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF6u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF6u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084E6Cu); RECOMP_ABI_CALL(0x00151F44u, sub_00151F44); /* call 0x00151F44 */

loc_00084E6C: ;
    ecx = edx;
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00084ED0
 * Original: 0x00084ED0 - 0x00084EFF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084ED0: ;
    PUSH32(esp, esi);
    esi = 0x21;
    PUSH32(esp, 0x00084EDBu); RECOMP_ABI_CALL(0x0007EA00u, sub_0007EA00); /* call 0x0007EA00 */

loc_00084EDB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00084EF4; /* je: equal / zero */

loc_00084EE0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00084EED; /* je: equal / zero */

loc_00084EE3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084EFB; /* jne: not equal / not zero */

loc_00084EE6: ;
    eax = 0x3C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00084EED: ;
    eax = 0x2B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00084EF4: ;
    eax = 0x21;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00084EFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084F00
 * Original: 0x00084F00 - 0x00084F6C (108 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084F00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 2;
    MEM32(0x9238FC) = eax;
    MEM32(0x923900) = eax;
    MEM32(0x923904) = eax;
    MEM32(0x923908) = eax;
    MEM32(0x92390C) = eax;
    MEM32(0x923910) = eax;
    eax = MEM32(0x9238B8);
    MEM32(0x2E69A0) = ecx;
    MEM32(0x2E69A4) = 1;
    MEM32(0x2E69A8) = ecx;
    MEM32(0x2E69AC) = 7;
    MEM32(0x2E69B0) = 6;
    MEM32(0x2E69B4) = 0xFFFFFFFFu;
    ecx = ZX8(MEM8(eax + 0xABF6));
    MEM32(0x923914) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00084F70
 * Original: 0x00084F70 - 0x00084FA0 (48 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084F70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2E6C50) = 1;
    MEM32(0x92393C) = eax;
    MEM32(0x923940) = eax;
    MEM32(0x2E6C54) = 7;
    MEM32(0x923944) = eax;
    MEM32(0x923948) = eax;
    MEM32(0x92394C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00084FA0
 * Original: 0x00084FA0 - 0x00084FF7 (87 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084FA0: ;
    eax = MEM32(0x92393C);
    edx = MEM32(0x2E6C54);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x2E69AC) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x9238FC) = eax;
    eax = MEM32(0x923944);
    MEM32(0x923904) = eax;
    eax = MEM32(0x923948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084FE4; /* jne: not equal / not zero */

loc_00084FD2: ;
    ecx = MEM32(0x92394C);
    MEM32(0x92390C) = eax;
    MEM32(0x923910) = ecx;
    esp += 4; return; /* ret */

loc_00084FE4: ;
    edx = MEM32(0x92394C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x92390C) = eax;
    MEM32(0x923910) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00085000
 * Original: 0x00085000 - 0x00085008 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085000(void)
{

loc_00085000: ;
    eax = MEM32(eax * 4 + 0x239A98);
    esp += 4; return; /* ret */

}

/**
 * sub_00085010
 * Original: 0x00085010 - 0x00085018 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085010(void)
{

loc_00085010: ;
    eax = MEM32(eax * 4 + 0x239AE8);
    esp += 4; return; /* ret */

}

/**
 * sub_00085020
 * Original: 0x00085020 - 0x00085028 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085020(void)
{

loc_00085020: ;
    eax = MEM32(eax * 4 + 0x239B08);
    esp += 4; return; /* ret */

}

/**
 * sub_00085030
 * Original: 0x00085030 - 0x000850D6 (166 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085030: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    eax = ZX16(LO16(ecx));
    edx = eax + eax * 2 + 0xC7;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085065; /* jne: not equal / not zero */

loc_0008505A: ;
    eax = 0xFF808080u;
    MEM32(esp + 8) = eax;
    goto loc_00085099;

loc_00085065: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00085075; /* jae: above or equal (unsigned >=) */

loc_0008506A: ;
    eax = 0xFF00FF00u;
    MEM32(esp + 8) = eax;
    goto loc_00085099;

loc_00085075: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0008508C; /* jbe: below or equal (unsigned <=) */

loc_0008507A: ;
    eax = 0xFF808080u;
    MEM32(esp + 8) = eax;
    MEM32(esp) = 0xFFFF0000u;
    goto loc_0008509C;

loc_0008508C: ;
    eax = 0xFFFFFF00u;
    MEM32(esp + 8) = 0xFFC0C0C0u;

loc_00085099: ;
    MEM32(esp) = eax;

loc_0008509C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx + 0x12;

loc_000850B1: ;
    eax = MEM32(esp + esi * 4 + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000850C2u); RECOMP_ABI_CALL(0x00069400u, sub_00069400); /* call 0x00069400 */

loc_000850C2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000850B1; /* jb: below (unsigned <) */

loc_000850CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000850E0
 * Original: 0x000850E0 - 0x00085104 (36 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000850E0(void)
{

loc_000850E0: ;
    MEM32(ecx + 0x34) = 0x12C;
    MEM32(ecx + 0x38) = 0x298;
    MEM32(ecx + 0x3C) = 0x67;
    MEM32(ecx + 0x40) = 0x22;
    MEM32(ecx + 0x44) = 0xE1;
    esp += 4; return; /* ret */

}

/**
 * sub_00085110
 * Original: 0x00085110 - 0x00085142 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085110: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00085150
 * Original: 0x00085150 - 0x00085154 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085150(void)
{

loc_00085150: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00085160
 * Original: 0x00085160 - 0x00085164 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085160(void)
{

loc_00085160: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00085170
 * Original: 0x00085170 - 0x0008518D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085170: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = 0x239B34;
    if (CMP_AE(_fa, _fb)) goto loc_0008518A; /* jae: above or equal (unsigned >=) */

loc_00085185: ;
    eax = 0x239B28;

loc_0008518A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085190
 * Original: 0x00085190 - 0x00085194 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085190(void)
{

loc_00085190: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_000851A0
 * Original: 0x000851A0 - 0x000851A7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000851A0: ;
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_000851B0
 * Original: 0x000851B0 - 0x000851B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851B0(void)
{

loc_000851B0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_000851C0
 * Original: 0x000851C0 - 0x000851C7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000851C0: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000851D0
 * Original: 0x000851D0 - 0x000851D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851D0(void)
{

loc_000851D0: ;
    eax = 0xC8;
    esp += 4; return; /* ret */

}

/**
 * sub_000851E0
 * Original: 0x000851E0 - 0x000851E7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000851E0: ;
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x37;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_000851F0
 * Original: 0x000851F0 - 0x000851F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000851F0: ;
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085200
 * Original: 0x00085200 - 0x00085207 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085200: ;
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x5D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085210
 * Original: 0x00085210 - 0x0008521E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085210: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085220
 * Original: 0x00085220 - 0x00085232 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085220(void)
{

loc_00085220: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    ecx = MEM32(ecx + 0x3C);
    eax = eax + ecx + 0xA;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085240
 * Original: 0x00085240 - 0x00085256 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085240: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x3C);
    eax = eax + eax + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x40));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085260
 * Original: 0x00085260 - 0x00085267 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085260: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085270
 * Original: 0x00085270 - 0x000852DC (108 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00085279u); RECOMP_ABI_CALL(0x00092980u, sub_00092980); /* call 0x00092980 */

loc_00085279: ;
    edx = MEM32(esi + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x40));
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085293u); RECOMP_ABI_CALL(0x000692B0u, sub_000692B0); /* call 0x000692B0 */

loc_00085293: ;
    edx = MEM32(esi + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x40));
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000852ADu); RECOMP_ABI_CALL(0x000692B0u, sub_000692B0); /* call 0x000692B0 */

loc_000852AD: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000852B2: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = MEM32(esi + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000852CEu); RECOMP_ABI_CALL(0x000692B0u, sub_000692B0); /* call 0x000692B0 */

loc_000852CE: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000852B2; /* jbe: below or equal (unsigned <=) */

loc_000852D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000852E0
 * Original: 0x000852E0 - 0x0008540F (303 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000852E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000852E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x34) = edx;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + 0x24) = LO8(ebx);
    MEM8(esp + 8) = LO8(ebx);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFF817Fu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFF40FF80u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xFF40FF80u)) >> 32) & 1);
    ebx = ebx + 0xFF40FF80u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ebx;
    esi = MEM32(ecx + 0x10);
    esi = MEM32(esi * 4 + 0x2E69E8);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0x14);
    esi = MEM32(esi * 4 + 0x2E6B50);
    MEM32(eax + 0xC) = esi;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ecx + 0x18);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00085372; /* je: equal / zero */

loc_00085363: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x2E6A14);
    goto loc_0008537F;

loc_00085372: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x2E6A00);

loc_0008537F: ;
    MEM32(eax + 0x10) = edx;
    edx = ZX8(MEM8(ecx + 0x19));
    edx = MEM32(edx * 4 + 0x2E6A28);
    MEM32(eax + 0x14) = edx;
    edx = ZX8(MEM8(ecx + 0x1A));
    edx = MEM32(edx * 4 + 0x2E6A3C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x20);
    edx = MEM32(edx * 4 + 0x2E6B1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x88);
    edx = MEM32(edx * 4 + 0x2387C8);
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(ecx + 0x1B));
    edx = MEM32(edx * 4 + 0x2E6B44);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x8C);
    SET_LO16(edx, MEM16(edx + 0xE));
    MEM16(eax + 0x4C) = LO16(edx);
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = 0x12C;
    MEM32(eax + 0x38) = 0x298;
    MEM32(eax + 0x3C) = 0x67;
    MEM32(eax + 0x40) = 0x22;
    MEM32(eax + 0x44) = 0xE1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085410
 * Original: 0x00085410 - 0x0008545F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00085418; /* jbe: below or equal (unsigned <=) */

loc_00085415: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00085418: ;
    ecx = ZX8(MEM8(0x91F51C));
    _fa = (uint32_t)(MEM32(eax * 4 + 0x2E71E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x2E71E4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085415; /* jne: not equal / not zero */

loc_00085428: ;
    _fa = (uint32_t)(MEM8(0x91F534)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x91F534), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085415; /* je: equal / zero */

loc_00085431: ;
    PUSH32(esp, 0x00085436u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00085436: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085415; /* jne: not equal / not zero */

loc_0008543F: ;
    edx = MEM32(0x91F2B4);
    eax = MEM32(0x91F2B0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085451u); RECOMP_ABI_CALL(0x00080140u, sub_00080140); /* call 0x00080140 */

loc_00085451: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00085460
 * Original: 0x00085460 - 0x00085584 (292 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085460: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_00085470: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ebx * 4 + 0x2E6E78)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx * 4 + 0x2E6E78), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008551B; /* je: equal / zero */

loc_00085481: ;
    eax = ebx;
    PUSH32(esp, 0x00085488u); RECOMP_ABI_CALL(0x00085410u, sub_00085410); /* call 0x00085410 */

loc_00085488: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008549D; /* je: equal / zero */

loc_0008548C: ;
    MEM32(esi * 4 + 0x91F550) = 0xA;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 1;

loc_0008549D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085527; /* je: equal / zero */

loc_000854A6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085527; /* je: equal / zero */

loc_000854AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000854E6; /* jb: below (unsigned <) */

loc_000854B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000854D0; /* jne: not equal / not zero */

loc_000854B5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000854BFu); RECOMP_ABI_CALL(0x0007DD00u, sub_0007DD00); /* call 0x0007DD00 */

loc_000854BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008551B; /* je: equal / zero */

loc_000854C6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000854E6; /* je: equal / zero */

loc_000854CE: ;
    goto loc_0008551B;

loc_000854D0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008551B; /* jne: not equal / not zero */

loc_000854D5: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000854DFu); RECOMP_ABI_CALL(0x0007DD30u, sub_0007DD30); /* call 0x0007DD30 */

loc_000854DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008551B; /* je: equal / zero */

loc_000854E6: ;
    eax = MEM32(ebx * 4 + 0x2E6ED0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008550C; /* jae: above or equal (unsigned >=) */

loc_000854F3: ;
    edx = ebx + ebx * 2;
    ecx = eax;
    edi = esi * 4 + 0x91F550;
    edx = edx * 4 + 0x2E6EF0;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx;
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

loc_0008550C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008551B; /* jne: not equal / not zero */

loc_00085513: ;
    MEM32(esp + 0x10) = 1;

loc_0008551B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00085470; /* jb: below (unsigned <) */

loc_00085525: ;
    goto loc_0008554E;

loc_00085527: ;
    ecx = MEM32(ebx * 4 + 0x2E6ED0);
    eax = ecx + ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008554C; /* jae: above or equal (unsigned >=) */

loc_00085535: ;
    esi = ebx + ebx * 2;
    ecx = eax;
    edi = ebp * 4 + 0x91F550;
    esi = esi * 4 + 0x2E6EF0;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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

loc_0008554C: ;
    esi = eax;

loc_0008554E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008557C; /* jne: not equal / not zero */

loc_00085553: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085570; /* jne: not equal / not zero */

loc_0008555B: ;
    PUSH32(esp, 0x00085560u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00085560: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085570; /* je: equal / zero */

loc_00085564: ;
    MEM32(esi * 4 + 0x91F550) = 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00085570: ;
    MEM32(esi * 4 + 0x91F550) = 9;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008557C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085590
 * Original: 0x00085590 - 0x0008559F (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00085590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085590: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008559Au); RECOMP_ABI_CALL(0x001650B0u, sub_001650B0); /* call 0x001650B0 */

loc_0008559A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000855A0
 * Original: 0x000855A0 - 0x000855EC (76 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000855A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000855A0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 3;
    MEM32(0x923800) = 5;
    MEM32(0x923804) = 0;
    MEM32(0x923808) = 1;
    if ((_fa == 0)) goto loc_000855DC; /* je: equal / zero */

loc_000855CC: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000855EB; /* jne: not equal / not zero */

loc_000855D1: ;
    MEM32(0x92380C) = eax;
    eax = 4;
    esp += 4; return; /* ret */

loc_000855DC: ;
    MEM32(0x92380C) = 2;
    eax = 4;

loc_000855EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000855F0
 * Original: 0x000855F0 - 0x000855FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000855F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000855F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9237EC) = eax;
    MEM32(0x91F504) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00085600
 * Original: 0x00085600 - 0x00085670 (112 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085600: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00085606u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00085606: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    MEM32(0x91F5BC) = esi;
    MEM32(0x91F628) = esi;
    MEM32(0x91F61C) = 1;
    MEM32(0x91F2B8) = esi;
    MEM32(0x9237C4) = esi;
    PUSH32(esp, 0x00085631u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_00085631: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F56C) = esi;
    MEM32(0x91F570) = esi;
    MEM32(0x91F574) = esi;
    MEM32(0x91F578) = esi;
    MEM32(0x91F57C) = esi;
    MEM32(0x91F580) = esi;
    MEM32(0x91F584) = esi;
    MEM32(0x91F588) = esi;
    MEM32(0x91F58C) = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085670
 * Original: 0x00085670 - 0x000856F7 (135 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085670: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00085676u); RECOMP_ABI_CALL(0x000715F0u, sub_000715F0); /* call 0x000715F0 */

loc_00085676: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008567Eu); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0008567E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237A0) = esi;
    MEM32(0x91F4F8) = esi;
    MEM32(0x9237D4) = esi;
    MEM32(0x9237C8) = esi;
    MEM32(0x9237E8) = esi;
    MEM32(0x91F61C) = esi;
    MEM32(0x91F2B8) = esi;
    MEM32(0x9237C4) = esi;
    MEM32(0x91F5BC) = esi;
    PUSH32(esp, 0x000856BCu); RECOMP_ABI_CALL(0x000719B0u, sub_000719B0); /* call 0x000719B0 */

loc_000856BC: ;
    MEM32(0x91F56C) = esi;
    MEM32(0x91F570) = esi;
    MEM32(0x91F574) = esi;
    MEM32(0x91F578) = esi;
    MEM32(0x91F57C) = esi;
    MEM32(0x91F580) = esi;
    MEM32(0x91F584) = esi;
    MEM32(0x91F588) = esi;
    PUSH32(esp, 0x000856F1u); RECOMP_ABI_CALL(0x00072FC0u, sub_00072FC0); /* call 0x00072FC0 */

loc_000856F1: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000719B0(); return; /* tail jmp 0x000719B0 */

}

/**
 * sub_00085700
 * Original: 0x00085700 - 0x0008574E (78 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085700: ;
    PUSH32(esp, 0x00085705u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00085705: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91F5BC) = eax;
    MEM32(0x91F628) = eax;
    MEM32(0x91F61C) = 1;
    MEM32(0x91F2B8) = eax;
    MEM32(0x9237C4) = eax;
    MEM32(0x91F56C) = eax;
    MEM32(0x91F570) = eax;
    MEM32(0x91F574) = eax;
    MEM32(0x91F578) = eax;
    MEM32(0x91F57C) = eax;
    MEM32(0x91F580) = eax;
    MEM32(0x91F584) = eax;
    MEM32(0x91F588) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00085750
 * Original: 0x00085750 - 0x00085818 (200 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x91F4EC);
    PUSH32(esp, 0xA7210);
    PUSH32(esp, 0x91F630);
    PUSH32(esp, 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x281454);
    PUSH32(esp, 0x00085773u); RECOMP_ABI_CALL(0x000A5810u, sub_000A5810); /* call 0x000A5810 */

loc_00085773: ;
    eax = MEM32(0x91F4EC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00085816; /* jbe: below or equal (unsigned <=) */

loc_00085783: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x91F972;
    ebx = 0x91F874;
    MEM32(esp + 0x10) = eax;

loc_00085797: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000857F5; /* je: equal / zero */

loc_0008579E: ;
    ecx = ebx;
    eax = esi + -254;
    goto loc_000857B0;

    /* nop */
    /* nop */

loc_000857B0: ;
    SET_LO16(ecx, MEM16(ecx));
    ebp = MEM32(0x2E708C);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000857D7; /* je: equal / zero */

loc_000857BE: ;
    ebp = MEM32(0x2E7090);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000857E6; /* je: equal / zero */

loc_000857C9: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000857B0; /* jne: not equal / not zero */

loc_000857D5: ;
    goto loc_000857F5;

loc_000857D7: ;
    ecx = edi + edx;
    MEM16(ecx * 2 + 0x91F874) = 0;
    goto loc_000857F2;

loc_000857E6: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx * 2 + 0x91F874) = 0;

loc_000857F2: ;
    MEM16(esi) = LO16(ebp);

loc_000857F5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x1A2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1A2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x344;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x344;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00085797; /* jne: not equal / not zero */

loc_00085812: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00085816: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085820
 * Original: 0x00085820 - 0x00085840 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085820: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x344);
    SET_LO16(edx, MEM16(eax + 0x91F972));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x2E7090)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(0x2E7090) (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00085840
 * Original: 0x00085840 - 0x00085888 (72 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085840: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9237A0) = eax;
    MEM32(0x91F4F8) = eax;
    MEM32(0x9237C8) = eax;
    MEM32(0x91E474) = eax;
    MEM32(0x91F60C) = 0xFFFFFFFFu;
    MEM32(0x91F58C) = eax;
    MEM32(0x9237E8) = eax;
    MEM32(0x91F5BC) = eax;
    MEM32(0x91F628) = eax;
    MEM32(0x91F61C) = eax;
    MEM32(0x91F2B8) = eax;
    MEM32(0x9237C4) = eax;
    g_seh_ebp = ebp; sub_00085750(); return; /* tail jmp 0x00085750 */

}

/**
 * sub_00085890
 * Original: 0x00085890 - 0x000858B8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085890: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0xFF00FF00u);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x238778);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000858B4u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000858B4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000858C0
 * Original: 0x000858C0 - 0x000858F3 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000858C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000858C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000858D1u); RECOMP_ABI_CALL(0x0007DE40u, sub_0007DE40); /* call 0x0007DE40 */

loc_000858D1: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000858EE; /* jne: not equal / not zero */

loc_000858DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000858EE; /* je: equal / zero */

loc_000858E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x000858EBu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000858EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000858EE: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085900
 * Original: 0x00085900 - 0x00085955 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00085905: ;
    esi = edi;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + 0x2E7094;
    PUSH32(esp, 0x00085915u); RECOMP_ABI_CALL(0x000858C0u, sub_000858C0); /* call 0x000858C0 */

loc_00085915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008594B; /* je: equal / zero */

loc_00085919: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = 0x42700000;
    if (CMP_NE(_fa, _fb)) goto loc_0008592D; /* jne: not equal / not zero */

loc_00085925: ;
    MEM32(esp + 8) = 0x441C4000;

loc_0008592D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x2E70A0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x43CC0000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085948u); RECOMP_ABI_CALL(0x0002A290u, sub_0002A290); /* call 0x0002A290 */

loc_00085948: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008594B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00085905; /* jb: below (unsigned <) */

loc_00085951: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085960
 * Original: 0x00085960 - 0x00085A24 (196 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085960: ;
    ecx = MEM32(0x91F2BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085979; /* je: equal / zero */

loc_0008596E: ;
    PUSH32(esp, 0x00085973u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_00085973: ;
    MEM32(0x91F2BC) = edi;

loc_00085979: ;
    _fa = (uint32_t)(MEM32(0x9237F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237F0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085992; /* je: equal / zero */

loc_00085981: ;
    esi = MEM32(0x91F5B4);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x238A38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x238A38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000859A1;

loc_00085992: ;
    esi = MEM32(0x9237F4);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2389C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2389C8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000859A1: ;
    _fa = (uint32_t)(MEM32(0x91F5C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91F5C0), edi (32-bit) */
    MEM32(0x9237C0) = 0xFFFFFFFFu;
    MEM32(0x91F5CC) = edi;
    MEM32(0x91F4F4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000859F9; /* je: equal / zero */

loc_000859BF: ;
    PUSH32(esp, 0x000859C4u); RECOMP_ABI_CALL(0x0007DC50u, sub_0007DC50); /* call 0x0007DC50 */

loc_000859C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000859CAu); RECOMP_ABI_CALL(0x0007D3A0u, sub_0007D3A0); /* call 0x0007D3A0 */

loc_000859CA: ;
    ecx = MEM32(0x91F500);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    edx = MEM32(eax + ecx * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000859DDu); RECOMP_ABI_CALL(0x0007AC00u, sub_0007AC00); /* call 0x0007AC00 */

loc_000859DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    PUSH32(esp, 0x000859EAu); RECOMP_ABI_CALL(0x0007D3A0u, sub_0007D3A0); /* call 0x0007D3A0 */

loc_000859EA: ;
    MEM32(0x9237C0) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x91F4F4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000859F9: ;
    MEM32(0x91E450) = edi;
    PUSH32(esp, 0x00085A04u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00085A04: ;
    ecx = MEM32(0x91F500);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    edx = MEM32(eax + ecx * 4);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085A19u); RECOMP_ABI_CALL(0x00076AD0u, sub_00076AD0); /* call 0x00076AD0 */

loc_00085A19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x91F2BC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085A30
 * Original: 0x00085A30 - 0x00085AA7 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085A30: ;
    ecx = MEM32(0x91F2BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085A49; /* je: equal / zero */

loc_00085A3A: ;
    PUSH32(esp, 0x00085A3Fu); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_00085A3F: ;
    MEM32(0x91F2BC) = 0;

loc_00085A49: ;
    eax = MEM32(0x9237F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085A61; /* je: equal / zero */

loc_00085A52: ;
    eax = MEM32(0x91F5B4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x238A38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x238A38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00085A6E;

loc_00085A61: ;
    eax = MEM32(0x9237F4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2389C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2389C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085A6E: ;
    ecx = MEM32(0x91F5C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085A7A; /* je: equal / zero */

loc_00085A78: ;
    goto loc_00085A78;

loc_00085A7A: ;
    ecx = MEM32(0x9237C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00085A8C; /* jne: not equal / not zero */

loc_00085A88: ;
    PUSH32(esp, 1);
    goto loc_00085A8D;

loc_00085A8C: ;
    PUSH32(esp, ecx);

loc_00085A8D: ;
    ecx = MEM32(0x91F500);
    edx = MEM32(eax + ecx * 4);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085A9Eu); RECOMP_ABI_CALL(0x00076A80u, sub_00076A80); /* call 0x00076A80 */

loc_00085A9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00085AB0
 * Original: 0x00085AB0 - 0x00085B41 (145 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085AB0: ;
    edx = MEM32(0x91F62C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085B0C; /* jne: not equal / not zero */

loc_00085AD4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00085B08; /* jne: not equal / not zero */

loc_00085ADD: ;
    PUSH32(esp, 0x00085AE2u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00085AE2: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085AF0; /* jne: not equal / not zero */

loc_00085AE8: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085B29; /* je: equal / zero */

loc_00085AF0: ;
    PUSH32(esp, 0x00085AF5u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00085AF5: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085B03; /* jne: not equal / not zero */

loc_00085AFB: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085B39; /* je: equal / zero */

loc_00085B03: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00085B08: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085B39; /* je: equal / zero */

loc_00085B0C: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085B29; /* je: equal / zero */

loc_00085B13: ;
    edx = MEM32(eax + 8);
    esi = MEM32(ecx + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00085B39; /* jg: greater (signed >) */

loc_00085B23: ;
    if (CMP_L(_fas, _fbs)) goto loc_00085B29; /* jl: less (signed <) */

loc_00085B25: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00085B2F; /* jae: above or equal (unsigned >=) */

loc_00085B29: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00085B2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085B03; /* jl: less (signed <) */

loc_00085B33: ;
    if (CMP_G(_fas, _fbs)) goto loc_00085B39; /* jg: greater (signed >) */

loc_00085B35: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00085B03; /* jbe: below or equal (unsigned <=) */

loc_00085B39: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085B50
 * Original: 0x00085B50 - 0x00085B5B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085B50: ;
    eax = MEM32(0x9237F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00085B60
 * Original: 0x00085B60 - 0x00085BEC (140 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085B60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F99999A);
    PUSH32(esp, 0x3F99999A);
    PUSH32(esp, 0xFF30FF30u);
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x168);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x2C) = 1;
    MEM8(esp + 0x2D) = 0;
    MEM8(esp + 0x2E) = 1;
    MEM8(esp + 0x2F) = 0;
    PUSH32(esp, 0x00085BA5u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00085BA5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3F99999A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085BCBu); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_00085BCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00085BD3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00085BD3: ;
    ecx = MEM32(esp + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x174;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085BE8u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00085BE8: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085BF0
 * Original: 0x00085BF0 - 0x00085C74 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00085BF6u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00085BF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00085C30; /* jle: less or equal (signed <=) */

loc_00085BFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x239B64);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00085C0Au); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00085C0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x188);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00085C2Du); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00085C2D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085C30: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00085C36u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_00085C36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00085C73; /* jle: less or equal (signed <=) */

loc_00085C3A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x239B58);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00085C4Au); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00085C4A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, 0x188);
    PUSH32(esp, 0x294);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00085C70u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00085C70: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085C73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00085C80
 * Original: 0x00085C80 - 0x00085C84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C80(void)
{

loc_00085C80: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00085C90
 * Original: 0x00085C90 - 0x00085CD9 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085CD4; /* jl: less (signed <) */

loc_00085C9A: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085CD4; /* jl: less (signed <) */

loc_00085CA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00085CD4; /* jge: greater or equal (signed >=) */

loc_00085CA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085CACu); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_00085CAC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x2C));
    ecx = MEM32(esi + 0x28);
    esi = MEM32(esi + 0x34);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x2E68A0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00085CD4; /* jge: greater or equal (signed >=) */

loc_00085CC8: ;
    ecx = MEM32(esi + 0x2E67D8);
    SET_LO16(eax, MEM16(ecx + eax * 2));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00085CD4: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085CE0
 * Original: 0x00085CE0 - 0x00085CFC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085CE0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00085CF1; /* jle: less or equal (signed <=) */

loc_00085CEE: ;
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

loc_00085CF1: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00085CEE; /* jg: greater (signed >) */

loc_00085CF9: ;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00085D00
 * Original: 0x00085D00 - 0x00085D5F (95 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085D00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00085D59; /* je: equal / zero */

loc_00085D0B: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00085D24; /* jg: greater (signed >) */

loc_00085D1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00085D29; /* jge: greater or equal (signed >=) */

loc_00085D20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00085D29;

loc_00085D24: ;
    eax = 0xE;

loc_00085D29: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085D36u); RECOMP_ABI_CALL(0x00085CE0u, sub_00085CE0); /* call 0x00085CE0 */

loc_00085D36: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00085D59; /* je: equal / zero */

loc_00085D42: ;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x00085D4Au); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00085D4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085D50u); RECOMP_ABI_CALL(0x00084DC0u, sub_00084DC0); /* call 0x00084DC0 */

loc_00085D50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00085D59: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085D60
 * Original: 0x00085D60 - 0x00085D73 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085D60(void)
{

loc_00085D60: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085D80
 * Original: 0x00085D80 - 0x00085DB8 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00085D88u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00085D88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085D8Eu); RECOMP_ABI_CALL(0x00084DC0u, sub_00084DC0); /* call 0x00084DC0 */

loc_00085D8E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edx = esi + eax * 2 + 0xA;
    PUSH32(esp, edx);
    eax = esi + eax * 2 + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085DA7u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_00085DA7: ;
    edx = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2E);
    MEM32(esi) = edx;
    PUSH32(esp, 0x00085DB3u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_00085DB3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085DC0
 * Original: 0x00085DC0 - 0x00085DC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085DC0(void)
{

loc_00085DC0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00085DD0
 * Original: 0x00085DD0 - 0x00085DD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085DD0(void)
{

loc_00085DD0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00085DE0
 * Original: 0x00085DE0 - 0x00085DE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085DE0(void)
{

loc_00085DE0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00085DF0
 * Original: 0x00085DF0 - 0x00085DF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085DF0(void)
{

loc_00085DF0: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_00085E00
 * Original: 0x00085E00 - 0x00085E06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085E00(void)
{

loc_00085E00: ;
    eax = MEM32(0x916288);
    esp += 4; return; /* ret */

}

/**
 * sub_00085E10
 * Original: 0x00085E10 - 0x00085E16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085E10(void)
{

loc_00085E10: ;
    eax = 0x91E25C;
    esp += 4; return; /* ret */

}

/**
 * sub_00085E20
 * Original: 0x00085E20 - 0x00085E5C (60 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085E20: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(ecx + 4) = eax;
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 0xC) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM32(ecx + 0x10) = 0;
    MEM16(ecx + 0xE) = LO16(eax);
    MEM8(ecx + 0x10) = LO8(edx);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x10000000;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0x3F800000;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00085E60
 * Original: 0x00085E60 - 0x00085E6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085E60(void)
{

loc_00085E60: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x11) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085E70
 * Original: 0x00085E70 - 0x00085EBE (78 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085E70: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(ecx + 4) = eax;
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 0xC) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM32(ecx + 0x10) = 0;
    MEM16(ecx + 0xE) = LO16(eax);
    MEM8(ecx + 0x10) = LO8(edx);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x10000000;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0x3F800000;
    MEM16(ecx) = 0x20;
    MEM16(ecx + 2) = 0x101;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00085EC0
 * Original: 0x00085EC0 - 0x00085ECA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085EC0(void)
{

loc_00085EC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xD) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085ED0
 * Original: 0x00085ED0 - 0x00085F22 (82 bytes, 18 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085ED0(void)
{

loc_00085ED0: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 4) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 6) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ecx + 8) = LO16(eax);
    eax = MEM32(esp + 0x14);
    MEM16(ecx + 0xA) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM32(ecx + 0x10) = eax;
    SET_LO16(eax, MEM16(esp + 0x1C));
    MEM16(ecx + 2) = 0x106;
    MEM16(ecx) = 0x18;
    MEM32(ecx + 0xC) = 0x60000;
    MEM16(ecx + 0x14) = LO16(edx);
    MEM16(ecx + 0x16) = LO16(eax);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00085F30
 * Original: 0x00085F30 - 0x00085F3F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085F30: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085F40
 * Original: 0x00085F40 - 0x00085FED (173 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085F40(void)
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

loc_00085F40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(edi + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 8)); /* fiadd dword ptr [esp + 8] */
    PUSH32(esp, 0x00085F6Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00085F6E: ;
    edx = ZX8(MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(eax);
    eax = ZX8(MEM8(esi + 1));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 8)); /* fiadd dword ptr [esp + 8] */
    PUSH32(esp, 0x00085F95u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00085F95: ;
    ecx = ZX8(MEM8(edi));
    MEM8(esp + 0x11) = LO8(eax);
    eax = ZX8(MEM8(esi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 8)); /* fiadd dword ptr [esp + 8] */
    PUSH32(esp, 0x00085FBAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00085FBA: ;
    edx = ZX8(MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(eax);
    eax = ZX8(MEM8(esi + 3));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 8)); /* fiadd dword ptr [esp + 8] */
    PUSH32(esp, 0x00085FE1u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00085FE1: ;
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x10);
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
 * sub_00085FF0
 * Original: 0x00085FF0 - 0x00086008 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085FF0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00086004u); RECOMP_ABI_CALL(0x00085F40u, sub_00085F40); /* call 0x00085F40 */

loc_00086004: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086010
 * Original: 0x00086010 - 0x00086025 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086010: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086021u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00086021: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086030
 * Original: 0x00086030 - 0x00086048 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086030: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x106);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086044u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00086044: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086050
 * Original: 0x00086050 - 0x00086065 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086050: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x106);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086061u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00086061: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086070
 * Original: 0x00086070 - 0x0008608A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008607Au); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_0008607A: ;
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086090
 * Original: 0x00086090 - 0x0008609F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00086090: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2F3F3F3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xD0C0C0C0u)) >> 32) & 1);
    eax = eax + 0xD0C0C0C0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000860A0
 * Original: 0x000860A0 - 0x00086101 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000860A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000860A0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x6E9A98));
    SET_LO8(edx, 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000860D3; /* je: equal / zero */

loc_000860B3: ;
    MEM32(0x923974) = 0x16;

loc_000860BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x000860CBu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000860CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_000860D0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000860D3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A90), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000860D0; /* je: equal / zero */

loc_000860DB: ;
    ecx = MEM32(0x923974);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000860F1; /* jne: not equal / not zero */

loc_000860E5: ;
    MEM32(0x923974) = 8;
    goto loc_000860BD;

loc_000860F1: ;
    ecx = MEM32(0x923974);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x923974) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086110
 * Original: 0x00086110 - 0x0008616A (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086110: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x6E9A98);
    edx = 0x4000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086144; /* je: equal / zero */

loc_00086125: ;
    MEM32(0x923978) = 0x16;

loc_0008612F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x0008613Du); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0008613D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_00086142: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086144: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6E9A90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x6E9A90), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086142; /* je: equal / zero */

loc_0008614C: ;
    ecx = MEM32(0x923978);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086162; /* jne: not equal / not zero */

loc_00086156: ;
    MEM32(0x923978) = 8;
    goto loc_0008612F;

loc_00086162: ;
    MEM32(0x923978) = MEM32(0x923978) - 1;
    _fa = (uint32_t)(MEM32(0x923978)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086170
 * Original: 0x00086170 - 0x000861D0 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086170: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x6E9A98));
    edx = 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000861A6; /* je: equal / zero */

loc_00086186: ;
    MEM32(0x92397C) = 0x16;

loc_00086190: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x0008619Eu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0008619E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_000861A3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000861A6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A90), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000861A3; /* je: equal / zero */

loc_000861AE: ;
    ecx = MEM32(0x92397C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000861C0; /* jne: not equal / not zero */

loc_000861B8: ;
    MEM32(0x92397C) = edx;
    goto loc_00086190;

loc_000861C0: ;
    ecx = MEM32(0x92397C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x92397C) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000861D0
 * Original: 0x000861D0 - 0x000861EF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000861D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000861D0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x6E9A98);
    edx = 0x8000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00086204(); return; } /* je: equal / zero */

loc_000861E5: ;
    MEM32(0x923980) = 0x16;

    g_seh_ebp = ebp; sub_000861EF(); return; /* fallthrough 0x000861EF */

}

/**
 * sub_000861EF
 * Original: 0x000861EF - 0x00086202 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000861EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000861EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x000861FDu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000861FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

    g_seh_ebp = ebp; sub_00086202(); return; /* fallthrough 0x00086202 */

}

/**
 * sub_00086202
 * Original: 0x00086202 - 0x00086204 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086202(void)
{

loc_00086202: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086204
 * Original: 0x00086204 - 0x00086230 (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086204(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086204: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6E9A90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x6E9A90), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00086202(); return; } /* je: equal / zero */

loc_0008620C: ;
    ecx = MEM32(0x923980);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086222; /* jne: not equal / not zero */

loc_00086216: ;
    MEM32(0x923980) = 8;
    g_seh_ebp = ebp; sub_000861EF(); return; /* tail jmp 0x000861EF */

loc_00086222: ;
    MEM32(0x923980) = MEM32(0x923980) - 1;
    _fa = (uint32_t)(MEM32(0x923980)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086230
 * Original: 0x00086230 - 0x000862A1 (113 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086230: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x6E9A98));
    edx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00086262; /* je: equal / zero */

loc_00086246: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    MEM32(0x923984) = 0x16;
    esi = edx;
    PUSH32(esp, 0x0008625Au); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0008625A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_0008625F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00086262: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A90), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008625F; /* je: equal / zero */

loc_0008626A: ;
    ecx = MEM32(0x923984);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086291; /* jne: not equal / not zero */

loc_00086274: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    MEM32(0x923984) = 8;
    esi = edx;
    PUSH32(esp, 0x00086289u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00086289: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00086291: ;
    ecx = MEM32(0x923984);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x923984) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000862B0
 * Original: 0x000862B0 - 0x00086311 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000862B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000862B0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x6E9A98));
    SET_LO8(edx, 2);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000862E3; /* je: equal / zero */

loc_000862C3: ;
    MEM32(0x923988) = 0x16;

loc_000862CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    esi = 1;
    PUSH32(esp, 0x000862DBu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000862DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_000862E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000862E3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A90)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A90), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000862E0; /* je: equal / zero */

loc_000862EB: ;
    ecx = MEM32(0x923988);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086301; /* jne: not equal / not zero */

loc_000862F5: ;
    MEM32(0x923988) = 8;
    goto loc_000862CD;

loc_00086301: ;
    ecx = MEM32(0x923988);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x923988) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086320
 * Original: 0x00086320 - 0x0008634B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086320: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086335; /* jne: not equal / not zero */

loc_00086330: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008634A; /* je: equal / zero */

loc_00086335: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D);
    esi = 1;
    PUSH32(esp, 0x00086344u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00086344: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_0008634A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086350
 * Original: 0x00086350 - 0x0008637B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086350: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086365; /* jne: not equal / not zero */

loc_00086360: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008637A; /* je: equal / zero */

loc_00086365: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E);
    esi = 1;
    PUSH32(esp, 0x00086374u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00086374: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_0008637A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086380
 * Original: 0x00086380 - 0x000863A5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086380: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000863A4; /* je: equal / zero */

loc_00086390: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2D);
    esi = 1;
    PUSH32(esp, 0x0008639Eu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0008639E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_000863A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000863B0
 * Original: 0x000863B0 - 0x000863D5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000863B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000863B0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000863D4; /* je: equal / zero */

loc_000863C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2D);
    esi = 1;
    PUSH32(esp, 0x000863CEu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000863CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_000863D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000863E0
 * Original: 0x000863E0 - 0x00086405 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000863E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000863E0: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + 0x6E9A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086404; /* je: equal / zero */

loc_000863F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2D);
    esi = 1;
    PUSH32(esp, 0x000863FEu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000863FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_00086404: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086410
 * Original: 0x00086410 - 0x00086494 (132 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086410: ;
    PUSH32(esp, 0x00086415u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00086415: ;
    PUSH32(esp, 0x0008641Au); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_0008641A: ;
    _fa = (uint32_t)(MEM32(0x2E69AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2E69AC), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00086431; /* ja: above (unsigned >) */

loc_00086422: ;
    PUSH32(esp, 0x00086427u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00086427: ;
    PUSH32(esp, 0x0008642Cu); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_0008642C: ;
    MEM32(0x2E69AC) = eax;

loc_00086431: ;
    PUSH32(esp, 0x00086436u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00086436: ;
    PUSH32(esp, 0x0008643Bu); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_0008643B: ;
    _fa = (uint32_t)(MEM32(0x923904)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x923904), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00086452; /* jb: below (unsigned <) */

loc_00086443: ;
    PUSH32(esp, 0x00086448u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00086448: ;
    PUSH32(esp, 0x0008644Du); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_0008644D: ;
    MEM32(0x923904) = eax;

loc_00086452: ;
    PUSH32(esp, 0x00086457u); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_00086457: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086464; /* je: equal / zero */

loc_0008645B: ;
    _fa = (uint32_t)(MEM32(0x92390C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x92390C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086476; /* je: equal / zero */

loc_00086464: ;
    PUSH32(esp, 0x00086469u); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_00086469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086480; /* jne: not equal / not zero */

loc_0008646D: ;
    _fa = (uint32_t)(MEM32(0x92390C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x92390C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086480; /* jne: not equal / not zero */

loc_00086476: ;
    MEM32(0x92390C) = 0;

loc_00086480: ;
    eax = MEM32(0x923910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086493; /* je: equal / zero */

loc_00086489: ;
    PUSH32(esp, 0x0008648Eu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0008648E: ;
    MEM32(0x923910) = eax;

loc_00086493: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000864A0
 * Original: 0x000864A0 - 0x00086547 (167 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000864A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000864A0: ;
    PUSH32(esp, 0x000864A5u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000864A5: ;
    PUSH32(esp, 0x000864AAu); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_000864AA: ;
    _fa = (uint32_t)(MEM32(0x2E6C54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2E6C54), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000864C1; /* ja: above (unsigned >) */

loc_000864B2: ;
    PUSH32(esp, 0x000864B7u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000864B7: ;
    PUSH32(esp, 0x000864BCu); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_000864BC: ;
    MEM32(0x2E6C54) = eax;

loc_000864C1: ;
    PUSH32(esp, 0x000864C6u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000864C6: ;
    PUSH32(esp, 0x000864CBu); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_000864CB: ;
    _fa = (uint32_t)(MEM32(0x923944)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x923944), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000864E2; /* jb: below (unsigned <) */

loc_000864D3: ;
    PUSH32(esp, 0x000864D8u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_000864D8: ;
    PUSH32(esp, 0x000864DDu); RECOMP_ABI_CALL(0x00085000u, sub_00085000); /* call 0x00085000 */

loc_000864DD: ;
    MEM32(0x923944) = eax;

loc_000864E2: ;
    PUSH32(esp, 0x000864E7u); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_000864E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000864F4; /* je: equal / zero */

loc_000864EB: ;
    _fa = (uint32_t)(MEM32(0x923948)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x923948), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086506; /* je: equal / zero */

loc_000864F4: ;
    PUSH32(esp, 0x000864F9u); RECOMP_ABI_CALL(0x000835C0u, sub_000835C0); /* call 0x000835C0 */

loc_000864F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086510; /* jne: not equal / not zero */

loc_000864FD: ;
    _fa = (uint32_t)(MEM32(0x923948)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x923948), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086510; /* jne: not equal / not zero */

loc_00086506: ;
    MEM32(0x923948) = 0;

loc_00086510: ;
    eax = MEM32(0x92394C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086523; /* je: equal / zero */

loc_00086519: ;
    PUSH32(esp, 0x0008651Eu); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_0008651E: ;
    MEM32(0x92394C) = eax;

loc_00086523: ;
    eax = MEM32(0x2E6C50);
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086540; /* je: equal / zero */

loc_00086531: ;
    eax = MEM32(0x92393C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086540; /* je: equal / zero */

loc_0008653B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086546; /* jne: not equal / not zero */

loc_00086540: ;
    MEM32(0x923940) = ecx;

loc_00086546: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086550
 * Original: 0x00086550 - 0x0008658F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086550: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x00086560u); RECOMP_ABI_CALL(0x000862B0u, sub_000862B0); /* call 0x000862B0 */

loc_00086560: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086573; /* je: equal / zero */

loc_00086564: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0008658D; /* jb: below (unsigned <) */

loc_0008656F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086573: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008657Eu); RECOMP_ABI_CALL(0x00086230u, sub_00086230); /* call 0x00086230 */

loc_0008657E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008658B; /* je: equal / zero */

loc_00086582: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008658A; /* jne: not equal / not zero */

loc_00086586: ;
    esi = MEM32(esp + 0xC);

loc_0008658A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008658B: ;
    eax = esi;

loc_0008658D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086590
 * Original: 0x00086590 - 0x000865CF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086590: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x000865A0u); RECOMP_ABI_CALL(0x00086170u, sub_00086170); /* call 0x00086170 */

loc_000865A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000865B3; /* je: equal / zero */

loc_000865A4: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000865CD; /* jb: below (unsigned <) */

loc_000865AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000865B3: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x000865BEu); RECOMP_ABI_CALL(0x000860A0u, sub_000860A0); /* call 0x000860A0 */

loc_000865BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000865CB; /* je: equal / zero */

loc_000865C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000865CA; /* jne: not equal / not zero */

loc_000865C6: ;
    esi = MEM32(esp + 0xC);

loc_000865CA: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000865CB: ;
    eax = esi;

loc_000865CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000865D0
 * Original: 0x000865D0 - 0x00086691 (193 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000865D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    ecx = ZX8(MEM8(eax + 0x23));
    edx = MEM32(ecx * 4 + 0x2E69E8);
    MEM32(esi + 8) = edx;
    ecx = ZX8(MEM8(eax + 0x24));
    edx = MEM32(ecx * 4 + 0x2E6B50);
    MEM32(esi + 0xC) = edx;
    ecx = ZX8(MEM8(eax + 0x25));
    edx = MEM32(ecx * 4 + 0x2E6A00);
    MEM32(esi + 0x10) = edx;
    ecx = ZX8(MEM8(eax + 0x26));
    edx = MEM32(ecx * 4 + 0x2E6A28);
    MEM32(esi + 0x14) = edx;
    ecx = ZX8(MEM8(eax + 0x27));
    edx = MEM32(ecx * 4 + 0x2E6A3C);
    MEM32(esi + 0x18) = edx;
    ecx = ZX8(MEM8(eax + 0x28));
    edx = MEM32(ecx * 4 + 0x2E6B1C);
    MEM32(esi + 0x1C) = edx;
    eax = ZX8(MEM8(eax + 0x29));
    ecx = MEM32(eax * 4 + 0x2387C8);
    PUSH32(esp, edi);
    MEM32(esi + 0x20) = ecx;
    MEM8(esi + 0x24) = 0;
    PUSH32(esp, 0x0008664Cu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0008664C: ;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00086654u); RECOMP_ABI_CALL(0x00071800u, sub_00071800); /* call 0x00071800 */

loc_00086654: ;
    MEM32(esi + 0x2C) = eax;
    edi = MEM32(0x916288);
    PUSH32(esp, 0x00086662u); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_00086662: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x34) = 0x12C;
    MEM32(esi + 0x38) = 0x298;
    MEM32(esi + 0x3C) = 0x67;
    MEM32(esi + 0x40) = 0x22;
    MEM32(esi + 0x44) = 0xE1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000866A0
 * Original: 0x000866A0 - 0x0008670A (106 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000866A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000866A0: ;
    eax = MEM32(0x92378C);
    ecx = MEM32(0x923788);
    PUSH32(esp, 0x91E478);
    PUSH32(esp, 0x91E454);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000866BCu); RECOMP_ABI_CALL(0x00099AB0u, sub_00099AB0); /* call 0x00099AB0 */

loc_000866BC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000866FF; /* je: equal / zero */

loc_000866C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086709; /* jne: not equal / not zero */

loc_000866C9: ;
    edx = MEM32(0x91E260);
    eax = MEM32(0x91E26C);
    ecx = MEM32(0x91E268);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000866E4u); RECOMP_ABI_CALL(0x0007E420u, sub_0007E420); /* call 0x0007E420 */

loc_000866E4: ;
    edx = MEM32(0x92378C);
    eax = MEM32(0x923788);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000866FCu); RECOMP_ABI_CALL(0x00080410u, sub_00080410); /* call 0x00080410 */

loc_000866FC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000866FF: ;
    MEM32(0x9237A0) = 2;

loc_00086709: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086710
 * Original: 0x00086710 - 0x00086942 (562 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91F5B8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = MEM32(0x9237E0);
    if (CMP_NE(_fa, _fb)) goto loc_00086764; /* jne: not equal / not zero */

loc_00086728: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086759; /* je: equal / zero */

loc_0008672C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x00086734u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00086734: ;
    eax = MEM32(0x91E27C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086746; /* je: equal / zero */

loc_00086741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008674B; /* jne: not equal / not zero */

loc_00086746: ;
    PUSH32(esp, 0x0008674Bu); RECOMP_ABI_CALL(0x000843A0u, sub_000843A0); /* call 0x000843A0 */

loc_0008674B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086751u); RECOMP_ABI_CALL(0x00083620u, sub_00083620); /* call 0x00083620 */

loc_00086751: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 3;

loc_00086759: ;
    MEM32(0x9237E0) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000867AA; /* jne: not equal / not zero */

loc_00086769: ;
    eax = MEM32(0x33489C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008693C; /* je: equal / zero */

loc_0008677E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x00086786u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00086786: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esi = 1;
    MEM32(0x9237A0) = edi;
    MEM32(0x923780) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x9237E0) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000867AA: ;
    _fa = (uint32_t)(MEM32(0x9237A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237A0), edi (32-bit) */
    esi = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000867CA; /* jne: not equal / not zero */

loc_000867B7: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x000867C2u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_000867C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086931; /* jne: not equal / not zero */

loc_000867CA: ;
    eax = MEM32(0x923780);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00086922; /* je: equal / zero */

loc_000867D7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00086823; /* je: equal / zero */

loc_000867DA: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0008693C; /* jne: not equal / not zero */

loc_000867E3: ;
    _fa = (uint32_t)(MEM32(0x9237A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237A0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008693C; /* je: equal / zero */

loc_000867EF: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x000867FAu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_000867FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008693C; /* je: equal / zero */

loc_00086802: ;
    MEM32(0x9237E0) = edi;
    MEM32(0x91F5B8) = edi;
    PUSH32(esp, 0x00086813u); RECOMP_ABI_CALL(0x000817B0u, sub_000817B0); /* call 0x000817B0 */

loc_00086813: ;
    PUSH32(esp, 0x00086818u); RECOMP_ABI_CALL(0x00085670u, sub_00085670); /* call 0x00085670 */

loc_00086818: ;
    POP32(esp, ebx);
    esi = 2;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086823: ;
    ecx = MEM32(0x91F2B4);
    edx = MEM32(0x91F2B0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00086836u); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_00086836: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008683Eu); RECOMP_ABI_CALL(0x0007E340u, sub_0007E340); /* call 0x0007E340 */

loc_0008683E: ;
    ecx = MEM32(0x9237A0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(0x9237D8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008693C; /* jne: not equal / not zero */

loc_00086855: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008693C; /* je: equal / zero */

loc_0008685E: ;
    ecx = MEM32(0x91F590);
    ecx = ecx & 0xF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008693C; /* jne: not equal / not zero */

loc_00086876: ;
    ecx = MEM32(0x91F5C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086889; /* je: equal / zero */

loc_00086880: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008693C; /* jne: not equal / not zero */

loc_00086889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008693C; /* jne: not equal / not zero */

loc_00086892: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008689Du); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008689D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008693C; /* je: equal / zero */

loc_000868A5: ;
    MEM32(0x9237E0) = edi;
    PUSH32(esp, 0x000868B0u); RECOMP_ABI_CALL(0x000817B0u, sub_000817B0); /* call 0x000817B0 */

loc_000868B0: ;
    PUSH32(esp, 0x000868B5u); RECOMP_ABI_CALL(0x00085670u, sub_00085670); /* call 0x00085670 */

loc_000868B5: ;
    eax = 3;
    MEM32(0x91F4F8) = eax;
    MEM32(0x9237A0) = eax;
    _fa = (uint32_t)(MEM32(0x91F5C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91F5C8), edi (32-bit) */
    MEM32(0x91F56C) = edi;
    MEM32(0x91F570) = edi;
    MEM32(0x91F574) = edi;
    MEM32(0x91F578) = edi;
    MEM32(0x91F57C) = edi;
    MEM32(0x91F580) = edi;
    MEM32(0x91F584) = edi;
    MEM32(0x91F588) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00086908; /* jne: not equal / not zero */

loc_000868FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00086905u); RECOMP_ABI_CALL(0x000805E0u, sub_000805E0); /* call 0x000805E0 */

loc_00086905: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00086908: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008690Eu); RECOMP_ABI_CALL(0x000818E0u, sub_000818E0); /* call 0x000818E0 */

loc_0008690E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esi = 4;
    MEM32(0x91F5B8) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086922: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008692Du); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008692D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008693C; /* je: equal / zero */

loc_00086931: ;
    MEM32(0x9237E0) = edi;
    esi = 3;

loc_0008693C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086950
 * Original: 0x00086950 - 0x0008696C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086950: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM8(ecx + 0x11) = 5;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00086970
 * Original: 0x00086970 - 0x00086975 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086970: ;
    g_seh_ebp = ebp; sub_00085C80(); return; /* tail jmp 0x00085C80 */

}

/**
 * sub_00086980
 * Original: 0x00086980 - 0x00086A6F (239 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00086980: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000869EA; /* jge: greater or equal (signed >=) */

loc_0008698D: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00086998u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_00086998: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000869B7; /* jne: not equal / not zero */

loc_000869A3: ;
    edx = MEM32(esi + 0x28);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000869B7: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000869C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000869C6u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_000869C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000869E2; /* je: equal / zero */

loc_000869D1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000869C0; /* jl: less (signed <) */

loc_000869D7: ;
    POP32(esp, edi);
    eax = 0xB;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000869E2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000869EA: ;
    ecx = esi;
    PUSH32(esp, 0x000869F1u); RECOMP_ABI_CALL(0x00085C90u, sub_00085C90); /* call 0x00085C90 */

loc_000869F1: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00086A62; /* jne: not equal / not zero */

loc_000869F7: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x308D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x308D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00086A27; /* jg: greater (signed >) */

loc_00086A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3088 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00086A48; /* jge: greater or equal (signed >=) */

loc_00086A08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00086A1D; /* je: equal / zero */

loc_00086A0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3086) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3086 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00086A2E; /* jne: not equal / not zero */

loc_00086A13: ;
    eax = 0x30;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086A1D: ;
    eax = 0xB;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086A27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x308F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x308F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00086A48; /* je: equal / zero */

loc_00086A2E: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00086A35u); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_00086A35: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x2C));
    eax = eax + ecx + 0xC;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086A48: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00086A4Fu); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_00086A4F: ;
    edx = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x2C));
    eax = eax + edx + 0xA;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086A62: ;
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(0u - (uint32_t)(LO16(eax))));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB)) >> 32) & 1);
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086A70
 * Original: 0x00086A70 - 0x00086AC5 (85 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086A70: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00086A82; /* jle: less or equal (signed <=) */

loc_00086A7C: ;
    eax = ecx;
    ecx = edx;
    edx = eax;

loc_00086A82: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00086AA9; /* jle: less or equal (signed <=) */

loc_00086A8F: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086A99; /* jl: less (signed <) */

loc_00086A95: ;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086A99: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00086AA4u); RECOMP_ABI_CALL(0x00085CE0u, sub_00085CE0); /* call 0x00085CE0 */

loc_00086AA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086AA9: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00086AB8; /* jge: greater or equal (signed >=) */

loc_00086AAB: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00086AB5; /* jg: greater (signed >) */

loc_00086AB1: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086AB5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = esi;

loc_00086AB8: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086AC0u); RECOMP_ABI_CALL(0x00085CE0u, sub_00085CE0); /* call 0x00085CE0 */

loc_00086AC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086AD0
 * Original: 0x00086AD0 - 0x00086B47 (119 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086AD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00086B22; /* je: equal / zero */

loc_00086ADB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086AE8u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_00086AE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086AF0u); RECOMP_ABI_CALL(0x00151F5Eu, sub_00151F5E); /* call 0x00151F5E */

loc_00086AF0: ;
    ecx = 0xFFFFFFF8u;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00086B0Fu); RECOMP_ABI_CALL(0x00085D00u, sub_00085D00); /* call 0x00085D00 */

loc_00086B0F: ;
    POP32(esp, edi);
    PUSH32(esp, 0x00086B15u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00086B15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086B1Bu); RECOMP_ABI_CALL(0x00084DC0u, sub_00084DC0); /* call 0x00084DC0 */

loc_00086B1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00086B22: ;
    MEM16(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    PUSH32(esp, 0x00086B3Au); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00086B3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086B40u); RECOMP_ABI_CALL(0x00084DC0u, sub_00084DC0); /* call 0x00084DC0 */

loc_00086B40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086B50
 * Original: 0x00086B50 - 0x00086B66 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086B50: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086B62; /* je: equal / zero */

loc_00086B5D: ;
    PUSH32(esp, 0x00086B62u); RECOMP_ABI_CALL(0x00085D80u, sub_00085D80); /* call 0x00085D80 */

loc_00086B62: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086B70
 * Original: 0x00086B70 - 0x00086BE8 (120 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00086BD0; /* jge: greater or equal (signed >=) */

loc_00086B78: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x00086B7Fu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_00086B7F: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = esi + ecx * 2 + 8;
    PUSH32(esp, eax);
    ecx = esi + ecx * 2 + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086B9Bu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_00086B9B: ;
    edx = MEM32(esi + 4);
    SET_LO16(eax, MEM16(esp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM16(esi + edx * 2 + 8) = LO16(eax);
    PUSH32(esp, 0x00086BB4u); RECOMP_ABI_CALL(0x00085D00u, sub_00085D00); /* call 0x00085D00 */

loc_00086BB4: ;
    PUSH32(esp, 0x00086BB9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00086BB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086BBFu); RECOMP_ABI_CALL(0x00084DC0u, sub_00084DC0); /* call 0x00084DC0 */

loc_00086BBF: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00086BD0: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x00086BD7u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_00086BD7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086BF0
 * Original: 0x00086BF0 - 0x00086C42 (82 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086BF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 0xC) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM32(ecx + 0x10) = 0;
    MEM16(ecx + 0xE) = LO16(eax);
    MEM8(ecx + 0x10) = LO8(edx);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x10000000;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0x3F800000;
    MEM16(ecx) = 0x20;
    MEM16(ecx + 2) = 0x101;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00086C50
 * Original: 0x00086C50 - 0x00086CAA (90 bytes, 22 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086C50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(esp + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 6) = LO16(edx);
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 8) = LO16(eax);
    eax = MEM32(esp + 0x14);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 0xA) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM32(ecx + 0x10) = eax;
    SET_LO16(eax, MEM16(esp + 0x1C));
    MEM16(ecx + 2) = 0x106;
    MEM16(ecx) = 0x18;
    MEM32(ecx + 0xC) = 0x60000;
    MEM16(ecx + 0x14) = LO16(edx);
    MEM16(ecx + 0x16) = LO16(eax);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00086CB0
 * Original: 0x00086CB0 - 0x00086DA2 (242 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086CB0(void)
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

loc_00086CB0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(esp + 0x12) = 0x104;
    MEM16(esp + 0x10) = 0x14;
    PUSH32(esp, 0x00086CCEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00086CCE: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, LO16(eax));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x14) = LO16(esi);
    PUSH32(esp, 0x00086CE4u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00086CE4: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, LO16(eax));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x16) = LO16(edi);
    PUSH32(esp, 0x00086CFEu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00086CFE: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, LO16(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x18) = LO16(ebx);
    PUSH32(esp, 0x00086D18u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00086D18: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebp, LO16(eax));
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x40000;
    MEM32(esp + 0x2C) = 0xFF002050u;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x26) = LO16(ebp);
    PUSH32(esp, 0x00086D46u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00086D46: ;
    ecx = MEM32(esp + 0x5C);
    eax = 1;
    PUSH32(esp, eax);
    edx = esp + 0x34;
    PUSH32(esp, 0x106);
    PUSH32(esp, edx);
    MEM16(esp + 0x3E) = 0x106;
    MEM16(esp + 0x3C) = 0x18;
    MEM16(esp + 0x40) = LO16(esi);
    MEM16(esp + 0x42) = LO16(edi);
    MEM16(esp + 0x44) = LO16(ebx);
    MEM16(esp + 0x46) = LO16(ebp);
    MEM32(esp + 0x48) = 0x60000;
    MEM32(esp + 0x4C) = ecx;
    MEM16(esp + 0x50) = LO16(eax);
    MEM16(esp + 0x52) = LO16(eax);
    PUSH32(esp, 0x00086D97u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00086D97: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00086DB0
 * Original: 0x00086DB0 - 0x00086F32 (386 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00086DB0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFF00u);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x441D4000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x42B80000);
    PUSH32(esp, 0x00086DD3u); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_00086DD3: ;
    edi = MEM32(esp + 0x40);
    ebx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00086F23; /* je: equal / zero */

loc_00086DE7: ;
    PUSH32(esp, esi);
    esi = ebx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFEBu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xEE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xEE)) >> 32) & 1);
    esi = esi + 0xEE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00086EB0; /* je: equal / zero */

loc_00086DFF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x36 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00086EB0; /* je: equal / zero */

loc_00086E08: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00086E57; /* jne: not equal / not zero */

loc_00086E0D: ;
    PUSH32(esp, 0x91F2C8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086E1Du); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00086E1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00086E2Bu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00086E2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xEE0);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    PUSH32(esp, 0x331910);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00086E4Au); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00086E4A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) | 0x20000000;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00086EF0;

loc_00086E57: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00086E7F; /* je: equal / zero */

loc_00086E5C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00086E7F; /* je: equal / zero */

loc_00086E61: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086E6Cu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00086E6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    goto loc_00086EE7;

loc_00086E7F: ;
    PUSH32(esp, 0x00086E84u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00086E84: ;
    eax = MEM32(eax * 4 + 0x2E6A70);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086E97u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00086E97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00086EA5u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00086EA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    goto loc_00086EDB;

loc_00086EB0: ;
    ecx = MEM32(0x33489C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086EC3u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00086EC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00086ED1u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00086ED1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xEE0);

loc_00086EDB: ;
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    PUSH32(esp, 0x331910);

loc_00086EE7: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00086EF0u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00086EF0: ;
    MEM8(esp + 0x1C) = 5;
    eax = MEM32(esp + 0x1C);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF7FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 0xC;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM16(esp + 0x28) = 0x212;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00086F1Fu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00086F1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00086F23: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00086F29u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00086F29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086F40
 * Original: 0x00086F40 - 0x00086FA5 (101 bytes, 24 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086F40: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x30);
    MEM16(esp + 0xE) = LO16(edx);
    MEM16(esp + 0xC) = LO16(ecx);
    edx = esp;
    ecx = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = 0x10000000;
    PUSH32(esp, edx);
    MEM16(esp + 8) = 0x20;
    MEM16(esp + 0xA) = 0x101;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM8(esp + 0x19) = 4;
    PUSH32(esp, 0x00086F9Fu); RECOMP_ABI_CALL(0x000A1BD0u, sub_000A1BD0); /* call 0x000A1BD0 */

loc_00086F9F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00086FB0
 * Original: 0x00086FB0 - 0x00087027 (119 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00086FBEu); RECOMP_ABI_CALL(0x00070A50u, sub_00070A50); /* call 0x00070A50 */

loc_00086FBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086FD3; /* jne: not equal / not zero */

loc_00086FC5: ;
    eax = MEM32(0x9238B8);
    eax = ZX8(MEM8(eax + 0xABF6));
    goto loc_00086FF0;

loc_00086FD3: ;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00086FE0u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_00086FE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087022; /* je: equal / zero */

loc_00086FE7: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087022; /* je: equal / zero */

loc_00086FEC: ;
    eax = ZX8(MEM8(eax + 0x26));

loc_00086FF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087022; /* je: equal / zero */

loc_00086FF5: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(eax * 4 + 0x2387C8);
    ecx = edi + edi + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x40));
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 1;
    edx = MEM32(esi + 0x34);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00087022u); RECOMP_ABI_CALL(0x00086F40u, sub_00086F40); /* call 0x00086F40 */

loc_00087022: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087030
 * Original: 0x00087030 - 0x00087255 (549 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087030: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x50);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x3A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087045u); RECOMP_ABI_CALL(0x00086F40u, sub_00086F40); /* call 0x00086F40 */

loc_00087045: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F8CCCCD);
    PUSH32(esp, 0x3F8CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00087065u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087065: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008707Au); RECOMP_ABI_CALL(0x000929C0u, sub_000929C0); /* call 0x000929C0 */

loc_0008707A: ;
    edx = MEM32(0x2E69B8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x3A);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008709Cu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008709C: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x239248);
    PUSH32(esp, 0x000870C2u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000870C2: ;
    eax = MEM32(0x2E69BC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x3A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000870E6u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000870E6: ;
    ecx = MEM32(0x2E69C0);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x3A);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008710Eu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008710E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x3A);
    edx = MEM32(0x2E69C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00087133u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087133: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x127);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0008714Eu); RECOMP_ABI_CALL(0x000692B0u, sub_000692B0); /* call 0x000692B0 */

loc_0008714E: ;
    eax = MEM32(0x2E69DC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x114);
    PUSH32(esp, 0x3A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087172u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087172: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00087193u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087193: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000871BAu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000871BA: ;
    edx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000871DEu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000871DE: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00087205u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087205: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087229u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087229: ;
    edx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x114);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087250u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087250: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087260
 * Original: 0x00087260 - 0x000872F2 (146 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00087268u); RECOMP_ABI_CALL(0x00087030u, sub_00087030); /* call 0x00087030 */

loc_00087268: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x239B94);
    PUSH32(esp, 0x0008728Bu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008728B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x154);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x239B70);
    PUSH32(esp, 0x000872AEu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000872AE: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000872D5u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_000872D5: ;
    eax = MEM32(esi + 0x44);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x4C));
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x154);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000872EDu); RECOMP_ABI_CALL(0x00085030u, sub_00085030); /* call 0x00085030 */

loc_000872ED: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087300
 * Original: 0x00087300 - 0x0008751F (543 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087300(void)
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

loc_00087300: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0x0008731Au); RECOMP_ABI_CALL(0x0007DBE0u, sub_0007DBE0); /* call 0x0007DBE0 */

loc_0008731A: ;
    edi = edx;
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00087325u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_00087325: ;
    ebp = MEM32(esp + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087377; /* je: equal / zero */

loc_00087333: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087377; /* je: equal / zero */

loc_00087338: ;
    eax = ZX8(MEM8(eax + 0x26));
    ecx = MEM32(eax * 4 + 0x2387C8);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBE);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00087355u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_00087355: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = 0x3F4CCCCD;
    MEM32(esp + 0x4C) = 0x3F4CCCCD;
    MEM8(esp + 0x45) = 0;
    PUSH32(esp, 0x00087374u); RECOMP_ABI_CALL(0x000A1170u, sub_000A1170); /* call 0x000A1170 */

loc_00087374: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087377: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x238770); PUSH32(esp, 0x0008737Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00087379u); } /* indirect call */
    }

loc_0008737F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00087389u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00087389: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000873A3; /* je: equal / zero */

loc_0008738D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000873A3; /* je: equal / zero */

loc_00087391: ;
    PUSH32(esp, 0);
    eax = ebp;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xE10);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    goto loc_000873D0;

loc_000873A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000873A9u); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_000873A9: ;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x239BA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000873B9u); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_000873B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = ebp;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0xE10);
    PUSH32(esp, 0);
    eax = esp + 0x60;
    PUSH32(esp, eax);

loc_000873D0: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000873D9u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_000873D9: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(0x91F500);
    ecx = ecx | 0x20000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x2F3F3F3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0C0C0C0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x00087410u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00087410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00087416u); RECOMP_ABI_CALL(0x0007D440u, sub_0007D440); /* call 0x0007D440 */

loc_00087416: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008747A; /* je: equal / zero */

loc_0008741C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00087450; /* je: equal / zero */

loc_0008741F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000874AA; /* jne: not equal / not zero */

loc_00087426: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_0008743D; /* jge: greater or equal (signed >=) */

loc_00087437: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0008743D: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 3);
    goto loc_000874A2;

loc_00087450: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_00087467; /* jge: greater or equal (signed >=) */

loc_00087461: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00087467: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 4);
    goto loc_000874A2;

loc_0008747A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_00087491; /* jge: greater or equal (signed >=) */

loc_0008748B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00087491: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 2);

loc_000874A2: ;
    PUSH32(esp, 0x000874A7u); RECOMP_ABI_CALL(0x0002A290u, sub_0002A290); /* call 0x0002A290 */

loc_000874A7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000874AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000874B0u); RECOMP_ABI_CALL(0x0007D3D0u, sub_0007D3D0); /* call 0x0007D3D0 */

loc_000874B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000874B5: ;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x2E6E78)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx * 4 + 0x2E6E78), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000874D5; /* jne: not equal / not zero */

loc_000874BE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000874B5; /* jb: below (unsigned <) */

loc_000874C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, 0x000874D1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000874D1: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000874D5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_000874EC; /* jge: greater or equal (signed >=) */

loc_000874E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000874EC: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    eax = MEM32(ecx * 4 + 0x2E6E94);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x44048000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087508u); RECOMP_ABI_CALL(0x0002A290u, sub_0002A290); /* call 0x0002A290 */

loc_00087508: ;
    ecx = MEM32(esp + 0x80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0008751Bu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0008751B: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00087520
 * Original: 0x00087520 - 0x00087759 (569 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087520: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00087530u); RECOMP_ABI_CALL(0x0007D440u, sub_0007D440); /* call 0x0007D440 */

loc_00087530: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00087538u); RECOMP_ABI_CALL(0x0007D3D0u, sub_0007D3D0); /* call 0x0007D3D0 */

loc_00087538: ;
    ebx = eax;
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087558; /* jne: not equal / not zero */

loc_00087545: ;
    PUSH32(esp, 0x91F2C8);
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00087555u); RECOMP_ABI_CALL(0x0007D590u, sub_0007D590); /* call 0x0007D590 */

loc_00087555: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087558: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x43B68000);
    PUSH32(esp, 0x44138000);
    PUSH32(esp, 0x43930000);
    PUSH32(esp, 0x43020000);
    PUSH32(esp, 0x00087573u); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_00087573: ;
    esi = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000875CA; /* je: equal / zero */

loc_0008757D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000875CA; /* je: equal / zero */

loc_00087581: ;
    eax = MEM32(edi * 4 + 0x2E6EC0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087593u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00087593: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1590);
    PUSH32(esp, 0x870);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000875AEu); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_000875AE: ;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0xC;
    eax = eax | 0x20000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000875C7u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_000875C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000875CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000875D0: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x2E6E78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax * 4 + 0x2E6E78), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000875E4; /* jne: not equal / not zero */

loc_000875D9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000875D0; /* jb: below (unsigned <) */

loc_000875DF: ;
    goto loc_0008769A;

loc_000875E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087611; /* jne: not equal / not zero */

loc_000875E8: ;
    edx = MEM32(0x2E6EB0);
    PUSH32(esp, 0x91F2C8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000875FEu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_000875FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0008760Cu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0008760C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00087636;

loc_00087611: ;
    eax = MEM32(eax * 4 + 0x2E6EB0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087623u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00087623: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x239BAC);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087633u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087633: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087636: ;
    ecx = esp + 0xC;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x16) = 0x108;
    MEM32(esp + 0x18) = 0x331910;
    MEM16(esp + 0x1C) = 0x870;
    MEM16(esp + 0x1E) = 0x1430;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    MEM16(esp + 0x28) = 0;
    MEM8(esp + 0x2A) = 0x40;
    MEM8(esp + 0x2B) = 0x30;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x24) = 0x30009100;
    PUSH32(esp, 0x00087697u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00087697: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008769A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000876BD; /* jne: not equal / not zero */

loc_0008769E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0x000876ADu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_000876AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x000876BBu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000876BB: ;
    goto loc_000876EE;

loc_000876BD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    PUSH32(esp, 0x91F2C8);
    PUSH32(esp, 0xFF);
    if (TEST_Z(_fa, _fb)) goto loc_000876D3; /* je: equal / zero */

loc_000876CC: ;
    PUSH32(esp, 0x162);
    goto loc_000876D8;

loc_000876D3: ;
    PUSH32(esp, 0x163);

loc_000876D8: ;
    PUSH32(esp, 0x000876DDu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_000876DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x000876EBu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_000876EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000876EE: ;
    edx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM16(esp + 0x34) = 0x20;
    MEM16(esp + 0x36) = 0x108;
    MEM32(esp + 0x38) = 0x331910;
    MEM16(esp + 0x3C) = 0x870;
    MEM16(esp + 0x3E) = 0x12C0;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    MEM16(esp + 0x48) = 0;
    MEM8(esp + 0x4A) = 0x40;
    MEM8(esp + 0x4B) = 0x30;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x44) = 0x10009100;
    PUSH32(esp, 0x0008774Fu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008774F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00087760
 * Original: 0x00087760 - 0x00087960 (512 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087760(void)
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

loc_00087760: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0x0008777Au); RECOMP_ABI_CALL(0x0007D870u, sub_0007D870); /* call 0x0007D870 */

loc_0008777A: ;
    ebx = edx;
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00087785u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_00087785: ;
    ebp = MEM32(esp + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000877D7; /* je: equal / zero */

loc_00087793: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000877D7; /* je: equal / zero */

loc_00087798: ;
    eax = ZX8(MEM8(eax + 0x26));
    ecx = MEM32(eax * 4 + 0x2387C8);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBE);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000877B5u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_000877B5: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = 0x3F4CCCCD;
    MEM32(esp + 0x4C) = 0x3F4CCCCD;
    MEM8(esp + 0x45) = 0;
    PUSH32(esp, 0x000877D4u); RECOMP_ABI_CALL(0x000A1170u, sub_000A1170); /* call 0x000A1170 */

loc_000877D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000877D7: ;
    PUSH32(esp, 0x000877DCu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_000877DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00087805; /* je: equal / zero */

loc_000877E1: ;
    PUSH32(esp, 0x000877E6u); RECOMP_ABI_CALL(0x0007D850u, sub_0007D850); /* call 0x0007D850 */

loc_000877E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000877F4u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000877F4: ;
    PUSH32(esp, 0);
    ecx = ebp;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE10);
    PUSH32(esp, 1);
    goto loc_0008782C;

loc_00087805: ;
    PUSH32(esp, 0x0008780Au); RECOMP_ABI_CALL(0x0007D830u, sub_0007D830); /* call 0x0007D830 */

loc_0008780A: ;
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, 0x239BA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008781Au); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_0008781A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = ebp;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE10);
    PUSH32(esp, 0);

loc_0008782C: ;
    edx = esp + 0x60;
    ecx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008783Au); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0008783A: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(0x91F500);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0x20000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x2F3F3F3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0C0C0C0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00087870u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00087870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00087877u); RECOMP_ABI_CALL(0x0007D9C0u, sub_0007D9C0); /* call 0x0007D9C0 */

loc_00087877: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000878B4; /* je: equal / zero */

loc_0008787E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_00087895; /* jge: greater or equal (signed >=) */

loc_0008788F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00087895: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    edx = MEM32(eax * 4 + 0x239BB4);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x44048000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000878B1u); RECOMP_ABI_CALL(0x0002A290u, sub_0002A290); /* call 0x0002A290 */

loc_000878B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000878B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000878BBu); RECOMP_ABI_CALL(0x00080140u, sub_00080140); /* call 0x00080140 */

loc_000878BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008791F; /* je: equal / zero */

loc_000878C1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000878F5; /* je: equal / zero */

loc_000878C4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008794F; /* jne: not equal / not zero */

loc_000878CB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_000878E2; /* jge: greater or equal (signed >=) */

loc_000878DC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000878E2: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 3);
    goto loc_00087947;

loc_000878F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_0008790C; /* jge: greater or equal (signed >=) */

loc_00087906: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0008790C: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 4);
    goto loc_00087947;

loc_0008791F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x78) = ebp;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    PUSH32(esp, 0x3F800000);
    if (CMP_GE(_fas, _fbs)) goto loc_00087936; /* jge: greater or equal (signed >=) */

loc_00087930: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00087936: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A8)); /* fsub dword ptr [0x22c1a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 2);

loc_00087947: ;
    PUSH32(esp, 0x0008794Cu); RECOMP_ABI_CALL(0x0002A290u, sub_0002A290); /* call 0x0002A290 */

loc_0008794C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008794F: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0008795Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0008795C: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00087960
 * Original: 0x00087960 - 0x00087A43 (227 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087960: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008796Fu); RECOMP_ABI_CALL(0x0007D870u, sub_0007D870); /* call 0x0007D870 */

loc_0008796F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x43B68000);
    PUSH32(esp, 0x44138000);
    PUSH32(esp, 0x43930000);
    PUSH32(esp, 0x43020000);
    esi = eax;
    edi = edx;
    PUSH32(esp, 0x0008798Eu); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_0008798E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00087995u); RECOMP_ABI_CALL(0x0007D9C0u, sub_0007D9C0); /* call 0x0007D9C0 */

loc_00087995: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000879E5; /* je: equal / zero */

loc_0008799C: ;
    ecx = MEM32(eax * 4 + 0x2E6F70);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000879AEu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_000879AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C0);
    PUSH32(esp, 0x870);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000879C9u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_000879C9: ;
    eax = MEM32(esp + 0x18);
    edx = esp + 8;
    eax = eax | 0x20000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000879E2u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_000879E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000879E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000879ECu); RECOMP_ABI_CALL(0x00080140u, sub_00080140); /* call 0x00080140 */

loc_000879EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087A3D; /* je: equal / zero */

loc_000879F3: ;
    eax = MEM32(eax * 4 + 0x2E6EC0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087A05u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00087A05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1590);
    PUSH32(esp, 0x870);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00087A20u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00087A20: ;
    edi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, 1);
    edi = edi | 0x20000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x00087A3Au); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00087A3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087A3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00087A50
 * Original: 0x00087A50 - 0x000880AE (1630 bytes, 496 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087A50: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x9C));
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xAC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB0);
    MEM32(esp + 0xA8) = eax;
    eax = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00087AAE; /* jne: not equal / not zero */

loc_00087A7F: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    MEM8(esp + 0x54) = 1;
    PUSH32(esp, 0x00087A8Eu); RECOMP_ABI_CALL(0x00075AF0u, sub_00075AF0); /* call 0x00075AF0 */

loc_00087A8E: ;
    edx = MEM32(0x9238B8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB1C8)) >> 32) & 1);
    edx = edx + 0xB1C8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x7B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087AA8u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_00087AA8: ;
    esi = esp + 0x50;
    goto loc_00087AC2;

loc_00087AAE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00087AB5u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_00087AB5: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00088063; /* je: equal / zero */

loc_00087AC2: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00088063; /* je: equal / zero */

loc_00087ACC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00087BA0; /* jne: not equal / not zero */

loc_00087AD4: ;
    PUSH32(esp, 0x00087AD9u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00087AD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00087B4B; /* je: equal / zero */

loc_00087ADD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00087AE4u); RECOMP_ABI_CALL(0x00071540u, sub_00071540); /* call 0x00071540 */

loc_00087AE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00087B4B; /* je: equal / zero */

loc_00087AEC: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7A);
    MEM32(0x9237CC) = 1;
    PUSH32(esp, 0x00087B02u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00087B02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xF00);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00087B1Du); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00087B1D: ;
    MEM8(esp + 0x20) = 5;
    edi = MEM32(esp + 0x20);
    ecx = esp + 0x10;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0x20000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x00087B3Cu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00087B3C: ;
    MEM32(0x9237E8) = 0x200;
    goto loc_00088079;

loc_00087B4B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00087B57u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00087B57: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xF00);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00087B72u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00087B72: ;
    MEM8(esp + 0x20) = 5;
    esi = MEM32(esp + 0x20);
    edx = esp + 0x10;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x20000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x00087B91u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00087B91: ;
    MEM32(0x9237E8) = 0x200;
    goto loc_00088079;

loc_00087BA0: ;
    eax = ZX8(MEM8(esi + 0x26));
    edi = MEM32(esp + 0xBC);
    ebp = MEM32(esp + 0xB8);
    ecx = MEM32(eax * 4 + 0x2387C8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00087BC7u); RECOMP_ABI_CALL(0x00086BF0u, sub_00086BF0); /* call 0x00086BF0 */

loc_00087BC7: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + 0x25) = 4;
    MEM32(esp + 0x28) = 0x3F4CCCCD;
    MEM32(esp + 0x2C) = 0x3F4CCCCD;
    PUSH32(esp, 0x00087BE6u); RECOMP_ABI_CALL(0x000A1170u, sub_000A1170); /* call 0x000A1170 */

loc_00087BE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00087BEEu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00087BEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00087C22; /* je: equal / zero */

loc_00087BF2: ;
    ecx = MEM32(esp + 0xC0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    PUSH32(esp, edi);
    eax = ebp + 0x1E;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087C1Du); RECOMP_ABI_CALL(0x00092AC0u, sub_00092AC0); /* call 0x00092AC0 */

loc_00087C1D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00087C64;

loc_00087C22: ;
    edx = MEM32(esp + 0xC4);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087C39u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087C39: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    PUSH32(esp, edi);
    ecx = ebp + 0x22;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00087C61u); RECOMP_ABI_CALL(0x00092AC0u, sub_00092AC0); /* call 0x00092AC0 */

loc_00087C61: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087C64: ;
    ecx = MEM32(esi + 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x13)) >> 32) & 1);
    edi = edi + 0x13;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F666666);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 0xFFFFFF80u);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = MEM32(eax * 4 + 0x2E71EC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087C93u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087C93: ;
    eax = MEM32(esi + 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3F666666);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 0xFFFFFF80u);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    ebx = edi + 0x15;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = MEM32(edx * 4 + 0x2E71F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087CC2u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087CC2: ;
    ecx = MEM32(esi + 1);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    eax = edi + 0x2A;
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(esi + 5)));
    ecx = ecx - MEM32(esi + 5);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = MEM32(ecx * 4 + 0x2E71FC);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00087CF6u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087CF6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    eax = edi + 0x3F;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x239CD4);
    PUSH32(esp, 0x00087D17u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087D17: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    eax = edi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x239CB4);
    PUSH32(esp, 0x00087D3Bu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087D3B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    eax = edi + 0x69;
    PUSH32(esp, 0xFFFFFF80u);
    ecx = MEM32(esi + 9);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ecx = MEM32(eax * 4 + 0x2E7204);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087D6Au); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087D6A: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    eax = edi + 0x7E;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x239CA4);
    PUSH32(esp, 0x00087D8Eu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087D8E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    eax = edi + 0x93;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x21);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    eax = MEM32(edx * 4 + 0x2E720C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087DC0u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087DC0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    eax = edi + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x239C98);
    PUSH32(esp, 0x00087DE7u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087DE7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, 0);
    ecx = edi + 0xBD;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x239C88);
    PUSH32(esp, 0x00087E0Bu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087E0B: ;
    edx = MEM32(esi + 1);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    _fb = (uint32_t)(0xE2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xE2)) >> 32) & 1);
    ebp = ebp + 0xE2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00087E27u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087E27: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087E45u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087E45: ;
    ecx = MEM32(esi + 9);
    eax = MEM32(esi + 5);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 1);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087E62u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087E62: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087E83u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087E83: ;
    eax = MEM32(esi + 1);
    _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 5)));
    eax = eax - MEM32(esi + 5);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087E99u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087E99: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0x2A;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087EBAu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087EBA: ;
    ecx = MEM32(esi + 1);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x54)) >> 32) & 1);
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00087ED0; /* je: equal / zero */

loc_00087EC4: ;
    eax = MEM32(esi + 5);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    goto loc_00087ED2;

loc_00087ED0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00087ED2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x239C74);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087EE2u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087EE2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0x3F;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087F03u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087F03: ;
    ecx = MEM32(esi + 0x11);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087F16u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087F16: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087F37u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087F37: ;
    edx = MEM32(esi + 9);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087F4Du); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087F4D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0x69;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087F6Eu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087F6E: ;
    eax = MEM32(esi + 0xD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087F81u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087F81: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0x7E;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087FA2u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087FA2: ;
    ecx = MEM32(esi + 0x21);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x239C80);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087FB8u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087FB8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0x93;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087FDCu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00087FDC: ;
    edx = ZX8(MEM8(esi + 0x25));
    eax = MEM32(edx * 4 + 0x2E6A70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x239BAC);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00087FF7u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00087FF7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = edi + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0008801Bu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008801B: ;
    _fb = (uint32_t)(0x27) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x27)) >> 32) & 1);
    esi = esi + 0x27;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008804A; /* je: equal / zero */

loc_00088027: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    _fb = (uint32_t)(0xD2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD2)) >> 32) & 1);
    edi = edi + 0xD2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088047u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00088047: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008804A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x98);
    PUSH32(esp, 0x0008805Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0008805C: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x9C)) >> 32) & 1);
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00088063: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x39);
    MEM32(0x9237E8) = 0;
    PUSH32(esp, 0x00088079u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_00088079: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00088087u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_00088087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, LO8(ebx));
    if (CMP_EQ(_fa, _fb)) goto loc_00088097; /* je: equal / zero */

loc_0008808D: ;
    MEM32(0x9237A0) = 2;

loc_00088097: ;
    ecx = MEM32(esp + 0xA8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000880A7u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000880A7: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x9C)) >> 32) & 1);
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000880B0
 * Original: 0x000880B0 - 0x000880F6 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000880B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000880B0: ;
    PUSH32(esp, 0x000880B5u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_000880B5: ;
    eax = MEM32(0x9237A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000880F5; /* jne: not equal / not zero */

loc_000880BD: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x000880C9u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_000880C9: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000880D7u); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_000880D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000880E0; /* je: equal / zero */

loc_000880DB: ;
    g_seh_ebp = ebp; sub_00038710(); return; /* tail jmp 0x00038710 */

loc_000880E0: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x000880EBu); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_000880EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000880F5; /* je: equal / zero */

loc_000880EF: ;
    MEM32(0x9237A0) = MEM32(0x9237A0) - 1;
    _fa = (uint32_t)(MEM32(0x9237A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000880F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00088100
 * Original: 0x00088100 - 0x000881B0 (176 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088100: ;
    eax = MEM32(0x91F624);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x91F60C) = 0xBC;
    MEM32(0x9237E8) = 2;
    MEM32(0x91F58C) = 0x10;
    esi = edx;
    edi = eax;
    PUSH32(esp, 0x00088142u); RECOMP_ABI_CALL(0x00086170u, sub_00086170); /* call 0x00086170 */

loc_00088142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088150; /* je: equal / zero */

loc_00088146: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00088169; /* jbe: below or equal (unsigned <=) */

loc_0008814C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00088169;

loc_00088150: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008815Bu); RECOMP_ABI_CALL(0x000860A0u, sub_000860A0); /* call 0x000860A0 */

loc_0008815B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088169; /* je: equal / zero */

loc_0008815F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088168; /* jne: not equal / not zero */

loc_00088163: ;
    esi = 5;

loc_00088168: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00088169: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008817F; /* je: equal / zero */

loc_0008816D: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00088178u); RECOMP_ABI_CALL(0x00086230u, sub_00086230); /* call 0x00086230 */

loc_00088178: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008817F; /* je: equal / zero */

loc_0008817C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00088194;

loc_0008817F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088194; /* je: equal / zero */

loc_00088184: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008818Fu); RECOMP_ABI_CALL(0x000862B0u, sub_000862B0); /* call 0x000862B0 */

loc_0008818F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088194; /* je: equal / zero */

loc_00088193: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00088194: ;
    ecx = esi + edi * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91F624) = ecx;
    edi = 0x20;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

    g_seh_ebp = ebp; sub_000881B0(); return; /* fallthrough 0x000881B0 */

}

/**
 * sub_000881B0
 * Original: 0x000881B0 - 0x000883A5 (501 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000881B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000881B0: ;
    edx = MEM32(esi * 4 + 0x2387C8);
    MEM32(esp + 0x34) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 5;
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    ebp = MEM32(0x2E707C);
    MEM32(esp + 0x40) = 0x10000000;
    MEM16(esp + 0x30) = LO16(edi);
    MEM16(esp + 0x32) = 0x101;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0x3F800000;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x41) = 5;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x2E7084));
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x2E7088));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(0x2E7080)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x2E7080);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM16(esp + 0x3C) = LO16(edx);
    MEM16(esp + 0x3E) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0008823B; /* jne: not equal / not zero */

loc_00088229: ;
    MEM32(esp + 0x44) = 0x3FB33333;
    MEM32(esp + 0x48) = 0x3FB33333;
    goto loc_00088243;

loc_0008823B: ;
    MEM32(esp + 0x4C) = 0xFF808080u;

loc_00088243: ;
    eax = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008824Fu); RECOMP_ABI_CALL(0x000A1BD0u, sub_000A1BD0); /* call 0x000A1BD0 */

loc_0008824F: ;
    ecx = MEM32(0x91F624);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000881B0; /* jb: below (unsigned <) */

loc_00088262: ;
    edx = MEM32(ecx * 4 + 0x238830);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088274u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00088274: ;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x91F624);
    ecx = MEM32(eax * 4 + 0x238830);
    MEM16(esp + 0x58) = LO16(edi);
    PUSH32(esp, 0xFF);
    edi = 0x1680;
    MEM32(esp + 0x6C) = 0x10009100;
    PUSH32(esp, ecx);
    MEM16(esp + 0x62) = 0x108;
    MEM16(esp + 0x68) = LO16(edi);
    MEM16(esp + 0x6A) = 0x1660;
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x74) = 0;
    MEM8(esp + 0x76) = 0x40;
    MEM8(esp + 0x77) = 0x30;
    MEM32(esp + 0x78) = 0x3F800000;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM8(esp + 0x70) = 5;
    PUSH32(esp, 0x000882DEu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_000882DE: ;
    edx = esp + 0x20;
    ebx = 1;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = eax;
    MEM8(esp + 0x30) = LO8(ebx);
    MEM8(esp + 0x31) = 0;
    MEM8(esp + 0x32) = LO8(ebx);
    MEM8(esp + 0x33) = 0;
    PUSH32(esp, 0x00088310u); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_00088310: ;
    PUSH32(esp, 0x00088315u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00088315: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x0008831Fu); RECOMP_ABI_CALL(0x0009CCF0u, sub_0009CCF0); /* call 0x0009CCF0 */

loc_0008831F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    MEM16(esp + 0x4A) = LO16(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x40;
    PUSH32(esp, 0x104);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x50) = 0x40000;
    PUSH32(esp, eax);
    MEM16(esp + 0x4A) = 0x104;
    MEM16(esp + 0x48) = 0x14;
    MEM16(esp + 0x4C) = LO16(edi);
    MEM16(esp + 0x4E) = 0x1640;
    MEM16(esp + 0x50) = LO16(esi);
    MEM32(esp + 0x58) = 0x80000080u;
    MEM8(esp + 0x55) = 5;
    PUSH32(esp, 0x00088374u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_00088374: ;
    ecx = esp + 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008837Fu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008837F: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008838Du); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008838D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008839B; /* je: equal / zero */

loc_00088391: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008839B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000883B0
 * Original: 0x000883B0 - 0x00088467 (183 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000883B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000883B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088462; /* je: equal / zero */

loc_000883C0: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_000883E0; /* je: equal / zero */

loc_000883C7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00088461; /* jne: not equal / not zero */

loc_000883CE: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x154;
    if (CMP_EQ(_fa, _fb)) goto loc_000883F8; /* je: equal / zero */

loc_000883DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    goto loc_000883F0;

loc_000883E0: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x153;
    if (CMP_EQ(_fa, _fb)) goto loc_000883F8; /* je: equal / zero */

loc_000883EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x37);

loc_000883F0: ;
    PUSH32(esp, 0x000883F5u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000883F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000883F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00088407u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_00088407: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00088415u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00088415: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1930);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 1);
    PUSH32(esp, 0x331910);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00088434u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00088434: ;
    MEM8(esp + 0x18) = 5;
    eax = MEM32(esp + 0x18);
    eax = eax | 0x20001000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFF7FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    eax = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM16(esp + 0x24) = 0x258;
    PUSH32(esp, 0x0008845Eu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008845E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088461: ;
    POP32(esp, edi);

loc_00088462: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088470
 * Original: 0x00088470 - 0x00088616 (422 bytes, 113 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088470(void)
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

loc_00088470: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00088481u); RECOMP_ABI_CALL(0x00077E90u, sub_00077E90); /* call 0x00077E90 */

loc_00088481: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088493; /* je: equal / zero */

loc_00088485: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008848Bu); RECOMP_ABI_CALL(0x000883B0u, sub_000883B0); /* call 0x000883B0 */

loc_0008848B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000885E3;

loc_00088493: ;
    eax = MEM32(0x91F60C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000885E3; /* je: equal / zero */

loc_000884A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000884D7; /* je: equal / zero */

loc_000884A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000884D7; /* je: equal / zero */

loc_000884AF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000884BAu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_000884BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1930);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000884D5u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_000884D5: ;
    goto loc_0008854F;

loc_000884D7: ;
    PUSH32(esp, 0x000884DCu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_000884DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000884ED; /* je: equal / zero */

loc_000884E2: ;
    PUSH32(esp, 0x000884E7u); RECOMP_ABI_CALL(0x00070950u, sub_00070950); /* call 0x00070950 */

loc_000884E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    goto loc_0008850A;

loc_000884ED: ;
    PUSH32(esp, 0x000884F2u); RECOMP_ABI_CALL(0x00070940u, sub_00070940); /* call 0x00070940 */

loc_000884F2: ;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088502u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00088502: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x28;
    PUSH32(esp, edx);

loc_0008850A: ;
    eax = MEM32(0x91F60C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008851Au); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0008851A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00088528u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00088528: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1930);
    PUSH32(esp, 0x1680);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x00088547u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00088547: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) | 0x20000000;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0008854F: ;
    eax = MEM32(0x91F60C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088560; /* je: equal / zero */

loc_00088559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000885B1; /* jne: not equal / not zero */

loc_00088560: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088569u); RECOMP_ABI_CALL(0x001650B0u, sub_001650B0); /* call 0x001650B0 */

loc_00088569: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1E;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00088586; /* jge: greater or equal (signed >=) */

loc_00088580: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00088586: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239CF0)); /* fmul dword ptr [0x239cf0] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239CEC)); /* fmul dword ptr [0x239cec] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C248)); /* fadd dword ptr [0x22c248] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x000885A5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000885A5: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;

loc_000885B1: ;
    MEM8(esp + 0x18) = 5;
    eax = MEM32(esp + 0x18);
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFF7FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 8;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM16(esp + 0x24) = 0x258;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000885E0u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_000885E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000885E3: ;
    eax = MEM32(0x9237E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x91F60C) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00088609; /* je: equal / zero */

loc_000885F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000885FCu); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_000885FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = 0;

loc_00088609: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00088612u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00088612: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088620
 * Original: 0x00088620 - 0x000887D5 (437 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00088620: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 0x88);
    ecx = MEM32(eax * 4 + 0x2387C8);
    edx = ebx;
    eax = esp + 0xC;
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x16) = 0x101;
    MEM32(esp + 0x18) = ecx;
    MEM16(esp + 0x20) = 0x550;
    MEM16(esp + 0x22) = LO16(edx);
    MEM32(esp + 0x24) = 0x10000000;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    MEM32(esp + 0x28) = 0x3F4CCCCD;
    MEM32(esp + 0x2C) = 0x3F4CCCCD;
    PUSH32(esp, 0x00088693u); RECOMP_ABI_CALL(0x000A1BD0u, sub_000A1BD0); /* call 0x000A1BD0 */

loc_00088693: ;
    esi = MEM32(edi + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3F800000);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0x3F800000);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFA15Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFF80FFA0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFF80FFA0u)) >> 32) & 1);
    esi = esi + 0xFF80FFA0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000886CAu); RECOMP_ABI_CALL(0x00092AC0u, sub_00092AC0); /* call 0x00092AC0 */

loc_000886CA: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x239D00);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000886E1u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_000886E1: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    edx = esp + 0x48;
    PUSH32(esp, 0x158);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088706u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00088706: ;
    ecx = MEM32(edi + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x58;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x239CF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088722u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_00088722: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6E);
    PUSH32(esp, ebx);
    edx = esp + 0x88;
    PUSH32(esp, 0x18E);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008874Au); RECOMP_ABI_CALL(0x00092AC0u, sub_00092AC0); /* call 0x00092AC0 */

loc_0008874A: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax * 4 + 0x2E69E8);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x5C)) >> 32) & 1);
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1EC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088775u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00088775: ;
    edx = ZX8(MEM8(edi + 0x1B));
    eax = MEM32(edx * 4 + 0x2E6B44);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x276);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008879Eu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008879E: ;
    edi = MEM32(edi + 0x8C);
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000887C5; /* je: equal / zero */

loc_000887AD: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0xE));
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    ebx = ebx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x235);
    PUSH32(esp, 0x000887C2u); RECOMP_ABI_CALL(0x00085030u, sub_00085030); /* call 0x00085030 */

loc_000887C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000887C5: ;
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000887D1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000887D1: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000887E0
 * Original: 0x000887E0 - 0x0008886E (142 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000887E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000887E0: ;
    eax = MEM32(0x9237CC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008886A; /* je: equal / zero */

loc_000887EC: ;
    PUSH32(esp, 0x000887F1u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000887F1: ;
    ecx = eax;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 7;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = esp;
    MEM32(esp + 0x10) = 0x10000000;
    PUSH32(esp, eax);
    MEM16(esp + 4) = 0x20;
    MEM16(esp + 6) = 0x101;
    MEM16(esp + 0x10) = 0x27C0;
    MEM16(esp + 0x12) = 0x1A00;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    MEM8(esp + 0x15) = 5;
    edx = MEM32(edx * 4 + 0x2E70B4);
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0008885Du); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0008885D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237CC) = 0;

loc_0008886A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088870
 * Original: 0x00088870 - 0x00088989 (281 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088870(void)
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

loc_00088870: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008887Eu); RECOMP_ABI_CALL(0x001650B0u, sub_001650B0); /* call 0x001650B0 */

loc_0008887E: ;
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x78;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0008889D; /* jge: greater or equal (signed >=) */

loc_00088897: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0008889D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D0C)); /* fmul dword ptr [0x239d0c] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C26C)); /* fmul dword ptr [0x22c26c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x235D6C)); /* fadd dword ptr [0x235d6c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x000888BCu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000888BC: ;
    esi = eax;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x34), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088922; /* je: equal / zero */

loc_000888C5: ;
    edx = esi;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esp + 0x10;
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = 0x10000000;
    PUSH32(esp, eax);
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x16) = 0x101;
    MEM32(esp + 0x18) = 0x1000B;
    MEM16(esp + 0x20) = 0x1680;
    MEM16(esp + 0x22) = 0x1870;
    MEM8(esp + 0x25) = 5;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x28) = 0x3F400000;
    MEM32(esp + 0x2C) = 0x3F400000;
    PUSH32(esp, 0x0008891Fu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_0008891F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088922: ;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x34), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088984; /* je: equal / zero */

loc_00088929: ;
    esi = esi << 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = 0x10000000;
    esi = esi | 0xFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x16) = 0x101;
    MEM32(esp + 0x18) = 0x1000A;
    MEM16(esp + 0x20) = 0x1680;
    MEM16(esp + 0x22) = 0x730;
    MEM8(esp + 0x25) = 5;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x28) = 0x3F400000;
    MEM32(esp + 0x2C) = 0x3F400000;
    PUSH32(esp, 0x00088981u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_00088981: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088984: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088990
 * Original: 0x00088990 - 0x000889F1 (97 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088990: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0xC) = LO16(eax);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = 0x10000000;
    PUSH32(esp, edx);
    MEM16(esp + 4) = 0x20;
    MEM16(esp + 6) = 0x101;
    MEM32(esp + 8) = 0x10086;
    MEM16(esp + 0x12) = LO16(eax);
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    MEM8(esp + 0x15) = LO8(ecx);
    PUSH32(esp, 0x000889EDu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000889ED: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088A00
 * Original: 0x00088A00 - 0x00088AB8 (184 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088A00: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x34);
    edi = eax;
    eax = MEM32(esp + 0x30);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM16(esp + 0xC) = 0x20;
    MEM16(esp + 0xE) = 0x101;
    MEM32(esp + 0x10) = 0x10057;
    MEM16(esp + 0x18) = LO16(esi);
    MEM16(esp + 0x1A) = LO16(edi);
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = 0x10300000;
    PUSH32(esp, 0x00088A59u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_00088A59: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    edx = MEM32(esp + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(esp + 0x34);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(esp + 0xC) = 0x20;
    MEM16(esp + 0xE) = 0x101;
    MEM16(esp + 0x18) = LO16(esi);
    MEM16(esp + 0x1A) = LO16(edi);
    MEM32(esp + 0x1C) = 0x10000000;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0x10055) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10055;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x00088AAFu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_00088AAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088AC0
 * Original: 0x00088AC0 - 0x00088AEC (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088AC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00088ACDu); RECOMP_ABI_CALL(0x00086AD0u, sub_00086AD0); /* call 0x00086AD0 */

loc_00088ACD: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00088AD4u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_00088AD4: ;
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM8(esi + 0x38) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088AF0
 * Original: 0x00088AF0 - 0x00088B15 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088AF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088B10; /* je: equal / zero */

loc_00088B00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x00088B09u); RECOMP_ABI_CALL(0x00085D00u, sub_00085D00); /* call 0x00085D00 */

loc_00088B09: ;
    ecx = esi;
    PUSH32(esp, 0x00088B10u); RECOMP_ABI_CALL(0x00086B50u, sub_00086B50); /* call 0x00086B50 */

loc_00088B10: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00088B20
 * Original: 0x00088B20 - 0x00088DE7 (711 bytes, 189 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088B20(void)
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

loc_00088B20: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00088B3Cu); RECOMP_ABI_CALL(0x00084DB0u, sub_00084DB0); /* call 0x00084DB0 */

loc_00088B3C: ;
    esi = eax;
    PUSH32(esp, 0x00088B43u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00088B43: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x7D0;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = esp + 0x18;
    eax = esp + 0x44;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEM16(esp + 0x6A) = 0;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = eax;
    MEM8(esp + 0x28) = 1;
    MEM8(esp + 0x29) = 0;
    MEM8(esp + 0x2A) = 1;
    MEM8(esp + 0x2B) = 0;
    edi = edx;
    edx = 0x570057;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = edx;
    MEM16(esp + 0x68) = LO16(edx);
    PUSH32(esp, 0x00088BB0u); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_00088BB0: ;
    PUSH32(esp, 0x00088BB5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00088BB5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = eax;
    PUSH32(esp, 0x00088BC0u); RECOMP_ABI_CALL(0x0009CCF0u, sub_0009CCF0); /* call 0x0009CCF0 */

loc_00088BC0: ;
    SET_LO8(ebx, MEM8(esp + 0xA4));
    ecx = MEM32(esp + 0x9C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ebx));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00088BE6; /* je: equal / zero */

loc_00088BDF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00088BF1; /* jne: not equal / not zero */

loc_00088BE2: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00088BF1;

loc_00088BE6: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00088BF1: ;
    eax = MEM32(0x8FE5FC);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3F800000);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFF40C0C0u);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 5);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xA8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x8FE55C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088C2Eu); RECOMP_ABI_CALL(0x0009B670u, sub_0009B670); /* call 0x0009B670 */

loc_00088C2E: ;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x54) = 0x11009100;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) & 0xFC);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x54) = LO8(ebx);
    ecx = MEM32(esp + 0x54);
    ecx = ecx | 0x20004000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x54) = ecx;
    eax = ebp;
    ecx = esp + 0x44;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    MEM16(esp + 0x4C) = 0x20;
    MEM16(esp + 0x4E) = 0x108;
    MEM16(esp + 0x54) = LO16(eax);
    MEM16(esp + 0x56) = LO16(esi);
    MEM16(esp + 0x60) = 0;
    MEM8(esp + 0x62) = 0x40;
    MEM8(esp + 0x63) = 0x30;
    MEM32(esp + 0x64) = 0x3F800000;
    MEM32(esp + 0x68) = 0x3F800000;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00088CAFu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00088CAF: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088CCAu); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_00088CCA: ;
    ecx = esp + 0x18;
    eax = esp + 0x64;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    MEM8(esp + 0x2A) = 1;
    MEM8(esp + 0x29) = 1;
    MEM8(esp + 0x2B) = 1;
    PUSH32(esp, 0x00088CF0u); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_00088CF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00088CF8u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00088CF8: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x24) = 0x20;
    MEM16(esp + 0x26) = 0x108;
    MEM32(esp + 0x28) = 0x239D10;
    MEM16(esp + 0x2C) = LO16(eax);
    MEM16(esp + 0x2E) = LO16(esi);
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    MEM16(esp + 0x38) = 0;
    MEM8(esp + 0x3A) = 0x40;
    MEM8(esp + 0x3B) = 0x30;
    MEM32(esp + 0x34) = 0x11019100;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edx;
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x3C) = 0x3F900000;
    MEM32(esp + 0x40) = 0x3F900000;
    MEM32(esp + 0x14) = 0xFF00FF00u;
    MEM32(esp + 0x10) = 0xFFFFFF;
    PUSH32(esp, 0x00088D76u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_00088D76: ;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    edx = esp + 0x18;
    eax = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088D95u); RECOMP_ABI_CALL(0x00085F40u, sub_00085F40); /* call 0x00085F40 */

loc_00088D95: ;
    esi = eax;
    ecx = esi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00088DAE; /* jge: greater or equal (signed >=) */

loc_00088DA8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00088DAE: ;
    PUSH32(esp, 0x00088DB3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00088DB3: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x30;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x00088DCEu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00088DCE: ;
    ecx = MEM32(esp + 0x98);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00088DE1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00088DE1: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088DF0
 * Original: 0x00088DF0 - 0x00088E13 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088DF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x24));
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x64;
    PUSH32(esp, eax);
    eax = 0x168;
    PUSH32(esp, 0x00088E0Fu); RECOMP_ABI_CALL(0x00088A00u, sub_00088A00); /* call 0x00088A00 */

loc_00088E0F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088E20
 * Original: 0x00088E20 - 0x00088FC1 (417 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00088E20(void)
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

loc_00088E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E3Au); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_00088E3A: ;
    eax = MEM32(0x9237A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00089195(); return; } /* je: equal / zero */

loc_00088E46: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0008945F(); return; } /* jne: not equal / not zero */

loc_00088E4D: ;
    eax = MEM32(0x91F500);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E5Au); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_00088E5A: ;
    ecx = MEM32(eax * 4 + 0x2E6DEC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(0x91F500) = eax;
    MEM32(0x91F60C) = ecx;
    MEM32(0x9237E8) = 0x200;
    if (CMP_A(_fa, _fb)) goto loc_00088F6C; /* ja: above (unsigned >) */

loc_00088E82: ;
    ecx = MEM32(0x33489C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E8Du); RECOMP_ABI_CALL(0x00086170u, sub_00086170); /* call 0x00086170 */

loc_00088E8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088EBC; /* je: equal / zero */

loc_00088E91: ;
    eax = MEM32(0x91F500);
    SET_LO8(ecx, MEM8(eax + 0x92395C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00088F6C; /* jge: greater or equal (signed >=) */

loc_00088EA5: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00088EA7: ;
    MEM8(eax + 0x92395C) = LO8(ecx);
    MEM32(0x923790) = 1;
    goto loc_00088F6C;

loc_00088EBC: ;
    ecx = MEM32(0x33489C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088EC7u); RECOMP_ABI_CALL(0x000860A0u, sub_000860A0); /* call 0x000860A0 */

loc_00088EC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088EE2; /* je: equal / zero */

loc_00088ECB: ;
    eax = MEM32(0x91F500);
    SET_LO8(ecx, MEM8(eax + 0x92395C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00088F6C; /* jle: less or equal (signed <=) */

loc_00088EDE: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_00088EA7;

loc_00088EE2: ;
    edx = MEM32(0x33489C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A90);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088F32; /* je: equal / zero */

loc_00088EF5: ;
    ecx = MEM32(0x923790);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(0x923790) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00088F6C; /* jbe: below or equal (unsigned <=) */

loc_00088F07: ;
    eax = MEM32(0x91F500);
    SET_LO8(edx, MEM8(eax + 0x92395C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x64 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00088F6C; /* jge: greater or equal (signed >=) */

loc_00088F17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00088F6C; /* jbe: below or equal (unsigned <=) */

loc_00088F1C: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00088F20: ;
    MEM8(eax + 0x92395C) = LO8(ecx);
    MEM32(0x923790) = 0x14;
    goto loc_00088F6C;

loc_00088F32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088F62; /* je: equal / zero */

loc_00088F36: ;
    ecx = MEM32(0x923790);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(0x923790) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00088F6C; /* jbe: below or equal (unsigned <=) */

loc_00088F48: ;
    eax = MEM32(0x91F500);
    SET_LO8(edx, MEM8(eax + 0x92395C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00088F6C; /* jle: less or equal (signed <=) */

loc_00088F57: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00088F6C; /* jbe: below or equal (unsigned <=) */

loc_00088F5C: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_00088F20;

loc_00088F62: ;
    MEM32(0x923790) = 0;

loc_00088F6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00088F70: ;
    SET_LO8(ecx, MEM8(eax + 0x92395C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088F82; /* jne: not equal / not zero */

loc_00088F7A: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_00088F94;

loc_00088F82: ;
    ecx = SX8(LO8(ecx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D28)); /* fmul dword ptr [0x239d28] */

loc_00088F94: ;
    MEMF(esp + eax * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00088F70; /* jb: below (unsigned <) */

loc_00088F9E: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088FB7u); RECOMP_ABI_CALL(0x000840B0u, sub_000840B0); /* call 0x000840B0 */

loc_00088FB7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x64;

    g_seh_ebp = ebp; sub_00088FC1(); return; /* fallthrough 0x00088FC1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088FC1
 * Original: 0x00088FC1 - 0x00089195 (468 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088FC1(void)
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

loc_00088FC1: ;
    ecx = MEM32(0x91F500);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    ecx = MEM32(esi * 4 + 0x2E6DD0);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x2F3F3F3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0C0C0C0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088FFDu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00088FFD: ;
    SET_LO8(eax, MEM8(esi + 0x92395C));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008904B; /* jne: not equal / not zero */

loc_0008900A: ;
    ecx = MEM32(0x91F500);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x2F3F3F3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0C0C0C0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0x2391B0);
    PUSH32(esp, 0x00089043u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089043: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00089140;

loc_0008904B: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x239D20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008905Eu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0008905E: ;
    eax = MEM32(0x91F500);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x38;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x2F3F3F3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0C0C0C0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x258);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089096u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089096: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008909Eu); RECOMP_ABI_CALL(0x00092980u, sub_00092980); /* call 0x00092980 */

loc_0008909E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x10) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_000890B4; /* jge: greater or equal (signed >=) */

loc_000890AE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000890B4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D1C)); /* fmul dword ptr [0x239d1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C8D4)); /* fadd dword ptr [0x22c8d4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_000890C4: ;
    ecx = MEM32(esp + 0x10);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000890D6; /* jge: greater or equal (signed >=) */

loc_000890D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000890D6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x232578)); /* fmul dword ptr [0x232578] */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x92395C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x239D18)); /* fadd dword ptr [0x239d18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x239D14)); /* fadd dword ptr [0x239d14] */
    if (CMP_LE(_fas, _fbs)) goto loc_000890FE; /* jle: less or equal (signed <=) */

loc_000890F7: ;
    PUSH32(esp, 0xFF00FF00u);
    goto loc_00089103;

loc_000890FE: ;
    PUSH32(esp, 0xFF303030u);

loc_00089103: ;
    PUSH32(esp, 0x00089108u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00089108: ;
    fp_push(MEMF(0x22C6EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089116u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00089116: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089120u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00089120: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089126u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00089126: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008912Cu); RECOMP_ABI_CALL(0x00069400u, sub_00069400); /* call 0x00069400 */

loc_0008912C: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x64 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_000890C4; /* jb: below (unsigned <) */

loc_00089140: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00088FC1; /* jb: below (unsigned <) */

loc_0008914D: ;
    eax = MEM32(0x91F500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1A);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0x68;
    PUSH32(esp, 0x00089165u); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_00089165: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00089173u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_00089173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008945F(); return; } /* je: equal / zero */

loc_0008917B: ;
    MEM32(0x9237A0) = 1;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x0008918Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0008918E: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00089195
 * Original: 0x00089195 - 0x0008945F (714 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089195(void)
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

loc_00089195: ;
    ecx = MEM32(0x923794);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000891A3u); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_000891A3: ;
    edx = MEM32(eax * 4 + 0x2E6DE0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x923794) = eax;
    MEM32(0x91F60C) = edx;
    MEM32(0x9237E8) = 0x200;
    if (CMP_NE(_fa, _fb)) goto loc_000891CA; /* jne: not equal / not zero */

loc_000891C6: ;
    PUSH32(esp, 1);
    goto loc_000891CC;

loc_000891CA: ;
    PUSH32(esp, 0);

loc_000891CC: ;
    PUSH32(esp, 0x000891D1u); RECOMP_ABI_CALL(0x00083620u, sub_00083620); /* call 0x00083620 */

loc_000891D1: ;
    eax = MEM32(0x923794);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x2E6DAC);
    edx = MEM32(eax + 0x2E6DB0);
    esi = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000891F4u); RECOMP_ABI_CALL(0x00086590u, sub_00086590); /* call 0x00086590 */

loc_000891F4: ;
    ecx = MEM32(0x923794);
    ecx = ecx + ecx * 2;
    edx = MEM32(ecx * 4 + 0x2E6DAC);
    MEM32(edx) = eax;
    eax = MEM32(0x923794);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008924E; /* je: equal / zero */

loc_00089213: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00089233; /* je: equal / zero */

loc_00089216: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000892F1; /* jne: not equal / not zero */

loc_0008921D: ;
    eax = MEM32(0x923958);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008922Bu); RECOMP_ABI_CALL(0x00080BD0u, sub_00080BD0); /* call 0x00080BD0 */

loc_0008922B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000892F1;

loc_00089233: ;
    eax = MEM32(0x923954);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000892F1; /* je: equal / zero */

loc_00089240: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089246u); RECOMP_ABI_CALL(0x00084070u, sub_00084070); /* call 0x00084070 */

loc_00089246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000892F1;

loc_0008924E: ;
    ecx = MEM32(0x2E6DB0);
    eax = MEM32(0x923950);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089273; /* je: equal / zero */

loc_0008925E: ;
    edx = MEM32(eax * 4 + 0x2E6D74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008926Bu); RECOMP_ABI_CALL(0x000841C0u, sub_000841C0); /* call 0x000841C0 */

loc_0008926B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000892F1;

loc_00089273: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00089275: ;
    SET_LO8(ecx, MEM8(eax + 0x92395C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089287; /* jne: not equal / not zero */

loc_0008927F: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_00089299;

loc_00089287: ;
    ecx = SX8(LO8(ecx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D28)); /* fmul dword ptr [0x239d28] */

loc_00089299: ;
    MEMF(esp + eax * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00089275; /* jb: below (unsigned <) */

loc_000892A3: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    ebx = MEM32(0x9237E8);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    esi = 2;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(0x9237E8) = ebx;
    PUSH32(esp, 0x000892CFu); RECOMP_ABI_CALL(0x000840B0u, sub_000840B0); /* call 0x000840B0 */

loc_000892CF: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000892DDu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_000892DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000892F1; /* je: equal / zero */

loc_000892E1: ;
    MEM32(0x9237A0) = esi;
    MEM32(0x91F500) = 0;

loc_000892F1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x2E6DB4;
    edi = 0x64;
    /* nop */

loc_00089300: ;
    eax = MEM32(ebx + -8);
    ecx = MEM32(eax);
    eax = MEM32(0x923794);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    eax = MEM32(esi * 4 + 0x2E6D40);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0x20) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x2F3F3F3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0C0C0C0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089346u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089346: ;
    eax = MEM32(0x923794);
    edx = MEM32(ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    eax = MEM32(esp + 0x34);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x2F3F3F3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0C0C0C0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + eax * 4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089385u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089385: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1A;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00089300; /* jb: below (unsigned <) */

loc_00089398: ;
    edx = MEM32(0x923794);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1A);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x64;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0x71;
    PUSH32(esp, 0x000893B1u); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_000893B1: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000893BFu); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_000893BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008945F(); return; } /* je: equal / zero */

loc_000893C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x9237A0) = eax;
    MEM32(0x923794) = eax;
    PUSH32(esp, 0x000893D9u); RECOMP_ABI_CALL(0x00083620u, sub_00083620); /* call 0x00083620 */

loc_000893D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000893E1u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000893E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008945F(); return; } /* jne: not equal / not zero */

loc_000893E9: ;
    eax = MEM32(0x9238B8);
    SET_LO8(ecx, MEM8(0x923950));
    MEM8(eax + 0xABF4) = LO8(ecx);
    edx = MEM32(0x9238B8);
    SET_LO8(eax, MEM8(0x923954));
    MEM8(edx + 0xABF5) = LO8(eax);
    SET_LO8(ecx, MEM8(0x92395C));
    edx = MEM32(0x9238B8);
    MEM8(edx + 0xABF0) = LO8(ecx);
    eax = MEM32(0x9238B8);
    SET_LO8(ecx, MEM8(0x92395D));
    MEM8(eax + 0xABF1) = LO8(ecx);
    edx = MEM32(0x9238B8);
    SET_LO8(eax, MEM8(0x92395E));
    MEM8(edx + 0xABF2) = LO8(eax);
    SET_LO8(eax, MEM8(0x2E6968));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, MEM8(0x92395F));
    edx = MEM32(0x9238B8);
    MEM8(edx + 0xABF3) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008945F(); return; } /* je: equal / zero */

loc_0008945A: ;
    PUSH32(esp, 0x0008945Fu); RECOMP_ABI_CALL(0x000A7080u, sub_000A7080); /* call 0x000A7080 */

    g_seh_ebp = ebp; sub_0008945F(); return; /* fallthrough 0x0008945F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008945F
 * Original: 0x0008945F - 0x0008946F (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008945F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008945F: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x00089468u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089468: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00089470
 * Original: 0x00089470 - 0x00089B4B (1755 bytes, 480 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089470(void)
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

loc_00089470: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0x00089489u); RECOMP_ABI_CALL(0x0007D3D0u, sub_0007D3D0); /* call 0x0007D3D0 */

loc_00089489: ;
    edi = eax;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00089494u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_00089494: ;
    eax = MEM32(0x91F2B4);
    ecx = MEM32(0x91F2B0);
    PUSH32(esp, 0x91F510);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000894ABu); RECOMP_ABI_CALL(0x0007E520u, sub_0007E520); /* call 0x0007E520 */

loc_000894AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000894B2u); RECOMP_ABI_CALL(0x00085460u, sub_00085460); /* call 0x00085460 */

loc_000894B2: ;
    ebp = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x30) = ebp;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_GE(_fas, _fbs)) goto loc_000894CB; /* jge: greater or equal (signed >=) */

loc_000894C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_000894CB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x232578)); /* fmul dword ptr [0x232578] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C2F4)); /* fadd dword ptr [0x22c2f4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x239D2C)); /* fadd dword ptr [0x239d2c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x44250000);
    PUSH32(esp, 0x42D20000);
    PUSH32(esp, 0x43B40000);
    PUSH32(esp, 0x000894F5u); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_000894F5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00089519; /* jbe: below or equal (unsigned <=) */

loc_000894FE: ;
    ecx = MEM32(0x91F5C8);

loc_00089504: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x91F550)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x91F550), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089514; /* je: equal / zero */

loc_0008950D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00089504; /* jb: below (unsigned <) */

loc_00089512: ;
    goto loc_00089519;

loc_00089514: ;
    MEM32(0x91F4F0) = eax;

loc_00089519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = MEM32(0x91F590);
    if (CMP_NE(_fa, _fb)) goto loc_0008953D; /* jne: not equal / not zero */

loc_00089523: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008953D; /* jne: not equal / not zero */

loc_00089528: ;
    ecx = 0x110;
    MEM32(0x91F590) = ecx;
    MEM32(0x91F4F0) = 0;

loc_0008953D: ;
    eax = ecx;
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0008955A; /* je: equal / zero */

loc_00089546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008956F; /* jne: not equal / not zero */

loc_0008954D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008956F; /* je: equal / zero */

loc_00089551: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x91F590) = ecx;
    goto loc_0008956F;

loc_0008955A: ;
    edx = MEM32(0x91F4F0);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089567u); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_00089567: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F4F0) = eax;

loc_0008956F: ;
    eax = MEM32(0x91F2B4);
    ecx = MEM32(0x91F2B0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x238770); PUSH32(esp, 0x00089583u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0008957Du); } /* indirect call */
    }

loc_00089583: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x0008958Du); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0008958D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000895A3; /* je: equal / zero */

loc_00089591: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000895A3; /* je: equal / zero */

loc_00089595: ;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = 0x11009100;
    goto loc_000895CC;

loc_000895A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000895A9u); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_000895A9: ;
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, 0x239BA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000895B9u); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_000895B9: ;
    eax = esp + 0x48;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = 0x10009100;

loc_000895CC: ;
    ecx = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM16(esp + 0x18) = 0x20;
    MEM16(esp + 0x1A) = 0x108;
    MEM16(esp + 0x20) = 0x16C0;
    MEM16(esp + 0x22) = 0x6D0;
    MEM16(esp + 0x2C) = 0;
    MEM8(esp + 0x2E) = 0x40;
    MEM8(esp + 0x2F) = 0x30;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x24) = 0xFF00FF00u;
    PUSH32(esp, 0x0008961Du); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008961D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00089625u); RECOMP_ABI_CALL(0x000A06D0u, sub_000A06D0); /* call 0x000A06D0 */

loc_00089625: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00089683; /* jbe: below or equal (unsigned <=) */

loc_0008962B: ;
    edi = 0x83;

loc_00089630: ;
    eax = MEM32(0x91F4F0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    eax = MEM32(esi * 4 + 0x91F550);
    ecx = MEM32(eax * 4 + 0x2E6F44);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x2F3F3F3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0C0C0C0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x190);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089674u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089674: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00089630; /* jb: below (unsigned <) */

loc_0008967F: ;
    edi = MEM32(esp + 0x30);

loc_00089683: ;
    eax = MEM32(0x91F4F0);
    edx = eax + eax * 4;
    eax = edx * 4 + 0x83;
    PUSH32(esp, eax);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0x176;
    PUSH32(esp, 0x0008969Fu); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_0008969F: ;
    ecx = MEM32(0x91F4F0);
    eax = MEM32(0x91F590);
    ecx = MEM32(ecx * 4 + 0x91F550);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x91F5C8) = ecx;
    MEM32(0x91F5C4) = edi;
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_00089A1C; /* je: equal / zero */

loc_000896CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000899D3; /* je: equal / zero */

loc_000896D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089B3B; /* jne: not equal / not zero */

loc_000896E2: ;
    ebp = MEM32(ecx * 4 + 0x2388CC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x57 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000896FE; /* jne: not equal / not zero */

loc_000896EE: ;
    PUSH32(esp, 0x000896F3u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_000896F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089711; /* jne: not equal / not zero */

loc_000896F7: ;
    ebp = 0x56;
    goto loc_00089711;

loc_000896FE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x51 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089711; /* jne: not equal / not zero */

loc_00089703: ;
    PUSH32(esp, 0x00089708u); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_00089708: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089711; /* jne: not equal / not zero */

loc_0008970C: ;
    ebp = 0x50;

loc_00089711: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008971Cu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008971C: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = 0x101;
    PUSH32(esp, 0x00089734u); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_00089734: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089984; /* je: equal / zero */

loc_0008973C: ;
    eax = MEM32(0x91F5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00089905; /* ja: above (unsigned >) */

loc_0008974A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x89B4C); /* switch: 15 entries, 13 targets */
    if (_jt == 0x00089751u) goto loc_00089751;
    if (_jt == 0x00089776u) goto loc_00089776;
    if (_jt == 0x0008979Bu) goto loc_0008979B;
    if (_jt == 0x000897BEu) goto loc_000897BE;
    if (_jt == 0x000897EFu) goto loc_000897EF;
    if (_jt == 0x00089818u) goto loc_00089818;
    if (_jt == 0x00089905u) goto loc_00089905;
    if (_jt == 0x0008991Fu) goto loc_0008991F;
    if (_jt == 0x00089A71u) goto loc_00089A71;
    if (_jt == 0x00089A8Bu) goto loc_00089A8B;
    if (_jt == 0x00089AB0u) goto loc_00089AB0;
    if (_jt == 0x00089AD3u) goto loc_00089AD3;
    if (_jt == 0x00089B18u) goto loc_00089B18;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00089751: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089759u); RECOMP_ABI_CALL(0x0007D5C0u, sub_0007D5C0); /* call 0x0007D5C0 */

loc_00089759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089772u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089772: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089776: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008977Eu); RECOMP_ABI_CALL(0x0007D5C0u, sub_0007D5C0); /* call 0x0007D5C0 */

loc_0008977E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089797u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089797: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008979B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000897A1u); RECOMP_ABI_CALL(0x0007D360u, sub_0007D360); /* call 0x0007D360 */

loc_000897A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000897BAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000897BA: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000897BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000897C8u); RECOMP_ABI_CALL(0x000805E0u, sub_000805E0); /* call 0x000805E0 */

loc_000897C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 1;
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000897EBu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000897EB: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000897EF: ;
    MEM32(0x9237A0) = 5;
    PUSH32(esp, 0x000897FEu); RECOMP_ABI_CALL(0x000998A0u, sub_000998A0); /* call 0x000998A0 */

loc_000897FE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089814u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089814: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089818: ;
    ebp = 3;
    PUSH32(esp, ebx);
    MEM32(0x91F4F8) = ebp;
    PUSH32(esp, 0x00089829u); RECOMP_ABI_CALL(0x0007E340u, sub_0007E340); /* call 0x0007E340 */

loc_00089829: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237D8) = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000898E4; /* je: equal / zero */

loc_0008983A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00089898; /* je: equal / zero */

loc_0008983D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089847u); RECOMP_ABI_CALL(0x000805E0u, sub_000805E0); /* call 0x000805E0 */

loc_00089847: ;
    PUSH32(esp, 0x923818);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089852u); RECOMP_ABI_CALL(0x00080750u, sub_00080750); /* call 0x00080750 */

loc_00089852: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00089859u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_00089859: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008985C: ;
    SET_LO8(eax, MEM8(0x2E6968));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008986A; /* je: equal / zero */

loc_00089865: ;
    PUSH32(esp, 0x0008986Au); RECOMP_ABI_CALL(0x000A7080u, sub_000A7080); /* call 0x000A7080 */

loc_0008986A: ;
    PUSH32(esp, 0x0008986Fu); RECOMP_ABI_CALL(0x00080CB0u, sub_00080CB0); /* call 0x00080CB0 */

loc_0008986F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x923818);
    PUSH32(esp, 0x0008987Bu); RECOMP_ABI_CALL(0x000386C0u, sub_000386C0); /* call 0x000386C0 */

loc_0008987B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089894u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089894: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089898: ;
    PUSH32(esp, 0x0008989Du); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008989D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000898B1; /* je: equal / zero */

loc_000898A1: ;
    PUSH32(esp, 0x000898A6u); RECOMP_ABI_CALL(0x000817B0u, sub_000817B0); /* call 0x000817B0 */

loc_000898A6: ;
    PUSH32(esp, 0x000898ABu); RECOMP_ABI_CALL(0x00085670u, sub_00085670); /* call 0x00085670 */

loc_000898AB: ;
    MEM32(0x91F4F8) = ebp;

loc_000898B1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000898BBu); RECOMP_ABI_CALL(0x000805E0u, sub_000805E0); /* call 0x000805E0 */

loc_000898BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000898C1u); RECOMP_ABI_CALL(0x000818E0u, sub_000818E0); /* call 0x000818E0 */

loc_000898C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x9237A0) = ebp;
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000898E0u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000898E0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000898E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000898EEu); RECOMP_ABI_CALL(0x000805E0u, sub_000805E0); /* call 0x000805E0 */

loc_000898EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000898F1: ;
    SET_LO8(eax, MEM8(0x2E6968));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x9237A0) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00089905; /* je: equal / zero */

loc_00089900: ;
    PUSH32(esp, 0x00089905u); RECOMP_ABI_CALL(0x000A7080u, sub_000A7080); /* call 0x000A7080 */

loc_00089905: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x0008991Bu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0008991B: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008991F: ;
    ebp = 3;
    PUSH32(esp, ebx);
    MEM32(0x91F4F8) = ebp;
    PUSH32(esp, 0x00089930u); RECOMP_ABI_CALL(0x0007E340u, sub_0007E340); /* call 0x0007E340 */

loc_00089930: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237D8) = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000898F1; /* je: equal / zero */

loc_0008993D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008995A; /* je: equal / zero */

loc_00089940: ;
    PUSH32(esp, 0x923818);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008994Bu); RECOMP_ABI_CALL(0x00080750u, sub_00080750); /* call 0x00080750 */

loc_0008994B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00089952u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_00089952: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008985C;

loc_0008995A: ;
    PUSH32(esp, 0x0008995Fu); RECOMP_ABI_CALL(0x0007CA80u, sub_0007CA80); /* call 0x0007CA80 */

loc_0008995F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089973; /* je: equal / zero */

loc_00089963: ;
    PUSH32(esp, 0x00089968u); RECOMP_ABI_CALL(0x000817B0u, sub_000817B0); /* call 0x000817B0 */

loc_00089968: ;
    PUSH32(esp, 0x0008996Du); RECOMP_ABI_CALL(0x00085670u, sub_00085670); /* call 0x00085670 */

loc_0008996D: ;
    MEM32(0x91F4F8) = ebp;

loc_00089973: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089979u); RECOMP_ABI_CALL(0x000818E0u, sub_000818E0); /* call 0x000818E0 */

loc_00089979: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237A0) = ebp;
    goto loc_00089905;

loc_00089984: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008998Fu); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008998F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089B3B; /* je: equal / zero */

loc_00089997: ;
    _fa = (uint32_t)(MEM32(0x91F5C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91F5C8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000899B9; /* jne: not equal / not zero */

loc_000899A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000899ACu); RECOMP_ABI_CALL(0x000801A0u, sub_000801A0); /* call 0x000801A0 */

loc_000899AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F5C8) = 5;

loc_000899B9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000899CFu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000899CF: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000899D3: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x000899DCu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_000899DC: ;
    eax = MEM32(0x91F590);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089B3B; /* jne: not equal / not zero */

loc_000899EF: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x000899FAu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_000899FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089B3B; /* je: equal / zero */

loc_00089A02: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089A18u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089A18: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089A1C: ;
    edx = MEM32(ecx * 4 + 0x2388A0);
    ecx = MEM32(0x33489C);
    MEM32(0x91F60C) = edx;
    MEM32(0x9237E8) = 0x202;
    PUSH32(esp, 0x00089A3Eu); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_00089A3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089AB9; /* jne: not equal / not zero */

loc_00089A42: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00089A4Du); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_00089A4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089B3B; /* je: equal / zero */

loc_00089A55: ;
    eax = MEM32(0x91F5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00089B3B; /* ja: above (unsigned >) */

loc_00089A63: ;
    eax = ZX8(MEM8(eax + 0x89B88));
    { uint32_t _jt = MEM32(eax * 4 + 0x89B74); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00089A71u) goto loc_00089A71;
    if (_jt == 0x00089A8Bu) goto loc_00089A8B;
    if (_jt == 0x00089AB0u) goto loc_00089AB0;
    if (_jt == 0x00089AD3u) goto loc_00089AD3;
    if (_jt == 0x00089B18u) goto loc_00089B18;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00089A71: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F590) = 0x200;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089A87u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089A87: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089A8B: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089A93u); RECOMP_ABI_CALL(0x0007D5C0u, sub_0007D5C0); /* call 0x0007D5C0 */

loc_00089A93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089AACu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089AAC: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089AB6u); RECOMP_ABI_CALL(0x0007D6E0u, sub_0007D6E0); /* call 0x0007D6E0 */

loc_00089AB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089AB9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089ACFu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089ACF: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089AD3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089AD9u); RECOMP_ABI_CALL(0x0007D440u, sub_0007D440); /* call 0x0007D440 */

loc_00089AD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089AEF; /* je: equal / zero */

loc_00089AE1: ;
    PUSH32(esp, 0x00089AE6u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00089AE6: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089A71; /* je: equal / zero */

loc_00089AEF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00089AFBu); RECOMP_ABI_CALL(0x000801A0u, sub_000801A0); /* call 0x000801A0 */

loc_00089AFB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x91F5C8) = 5;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00089B14u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089B14: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089B18: ;
    PUSH32(esp, 0x00089B1Du); RECOMP_ABI_CALL(0x000998A0u, sub_000998A0); /* call 0x000998A0 */

loc_00089B1D: ;
    ecx = MEM32(0x91E260);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x91F510);
    PUSH32(esp, 0x00089B2Eu); RECOMP_ABI_CALL(0x0007E5E0u, sub_0007E5E0); /* call 0x0007E5E0 */

loc_00089B2E: ;
    MEM32(0x9237A0) = 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089B3B: ;
    ecx = MEM32(esp + 0x54);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00089B47u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00089B47: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00089BA0
 * Original: 0x00089BA0 - 0x0008A15E (1470 bytes, 437 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089BA0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x92378C);
    ecx = MEM32(0x923788);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089BB9u); RECOMP_ABI_CALL(0x0007D9C0u, sub_0007D9C0); /* call 0x0007D9C0 */

loc_00089BB9: ;
    edx = MEM32(0x92378C);
    ebp = eax;
    eax = MEM32(0x923788);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089BCDu); RECOMP_ABI_CALL(0x00080140u, sub_00080140); /* call 0x00080140 */

loc_00089BCD: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00089BD6u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_00089BD6: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00089BE0u); RECOMP_ABI_CALL(0x000855A0u, sub_000855A0); /* call 0x000855A0 */

loc_00089BE0: ;
    edi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = edi;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_GE(_fas, _fbs)) goto loc_00089BF9; /* jge: greater or equal (signed >=) */

loc_00089BF3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_00089BF9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x232578)); /* fmul dword ptr [0x232578] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C2F4)); /* fadd dword ptr [0x22c2f4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x239D2C)); /* fadd dword ptr [0x239d2c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x44250000);
    PUSH32(esp, 0x42D20000);
    PUSH32(esp, 0x43B40000);
    PUSH32(esp, 0x00089C23u); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_00089C23: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00089C2Bu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_00089C2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x91E478;
    if (CMP_NE(_fa, _fb)) goto loc_00089C39; /* jne: not equal / not zero */

loc_00089C34: ;
    eax = 0x91E454;

loc_00089C39: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6D0);
    PUSH32(esp, 0x16C0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00089C52u); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_00089C52: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) | 0x20000000;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esp + 0x1C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = 0xFF00FF00u;
    PUSH32(esp, 0x00089C6Eu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_00089C6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00089C95; /* jbe: below or equal (unsigned <=) */

loc_00089C77: ;
    ecx = MEM32(0x91F508);
    /* nop */

loc_00089C80: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x923800)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x923800), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089C90; /* je: equal / zero */

loc_00089C89: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00089C80; /* jb: below (unsigned <) */

loc_00089C8E: ;
    goto loc_00089C95;

loc_00089C90: ;
    MEM32(0x91F620) = eax;

loc_00089C95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089CAB; /* jne: not equal / not zero */

loc_00089C99: ;
    eax = 0x10;
    MEM32(0x91F620) = ebx;
    MEM32(0x9237A4) = eax;
    goto loc_00089CB0;

loc_00089CAB: ;
    eax = MEM32(0x9237A4);

loc_00089CB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089CBC; /* je: equal / zero */

loc_00089CB4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x9237A4) = eax;
    goto loc_00089CD6;

loc_00089CBC: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00089CD6; /* jne: not equal / not zero */

loc_00089CC1: ;
    edx = MEM32(0x91F620);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089CCEu); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_00089CCE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F620) = eax;

loc_00089CD6: ;
    PUSH32(esp, 0x00089CDBu); RECOMP_ABI_CALL(0x000A06D0u, sub_000A06D0); /* call 0x000A06D0 */

loc_00089CDB: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00089DAD; /* jbe: below or equal (unsigned <=) */

loc_00089CE5: ;
    ecx = MEM32(0x91F620);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    ecx = esi + esi * 4;
    edx = ecx * 4 + 0x83;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2F3F3F3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xD0C0C0C0u)) >> 32) & 1);
    eax = eax + 0xD0C0C0C0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esi * 4 + 0x923800);
    ecx = MEM32(eax * 4 + 0x2E6F80);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x190);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089D30u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089D30: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089DA4; /* jne: not equal / not zero */

loc_00089D38: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    if (CMP_NE(_fa, _fb)) goto loc_00089D76; /* jne: not equal / not zero */

loc_00089D4B: ;
    edx = MEM32(0x91F620);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xD0C0C0C1u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFBF000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x97);
    PUSH32(esp, 0x1D8);
    PUSH32(esp, 0x239D38);
    goto loc_00089D9C;

loc_00089D76: ;
    eax = MEM32(0x91F620);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xD0C0C0C1u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFBF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x97);
    PUSH32(esp, 0x1D8);
    PUSH32(esp, 0x239D30);

loc_00089D9C: ;
    PUSH32(esp, 0x00089DA1u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_00089DA1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089DA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00089CE5; /* jb: below (unsigned <) */

loc_00089DAD: ;
    eax = MEM32(0x91F620);
    ecx = eax + eax * 4;
    edx = ecx * 4 + 0x83;
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0x176;
    PUSH32(esp, 0x00089DC9u); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_00089DC9: ;
    ecx = MEM32(0x9237A4);
    eax = MEM32(0x91F620);
    eax = MEM32(eax * 4 + 0x923800);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0x200;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91F508) = eax;
    MEM32(0x91F610) = ebp;
    if (CMP_A(_fa, _fb)) goto loc_0008A0B1; /* ja: above (unsigned >) */

loc_00089DFC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00089FCE; /* je: equal / zero */

loc_00089E02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089E4F; /* je: equal / zero */

loc_00089E06: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A156; /* jne: not equal / not zero */

loc_00089E12: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x00089E1Bu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_00089E1B: ;
    eax = MEM32(0x9237A4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A156; /* jne: not equal / not zero */

loc_00089E2E: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00089E39u); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_00089E39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A156; /* je: equal / zero */

loc_00089E41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089E4F: ;
    ecx = MEM32(eax * 4 + 0x2E6F98);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = 2;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x91F60C) = ecx;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = eax;
    PUSH32(esp, 0x00089E79u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_00089E79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00089E97; /* je: equal / zero */

loc_00089E7D: ;
    _fa = (uint32_t)(MEM8(0x9237A4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9237A4), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089E97; /* jne: not equal / not zero */

loc_00089E85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089E97: ;
    _fa = (uint32_t)(MEM32(0x91F508)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91F508), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089F12; /* jne: not equal / not zero */

loc_00089E9F: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00089EAAu); RECOMP_ABI_CALL(0x000860A0u, sub_000860A0); /* call 0x000860A0 */

loc_00089EAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00089EBD; /* jne: not equal / not zero */

loc_00089EAE: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00089EB9u); RECOMP_ABI_CALL(0x00086170u, sub_00086170); /* call 0x00086170 */

loc_00089EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00089F12; /* je: equal / zero */

loc_00089EBD: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089EEA; /* je: equal / zero */

loc_00089EC3: ;
    edx = MEM32(0x92378C);
    eax = MEM32(0x923788);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089ED5u); RECOMP_ABI_CALL(0x00080960u, sub_00080960); /* call 0x00080960 */

loc_00089ED5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = 0x300;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089EEA: ;
    ecx = MEM32(0x92378C);
    edx = MEM32(0x923788);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089EFDu); RECOMP_ABI_CALL(0x00080980u, sub_00080980); /* call 0x00080980 */

loc_00089EFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = 0x300;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089F12: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00089F1Du); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_00089F1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A156; /* je: equal / zero */

loc_00089F25: ;
    _fa = (uint32_t)(MEM8(0x9237A4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9237A4), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A156; /* jne: not equal / not zero */

loc_00089F31: ;
    eax = MEM32(0x91F508);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0008A156; /* ja: above (unsigned >) */

loc_00089F40: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x8A160); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00089F47u) goto loc_00089F47;
    if (_jt == 0x00089F97u) goto loc_00089F97;
    if (_jt == 0x00089FAEu) goto loc_00089FAE;
    if (_jt == 0x00089FBCu) goto loc_00089FBC;
    if (_jt == 0x0008A156u) goto loc_0008A156;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00089F47: ;
    PUSH32(esp, 0x00089F4Cu); RECOMP_ABI_CALL(0x0007D3A0u, sub_0007D3A0); /* call 0x0007D3A0 */

loc_00089F4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00089F63; /* jl: less (signed <) */

loc_00089F51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = 0x100;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089F63: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089F77; /* je: equal / zero */

loc_00089F69: ;
    PUSH32(esp, 0x00089F6Eu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00089F6E: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00089FAE; /* je: equal / zero */

loc_00089F77: ;
    eax = MEM32(0x92378C);
    ecx = MEM32(0x923788);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089F8Cu); RECOMP_ABI_CALL(0x00080410u, sub_00080410); /* call 0x00080410 */

loc_00089F8C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089F97: ;
    PUSH32(esp, 0x00089F9Cu); RECOMP_ABI_CALL(0x000855F0u, sub_000855F0); /* call 0x000855F0 */

loc_00089F9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089FAE: ;
    POP32(esp, edi);
    MEM32(0x9237A4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089FBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089FCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089FDC; /* jne: not equal / not zero */

loc_00089FD3: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x4F);
    goto loc_00089FE8;

loc_00089FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089FF0; /* jne: not equal / not zero */

loc_00089FE1: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x55);

loc_00089FE8: ;
    PUSH32(esp, 0x00089FEDu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_00089FED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089FF0: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x00089FFBu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_00089FFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A05E; /* je: equal / zero */

loc_00089FFF: ;
    _fa = (uint32_t)(MEM8(0x9237A4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9237A4), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A05E; /* jne: not equal / not zero */

loc_0008A007: ;
    eax = MEM32(0x91F508);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008A041; /* je: equal / zero */

loc_0008A011: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008A150; /* jne: not equal / not zero */

loc_0008A018: ;
    edx = MEM32(0x92378C);
    eax = MEM32(0x923788);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A02Au); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_0008A02A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A030u); RECOMP_ABI_CALL(0x0007D360u, sub_0007D360); /* call 0x0007D360 */

loc_0008A030: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008A041: ;
    MEM32(0x9237A0) = 5;
    PUSH32(esp, 0x0008A050u); RECOMP_ABI_CALL(0x000998A0u, sub_000998A0); /* call 0x000998A0 */

loc_0008A050: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008A05E: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008A069u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008A069: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A156; /* je: equal / zero */

loc_0008A071: ;
    _fa = (uint32_t)(MEM8(0x9237A4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9237A4), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A156; /* jne: not equal / not zero */

loc_0008A07D: ;
    _fa = (uint32_t)(MEM32(0x91F508)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91F508), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A150; /* jne: not equal / not zero */

loc_0008A08A: ;
    ecx = MEM32(0x92378C);
    edx = MEM32(0x923788);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A0A0u); RECOMP_ABI_CALL(0x00080410u, sub_00080410); /* call 0x00080410 */

loc_0008A0A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A4) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008A0B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x300 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A156; /* jne: not equal / not zero */

loc_0008A0BD: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x1D));
    eax = eax - 0x1D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008A156; /* je: equal / zero */

loc_0008A0CA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008A105; /* je: equal / zero */

loc_0008A0CD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008A156; /* je: equal / zero */

loc_0008A0D4: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(0x92378C);
    edx = MEM32(0x923788);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x9237A4) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A0FAu); RECOMP_ABI_CALL(0x00083DC0u, sub_00083DC0); /* call 0x00083DC0 */

loc_0008A0FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008A105: ;
    PUSH32(esp, 0xFFFFFF00u);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x441D4000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x42B80000);
    PUSH32(esp, 0x0008A123u); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_0008A123: ;
    eax = MEM32(0x9237A4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237E8) = 0xA;
    if (CMP_NE(_fa, _fb)) goto loc_0008A156; /* jne: not equal / not zero */

loc_0008A13C: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008A147u); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008A147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A156; /* je: equal / zero */

loc_0008A14B: ;
    PUSH32(esp, 0x0008A150u); RECOMP_ABI_CALL(0x0007CC00u, sub_0007CC00); /* call 0x0007CC00 */

loc_0008A150: ;
    MEM32(0x9237A4) = ebx;

loc_0008A156: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008A180
 * Original: 0x0008A180 - 0x0008A591 (1041 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008A180: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x0008A195u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0008A195: ;
    MEM32(esp + 0x54) = eax;
    edi = 0x96;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008A1A0: ;
    edx = MEM32(0x91F504);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    edx = MEM32(esi * 4 + 0x2E6FE8);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = ZX16(LO16(edi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x2F3F3F3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0C0C0C0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A1E0u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008A1E0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0008A1A0; /* jb: below (unsigned <) */

loc_0008A1EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFF8000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x239D44);
    MEM32(0x91F58C) = 0xF;
    PUSH32(esp, 0x0008A21Du); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008A21D: ;
    eax = MEM32(0x91F504);
    eax = eax + eax * 4;
    ecx = eax * 8 + 0xBE;
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0xEA;
    PUSH32(esp, 0x0008A239u); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_0008A239: ;
    edx = MEM32(esp + 0xD0);
    ecx = MEM32(esp + 0xCC);
    MEM32(esp + 0x84) = edx;
    eax = 0x460;
    edx = esp + 0x80;
    edi = 0x20;
    esi = 0x108;
    SET_LO8(ebx, 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM16(esp + 0x88) = LO16(edi);
    MEM16(esp + 0x8A) = LO16(esi);
    MEM16(esp + 0x90) = LO16(eax);
    MEM16(esp + 0x92) = 0x6E0;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    MEM16(esp + 0x9C) = LO16(ebp);
    MEM8(esp + 0x9E) = 0x40;
    MEM8(esp + 0x9F) = LO8(ebx);
    MEM32(esp + 0xA0) = 0x3F800000;
    MEM32(esp + 0xA4) = 0x3F800000;
    MEM32(esp + 0x98) = 0x31009100;
    MEM16(esp + 0xA8) = LO16(edi);
    MEM16(esp + 0xAA) = LO16(esi);
    MEM32(esp + 0xAC) = ecx;
    MEM16(esp + 0xB0) = LO16(eax);
    MEM16(esp + 0xB2) = 0x520;
    MEM16(esp + 0xBC) = LO16(ebp);
    MEM8(esp + 0xBE) = 0x40;
    MEM8(esp + 0xBF) = LO8(ebx);
    MEM32(esp + 0xC0) = 0x3F800000;
    MEM32(esp + 0xC4) = 0x3F800000;
    MEM32(esp + 0xB8) = 0x30009100;
    MEM32(esp + 0xB4) = 0xFFFFFF00u;
    PUSH32(esp, 0x0008A33Fu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A33F: ;
    eax = esp + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A34Eu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A34E: ;
    eax = MEM32(0x9237EC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008A514; /* je: equal / zero */

loc_0008A35E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008A390; /* je: equal / zero */

loc_0008A361: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008A570; /* jne: not equal / not zero */

loc_0008A368: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008A381; /* je: equal / zero */

loc_0008A370: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008A55E; /* jne: not equal / not zero */

loc_0008A377: ;
    PUSH32(esp, 0x0008A37Cu); RECOMP_ABI_CALL(0x0007CC00u, sub_0007CC00); /* call 0x0007CC00 */

loc_0008A37C: ;
    goto loc_0008A55E;

loc_0008A381: ;
    MEM32(0x9237CC) = 1;
    goto loc_0008A570;

loc_0008A390: ;
    PUSH32(esp, 0xFFFFFF00u);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x441D4000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x42B80000);
    PUSH32(esp, 0x0008A3AEu); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_0008A3AE: ;
    ecx = MEM32(0x91F504);
    edx = MEM32(ecx * 4 + 0x2E6FF8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A3C6u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0008A3C6: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x5A);
    MEM16(esp + 0x38) = LO16(edi);
    MEM16(esp + 0x3A) = LO16(esi);
    MEM32(esp + 0x3C) = eax;
    MEM16(esp + 0x40) = 0x880;
    MEM16(esp + 0x42) = 0xB20;
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    MEM16(esp + 0x4C) = LO16(ebp);
    MEM8(esp + 0x4E) = 0x40;
    MEM8(esp + 0x4F) = LO8(ebx);
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x48) = 0x10009100;
    PUSH32(esp, 0x0008A41Cu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0008A41C: ;
    MEM32(esp + 0x68) = 0x10009100;
    MEM16(esp + 0x58) = LO16(edi);
    MEM16(esp + 0x5A) = LO16(esi);
    esi = MEM32(esp + 0x48);
    MEM8(esp + 0x68) = 5;
    edi = MEM32(esp + 0x68);
    MEM32(esp + 0x5C) = eax;
    eax = esp + 0x38;
    PUSH32(esp, 1);
    edi = edi | 0x20001000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0x20000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM16(esp + 0x68) = 0x1680;
    MEM16(esp + 0x6A) = 0xD90;
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    MEM16(esp + 0x74) = LO16(ebp);
    MEM8(esp + 0x76) = 0x40;
    MEM8(esp + 0x77) = LO8(ebx);
    MEM32(esp + 0x78) = 0x3F800000;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x4C) = 0xFFFFFF00u;
    PUSH32(esp, 0x0008A49Bu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A49B: ;
    ecx = esp + 0x60;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A4A7u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A4A7: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = 0x101;
    PUSH32(esp, 0x0008A4BFu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008A4BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A4FD; /* je: equal / zero */

loc_0008A4C3: ;
    edx = MEM32(0x91F504);
    eax = MEM32(edx * 4 + 0x2E6FF0);
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x9237EC) = 2;
    PUSH32(esp, 0x0008A4F8u); RECOMP_ABI_CALL(0x0007DA30u, sub_0007DA30); /* call 0x0007DA30 */

loc_0008A4F8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A570;

loc_0008A4FD: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008A508u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008A508: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A570; /* je: equal / zero */

loc_0008A50C: ;
    MEM32(0x9237EC) = ebp;
    goto loc_0008A570;

loc_0008A514: ;
    ecx = MEM32(0x91F504);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A522u); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_0008A522: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F504) = eax;
    MEM32(0x9237E8) = 0x202;
    PUSH32(esp, 0x0008A53Fu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008A53F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A54F; /* je: equal / zero */

loc_0008A543: ;
    MEM32(0x9237EC) = 1;
    goto loc_0008A570;

loc_0008A54F: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008A55Au); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008A55A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A570; /* je: equal / zero */

loc_0008A55E: ;
    MEM32(0x9237A0) = 4;
    MEM32(esp + 0x10) = 1;

loc_0008A570: ;
    edx = MEM32(0x91F504);
    eax = MEM32(edx * 4 + 0x2E6FF8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x91F60C) = eax;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008A5A0
 * Original: 0x0008A5A0 - 0x0008A9AB (1035 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A5A0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008A5AEu); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0008A5AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = eax;
    edi = 0xA2;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0008A5C0;

    /* nop */

loc_0008A5C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A5CA; /* jne: not equal / not zero */

loc_0008A5C5: ;
    ebx = 0x28;

loc_0008A5CA: ;
    edx = MEM32(0x91F504);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = ZX16(LO16(edi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x2F3F3F3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0C0C0C0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esi * 4 + 0x2E6FB0);
    ecx = ZX16(LO16(ebx));
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A60Eu); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008A60E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x16;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0008A5C0; /* jb: below (unsigned <) */

loc_0008A61A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFF8000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x128);
    PUSH32(esp, 0x239D5C);
    MEM32(0x91F58C) = 0xD;
    PUSH32(esp, 0x0008A64Du); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008A64D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFF8000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x239D44);
    PUSH32(esp, 0x0008A676u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008A676: ;
    eax = MEM32(0x91F504);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008A685; /* jae: above or equal (unsigned >=) */

loc_0008A683: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008A685: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    ecx = ZX16(LO16(ebx));
    edx = eax + ecx + 0xA2;
    PUSH32(esp, edx);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0xEA;
    PUSH32(esp, 0x0008A69Fu); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_0008A69F: ;
    eax = 0x460;
    MEM16(esp + 0x5C) = LO16(eax);
    MEM16(esp + 0x7C) = LO16(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x54;
    edi = 0x20;
    esi = 0x108;
    SET_LO8(ebx, 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM16(esp + 0x5C) = LO16(edi);
    MEM16(esp + 0x5E) = LO16(esi);
    MEM32(esp + 0x60) = 0x91E478;
    MEM16(esp + 0x66) = 0x6E0;
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    MEM16(esp + 0x70) = LO16(ecx);
    MEM8(esp + 0x72) = 0x40;
    MEM8(esp + 0x73) = LO8(ebx);
    MEM32(esp + 0x74) = 0x3F800000;
    MEM32(esp + 0x78) = 0x3F800000;
    MEM32(esp + 0x6C) = 0x31009100;
    MEM16(esp + 0x7C) = LO16(edi);
    MEM16(esp + 0x7E) = LO16(esi);
    MEM32(esp + 0x80) = 0x91E454;
    MEM16(esp + 0x86) = 0x520;
    MEM16(esp + 0x90) = LO16(ecx);
    MEM8(esp + 0x92) = 0x40;
    MEM8(esp + 0x93) = LO8(ebx);
    MEM32(esp + 0x94) = 0x3F800000;
    MEM32(esp + 0x98) = 0x3F800000;
    MEM32(esp + 0x8C) = 0x30009100;
    MEM32(esp + 0x88) = 0xFFFFFF00u;
    PUSH32(esp, 0x0008A771u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A771: ;
    ecx = esp + 0x7C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A77Du); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A77D: ;
    eax = MEM32(0x9237EC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008A93B; /* je: equal / zero */

loc_0008A78E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008A7BB; /* je: equal / zero */

loc_0008A791: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008A98F; /* jne: not equal / not zero */

loc_0008A798: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008A98F; /* je: equal / zero */

loc_0008A7A4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008A7AC; /* jne: not equal / not zero */

loc_0008A7A7: ;
    PUSH32(esp, 0x0008A7ACu); RECOMP_ABI_CALL(0x0007CC00u, sub_0007CC00); /* call 0x0007CC00 */

loc_0008A7AC: ;
    MEM32(0x9237A0) = 1;
    goto loc_0008A98F;

loc_0008A7BB: ;
    PUSH32(esp, 0xFFFFFF00u);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x441D4000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x42B80000);
    PUSH32(esp, 0x0008A7D9u); RECOMP_ABI_CALL(0x00086CB0u, sub_00086CB0); /* call 0x00086CB0 */

loc_0008A7D9: ;
    edx = MEM32(0x91F504);
    eax = MEM32(edx * 4 + 0x2E7000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A7F1u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0008A7F1: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x59);
    MEM16(esp + 0x54) = LO16(edi);
    MEM16(esp + 0x56) = LO16(esi);
    MEM32(esp + 0x58) = eax;
    MEM16(esp + 0x5C) = 0x880;
    MEM16(esp + 0x5E) = 0xB20;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    MEM16(esp + 0x68) = 0;
    MEM8(esp + 0x6A) = 0x40;
    MEM8(esp + 0x6B) = LO8(ebx);
    MEM32(esp + 0x6C) = 0x3F800000;
    MEM32(esp + 0x70) = 0x3F800000;
    MEM32(esp + 0x64) = 0x10009100;
    PUSH32(esp, 0x0008A849u); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0008A849: ;
    MEM32(esp + 0x40) = 0x10009100;
    MEM32(esp + 0x34) = eax;
    MEM8(esp + 0x47) = LO8(ebx);
    ebx = MEM32(esp + 0x64);
    MEM8(esp + 0x40) = 5;
    eax = MEM32(esp + 0x40);
    MEM16(esp + 0x32) = LO16(esi);
    ecx = esp + 0x54;
    eax = eax | 0x20001000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx | 0x20000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM16(esp + 0x38) = LO16(edi);
    MEM16(esp + 0x40) = 0x1680;
    MEM16(esp + 0x42) = 0xD90;
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    MEM16(esp + 0x4C) = LO16(esi);
    MEM8(esp + 0x4E) = 0x40;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x68) = 0xFFFFFF00u;
    PUSH32(esp, 0x0008A8C9u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A8C9: ;
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A8D5u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008A8D5: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = 0x101;
    PUSH32(esp, 0x0008A8EDu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008A8ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A924; /* je: equal / zero */

loc_0008A8F1: ;
    eax = MEM32(0x91F504);
    ecx = MEM32(eax * 4 + 0x2E6FCC);
    edx = MEM32(0x92378C);
    eax = MEM32(0x923788);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x91E478);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x9237EC) = 2;
    PUSH32(esp, 0x0008A91Fu); RECOMP_ABI_CALL(0x0007DA30u, sub_0007DA30); /* call 0x0007DA30 */

loc_0008A91F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A98F;

loc_0008A924: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008A92Fu); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008A92F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A98F; /* je: equal / zero */

loc_0008A933: ;
    MEM32(0x9237EC) = esi;
    goto loc_0008A98F;

loc_0008A93B: ;
    ecx = MEM32(0x91F504);
    PUSH32(esp, 7);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A949u); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_0008A949: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F504) = eax;
    MEM32(0x9237E8) = 0x202;
    PUSH32(esp, 0x0008A966u); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008A966: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A976; /* je: equal / zero */

loc_0008A96A: ;
    MEM32(0x9237EC) = 1;
    goto loc_0008A98F;

loc_0008A976: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008A981u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008A981: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A98F; /* je: equal / zero */

loc_0008A985: ;
    MEM32(0x9237A0) = 2;

loc_0008A98F: ;
    edx = MEM32(0x91F504);
    eax = MEM32(edx * 4 + 0x2E7000);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F60C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008A9B0
 * Original: 0x0008A9B0 - 0x0008AD50 (928 bytes, 287 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008A9B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008A9B6u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0008A9B6: ;
    PUSH32(esp, 0x0008A9BBu); RECOMP_ABI_CALL(0x0007D820u, sub_0007D820); /* call 0x0007D820 */

loc_0008A9BB: ;
    edi = eax;
    eax = MEM32(0x9237A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0008AB52; /* ja: above (unsigned >) */

loc_0008A9CC: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x8AD34); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0008A9D4u) goto loc_0008A9D4;
    if (_jt == 0x0008AC17u) goto loc_0008AC17;
    if (_jt == 0x0008ACA4u) goto loc_0008ACA4;
    if (_jt == 0x0008ACABu) goto loc_0008ACAB;
    if (_jt == 0x0008AD2Cu) goto loc_0008AD2C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008A9D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008A9E9; /* jne: not equal / not zero */

loc_0008A9D8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x0008A9E4u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008A9E4: ;
    goto loc_0008AB35;

loc_0008A9E9: ;
    eax = MEM32(0x91F500);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A9F5u); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_0008A9F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91F500) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0008AAA0; /* jbe: below or equal (unsigned <=) */

loc_0008AA06: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008AA12u); RECOMP_ABI_CALL(0x00086170u, sub_00086170); /* call 0x00086170 */

loc_0008AA12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AA55; /* je: equal / zero */

loc_0008AA16: ;
    eax = MEM32(0x91F500);
    ecx = edi + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008AA27; /* jae: above or equal (unsigned >=) */

loc_0008AA22: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008AA9A;

loc_0008AA27: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ecx = edi + -1;
    esi = eax;
    ebx = edx;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AA4D; /* je: equal / zero */

loc_0008AA45: ;
    MEM32(0x91F500) = ecx;
    goto loc_0008AA9F;

loc_0008AA4D: ;
    MEM32(0x91F500) = ebx;
    goto loc_0008AA9F;

loc_0008AA55: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008AA60u); RECOMP_ABI_CALL(0x000860A0u, sub_000860A0); /* call 0x000860A0 */

loc_0008AA60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AA9F; /* je: equal / zero */

loc_0008AA64: ;
    esi = MEM32(0x91F500);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008AA7A; /* jbe: below or equal (unsigned <=) */

loc_0008AA6F: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(5));
    esi = esi - 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x91F500) = esi;
    goto loc_0008AA9F;

loc_0008AA7A: ;
    ecx = edi + -1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    ebx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008AA94; /* jae: above or equal (unsigned >=) */

loc_0008AA8C: ;
    MEM32(0x91F500) = ecx;
    goto loc_0008AA9F;

loc_0008AA94: ;
    edx = eax + esi;
    eax = edx + eax * 4;

loc_0008AA9A: ;
    MEM32(0x91F500) = eax;

loc_0008AA9F: ;
    POP32(esp, ebx);

loc_0008AAA0: ;
    PUSH32(esp, 0x0008AAA5u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0008AAA5: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7000202) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x7000202)) >> 32) & 1);
    eax = eax + 0x7000202;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = eax;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(0x91F500);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + edx * 4;
    MEM32(0x9237C8) = edx;
    esi = ecx;
    edx = ecx + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008AB04; /* jae: above or equal (unsigned >=) */

loc_0008AAD8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008AB04; /* jae: above or equal (unsigned >=) */

loc_0008AADC: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax * 8;
    ecx = eax * 4 + 0x6E;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AAF1u); RECOMP_ABI_CALL(0x00087760u, sub_00087760); /* call 0x00087760 */

loc_0008AAF1: ;
    eax = MEM32(0x9237C8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0008AAD8; /* jb: below (unsigned <) */

loc_0008AB04: ;
    eax = MEM32(0x91F500);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = edx + edx * 8;
    eax = edx * 4 + 0x6E;
    PUSH32(esp, eax);
    eax = 0x9F;
    PUSH32(esp, 0x0008AB29u); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_0008AB29: ;
    ecx = MEM32(0x91F500);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008AB35u); RECOMP_ABI_CALL(0x00087960u, sub_00087960); /* call 0x00087960 */

loc_0008AB35: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008AB43u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008AB43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB54; /* je: equal / zero */

loc_0008AB47: ;
    MEM32(0x9237A0) = 0;

loc_0008AB51: ;
    POP32(esp, esi);

loc_0008AB52: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0008AB54: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB51; /* je: equal / zero */

loc_0008AB58: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008AB63u); RECOMP_ABI_CALL(0x000863E0u, sub_000863E0); /* call 0x000863E0 */

loc_0008AB63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB7B; /* je: equal / zero */

loc_0008AB67: ;
    PUSH32(esp, 0x0008AB6Cu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0008AB6C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AB75u); RECOMP_ABI_CALL(0x0007E690u, sub_0007E690); /* call 0x0007E690 */

loc_0008AB75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0008AB7B: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008AB86u); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008AB86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB51; /* je: equal / zero */

loc_0008AB8A: ;
    edx = MEM32(0x91F500);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008AB96u); RECOMP_ABI_CALL(0x0007D870u, sub_0007D870); /* call 0x0007D870 */

loc_0008AB96: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x923788) = eax;
    MEM32(0x92378C) = edx;
    PUSH32(esp, 0x0008ABA8u); RECOMP_ABI_CALL(0x0007D9C0u, sub_0007D9C0); /* call 0x0007D9C0 */

loc_0008ABA8: ;
    PUSH32(esp, eax);
    MEM32(0x91F610) = eax;
    MEM32(0x91F620) = 0;
    PUSH32(esp, 0x0008ABBDu); RECOMP_ABI_CALL(0x000855A0u, sub_000855A0); /* call 0x000855A0 */

loc_0008ABBD: ;
    ecx = MEM32(0x91F500);
    eax = MEM32(0x923800);
    PUSH32(esp, ecx);
    MEM32(0x91F508) = eax;
    MEM32(0x9237A4) = 0;
    MEM32(0x9237A0) = 2;
    PUSH32(esp, 0x0008ABE7u); RECOMP_ABI_CALL(0x0007D850u, sub_0007D850); /* call 0x0007D850 */

loc_0008ABE7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x91E478);
    PUSH32(esp, 0x0008ABF5u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0008ABF5: ;
    edx = MEM32(0x91F500);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008AC01u); RECOMP_ABI_CALL(0x0007D830u, sub_0007D830); /* call 0x0007D830 */

loc_0008AC01: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x239BA4);
    PUSH32(esp, 0x91E454);
    PUSH32(esp, 0x0008AC11u); RECOMP_ABI_CALL(0x00151F80u, sub_00151F80); /* call 0x00151F80 */

loc_0008AC11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0008AC17: ;
    eax = MEM32(0x92378C);
    ecx = MEM32(0x923788);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008AC29u); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_0008AC29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0008AC34; /* jl: less (signed <) */

loc_0008AC30: ;
    ecx = eax;
    goto loc_0008AC41;

loc_0008AC34: ;
    ecx = MEM32(0x91F500);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0008AC47; /* jb: below (unsigned <) */

loc_0008AC3E: ;
    ecx = edi + -1;

loc_0008AC41: ;
    MEM32(0x91F500) = ecx;

loc_0008AC47: ;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + edx * 4;
    MEM32(0x9237C8) = edx;
    esi = ecx;
    edx = ecx + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008AC8F; /* jae: above or equal (unsigned >=) */

loc_0008AC63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008AC8F; /* jae: above or equal (unsigned >=) */

loc_0008AC67: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax * 8;
    ecx = eax * 4 + 0x6E;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AC7Cu); RECOMP_ABI_CALL(0x00087760u, sub_00087760); /* call 0x00087760 */

loc_0008AC7C: ;
    eax = MEM32(0x9237C8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0008AC63; /* jb: below (unsigned <) */

loc_0008AC8F: ;
    eax = MEM32(0x91F500);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AC9Au); RECOMP_ABI_CALL(0x00087960u, sub_00087960); /* call 0x00087960 */

loc_0008AC9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00089BA0(); return; /* tail jmp 0x00089BA0 */

loc_0008ACA4: ;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0008A5A0(); return; /* tail jmp 0x0008A5A0 */

loc_0008ACAB: ;
    ecx = MEM32(0x92378C);
    edx = MEM32(0x923788);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x91F58C) = 0x12;
    PUSH32(esp, 0x0008ACC8u); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_0008ACC8: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008ACD0u); RECOMP_ABI_CALL(0x0007D830u, sub_0007D830); /* call 0x0007D830 */

loc_0008ACD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008ACDAu); RECOMP_ABI_CALL(0x0007D850u, sub_0007D850); /* call 0x0007D850 */

loc_0008ACDA: ;
    ecx = MEM32(0x923788);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x92378C);
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0xFA);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008ACF7u); RECOMP_ABI_CALL(0x00087A50u, sub_00087A50); /* call 0x00087A50 */

loc_0008ACF7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB51; /* je: equal / zero */

loc_0008AD02: ;
    ecx = MEM32(0x33489C);
    MEM32(0x9237E8) = 0x200;
    PUSH32(esp, 0x0008AD17u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008AD17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB51; /* je: equal / zero */

loc_0008AD1F: ;
    POP32(esp, esi);
    MEM32(0x9237A0) = 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0008AD2C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000866A0(); return; /* tail jmp 0x000866A0 */

    /* nop */
    RECOMP_UNIMPL("aam 0xa9", 0x0008AD34u); /* TODO: aam 0xa9 */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0xAD) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0xAD));
    SET_LO8(eax, LO8(eax) - 0xAD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
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
 * sub_0008AD50
 * Original: 0x0008AD50 - 0x0008AEB0 (352 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AD50: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0008AD65u); RECOMP_ABI_CALL(0x000852E0u, sub_000852E0); /* call 0x000852E0 */

loc_0008AD65: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, eax);
    eax = 0x168;
    ecx = 0x64;
    PUSH32(esp, 0x0008AD83u); RECOMP_ABI_CALL(0x00088A00u, sub_00088A00); /* call 0x00088A00 */

loc_0008AD83: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, 0x0008AD8Fu); RECOMP_ABI_CALL(0x00087260u, sub_00087260); /* call 0x00087260 */

loc_0008AD8F: ;
    eax = MEM32(esp + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0008AE36; /* jbe: below or equal (unsigned <=) */

loc_0008AD9D: ;
    ecx = MEM32(esp + 0x50);
    ebp = MEM32(esp + 0x4C);
    edi = MEM32(esp + 0x54);
    _fb = (uint32_t)(0xFFFFFFC9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFC9u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x3C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    ebx = eax;
    /* nop */

loc_0008ADC0: ;
    PUSH32(esp, 0x0008ADC5u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0008ADC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0008ADEA; /* je: equal / zero */

loc_0008ADCB: ;
    edx = MEM32(esi + -32);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    goto loc_0008AE06;

loc_0008ADEA: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);

loc_0008AE06: ;
    PUSH32(esp, 0x0008AE0Bu); RECOMP_ABI_CALL(0x00092AC0u, sub_00092AC0); /* call 0x00092AC0 */

loc_0008AE0B: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008AE1Fu); RECOMP_ABI_CALL(0x00092B50u, sub_00092B50); /* call 0x00092B50 */

loc_0008AE1F: ;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0008ADC0; /* jne: not equal / not zero */

loc_0008AE36: ;
    edi = MEM32(esp + 0x44);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008AE9F; /* jae: above or equal (unsigned >=) */

loc_0008AE3E: ;
    ecx = MEM32(esp + 0x48);
    ebp = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x54);
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4B;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    MEM32(esp + 0x14) = eax;
    esi = ecx + edx + 0xA;
    goto loc_0008AE66;

loc_0008AE62: ;
    eax = MEM32(esp + 0x14);

loc_0008AE66: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    eax = 0x239B34;
    if (CMP_AE(_fa, _fb)) goto loc_0008AE74; /* jae: above or equal (unsigned >=) */

loc_0008AE6F: ;
    eax = 0x239B28;

loc_0008AE74: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xD0C0C0C0u);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AE91u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008AE91: ;
    ecx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0008AE62; /* jb: below (unsigned <) */

loc_0008AE9F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0008AEA8u); RECOMP_ABI_CALL(0x00085270u, sub_00085270); /* call 0x00085270 */

loc_0008AEA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008AEB0
 * Original: 0x0008AEB0 - 0x0008BA4D (2973 bytes, 831 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AEB0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008AEBCu); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0008AEBC: ;
    edi = eax;
    eax = MEM32(0x9237F0);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AEE7; /* je: equal / zero */

loc_0008AEC9: ;
    ecx = MEM32(0x91F5B4);
    esi = MEM32(ecx * 4 + 0x2E70F4);
    ebx = ecx;
    if (4) _cf = (int)(((ebx) >> (32 - (4))) & 1);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x238A38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x238A38)) >> 32) & 1);
    ebx = ebx + 0x238A38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;
    goto loc_0008AF03;

loc_0008AEE7: ;
    ecx = MEM32(0x9237F4);
    esi = MEM32(ecx * 4 + 0x2E70D8);
    ebx = ecx;
    if (4) _cf = (int)(((ebx) >> (32 - (4))) & 1);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2389C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x2389C8)) >> 32) & 1);
    ebx = ebx + 0x2389C8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;

loc_0008AF03: ;
    ecx = MEM32(0x9237A0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0008BA45; /* ja: above (unsigned >) */

loc_0008AF13: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x8BA50); /* switch: 10 entries, 9 targets */
    if (_jt == 0x0008AF1Au) goto loc_0008AF1A;
    if (_jt == 0x0008B122u) goto loc_0008B122;
    if (_jt == 0x0008B17Fu) goto loc_0008B17F;
    if (_jt == 0x0008B191u) goto loc_0008B191;
    if (_jt == 0x0008B1A3u) goto loc_0008B1A3;
    if (_jt == 0x0008B1C9u) goto loc_0008B1C9;
    if (_jt == 0x0008B2FCu) goto loc_0008B2FC;
    if (_jt == 0x0008B98Cu) goto loc_0008B98C;
    if (_jt == 0x0008BA1Du) goto loc_0008BA1D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008AF1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x923794) = 1;
    MEM32(0x91F60C) = 0x145;
    MEM32(0x9237E8) = 0xA00020E;
    esi = 0x2E7130;
    if (CMP_NE(_fa, _fb)) goto loc_0008AF46; /* jne: not equal / not zero */

loc_0008AF41: ;
    esi = 0x2E7118;

loc_0008AF46: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008AF55u); RECOMP_ABI_CALL(0x00086550u, sub_00086550); /* call 0x00086550 */

loc_0008AF55: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F99999A);
    PUSH32(esp, 0x3F99999A);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    eax = MEM32(edx);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0xFFFFD000u);
    PUSH32(esp, 5);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x168);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008AF85u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008AF85: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008AFE0; /* jbe: below or equal (unsigned <=) */

loc_0008AF91: ;
    ebp = 0x78;

loc_0008AF96: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + edi * 4);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x2F3F3F3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD0C0C0C0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xD0C0C0C0u)) >> 32) & 1);
    ecx = ecx + 0xD0C0C0C0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AFD2u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008AFD2: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x1A)) >> 32) & 1);
    ebp = ebp + 0x1A;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0008AF96; /* jb: below (unsigned <) */

loc_0008AFE0: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1A);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x78)) >> 32) & 1);
    edx = edx + 0x78;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0xF2;
    PUSH32(esp, 0x0008AFF8u); RECOMP_ABI_CALL(0x00088990u, sub_00088990); /* call 0x00088990 */

loc_0008AFF8: ;
    eax = MEM32(0x9237F0);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B011; /* jne: not equal / not zero */

loc_0008B006: ;
    _fa = (uint32_t)(MEM32(0x9237F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237F4), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0008B01A; /* jb: below (unsigned <) */

loc_0008B00F: ;
    goto loc_0008B024;

loc_0008B011: ;
    _fa = (uint32_t)(MEM32(0x91F5B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91F5B4), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008B024; /* jae: above or equal (unsigned >=) */

loc_0008B01A: ;
    _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x9237E8)) + (uint64_t)(0x70000)) >> 32) & 1);
    MEM32(0x9237E8) = MEM32(0x9237E8) + 0x70000;
    _fa = (uint32_t)(MEM32(0x9237E8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B024: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B02Fu); RECOMP_ABI_CALL(0x00086320u, sub_00086320); /* call 0x00086320 */

loc_0008B02F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B03B; /* je: equal / zero */

loc_0008B033: ;
    MEM32(0x91F5C0) = esi;
    goto loc_0008B077;

loc_0008B03B: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B046u); RECOMP_ABI_CALL(0x00086380u, sub_00086380); /* call 0x00086380 */

loc_0008B046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B094; /* je: equal / zero */

loc_0008B04A: ;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x238934) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x238934 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B094; /* je: equal / zero */

loc_0008B055: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x238944) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x238944 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B094; /* je: equal / zero */

loc_0008B05D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2389A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2389A4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B094; /* je: equal / zero */

loc_0008B065: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2389B4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2389B4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B094; /* je: equal / zero */

loc_0008B06D: ;
    MEM32(0x91F5C0) = 1;

loc_0008B077: ;
    MEM32(0x91F500) = esi;
    PUSH32(esp, 0x0008B082u); RECOMP_ABI_CALL(0x00085960u, sub_00085960); /* call 0x00085960 */

loc_0008B082: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B094: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B09Fu); RECOMP_ABI_CALL(0x000863B0u, sub_000863B0); /* call 0x000863B0 */

loc_0008B09F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B0FC; /* je: equal / zero */

loc_0008B0A3: ;
    eax = MEM32(0x9237F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B0D4; /* je: equal / zero */

loc_0008B0AC: ;
    ecx = MEM32(0x91F5B4);
    edx = MEM32(ecx * 4 + 0x239D98);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(0x9237F4) = edx;
    MEM32(0x9237F0) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B0D4: ;
    ecx = MEM32(0x9237F4);
    edx = MEM32(ecx * 4 + 0x239D7C);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(0x91F5B4) = edx;
    MEM32(0x9237F0) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B0FC: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B107u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008B107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BA45; /* je: equal / zero */

loc_0008B10F: ;
    eax = MEM32(0x9237A0);
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x9237A0) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B122: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F333333);
    eax = 0x23;
    ecx = 0x2C;
    MEM32(0x91F60C) = 0x79;
    MEM32(0x91F58C) = 0x13;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008B155u); RECOMP_ABI_CALL(0x00088A00u, sub_00088A00); /* call 0x00088A00 */

loc_0008B155: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(0x91F500);
    edx = MEM32(eax + ecx * 4);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0008B169u); RECOMP_ABI_CALL(0x00085B60u, sub_00085B60); /* call 0x00085B60 */

loc_0008B169: ;
    eax = edi + -19;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0008BA45; /* ja: above (unsigned >) */

loc_0008B178: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x8BA64); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0008B17Fu) goto loc_0008B17F;
    if (_jt == 0x0008B191u) goto loc_0008B191;
    if (_jt == 0x0008B1A3u) goto loc_0008B1A3;
    if (_jt == 0x0008B1C9u) goto loc_0008B1C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008B17F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237CC) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B191: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 5;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B1A3: ;
    PUSH32(esp, 0x0008B1A8u); RECOMP_ABI_CALL(0x0007DAF0u, sub_0007DAF0); /* call 0x0007DAF0 */

loc_0008B1A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B191; /* jne: not equal / not zero */

loc_0008B1AD: ;
    PUSH32(esp, 0x0008B1B2u); RECOMP_ABI_CALL(0x0007CC00u, sub_0007CC00); /* call 0x0007CC00 */

loc_0008B1B2: ;
    MEM32(0x91E450) = 1;
    PUSH32(esp, 0x0008B1C1u); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_0008B1C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B1C9: ;
    _fa = (uint32_t)(MEM32(0x9237C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237C0), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x91F5C0);
    if (CMP_NE(_fa, _fb)) goto loc_0008B262; /* jne: not equal / not zero */

loc_0008B1DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B296; /* jne: not equal / not zero */

loc_0008B1E3: ;
    ecx = MEM32(0x91F2BC);
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(0x91E450);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91F4F4) = eax;
    esi = MEM32(ecx + 0x20);
    MEM32(0x91F5CC) = esi;
    if (CMP_A(_fa, _fb)) goto loc_0008B227; /* ja: above (unsigned >) */

loc_0008B207: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237C0) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0008B255; /* je: equal / zero */

loc_0008B215: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B227: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B24D; /* jne: not equal / not zero */

loc_0008B22B: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax * 4 + 0x238AC8);
    eax = MEM32(ecx + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + eax + 8);
    POP32(esp, ebp);
    MEM32(0x9237C0) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B24D: ;
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF7u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237C0) = eax;

loc_0008B255: ;
    PUSH32(esp, 0x0008B25Au); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_0008B25A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B262: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B296; /* jne: not equal / not zero */

loc_0008B266: ;
    eax = MEM32(0x91F2BC);
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(0x91E450);
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x91F4F4) = edx;
    eax = MEM32(eax + 0x20);
    POP32(esp, ebp);
    MEM32(0x91F5CC) = eax;
    MEM32(0x9237A0) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B296: ;
    eax = MEM32(0x91F2BC);
    MEM32(0x91F5CC) = ebp;
    esi = MEM32(eax + 0x24);
    ecx = MEM32(eax + 4);
    eax = MEM32(0x91F4F4);
    edx = MEM32(ecx * 4 + 0x2E71A4);
    PUSH32(esp, 0x85AB0);
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x91F62C) = edx;
    PUSH32(esp, 0x0008B2C7u); RECOMP_ABI_CALL(0x00151B90u, sub_00151B90); /* call 0x00151B90 */

loc_0008B2C7: ;
    ecx = MEM32(0x91F4F4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B2EA; /* jbe: below or equal (unsigned <=) */

loc_0008B2D4: ;
    eax = esi + 0x14;

loc_0008B2D7: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B2E4; /* je: equal / zero */

loc_0008B2DE: ;
    MEM32(0x91F5CC) = MEM32(0x91F5CC) + 1;
    _fa = (uint32_t)(MEM32(0x91F5CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008B2E4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008B2D7; /* jne: not equal / not zero */

loc_0008B2EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x9237A0) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B2FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F333333);
    ecx = 0x2C;
    MEM32(0x9237E8) = 0x5030200;
    MEM32(0x91F58C) = 0x13;
    PUSH32(esp, eax);
    eax = 0x23;
    PUSH32(esp, 0x0008B32Fu); RECOMP_ABI_CALL(0x00088A00u, sub_00088A00); /* call 0x00088A00 */

loc_0008B32F: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(0x91F500);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0008B343u); RECOMP_ABI_CALL(0x00085B60u, sub_00085B60); /* call 0x00085B60 */

loc_0008B343: ;
    edi = MEM32(0x91F500);
    ecx = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    MEM32(esp + 0x14) = eax;
    eax = ecx + edi + -1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 0x14);
    edi = MEM32(esi + eax * 4);
    esi = MEM32(esi + edx * 4);
    PUSH32(esp, 0x0008B375u); RECOMP_ABI_CALL(0x00085BF0u, sub_00085BF0); /* call 0x00085BF0 */

loc_0008B375: ;
    ecx = MEM32(0x91F2BC);
    eax = MEM32(ecx + 4);
    edi = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0008B420; /* je: equal / zero */

loc_0008B390: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B39Bu); RECOMP_ABI_CALL(0x000863E0u, sub_000863E0); /* call 0x000863E0 */

loc_0008B39B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B3AF; /* je: equal / zero */

loc_0008B39F: ;
    PUSH32(esp, 0x0008B3A4u); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0008B3A4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B3ACu); RECOMP_ABI_CALL(0x0007E690u, sub_0007E690); /* call 0x0007E690 */

loc_0008B3AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B3AF: ;
    edx = MEM32(0x33489C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008B3BBu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0008B3BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B420; /* je: equal / zero */

loc_0008B3C2: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0008B3CCu); RECOMP_ABI_CALL(0x0007E680u, sub_0007E680); /* call 0x0007E680 */

loc_0008B3CC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x17B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x17B)) >> 32) & 1);
    eax = eax + 0x17B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B3DBu); RECOMP_ABI_CALL(0x0009A910u, sub_0009A910); /* call 0x0009A910 */

loc_0008B3DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22C6F8);
    PUSH32(esp, 0x239D70);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0008B3F0u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0008B3F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1B30);
    PUSH32(esp, 0x1680);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x331910);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0008B40Du); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0008B40D: ;
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = 4;
    PUSH32(esp, 0x0008B41Du); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0008B41D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B420: ;
    ecx = MEM32(0x923990);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9237A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x9237A0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B434; /* je: equal / zero */

loc_0008B42E: ;
    MEM32(0x92398C) = ebp;

loc_0008B434: ;
    edx = MEM32(0x91F2BC);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_0008B50A; /* je: equal / zero */

loc_0008B44B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008B4FA; /* je: equal / zero */

loc_0008B452: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008B518; /* jne: not equal / not zero */

loc_0008B459: ;
    _fb = (uint32_t)(0x5030000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(0x9237E8)) < (uint32_t)(0x5030000));
    MEM32(0x9237E8) = MEM32(0x9237E8) - 0x5030000;
    _fa = (uint32_t)(MEM32(0x9237E8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9237F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = 0x2389A4;
    if (CMP_NE(_fa, _fb)) goto loc_0008B477; /* jne: not equal / not zero */

loc_0008B472: ;
    eax = 0x238934;

loc_0008B477: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B518; /* je: equal / zero */

loc_0008B489: ;
    ecx = MEM32(0x92398C);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xA)) >> 32) & 1);
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0008B4A9; /* ja: above (unsigned >) */

loc_0008B49E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008B4A4u); RECOMP_ABI_CALL(0x00088870u, sub_00088870); /* call 0x00088870 */

loc_0008B4A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0008B4A9: ;
    _fa = (uint32_t)(MEM32(0x92398C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x92398C), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B4C0; /* jbe: below or equal (unsigned <=) */

loc_0008B4B1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008B4B8u); RECOMP_ABI_CALL(0x00088870u, sub_00088870); /* call 0x00088870 */

loc_0008B4B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x13) = 1;

loc_0008B4C0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B4DB; /* je: equal / zero */

loc_0008B4C4: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B4CFu); RECOMP_ABI_CALL(0x000862B0u, sub_000862B0); /* call 0x000862B0 */

loc_0008B4CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B4DB; /* je: equal / zero */

loc_0008B4D3: ;
    MEM32(0x92398C) = MEM32(0x92398C) + 1;
    _fa = (uint32_t)(MEM32(0x92398C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0008B518;

loc_0008B4DB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B518; /* je: equal / zero */

loc_0008B4E3: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B4EEu); RECOMP_ABI_CALL(0x00086230u, sub_00086230); /* call 0x00086230 */

loc_0008B4EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B518; /* je: equal / zero */

loc_0008B4F2: ;
    MEM32(0x92398C) = MEM32(0x92398C) - 1;
    _fa = (uint32_t)(MEM32(0x92398C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0008B518;

loc_0008B4FA: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x238994) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0x238994 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x14) = LO8(edx);
    goto loc_0008B518;

loc_0008B50A: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x238974) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0x238974 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x14) = LO8(eax);

loc_0008B518: ;
    ecx = MEM32(0x92398C);
    ebx = MEM32(0x91F5C0);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(0x9237F0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    edx = MEM32(0x91E450);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    eax = MEM32(0x9237C0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91F5CC);
    PUSH32(esp, edx);
    edx = MEM32(0x91F4F4);
    PUSH32(esp, eax);
    eax = MEM32(0x91F2BC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B562u); RECOMP_ABI_CALL(0x00098920u, sub_00098920); /* call 0x00098920 */

loc_0008B562: ;
    eax = MEM32(0x91F5C0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B76E; /* je: equal / zero */

loc_0008B572: ;
    eax = MEM32(0x91F4F4);
    esi = 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B6B2; /* jbe: below or equal (unsigned <=) */

loc_0008B584: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B58Fu); RECOMP_ABI_CALL(0x000863B0u, sub_000863B0); /* call 0x000863B0 */

loc_0008B58F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B59E; /* je: equal / zero */

loc_0008B593: ;
    MEM32(0x9237C0) = ebp;
    goto loc_0008B62B;

loc_0008B59E: ;
    eax = MEM32(0x91F4F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B6B2; /* jbe: below or equal (unsigned <=) */

loc_0008B5AB: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B5B6u); RECOMP_ABI_CALL(0x00086380u, sub_00086380); /* call 0x00086380 */

loc_0008B5B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x91F4F4);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B6B2; /* je: equal / zero */

loc_0008B5C3: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B602; /* jbe: below or equal (unsigned <=) */

loc_0008B5C9: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0008B5D0;

    /* nop */

loc_0008B5D0: ;
    ecx = MEM32(0x91F2BC);
    ebp = MEM32(ecx + 0x24);
    PUSH32(esp, 0x0008B5DEu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008B5DE: ;
    edx = MEM32(esi + ebp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B5EE; /* jne: not equal / not zero */

loc_0008B5E5: ;
    ecx = MEM32(esi + ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B5FD; /* je: equal / zero */

loc_0008B5EE: ;
    eax = MEM32(0x91F4F4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x18)) >> 32) & 1);
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0008B5D0; /* jb: below (unsigned <) */

loc_0008B5FB: ;
    goto loc_0008B602;

loc_0008B5FD: ;
    eax = MEM32(0x91F4F4);

loc_0008B602: ;
    edx = edi + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008B618; /* jae: above or equal (unsigned >=) */

loc_0008B609: ;
    ecx = edi + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008B618; /* jae: above or equal (unsigned >=) */

loc_0008B610: ;
    MEM32(0x9237C0) = ecx;
    goto loc_0008B62B;

loc_0008B618: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008B6A3; /* jae: above or equal (unsigned >=) */

loc_0008B623: ;
    _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF6u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B626: ;
    MEM32(0x9237C0) = eax;

loc_0008B62B: ;
    _fa = (uint32_t)(MEM32(0x9237A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237A0), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008B97A; /* jne: not equal / not zero */

loc_0008B638: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B961; /* jbe: below or equal (unsigned <=) */

loc_0008B645: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B650u); RECOMP_ABI_CALL(0x00086170u, sub_00086170); /* call 0x00086170 */

loc_0008B650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008B667; /* jne: not equal / not zero */

loc_0008B654: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B65Fu); RECOMP_ABI_CALL(0x000861D0u, sub_000861D0); /* call 0x000861D0 */

loc_0008B65F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B90C; /* je: equal / zero */

loc_0008B667: ;
    eax = MEM32(0x91F500);
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x91F500) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008B682; /* jne: not equal / not zero */

loc_0008B678: ;
    MEM32(0x91F500) = 0;

loc_0008B682: ;
    PUSH32(esp, 0x0008B687u); RECOMP_ABI_CALL(0x00085960u, sub_00085960); /* call 0x00085960 */

loc_0008B687: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9237A0) = 2;
    eax = MEM32(0x9237A0);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B6A3: ;
    MEM32(0x9237C0) = 0;
    goto loc_0008B62B;

loc_0008B6B2: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0008B62B; /* jbe: below or equal (unsigned <=) */

loc_0008B6C0: ;
    ecx = MEM32(0x9237C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B6DB; /* je: equal / zero */

loc_0008B6CA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008B6D1u); RECOMP_ABI_CALL(0x00088870u, sub_00088870); /* call 0x00088870 */

loc_0008B6D1: ;
    eax = MEM32(0x91F4F4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0008B6DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B6FB; /* jbe: below or equal (unsigned <=) */

loc_0008B6DF: ;
    ecx = MEM32(0x9237C0);
    _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF6u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B6FB; /* je: equal / zero */

loc_0008B6EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008B6F3u); RECOMP_ABI_CALL(0x00088870u, sub_00088870); /* call 0x00088870 */

loc_0008B6F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x13) = 1;

loc_0008B6FB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B72D; /* je: equal / zero */

loc_0008B6FF: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B70Au); RECOMP_ABI_CALL(0x00086230u, sub_00086230); /* call 0x00086230 */

loc_0008B70A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B72D; /* je: equal / zero */

loc_0008B70E: ;
    eax = MEM32(0x9237C0);
    esi = MEM32(0x91F4F4);
    _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF6u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x9237C0) = ecx;
    goto loc_0008B62B;

loc_0008B72D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B62B; /* je: equal / zero */

loc_0008B739: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B744u); RECOMP_ABI_CALL(0x000862B0u, sub_000862B0); /* call 0x000862B0 */

loc_0008B744: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B62B; /* je: equal / zero */

loc_0008B74C: ;
    edx = MEM32(0x9237C0);
    eax = MEM32(0x91F4F4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x14)) >> 32) & 1);
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0008B623; /* jae: above or equal (unsigned >=) */

loc_0008B762: ;
    eax = MEM32(0x9237C0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008B626;

loc_0008B76E: ;
    _fa = (uint32_t)(MEM32(0x9237C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237C0), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B7A5; /* je: equal / zero */

loc_0008B776: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B781u); RECOMP_ABI_CALL(0x000863B0u, sub_000863B0); /* call 0x000863B0 */

loc_0008B781: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B7A5; /* je: equal / zero */

loc_0008B785: ;
    MEM32(0x9237C0) = esi;
    PUSH32(esp, 0x0008B790u); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_0008B790: ;
    eax = edi;
    MEM32(0x9237A0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B7A5: ;
    _fa = (uint32_t)(MEM32(0x9237E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x9237E8), 0x30000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0008B7C4; /* je: equal / zero */

loc_0008B7B1: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B7BCu); RECOMP_ABI_CALL(0x00086380u, sub_00086380); /* call 0x00086380 */

loc_0008B7BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008B682; /* jne: not equal / not zero */

loc_0008B7C4: ;
    eax = MEM32(0x91F4F4);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0008B7F2; /* jbe: below or equal (unsigned <=) */

loc_0008B7D8: ;
    _fa = (uint32_t)(MEM32(0x9237C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9237C0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B7F2; /* je: equal / zero */

loc_0008B7E1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008B7E8u); RECOMP_ABI_CALL(0x00088870u, sub_00088870); /* call 0x00088870 */

loc_0008B7E8: ;
    eax = MEM32(0x91F4F4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0008B7F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B813; /* jbe: below or equal (unsigned <=) */

loc_0008B7F7: ;
    ecx = MEM32(0x9237C0);
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF7u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B813; /* je: equal / zero */

loc_0008B804: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008B80Bu); RECOMP_ABI_CALL(0x00088870u, sub_00088870); /* call 0x00088870 */

loc_0008B80B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x13) = 1;

loc_0008B813: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B899; /* je: equal / zero */

loc_0008B81B: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B826u); RECOMP_ABI_CALL(0x00086230u, sub_00086230); /* call 0x00086230 */

loc_0008B826: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B899; /* je: equal / zero */

loc_0008B82A: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B835u); RECOMP_ABI_CALL(0x00086230u, sub_00086230); /* call 0x00086230 */

loc_0008B835: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B62B; /* je: equal / zero */

loc_0008B83D: ;
    eax = MEM32(0x9237C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B86E; /* jbe: below or equal (unsigned <=) */

loc_0008B846: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x9237C0) = eax;
    PUSH32(esp, 0x0008B852u); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_0008B852: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9237A0) = 4;
    eax = MEM32(0x9237A0);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B86E: ;
    MEM32(0x9237C0) = 1;
    PUSH32(esp, 0x0008B87Du); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_0008B87D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9237A0) = 4;
    eax = MEM32(0x9237A0);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B899: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B62B; /* je: equal / zero */

loc_0008B8A5: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B8B0u); RECOMP_ABI_CALL(0x000862B0u, sub_000862B0); /* call 0x000862B0 */

loc_0008B8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B62B; /* je: equal / zero */

loc_0008B8B8: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B8C3u); RECOMP_ABI_CALL(0x000862B0u, sub_000862B0); /* call 0x000862B0 */

loc_0008B8C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B62B; /* je: equal / zero */

loc_0008B8CB: ;
    ecx = MEM32(0x9237C0);
    eax = MEM32(0x91F4F4);
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF7u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xA)) >> 32) & 1);
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237C0) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0008B8EB; /* jb: below (unsigned <) */

loc_0008B8E5: ;
    MEM32(0x9237C0) = ecx;

loc_0008B8EB: ;
    PUSH32(esp, 0x0008B8F0u); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_0008B8F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9237A0) = 4;
    eax = MEM32(0x9237A0);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B90C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0008B961; /* jbe: below or equal (unsigned <=) */

loc_0008B911: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B91Cu); RECOMP_ABI_CALL(0x000860A0u, sub_000860A0); /* call 0x000860A0 */

loc_0008B91C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008B92F; /* jne: not equal / not zero */

loc_0008B920: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B92Bu); RECOMP_ABI_CALL(0x00086110u, sub_00086110); /* call 0x00086110 */

loc_0008B92B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B961; /* je: equal / zero */

loc_0008B92F: ;
    eax = MEM32(0x91F500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008B93A; /* jne: not equal / not zero */

loc_0008B938: ;
    eax = MEM32(esi);

loc_0008B93A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x91F500) = eax;
    PUSH32(esp, 0x0008B945u); RECOMP_ABI_CALL(0x00085960u, sub_00085960); /* call 0x00085960 */

loc_0008B945: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9237A0) = 2;
    eax = MEM32(0x9237A0);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B961: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008B96Cu); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008B96C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B97A; /* je: equal / zero */

loc_0008B970: ;
    MEM32(0x9237A0) = 1;

loc_0008B97A: ;
    eax = MEM32(0x9237A0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x923990) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F333333);
    eax = 0x23;
    MEM32(0x91F60C) = 0x79;
    MEM32(0x91F58C) = 0x13;
    PUSH32(esp, ecx);
    ecx = 0x2C;
    PUSH32(esp, 0x0008B9BFu); RECOMP_ABI_CALL(0x00088A00u, sub_00088A00); /* call 0x00088A00 */

loc_0008B9BF: ;
    eax = MEM32(0x91F500);
    edx = MEM32(ebx + 8);
    ecx = MEM32(edx + eax * 4);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0008B9D2u); RECOMP_ABI_CALL(0x00085B60u, sub_00085B60); /* call 0x00085B60 */

loc_0008B9D2: ;
    eax = MEM32(0x91F5C0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x9237CC) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0008BA45; /* jne: not equal / not zero */

loc_0008B9E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x17 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008BA45; /* jne: not equal / not zero */

loc_0008B9ED: ;
    eax = MEM32(0x91F2BC);
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(0x91E450);
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x91F4F4) = edx;
    eax = MEM32(eax + 0x20);
    POP32(esp, ebp);
    MEM32(0x91F5CC) = eax;
    MEM32(0x9237A0) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008BA1D: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x0008BA29u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BA29: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008BA37u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008BA37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BA45; /* je: equal / zero */

loc_0008BA3B: ;
    MEM32(0x9237A0) = 1;

loc_0008BA45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BA80
 * Original: 0x0008BA80 - 0x0008BBBC (316 bytes, 82 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008BA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008BA80: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008BA88u); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0008BA88: ;
    edi = MEM32(0x91E230);
    PUSH32(esp, 0x3F4CCCCD);
    esi = eax;
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0);
    eax = 0x23;
    ecx = 0x2C;
    PUSH32(esp, 0x0008BAABu); RECOMP_ABI_CALL(0x00088A00u, sub_00088A00); /* call 0x00088A00 */

loc_0008BAAB: ;
    ecx = MEM32(0x923970);
    ebp = 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    MEM32(0x91F58C) = 0x13;
    SET_LO8(edx, MEM8(ecx));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3F800000);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x3F800000);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = MEM32(eax * 4 + 0x2E70E4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x168);
    PUSH32(esp, edx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008BAF0u); RECOMP_ABI_CALL(0x00092A40u, sub_00092A40); /* call 0x00092A40 */

loc_0008BAF0: ;
    eax = MEM32(0x9237A0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* ja: above (unsigned >) */

loc_0008BB01: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8BE0C)); return; /* indirect tail jmp */

    ecx = MEM32(0x91F2BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BB21; /* je: equal / zero */

loc_0008BB12: ;
    PUSH32(esp, 0x0008BB17u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BB17: ;
    MEM32(0x91F2BC) = 0;

loc_0008BB21: ;
    PUSH32(esp, 0x923998);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008BB2Du); RECOMP_ABI_CALL(0x000714E0u, sub_000714E0); /* call 0x000714E0 */

loc_0008BB2D: ;
    edx = MEM32(0x9238B8);
    eax = ZX8(MEM8(edx + 0xABF6));
    ecx = MEM32(0x923970);
    MEM32(0x9239A0) = eax;
    eax = ZX8(MEM8(ecx + 4));
    MEM32(0x9239B0) = eax;
    eax = ZX8(MEM8(ecx + 1));
    esi = ZX8(MEM8(ecx + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = ZX8(MEM8(ecx + 3));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    _fb = (uint32_t)(0xB1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB1A8)) >> 32) & 1);
    edx = edx + 0xB1A8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9239C0) = eax;
    MEM32(0x9239D0) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x100000;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(0x9239E0) = ecx;
    MEM32(0x9239E4) = eax;
    PUSH32(esp, 0x0008BB94u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008BB94: ;
    edx = MEM32(0x923970);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(edx));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(7)) >> 32) & 1);
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008BBAEu); RECOMP_ABI_CALL(0x00076AD0u, sub_00076AD0); /* call 0x00076AD0 */

loc_0008BBAE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    MEM32(0x9237A0) = ebp;

    g_seh_ebp = ebp; sub_0008BBBC(); return; /* fallthrough 0x0008BBBC */

}

/**
 * sub_0008BB08
 * Original: 0x0008BB08 - 0x0008BBFD (245 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BB08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BB08: ;
    ecx = MEM32(0x91F2BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BB21; /* je: equal / zero */

loc_0008BB12: ;
    PUSH32(esp, 0x0008BB17u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BB17: ;
    MEM32(0x91F2BC) = 0;

loc_0008BB21: ;
    PUSH32(esp, 0x923998);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008BB2Du); RECOMP_ABI_CALL(0x000714E0u, sub_000714E0); /* call 0x000714E0 */

loc_0008BB2D: ;
    edx = MEM32(0x9238B8);
    eax = ZX8(MEM8(edx + 0xABF6));
    ecx = MEM32(0x923970);
    MEM32(0x9239A0) = eax;
    eax = ZX8(MEM8(ecx + 4));
    MEM32(0x9239B0) = eax;
    eax = ZX8(MEM8(ecx + 1));
    esi = ZX8(MEM8(ecx + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = ZX8(MEM8(ecx + 3));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    _fb = (uint32_t)(0xB1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB1A8)) >> 32) & 1);
    edx = edx + 0xB1A8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9239C0) = eax;
    MEM32(0x9239D0) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x100000;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(0x9239E0) = ecx;
    MEM32(0x9239E4) = eax;
    PUSH32(esp, 0x0008BB94u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008BB94: ;
    edx = MEM32(0x923970);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(edx));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(7)) >> 32) & 1);
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008BBAEu); RECOMP_ABI_CALL(0x00076AD0u, sub_00076AD0); /* call 0x00076AD0 */

loc_0008BBAE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    MEM32(0x9237A0) = ebp;
    eax = MEM32(0x91F5BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BBF9; /* je: equal / zero */

loc_0008BBC5: ;
    ecx = MEM32(0x91F2BC);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008BBDC; /* je: equal / zero */

loc_0008BBD1: ;
    PUSH32(esp, 0x0008BBD6u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BBD6: ;
    MEM32(0x91F2BC) = esi;

loc_0008BBDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BBE2u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_0008BBE2: ;
    SET_LO8(eax, MEM8(0x2E6968));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BBF3; /* je: equal / zero */

loc_0008BBEE: ;
    PUSH32(esp, 0x0008BBF3u); RECOMP_ABI_CALL(0x000A7080u, sub_000A7080); /* call 0x000A7080 */

loc_0008BBF3: ;
    MEM32(0x9237A0) = esi;

loc_0008BBF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BBBC
 * Original: 0x0008BBBC - 0x0008BBC5 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BBBC: ;
    eax = MEM32(0x91F5BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBF9(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0008BBC5(); return; /* fallthrough 0x0008BBC5 */

}

/**
 * sub_0008BBC5
 * Original: 0x0008BBC5 - 0x0008BBF9 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BBC5: ;
    ecx = MEM32(0x91F2BC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BBDC; /* je: equal / zero */

loc_0008BBD1: ;
    PUSH32(esp, 0x0008BBD6u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BBD6: ;
    MEM32(0x91F2BC) = esi;

loc_0008BBDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BBE2u); RECOMP_ABI_CALL(0x000812D0u, sub_000812D0); /* call 0x000812D0 */

loc_0008BBE2: ;
    SET_LO8(eax, MEM8(0x2E6968));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BBF3; /* je: equal / zero */

loc_0008BBEE: ;
    PUSH32(esp, 0x0008BBF3u); RECOMP_ABI_CALL(0x000A7080u, sub_000A7080); /* call 0x000A7080 */

loc_0008BBF3: ;
    MEM32(0x9237A0) = esi;

    g_seh_ebp = ebp; sub_0008BBF9(); return; /* fallthrough 0x0008BBF9 */

}

/**
 * sub_0008BBF9
 * Original: 0x0008BBF9 - 0x0008BBFD (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BBF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BBFD
 * Original: 0x0008BBFD - 0x0008BDBC (447 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BBFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x0008BC06u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BC06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237CC) = ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BC4C; /* jne: not equal / not zero */

loc_0008BC14: ;
    PUSH32(esp, 0x0008BC19u); RECOMP_ABI_CALL(0x0007DAF0u, sub_0007DAF0); /* call 0x0007DAF0 */

loc_0008BC19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BDAD; /* jne: not equal / not zero */

loc_0008BC22: ;
    PUSH32(esp, 0x0008BC27u); RECOMP_ABI_CALL(0x0007CC00u, sub_0007CC00); /* call 0x0007CC00 */

loc_0008BC27: ;
    ecx = MEM32(0x91F2BC);
    PUSH32(esp, 0x0008BC32u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BC32: ;
    ecx = MEM32(0x923970);
    SET_LO8(edx, MEM8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x923998);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    goto loc_0008BC86;

loc_0008BC4C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* jne: not equal / not zero */

loc_0008BC55: ;
    ecx = MEM32(0x91F2BC);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9239C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9239C0) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008BCA2; /* jle: less or equal (signed <=) */

loc_0008BC69: ;
    PUSH32(esp, 0x0008BC6Eu); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BC6E: ;
    edx = MEM32(0x923970);
    SET_LO8(eax, MEM8(edx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x923998);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);

loc_0008BC86: ;
    PUSH32(esp, 0x0008BC8Bu); RECOMP_ABI_CALL(0x00076B80u, sub_00076B80); /* call 0x00076B80 */

loc_0008BC8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    MEM32(0x9237A0) = 3;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

loc_0008BCA2: ;
    MEM32(0x9237A0) = 5;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

loc_0008BDAD: ;
    MEM32(0x9237A0) = 2;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

}

/**
 * sub_0008BCB1
 * Original: 0x0008BCB1 - 0x0008BE0B (346 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BCB1: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x0008BCBDu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BCBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008BDED;

loc_0008BDED: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008BDF8u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008BDF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* je: equal / zero */

loc_0008BE00: ;
    MEM32(0x91F5BC) = ebp;
    g_seh_ebp = ebp; sub_0008BBC5(); return; /* tail jmp 0x0008BBC5 */

}

/**
 * sub_0008BCC5
 * Original: 0x0008BCC5 - 0x0008BD96 (209 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BCC5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8D);
    PUSH32(esp, 0x0008BCD1u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BCD1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x19 (32-bit) */
    MEM32(0x9237CC) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0008BCEE; /* jne: not equal / not zero */

loc_0008BCDF: ;
    MEM32(0x9237A0) = 4;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

loc_0008BCEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* jne: not equal / not zero */

loc_0008BCF7: ;
    ecx = MEM32(0x91F2BC);
    PUSH32(esp, 0x0008BD02u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BD02: ;
    PUSH32(esp, 0x0008BD07u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008BD07: ;
    ecx = MEM32(0x923970);
    SET_LO8(edx, MEM8(ecx));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xA);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    goto loc_0008BD7A;

loc_0008BD7A: ;
    PUSH32(esp, 0x0008BD7Fu); RECOMP_ABI_CALL(0x00076AD0u, sub_00076AD0); /* call 0x00076AD0 */

loc_0008BD7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    MEM32(0x9237A0) = 6;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

}

/**
 * sub_0008BD1F
 * Original: 0x0008BD1F - 0x0008BE0B (236 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BD1F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x0008BD2Bu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BD2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008BDED;

loc_0008BDED: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008BDF8u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008BDF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* je: equal / zero */

loc_0008BE00: ;
    MEM32(0x91F5BC) = ebp;
    g_seh_ebp = ebp; sub_0008BBC5(); return; /* tail jmp 0x0008BBC5 */

}

/**
 * sub_0008BD33
 * Original: 0x0008BD33 - 0x0008BD96 (99 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BD33: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x0008BD3Fu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BD3F: ;
    ecx = MEM32(0x33489C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008BD4Du); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008BD4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* je: equal / zero */

loc_0008BD55: ;
    ecx = MEM32(0x91F2BC);
    PUSH32(esp, 0x0008BD60u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0008BD60: ;
    PUSH32(esp, 0x0008BD65u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_0008BD65: ;
    PUSH32(esp, eax);
    eax = MEM32(0x923970);
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xA);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008BD7Fu); RECOMP_ABI_CALL(0x00076AD0u, sub_00076AD0); /* call 0x00076AD0 */

loc_0008BD7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F2BC) = eax;
    MEM32(0x9237A0) = 6;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

}

/**
 * sub_0008BD96
 * Original: 0x0008BD96 - 0x0008BDD4 (62 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BD96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x0008BD9Fu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0008BD9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    MEM32(0x9237CC) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0008BDBC; /* jne: not equal / not zero */

loc_0008BDAD: ;
    MEM32(0x9237A0) = 2;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

loc_0008BDBC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* jne: not equal / not zero */

loc_0008BDC5: ;
    MEM32(0x9237A0) = 7;
    g_seh_ebp = ebp; sub_0008BBBC(); return; /* tail jmp 0x0008BBBC */

}

/**
 * sub_0008BDD4
 * Original: 0x0008BDD4 - 0x0008BE0B (55 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BDD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BDD4: ;
    ecx = MEM32(0x91F2BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008BDE0u); RECOMP_ABI_CALL(0x00097790u, sub_00097790); /* call 0x00097790 */

loc_0008BDE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9237E8) = 0x200;
    ecx = MEM32(0x33489C);
    PUSH32(esp, 0x0008BDF8u); RECOMP_ABI_CALL(0x00086350u, sub_00086350); /* call 0x00086350 */

loc_0008BDF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BBBC(); return; } /* je: equal / zero */

loc_0008BE00: ;
    MEM32(0x91F5BC) = ebp;
    g_seh_ebp = ebp; sub_0008BBC5(); return; /* tail jmp 0x0008BBC5 */

}

/**
 * sub_0008BE30
 * Original: 0x0008BE30 - 0x0008BF10 (224 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BE30: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008BE90; /* je: equal / zero */

loc_0008BE3F: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008BE49u); RECOMP_ABI_CALL(0x00084C80u, sub_00084C80); /* call 0x00084C80 */

loc_0008BE49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BE66; /* je: equal / zero */

loc_0008BE50: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0008BE57u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008BE57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008BE66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008BE6Cu); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_0008BE6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008C3F4(); return; } /* je: equal / zero */

loc_0008BE77: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0008BE7Eu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008BE7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x38) = 0;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008BE90: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BE99u); RECOMP_ABI_CALL(0x00084B20u, sub_00084B20); /* call 0x00084B20 */

loc_0008BE99: ;
    edi = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0008BEA7u); RECOMP_ABI_CALL(0x00084D40u, sub_00084D40); /* call 0x00084D40 */

loc_0008BEA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008BEB2u); RECOMP_ABI_CALL(0x00085D00u, sub_00085D00); /* call 0x00085D00 */

loc_0008BEB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008BEB8u); RECOMP_ABI_CALL(0x00084D60u, sub_00084D60); /* call 0x00084D60 */

loc_0008BEB8: ;
    ebx = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0008BEC4u); RECOMP_ABI_CALL(0x00084D80u, sub_00084D80); /* call 0x00084D80 */

loc_0008BEC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008BED7; /* jne: not equal / not zero */

loc_0008BECF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008C240(); return; } /* je: equal / zero */

loc_0008BED7: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    ebp = esi + 0x28;
    PUSH32(esp, 7);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0x0008BEF0u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008BEF0: ;
    PUSH32(esp, 9);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x0008BEFFu); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008BEFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    edi = esi + 0x2C;
    /* nop */

    g_seh_ebp = ebp; sub_0008BF10(); return; /* fallthrough 0x0008BF10 */

}

/**
 * sub_0008BF10
 * Original: 0x0008BF10 - 0x0008C032 (290 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BF10: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C0A3(); return; } /* jge: greater or equal (signed >=) */

loc_0008BF1B: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(edi);
    ecx = eax + edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008BF58; /* je: equal / zero */

loc_0008BF28: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BF76; /* jne: not equal / not zero */

loc_0008BF30: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(edi) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008BF4C; /* je: equal / zero */

loc_0008BF37: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0008C039(); return; } /* jne: not equal / not zero */

loc_0008BF40: ;
    MEM32(ebp) = 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0008C03D(); return; /* tail jmp 0x0008C03D */

loc_0008BF4C: ;
    MEM32(ebp) = 0xFFFFFFFEu;
    g_seh_ebp = ebp; sub_0008C03D(); return; /* tail jmp 0x0008C03D */

loc_0008BF58: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BF72; /* jne: not equal / not zero */

loc_0008BF5E: ;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008BF6Du); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008BF6D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008BFB4;

loc_0008BF72: ;
    edx = MEM32(esp + 0x24);

loc_0008BF76: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BFB4; /* je: equal / zero */

loc_0008BF7A: ;
    ecx = MEM32(esp + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x38) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0xFFFFFFFEu;
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    eax = edx + ecx * 2;
    ecx = MEM32(esp + eax * 4 + 0x38);
    MEM32(ebp) = ecx;

loc_0008BFB4: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008BFD1; /* jge: greater or equal (signed >=) */

loc_0008BFBA: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008BFCCu); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008BFCC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0008C039(); return; /* tail jmp 0x0008C039 */

loc_0008BFD1: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx * 4 + 0x2E68A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x30);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    ebx = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008BFFAu); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008BFFA: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C01F; /* jne: not equal / not zero */

loc_0008C003: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx * 4 + 0x2E68A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008C01Cu); RECOMP_ABI_CALL(0x00085CE0u, sub_00085CE0); /* call 0x00085CE0 */

loc_0008C01C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C01F: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C032(); return; } /* jl: less (signed <) */

loc_0008C028: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C035(); return; } /* jl: less (signed <) */

loc_0008C02F: ;
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0008C032(); return; /* fallthrough 0x0008C032 */

}

/**
 * sub_0008C032
 * Original: 0x0008C032 - 0x0008C035 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C032(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C032: ;
    MEM32(esi + 0x30) = eax;

    g_seh_ebp = ebp; sub_0008C035(); return; /* fallthrough 0x0008C035 */

}

/**
 * sub_0008C035
 * Original: 0x0008C035 - 0x0008C039 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C035(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C035: ;
    ebx = MEM32(esp + 0x18);

    g_seh_ebp = ebp; sub_0008C039(); return; /* fallthrough 0x0008C039 */

}

/**
 * sub_0008C039
 * Original: 0x0008C039 - 0x0008C03D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C039: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008C04B(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0008C03D(); return; /* fallthrough 0x0008C03D */

}

/**
 * sub_0008C03D
 * Original: 0x0008C03D - 0x0008C04B (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C03D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C03D: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008C04B(); return; } /* je: equal / zero */

loc_0008C043: ;
    MEM32(esp + 0x10) = 0;

    g_seh_ebp = ebp; sub_0008C04B(); return; /* fallthrough 0x0008C04B */

}

/**
 * sub_0008C04B
 * Original: 0x0008C04B - 0x0008C0A3 (88 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C04B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C04B: ;
    ecx = esi;
    PUSH32(esp, 0x0008C052u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C052: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008BF10(); return; } /* je: equal / zero */

loc_0008C05B: ;
    eax = MEM32(ebp);
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0008C073; /* jne: not equal / not zero */

loc_0008C067: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0008C240(); return; } /* je: equal / zero */

loc_0008C073: ;
    ecx = esi;
    PUSH32(esp, 0x0008C07Au); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C07A: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C236(); return; } /* jl: less (signed <) */

loc_0008C086: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C236(); return; } /* jg: greater (signed >) */

loc_0008C08F: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0008C096u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C096: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ebx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edi * 4 + 0x8C400)); return; /* indirect tail jmp */

}

/**
 * sub_0008C0A3
 * Original: 0x0008C0A3 - 0x0008C204 (353 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C0A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C0A3: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0008C0D0;

loc_0008C0A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C0D0; /* jne: not equal / not zero */

loc_0008C0AA: ;
    eax = MEM32(edi);
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(ebp) = ebx;
    PUSH32(esp, 0x0008C0C8u); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C0C8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0008C03D(); return; /* tail jmp 0x0008C03D */

loc_0008C0D0: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(edx * 4 + 0x2E68A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008C134; /* jne: not equal / not zero */

loc_0008C0EF: ;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0008C10A; /* je: equal / zero */

loc_0008C0FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C13E; /* jl: less (signed <) */

loc_0008C100: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C13E; /* jne: not equal / not zero */

loc_0008C104: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C13A; /* jne: not equal / not zero */

loc_0008C10A: ;
    edx = MEM32(edi);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp) = 0xFFFFFFFEu;
    PUSH32(esp, 0x0008C128u); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C128: ;
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0008C03D(); return; /* tail jmp 0x0008C03D */

loc_0008C134: ;
    eax = MEM32(esp + 0x10);
    goto loc_0008C13E;

loc_0008C13A: ;
    edx = MEM32(esp + 0x18);

loc_0008C13E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C1BD; /* jl: less (signed <) */

loc_0008C143: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008C14D; /* jle: less or equal (signed <=) */

loc_0008C149: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008C1BD; /* jle: less or equal (signed <=) */

loc_0008C14D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008C1DD; /* jge: greater or equal (signed >=) */

loc_0008C155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C1DD; /* jl: less (signed <) */

loc_0008C15D: ;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008C16Cu); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C16C: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C17Au); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C17A: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C1DD; /* jne: not equal / not zero */

loc_0008C183: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(edx * 4 + 0x2E68A0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    ecx = esi;
    ebx = edx;
    PUSH32(esp, 0x0008C19Cu); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C19C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C1DD; /* jne: not equal / not zero */

loc_0008C1A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008C1ACu); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C1AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C1B6u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C1B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C1A1; /* je: equal / zero */

loc_0008C1BB: ;
    goto loc_0008C1DD;

loc_0008C1BD: ;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008C1CCu); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C1CC: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C1DAu); RECOMP_ABI_CALL(0x00086A70u, sub_00086A70); /* call 0x00086A70 */

loc_0008C1DA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C1DD: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C032(); return; } /* jl: less (signed <) */

loc_0008C1EA: ;
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0008C039(); return; } /* jl: less (signed <) */

loc_0008C1F9: ;
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = eax;
    g_seh_ebp = ebp; sub_0008C039(); return; /* tail jmp 0x0008C039 */

}

/**
 * sub_0008C204
 * Original: 0x0008C204 - 0x0008C3FF (507 bytes, 115 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C204(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C204: ;
    MEM32(esi + 0x34) = ebx;
    goto loc_0008C240;

loc_0008C240: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C24Au); RECOMP_ABI_CALL(0x00084D00u, sub_00084D00); /* call 0x00084D00 */

loc_0008C24A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C263; /* je: equal / zero */

loc_0008C251: ;
    ecx = esi;
    PUSH32(esp, 0x0008C258u); RECOMP_ABI_CALL(0x00088AF0u, sub_00088AF0); /* call 0x00088AF0 */

loc_0008C258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C263: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C269u); RECOMP_ABI_CALL(0x00084D20u, sub_00084D20); /* call 0x00084D20 */

loc_0008C269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C282; /* je: equal / zero */

loc_0008C270: ;
    ecx = esi;
    PUSH32(esp, 0x0008C277u); RECOMP_ABI_CALL(0x00086B50u, sub_00086B50); /* call 0x00086B50 */

loc_0008C277: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C282: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C288u); RECOMP_ABI_CALL(0x00084C80u, sub_00084C80); /* call 0x00084C80 */

loc_0008C288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C39C; /* je: equal / zero */

loc_0008C293: ;
    ecx = esi;
    PUSH32(esp, 0x0008C29Au); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C29A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008C32B; /* ja: above (unsigned >) */

loc_0008C2A3: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8C418)); return; /* indirect tail jmp */

loc_0008C32B: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C365; /* jne: not equal / not zero */

loc_0008C331: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x0008C338u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C342u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C34B: ;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C365: ;
    ecx = esi;
    PUSH32(esp, 0x0008C36Cu); RECOMP_ABI_CALL(0x00085C90u, sub_00085C90); /* call 0x00085C90 */

loc_0008C36C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C375: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C37Du); RECOMP_ABI_CALL(0x00086B70u, sub_00086B70); /* call 0x00086B70 */

loc_0008C37D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C381: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x0008C388u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C39C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C3A2u); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_0008C3A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C3A9: ;
    eax = MEM32(esi + 0x34);
    edi = 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008C3CE; /* jg: greater (signed >) */

loc_0008C3B5: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0008C3BCu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x38) = 1;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C3CE: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x0008C3D5u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3D5: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C3E1u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C3E1: ;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x34) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x28) = eax;

loc_0008C3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C209
 * Original: 0x0008C209 - 0x0008C3FF (502 bytes, 115 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C209: ;
    MEM32(esi + 0x34) = 1;
    goto loc_0008C240;

loc_0008C240: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C24Au); RECOMP_ABI_CALL(0x00084D00u, sub_00084D00); /* call 0x00084D00 */

loc_0008C24A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C263; /* je: equal / zero */

loc_0008C251: ;
    ecx = esi;
    PUSH32(esp, 0x0008C258u); RECOMP_ABI_CALL(0x00088AF0u, sub_00088AF0); /* call 0x00088AF0 */

loc_0008C258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C263: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C269u); RECOMP_ABI_CALL(0x00084D20u, sub_00084D20); /* call 0x00084D20 */

loc_0008C269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C282; /* je: equal / zero */

loc_0008C270: ;
    ecx = esi;
    PUSH32(esp, 0x0008C277u); RECOMP_ABI_CALL(0x00086B50u, sub_00086B50); /* call 0x00086B50 */

loc_0008C277: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C282: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C288u); RECOMP_ABI_CALL(0x00084C80u, sub_00084C80); /* call 0x00084C80 */

loc_0008C288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C39C; /* je: equal / zero */

loc_0008C293: ;
    ecx = esi;
    PUSH32(esp, 0x0008C29Au); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C29A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008C32B; /* ja: above (unsigned >) */

loc_0008C2A3: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8C418)); return; /* indirect tail jmp */

loc_0008C32B: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C365; /* jne: not equal / not zero */

loc_0008C331: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x0008C338u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C342u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C34B: ;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C365: ;
    ecx = esi;
    PUSH32(esp, 0x0008C36Cu); RECOMP_ABI_CALL(0x00085C90u, sub_00085C90); /* call 0x00085C90 */

loc_0008C36C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C375: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C37Du); RECOMP_ABI_CALL(0x00086B70u, sub_00086B70); /* call 0x00086B70 */

loc_0008C37D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C381: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x0008C388u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C39C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C3A2u); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_0008C3A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C3A9: ;
    eax = MEM32(esi + 0x34);
    edi = 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008C3CE; /* jg: greater (signed >) */

loc_0008C3B5: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0008C3BCu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x38) = 1;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C3CE: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x0008C3D5u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3D5: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C3E1u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C3E1: ;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x34) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x28) = eax;

loc_0008C3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C212
 * Original: 0x0008C212 - 0x0008C3FF (493 bytes, 115 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C212: ;
    MEM32(esi + 0x34) = 2;
    goto loc_0008C240;

loc_0008C240: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C24Au); RECOMP_ABI_CALL(0x00084D00u, sub_00084D00); /* call 0x00084D00 */

loc_0008C24A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C263; /* je: equal / zero */

loc_0008C251: ;
    ecx = esi;
    PUSH32(esp, 0x0008C258u); RECOMP_ABI_CALL(0x00088AF0u, sub_00088AF0); /* call 0x00088AF0 */

loc_0008C258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C263: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C269u); RECOMP_ABI_CALL(0x00084D20u, sub_00084D20); /* call 0x00084D20 */

loc_0008C269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C282; /* je: equal / zero */

loc_0008C270: ;
    ecx = esi;
    PUSH32(esp, 0x0008C277u); RECOMP_ABI_CALL(0x00086B50u, sub_00086B50); /* call 0x00086B50 */

loc_0008C277: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C282: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C288u); RECOMP_ABI_CALL(0x00084C80u, sub_00084C80); /* call 0x00084C80 */

loc_0008C288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C39C; /* je: equal / zero */

loc_0008C293: ;
    ecx = esi;
    PUSH32(esp, 0x0008C29Au); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C29A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008C32B; /* ja: above (unsigned >) */

loc_0008C2A3: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8C418)); return; /* indirect tail jmp */

loc_0008C32B: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C365; /* jne: not equal / not zero */

loc_0008C331: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x0008C338u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C342u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C34B: ;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C365: ;
    ecx = esi;
    PUSH32(esp, 0x0008C36Cu); RECOMP_ABI_CALL(0x00085C90u, sub_00085C90); /* call 0x00085C90 */

loc_0008C36C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C375: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C37Du); RECOMP_ABI_CALL(0x00086B70u, sub_00086B70); /* call 0x00086B70 */

loc_0008C37D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C381: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x0008C388u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C39C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C3A2u); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_0008C3A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C3A9: ;
    eax = MEM32(esi + 0x34);
    edi = 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008C3CE; /* jg: greater (signed >) */

loc_0008C3B5: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0008C3BCu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x38) = 1;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C3CE: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x0008C3D5u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3D5: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C3E1u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C3E1: ;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x34) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x28) = eax;

loc_0008C3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C21B
 * Original: 0x0008C21B - 0x0008C3FF (484 bytes, 115 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C21B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C21B: ;
    MEM32(esi + 0x34) = 3;
    goto loc_0008C240;

loc_0008C240: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C24Au); RECOMP_ABI_CALL(0x00084D00u, sub_00084D00); /* call 0x00084D00 */

loc_0008C24A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C263; /* je: equal / zero */

loc_0008C251: ;
    ecx = esi;
    PUSH32(esp, 0x0008C258u); RECOMP_ABI_CALL(0x00088AF0u, sub_00088AF0); /* call 0x00088AF0 */

loc_0008C258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C263: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C269u); RECOMP_ABI_CALL(0x00084D20u, sub_00084D20); /* call 0x00084D20 */

loc_0008C269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C282; /* je: equal / zero */

loc_0008C270: ;
    ecx = esi;
    PUSH32(esp, 0x0008C277u); RECOMP_ABI_CALL(0x00086B50u, sub_00086B50); /* call 0x00086B50 */

loc_0008C277: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C282: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C288u); RECOMP_ABI_CALL(0x00084C80u, sub_00084C80); /* call 0x00084C80 */

loc_0008C288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C39C; /* je: equal / zero */

loc_0008C293: ;
    ecx = esi;
    PUSH32(esp, 0x0008C29Au); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C29A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008C32B; /* ja: above (unsigned >) */

loc_0008C2A3: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8C418)); return; /* indirect tail jmp */

loc_0008C32B: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C365; /* jne: not equal / not zero */

loc_0008C331: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x0008C338u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C342u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C34B: ;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C365: ;
    ecx = esi;
    PUSH32(esp, 0x0008C36Cu); RECOMP_ABI_CALL(0x00085C90u, sub_00085C90); /* call 0x00085C90 */

loc_0008C36C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C375: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C37Du); RECOMP_ABI_CALL(0x00086B70u, sub_00086B70); /* call 0x00086B70 */

loc_0008C37D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C381: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x0008C388u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C39C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C3A2u); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_0008C3A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C3A9: ;
    eax = MEM32(esi + 0x34);
    edi = 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008C3CE; /* jg: greater (signed >) */

loc_0008C3B5: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0008C3BCu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x38) = 1;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C3CE: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x0008C3D5u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3D5: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C3E1u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C3E1: ;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x34) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x28) = eax;

loc_0008C3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C224
 * Original: 0x0008C224 - 0x0008C3FF (475 bytes, 115 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C224(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C224: ;
    MEM32(esi + 0x34) = 5;
    goto loc_0008C240;

loc_0008C240: ;
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C24Au); RECOMP_ABI_CALL(0x00084D00u, sub_00084D00); /* call 0x00084D00 */

loc_0008C24A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C263; /* je: equal / zero */

loc_0008C251: ;
    ecx = esi;
    PUSH32(esp, 0x0008C258u); RECOMP_ABI_CALL(0x00088AF0u, sub_00088AF0); /* call 0x00088AF0 */

loc_0008C258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C263: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C269u); RECOMP_ABI_CALL(0x00084D20u, sub_00084D20); /* call 0x00084D20 */

loc_0008C269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C282; /* je: equal / zero */

loc_0008C270: ;
    ecx = esi;
    PUSH32(esp, 0x0008C277u); RECOMP_ABI_CALL(0x00086B50u, sub_00086B50); /* call 0x00086B50 */

loc_0008C277: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C282: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C288u); RECOMP_ABI_CALL(0x00084C80u, sub_00084C80); /* call 0x00084C80 */

loc_0008C288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C39C; /* je: equal / zero */

loc_0008C293: ;
    ecx = esi;
    PUSH32(esp, 0x0008C29Au); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C29A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008C32B; /* ja: above (unsigned >) */

loc_0008C2A3: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8C418)); return; /* indirect tail jmp */

loc_0008C32B: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C365; /* jne: not equal / not zero */

loc_0008C331: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x0008C338u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C342u); RECOMP_ABI_CALL(0x00086980u, sub_00086980); /* call 0x00086980 */

loc_0008C342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C34B: ;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C365: ;
    ecx = esi;
    PUSH32(esp, 0x0008C36Cu); RECOMP_ABI_CALL(0x00085C90u, sub_00085C90); /* call 0x00085C90 */

loc_0008C36C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C375: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C37Du); RECOMP_ABI_CALL(0x00086B70u, sub_00086B70); /* call 0x00086B70 */

loc_0008C37D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C381: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x0008C388u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C39C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C3A2u); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_0008C3A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3F4; /* je: equal / zero */

loc_0008C3A9: ;
    eax = MEM32(esi + 0x34);
    edi = 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008C3CE; /* jg: greater (signed >) */

loc_0008C3B5: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x0008C3BCu); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x38) = 1;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0008C3CE: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x0008C3D5u); RECOMP_ABI_CALL(0x00084C70u, sub_00084C70); /* call 0x00084C70 */

loc_0008C3D5: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C3E1u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_0008C3E1: ;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x34) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x28) = eax;

loc_0008C3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
