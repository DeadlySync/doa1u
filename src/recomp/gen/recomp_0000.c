/**
 * DOAU1 - Recompiled code chunk 0
 * Functions: 250 (0x00011000 - 0x00018104)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x000110AB (171 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
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

loc_00011000: ;
    ecx = ZX8(MEM8(esp + 8));
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30D9A4)); /* fadd dword ptr [eax + 0x30d9a4] */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30D9AC)); /* fadd dword ptr [eax + 0x30d9ac] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011076; /* jnp: not parity */

loc_0001103F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30F918)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30f918] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011078; /* je: equal / zero */

loc_0001104C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011078; /* jnp: not parity */

loc_0001105D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30D8E4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30d8e4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011078; /* je: equal / zero */

loc_0001106E: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    goto loc_0001107E;

loc_00011076: ;
    fp_pop(); /* fstp st(0) */

loc_00011078: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */

loc_0001107E: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0xC);
    edx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    ecx = eax + eax * 2;
    fp_push(MEMF(ecx * 4 + 0x349E64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x148)); /* fsub dword ptr [edx + 0x148] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000110A8; /* jp: parity */

loc_000110A5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000110A8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000110B0
 * Original: 0x000110B0 - 0x000110B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110B0(void)
{

loc_000110B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000110C0
 * Original: 0x000110C0 - 0x000110E0 (32 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000110C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000110C0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000110CFu); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_000110CF: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000110F0
 * Original: 0x000110F0 - 0x00011143 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110F0(void)
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

loc_000110F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEM32(esp + 0xC) = 0;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    ecx = esp;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00011126u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_00011126: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x00011131u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00011131: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
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
 * sub_00011150
 * Original: 0x00011150 - 0x00011170 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011150: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x2FF690) = 0x2FDE60;
    MEM32(0x2FF694) = 0x2FEA78;
    MEM8(esp + 0x1C) = 0;

    g_seh_ebp = ebp; sub_00011170(); return; /* fallthrough 0x00011170 */

}

/**
 * sub_00011170
 * Original: 0x00011170 - 0x00011201 (145 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011170: ;
    edi = ZX8(MEM8(esp + 0x1C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 9;
    goto loc_00011190;

    /* nop */
    goto loc_00011190;

    /* nop */

loc_00011190: ;
    esi = MEM32(edi * 4 + 0x2FF690);
    MEM8(eax + esi) = 0;
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x158;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011190; /* jne: not equal / not zero */

loc_000111A3: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(edx, MEM8(eax + 0x30D9A2));
    SET_LO8(ebx, MEM8(eax + 0x30D9A1));
    esi = MEM32(edi * 4 + 0x2FF690);
    SET_LO8(edx, LO8(edx) << 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(eax + 0x2B2668);
    ebp = MEM32(eax + 0x2B2E98);
    eax = MEM32(eax + 0x2B3180);
    MEM32(esp + 0x18) = eax;
    eax = edi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3480C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3480C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000113D9(); return; } /* je: equal / zero */

loc_000111F2: ;
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x11) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000113C7(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00011201(); return; /* fallthrough 0x00011201 */

}

/**
 * sub_00011201
 * Original: 0x00011201 - 0x00011286 (133 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011201(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011201: ;
    SET_LO8(eax, MEM8(ebx));
    SET_LO8(edx, MEM8(ebx + 1));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x12) = LO8(edx);
    edx = ZX8(LO8(edx));
    edi = edx + edx * 2;
    SET_LO8(edx, MEM8(esp + 0x12));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    edi = edi * 8 + 0x2B2320;
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00011271; /* jne: not equal / not zero */

loc_0001122A: ;
    ecx = ZX8(MEM8(esp + 0x11));
    edx = MEM32(esp + 0x14);
    MEM8(esi) = 3;
    eax = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011245u); RECOMP_ABI_CALL(0x00012C90u, sub_00012C90); /* call 0x00012C90 */

loc_00011245: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    eax = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x158;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000113B8(); return; /* tail jmp 0x000113B8 */

loc_00011271: ;
    SET_LO8(edx, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000113B8(); return; } /* jbe: below or equal (unsigned <=) */

loc_0001127D: ;
    edx = ZX8(LO8(edx));
    MEM32(esp + 0x24) = edx;
    g_seh_ebp = ebp; sub_00011290(); return; /* tail jmp 0x00011290 */

}

/**
 * sub_00011286
 * Original: 0x00011286 - 0x000113C7 (321 bytes, 92 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011286(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011286: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    /* nop */
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x140) = edx;
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM8(esi + 2) = LO8(edx);
    MEM8(esi + 3) = LO8(eax);
    MEM8(esi) = 1;
    SET_LO8(eax, MEM8(ebx));
    MEM8(esi + 1) = LO8(eax);
    MEM8(esp + 0x12) = LO8(eax);
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    edx = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = edx;
    SET_LO8(eax, MEM8(edi));
    MEM8(esi + 0x14) = LO8(eax);
    SET_LO8(edx, MEM8(edi + 1));
    MEM8(esi + 0x15) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x14));
    MEM8(esi + 0x16) = LO8(eax);
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x138) = ecx;
    MEM32(esi + 0x13C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x17) = 0;
    edx = MEM32(ebp);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(ebp + 4);
    MEM32(esi + 0x30) = eax;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x2C) = edx;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x34) = eax;
    MEM32(esp + 0x20) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 0x3C;
    edx = 0x10;
    /* nop */

loc_00011320: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011320; /* jne: not equal / not zero */

loc_00011334: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x144) = eax;
    eax = MEM32(edx);
    MEM32(esi + 0x148) = eax;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011387; /* je: equal / zero */

loc_00011352: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx * 4 + 0x348094);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011364u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00011364: ;
    ecx = ZX8(MEM8(esi + 1));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 4;
    MEM32(esi + 0x14C) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x150) = edx;
    MEM32(esi + 0x154) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011387: ;
    edx = MEM32(esp + 0x14);
    eax = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x158;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00011286; /* jne: not equal / not zero */

loc_000113B8: ;
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x11) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00011201(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000113C7(); return; /* fallthrough 0x000113C7 */

}

/**
 * sub_00011290
 * Original: 0x00011290 - 0x000113C7 (311 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011290: ;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x140) = edx;
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM8(esi + 2) = LO8(edx);
    MEM8(esi + 3) = LO8(eax);
    MEM8(esi) = 1;
    SET_LO8(eax, MEM8(ebx));
    MEM8(esi + 1) = LO8(eax);
    MEM8(esp + 0x12) = LO8(eax);
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    edx = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = edx;
    SET_LO8(eax, MEM8(edi));
    MEM8(esi + 0x14) = LO8(eax);
    SET_LO8(edx, MEM8(edi + 1));
    MEM8(esi + 0x15) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x14));
    MEM8(esi + 0x16) = LO8(eax);
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x138) = ecx;
    MEM32(esi + 0x13C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x17) = 0;
    edx = MEM32(ebp);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(ebp + 4);
    MEM32(esi + 0x30) = eax;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x2C) = edx;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x34) = eax;
    MEM32(esp + 0x20) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 0x3C;
    edx = 0x10;
    /* nop */

loc_00011320: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011320; /* jne: not equal / not zero */

loc_00011334: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x144) = eax;
    eax = MEM32(edx);
    MEM32(esi + 0x148) = eax;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011387; /* je: equal / zero */

loc_00011352: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx * 4 + 0x348094);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011364u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00011364: ;
    ecx = ZX8(MEM8(esi + 1));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 4;
    MEM32(esi + 0x14C) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x150) = edx;
    MEM32(esi + 0x154) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011387: ;
    edx = MEM32(esp + 0x14);
    eax = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x158;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00011286(); return; } /* jne: not equal / not zero */

loc_000113B8: ;
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x11) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00011201(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000113C7(); return; /* fallthrough 0x000113C7 */

}

/**
 * sub_000113B8
 * Original: 0x000113B8 - 0x000113C7 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000113B8: ;
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x11) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00011201(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000113C7(); return; /* fallthrough 0x000113C7 */

}

/**
 * sub_000113C7
 * Original: 0x000113C7 - 0x000113D9 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000113C7: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(esp + 0x1C) = LO8(eax);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00011170(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_000113D9(); return; /* fallthrough 0x000113D9 */

}

/**
 * sub_000113D9
 * Original: 0x000113D9 - 0x000113E1 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000113D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000113F0
 * Original: 0x000113F0 - 0x00011450 (96 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000113F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011421; /* je: equal / zero */

loc_000113FF: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011421; /* je: equal / zero */

loc_00011407: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00011416; /* jl: less (signed <) */

loc_0001140C: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00011421; /* jle: less or equal (signed <=) */

loc_00011411: ;
    MEM32(eax + 0x18) = ecx;
    goto loc_0001141E;

loc_00011416: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00011421; /* jge: greater or equal (signed >=) */

loc_0001141B: ;
    MEM32(eax + 0x18) = edx;

loc_0001141E: ;
    MEM32(eax + 0x20) = esi;

loc_00011421: ;
    edx = MEM32(eax + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001144E; /* je: equal / zero */

loc_00011429: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001144E; /* je: equal / zero */

loc_00011431: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00011443; /* jl: less (signed <) */

loc_00011436: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001144E; /* jle: less or equal (signed <=) */

loc_0001143B: ;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x1C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00011443: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001144E; /* jge: greater or equal (signed >=) */

loc_00011448: ;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = esi;

loc_0001144E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011450
 * Original: 0x00011450 - 0x00011770 (800 bytes, 212 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00011450(void)
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

loc_00011450: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esp + 0x38));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    eax = eax + ebp * 4;
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + 0x349E60);
    edx = MEM32(edi + 0x349E64);
    fp_push(MEMF(edi + 0x349E60)); /* fld float */
    eax = MEM32(edi + 0x349E68);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x349FF8)); /* fsub dword ptr [edi + 0x349ff8] */
    MEM32(edi + 0x349FF8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edi + 0x349F08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x349E64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x349FFC)); /* fsub dword ptr [edi + 0x349ffc] */
    MEM32(edi + 0x349FFC) = edx;
    MEMF(edi + 0x349F0C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x349E68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x34A000)); /* fsub dword ptr [edi + 0x34a000] */
    MEM32(edi + 0x34A000) = eax;
    MEMF(edi + 0x349F10) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ebx, MEM8(esi + 3));
    PUSH32(esp, 0x000114D2u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_000114D2: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF);
    ecx = ZX8(LO8(ebx));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3495C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3495C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000114E8u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000114E8: ;
    PUSH32(esp, 0x000114EDu); RECOMP_ABI_CALL(0x0006B1B0u, sub_0006B1B0); /* call 0x0006B1B0 */

loc_000114ED: ;
    fp_push(MEMF(edi + 0x349F10)); /* fld float */
    ecx = esp + 0x2C;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x349F0C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x349F08)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00011520u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00011520: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    PUSH32(esp, 0x0001152Du); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001152D: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x28) = 0;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x10)); /* fsub dword ptr [esi + 0x10] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00011571u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_00011571: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x0001157Cu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001157C: ;
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0EC)); /* fmul dword ptr [0x22c0ec] */
    PUSH32(esp, 0x00011595u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00011595: ;
    edx = MEM32(esp + 0x2C);
    ebx = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x000115C4u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_000115C4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x000115CFu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000115CF: ;
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0EC)); /* fmul dword ptr [0x22c0ec] */
    PUSH32(esp, 0x000115E8u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000115E8: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x18) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011606; /* jne: not equal / not zero */

loc_000115FD: ;
    ebx = 0x20000;
    MEM32(esp + 0x14) = ebx;

loc_00011606: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001161F; /* jne: not equal / not zero */

loc_00011617: ;
    MEM32(esp + 0x18) = 0x20000;

loc_0001161F: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011667; /* jnp: not parity */

loc_00011632: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011667; /* jnp: not parity */

loc_00011645: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00011660u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00011660: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_00011669;

loc_00011667: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011669: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001169F; /* je: equal / zero */

loc_0001166D: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001169F; /* jnp: not parity */

loc_00011680: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011698u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00011698: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    goto loc_000116A1;

loc_0001169F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000116A1: ;
    ebx = MEM32(esi + 0x18);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_000116BA; /* jg: greater (signed >) */

loc_000116B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000116C0; /* jge: greater or equal (signed >=) */

loc_000116BA: ;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000116C0: ;
    ebx = MEM32(esi + 0x1C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000116D5; /* jg: greater (signed >) */

loc_000116CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000116DF; /* jge: greater or equal (signed >=) */

loc_000116D5: ;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = ecx;

loc_000116DF: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000116F4u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_000116F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011740; /* je: equal / zero */

loc_000116FB: ;
    eax = ZX8(MEM8(esi + 2));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 8 + 0x348BD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1555 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001171F; /* jle: less or equal (signed <=) */

loc_0001170F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6AAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6AAA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001171F; /* jge: greater or equal (signed >=) */

loc_00011716: ;
    edi = 0x8000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00011738;

loc_0001171F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9555 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00011736; /* jle: less or equal (signed <=) */

loc_00011726: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEAAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEAAA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00011736; /* jge: greater or equal (signed >=) */

loc_0001172D: ;
    edi = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00011738;

loc_00011736: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011738: ;
    MEM32(esp + 0x20) = 0;

loc_00011740: ;
    ecx = ZX8(MEM8(esi + 0x17));
    fp_push(MEMF(0x22C0D4)); /* fld float */
    MEM32(esi + ecx * 8 + 0x38) = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2B33DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2b33dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_0001179B(); return; } /* jp: parity */

loc_0001175D: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

    g_seh_ebp = ebp; sub_00011770(); return; /* fallthrough 0x00011770 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011770
 * Original: 0x00011770 - 0x0001179B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011770(void)
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

loc_00011770: ;
    fp_push(MEMF(edx * 4 + 0x2B33C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0001179B(); return; } /* je: equal / zero */

loc_00011782: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = SX16(LO16(ecx));
    MEM32(esp + 0x3C) = edx;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2B33DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2b33dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011770; /* jnp: not parity */

    g_seh_ebp = ebp; sub_0001179B(); return; /* fallthrough 0x0001179B */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001179B
 * Original: 0x0001179B - 0x000118D5 (314 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001179B(void)
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

loc_0001179B: ;
    edx = ZX8(MEM8(esi + 0x17));
    ecx = SX16(LO16(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 8 + 0xB8) = ecx;
    ebp = MEM32(esi + 0x18);
    ebx = ZX8(MEM8(esi + 0x14));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esi + 0x16));
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000117E0; /* je: equal / zero */

loc_000117D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000117E0; /* jne: not equal / not zero */

loc_000117D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = eax + eax + -1;
    MEM32(esi + 0x20) = eax;

loc_000117E0: ;
    ecx = MEM32(esi + 0x20);
    fp_push(MEMF(0x22C0D4)); /* fld float */
    edx = ZX8(MEM8(esi + 0x17));
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + edx * 8 + 0x3C) = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2B33DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2b33dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001184B; /* jp: parity */

loc_00011809: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_00011820: ;
    fp_push(MEMF(edx * 4 + 0x2B33C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001184B; /* je: equal / zero */

loc_00011832: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = SX16(LO16(ecx));
    MEM32(esp + 0x3C) = edx;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2B33DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2b33dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011820; /* jnp: not parity */

loc_0001184B: ;
    eax = ZX8(MEM8(esi + 0x17));
    ecx = SX16(LO16(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + eax * 8 + 0xBC) = ecx;
    ebp = MEM32(esi + 0x1C);
    ebx = ZX8(MEM8(esi + 0x14));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esi + 0x16));
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00011890; /* je: equal / zero */

loc_00011880: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011890; /* jne: not equal / not zero */

loc_00011884: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = eax + eax + -1;
    MEM32(esi + 0x24) = eax;

loc_00011890: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000118ADu); RECOMP_ABI_CALL(0x000113F0u, sub_000113F0); /* call 0x000113F0 */

loc_000118AD: ;
    SET_LO8(edx, MEM8(esi + 0x17));
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x17) = LO8(edx);
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x13C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000118E0
 * Original: 0x000118E0 - 0x00011A83 (419 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000118E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000118E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esi + 0x17));
    SET_LO8(eax, MEM8(esi + 0x15));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(edx));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edx = ZX8(LO8(edx));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    ecx = MEM32(esi + 0x140);
    eax = SX16(LO16(eax));
    edi = MEM32(ecx + eax * 8 + 0x38);
    ebp = MEM32(ecx + eax * 8 + 0x3C);
    ebx = MEM32(ecx + eax * 8 + 0xB8);
    eax = MEM32(ecx + eax * 8 + 0xBC);
    MEM32(esi + edx * 8 + 0x38) = edi;
    ecx = ZX8(MEM8(esi + 0x17));
    MEM32(esi + ecx * 8 + 0xB8) = ebx;
    edx = ZX8(MEM8(esi + 0x17));
    MEM32(esi + edx * 8 + 0x3C) = ebp;
    ecx = ZX8(MEM8(esi + 0x17));
    edx = MEM32(esp + 0x28);
    MEM32(esi + ecx * 8 + 0xBC) = eax;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011959u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00011959: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000119A7; /* je: equal / zero */

loc_00011960: ;
    eax = ZX8(MEM8(esp + 0x20));
    edx = ZX8(MEM8(esi + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 8 + 0x348BD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1555 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001198C; /* jle: less or equal (signed <=) */

loc_0001197C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6AAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6AAA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001198C; /* jge: greater or equal (signed >=) */

loc_00011983: ;
    edi = 0x8000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000119A5;

loc_0001198C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9555 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000119A3; /* jle: less or equal (signed <=) */

loc_00011993: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEAAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEAAA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000119A3; /* jge: greater or equal (signed >=) */

loc_0001199A: ;
    edi = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000119A5;

loc_000119A3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000119A5: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000119A7: ;
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000119BC; /* je: equal / zero */

loc_000119AE: ;
    ecx = ZX8(MEM8(esi + 0x14));
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    goto loc_000119BE;

loc_000119BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000119BE: ;
    edx = MEM32(esi + 0x20);
    ecx = ZX8(MEM8(esi + 0x16));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000119E4; /* je: equal / zero */

loc_000119D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000119E4; /* jne: not equal / not zero */

loc_000119D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = eax + eax + -1;
    MEM32(esi + 0x20) = eax;

loc_000119E4: ;
    edi = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x20);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00011A0C; /* je: equal / zero */

loc_000119FC: ;
    ebx = ZX8(MEM8(esi + 0x14));
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    goto loc_00011A0E;

loc_00011A0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011A0E: ;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00011A30; /* je: equal / zero */

loc_00011A20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011A30; /* jne: not equal / not zero */

loc_00011A24: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = eax + eax + -1;
    MEM32(esi + 0x24) = eax;

loc_00011A30: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011A4Du); RECOMP_ABI_CALL(0x000113F0u, sub_000113F0); /* call 0x000113F0 */

loc_00011A4D: ;
    SET_LO8(edx, MEM8(esi + 0x17));
    eax = MEM32(esi + 0x140);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x17) = LO8(edx);
    _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x1C);
    MEM32(esi + 0x138) = ecx;
    ecx = MEM32(eax + 0x1C);
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x13C) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011A90
 * Original: 0x00011A90 - 0x00011AC0 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ebp + 0x2FF690);
    MEM8(esp + 0x18) = 0xFF;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM8(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 9;
    /* nop */

    g_seh_ebp = ebp; sub_00011AC0(); return; /* fallthrough 0x00011AC0 */

}

/**
 * sub_00011AC0
 * Original: 0x00011AC0 - 0x00011BAF (239 bytes, 73 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011AC0: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011B92; /* je: equal / zero */

loc_00011ACA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011AEC; /* je: equal / zero */

loc_00011ACE: ;
    MEM8(esp + 0x1C) = MEM8(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x00011AE4u); RECOMP_ABI_CALL(0x00013830u, sub_00013830); /* call 0x00013830 */

loc_00011AE4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011B92;

loc_00011AEC: ;
    eax = MEM32(esi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011B5A; /* jne: not equal / not zero */

loc_00011AF6: ;
    MEM8(esp + 0x1C) = MEM8(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x00011B0Du); RECOMP_ABI_CALL(0x00011450u, sub_00011450); /* call 0x00011450 */

loc_00011B0D: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B6A; /* je: equal / zero */

loc_00011B17: ;
    eax = MEM32(ebp + 0x348094);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011B25u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00011B25: ;
    ecx = MEM32(esi + 0x14C);
    eax = MEM32(ecx);
    edx = MEM32(esi + 0x144);
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x150);
    eax = MEM32(ecx);
    edx = MEM32(esi + 0x144);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x154);
    edx = MEM32(esi + 0x144);
    eax = MEM32(ecx);
    MEM32(edx + 0xC) = eax;
    goto loc_00011B6A;

loc_00011B5A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011B67u); RECOMP_ABI_CALL(0x000118E0u, sub_000118E0); /* call 0x000118E0 */

loc_00011B67: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011B6A: ;
    edx = MEM32(esi + 0x144);
    eax = MEM32(esi + 0x138);
    MEM32(edx + 0x10) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = MEM32(esi + 0x144);
    edx = MEM32(esi + 0x13C);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x18) = edx;
    MEM8(esp + 0x10) = LO8(eax);

loc_00011B92: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x158;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00011AC0; /* jne: not equal / not zero */

loc_00011BA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011BB0
 * Original: 0x00011BB0 - 0x00011D3C (396 bytes, 124 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00011BB0(void)
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

loc_00011BB0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00011BBCu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00011BBC: ;
    edi = ZX8(MEM8(esp + 0x24));
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C0);
    _fb = (uint32_t)(0x3495C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3495C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00011BD4u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_00011BD4: ;
    PUSH32(esp, 0x00011BD9u); RECOMP_ABI_CALL(0x0006B1B0u, sub_0006B1B0); /* call 0x0006B1B0 */

loc_00011BD9: ;
    esi = MEM32(esp + 0x20);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00011BFDu); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00011BFD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    PUSH32(esp, 0x00011C0Au); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00011C0A: ;
    _fa = (uint32_t)(MEM16(edi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011C1F; /* jne: not equal / not zero */

loc_00011C15: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00011C1F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011C3A; /* jne: not equal / not zero */

loc_00011C30: ;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = edx;
    goto loc_00011C44;

loc_00011C3A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_00011C44: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011C5B; /* je: equal / zero */

loc_00011C59: ;
    fp_top() = -fp_top(); /* fchs */

loc_00011C5B: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011C7A; /* jne: not equal / not zero */

loc_00011C70: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    goto loc_00011C84;

loc_00011C7A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00011C84: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011CB9; /* jp: parity */

loc_00011C9B: ;
    ecx = MEM32(esp + 0x24);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMD(0x22C0F8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00011CB9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011CDE; /* jp: parity */

loc_00011CC8: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMD(0x22C0F8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_00011CDE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 0xC000;
    if (TEST_Z(_fa, _fb)) goto loc_00011CF5; /* je: equal / zero */

loc_00011CF0: ;
    eax = 0x4000;

loc_00011CF5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    MEM32(esi + 0x14) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0f4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011D17; /* jp: parity */

loc_00011D08: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00011D17: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011D33; /* jne: not equal / not zero */

loc_00011D24: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x1C) = 0x42DC0000;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00011D33: ;
    POP32(esp, edi);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011D40
 * Original: 0x00011D40 - 0x00011D6B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011D58; /* jne: not equal / not zero */

loc_00011D4B: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx & 0xC000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

loc_00011D58: ;
    edx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x8000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xC000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00011D70
 * Original: 0x00011D70 - 0x00011D82 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x38);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(int32_t)SMEM8(ecx + edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011D90
 * Original: 0x00011D90 - 0x00011DC4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D90: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00011DA0; /* jge: greater or equal (signed >=) */

loc_00011D9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011DAC;

loc_00011DA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00011DAC; /* jle: less or equal (signed <=) */

loc_00011DA7: ;
    eax = 0xFF;

loc_00011DAC: ;
    edx = MEM32(ecx + 0x18);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011DD0
 * Original: 0x00011DD0 - 0x00011E04 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011DD0: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00011DE0; /* jge: greater or equal (signed >=) */

loc_00011DDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011DEC;

loc_00011DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00011DEC; /* jle: less or equal (signed <=) */

loc_00011DE7: ;
    eax = 0xFF;

loc_00011DEC: ;
    edx = MEM32(ecx + 0x18);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011E10
 * Original: 0x00011E10 - 0x00011E29 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E10(void)
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

loc_00011E10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xE0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011E24; /* je: equal / zero */

loc_00011E22: ;
    fp_top() = -fp_top(); /* fchs */

loc_00011E24: ;
    g_seh_ebp = ebp; sub_001502D0(); return; /* tail jmp 0x001502D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011E30
 * Original: 0x00011E30 - 0x00011EE3 (179 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E30(void)
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

loc_00011E30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x2B3470);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00011E74; /* je: equal / zero */

loc_00011E3F: ;
    edi = MEM32(esp + 0x18);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO16(esi, MEM16(ecx + 0x30D9C8));
    SET_LO16(esi, LO16(esi) & 0x21FF);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_00011E54: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 2) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011E64; /* jne: not equal / not zero */

loc_00011E5A: ;
    SET_LO8(ebx, MEM8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x30D9A1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ecx + 0x30D9A1) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011E7D; /* je: equal / zero */

loc_00011E64: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = SX8(LO8(edx));
    eax = MEM32(eax * 4 + 0x2B3470);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011E54; /* jne: not equal / not zero */

loc_00011E74: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00011E7D: ;
    SET_LO8(ecx, MEM8(eax + 6));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011ED3; /* je: equal / zero */

loc_00011E87: ;
    edx = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x347F04);
    /* nop */

loc_00011E90: ;
    esi = ZX16(MEM16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011EC9; /* jne: not equal / not zero */

loc_00011E97: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011EB7; /* jne: not equal / not zero */

loc_00011E9C: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 3);
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    MEMF(edi * 4 + 0x300A00) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00011EC9;

loc_00011EB7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011EC9; /* jne: not equal / not zero */

loc_00011EBC: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(eax + 3));
    MEM16(edi * 2 + 0x347EB8) = LO16(ecx);

loc_00011EC9: ;
    SET_LO8(ecx, MEM8(eax + 6));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011E90; /* jne: not equal / not zero */

loc_00011ED3: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi * 4 + 0x300A00)); /* fsub dword ptr [edi*4 + 0x300a00] */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00011EF0
 * Original: 0x00011EF0 - 0x00011EF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011EF0(void)
{

loc_00011EF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011F00
 * Original: 0x00011F00 - 0x00011F0C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F00: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011F10
 * Original: 0x00011F10 - 0x00011F11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F10(void)
{

loc_00011F10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011F20
 * Original: 0x00011F20 - 0x00011F38 (24 bytes, 8 insns)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00011F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00011F40
 * Original: 0x00011F40 - 0x00011F45 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00011F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011F50
 * Original: 0x00011F50 - 0x00011F57 (7 bytes, 3 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00011F50: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011F60
 * Original: 0x00011F60 - 0x00011F67 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00011F60: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011F70
 * Original: 0x00011F70 - 0x00012070 (256 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011F70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax * 2 + 0x347EB8));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(ebp) (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00011FA2; /* jne: not equal / not zero */

loc_00011F8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011F91u); RECOMP_ABI_CALL(0x00011E10u, sub_00011E10); /* call 0x00011E10 */

loc_00011F91: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x00011F99u); RECOMP_ABI_CALL(0x00011D70u, sub_00011D70); /* call 0x00011D70 */

loc_00011F99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    goto loc_00011FA6;

loc_00011FA2: ;
    MEM32(esp + 0x18) = ebp;

loc_00011FA6: ;
    SET_LO16(esi, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00011FFD; /* jle: less or equal (signed <=) */

loc_00011FB0: ;
    PUSH32(esp, 0x00011FB5u); RECOMP_ABI_CALL(0x00011D90u, sub_00011D90); /* call 0x00011D90 */

loc_00011FB5: ;
    ecx = SX16(LO16(ebx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00011FF1; /* ja: above (unsigned >) */

loc_00011FC1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x12070); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00011FC8u) goto loc_00011FC8;
    if (_jt == 0x00011FD6u) goto loc_00011FD6;
    if (_jt == 0x00011FEEu) goto loc_00011FEE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00011FC8: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001202E;

loc_00011FD6: ;
    ecx = eax;
    edx = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001202E;

loc_00011FEE: ;
    eax = eax + eax * 2;

loc_00011FF1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001202E;

loc_00011FFD: ;
    PUSH32(esp, 0x00012002u); RECOMP_ABI_CALL(0x00011DD0u, sub_00011DD0); /* call 0x00011DD0 */

loc_00012002: ;
    ecx = SX16(LO16(ebx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012023; /* jl: less (signed <) */

loc_0001200D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001201C; /* jle: less or equal (signed <=) */

loc_00012012: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012023; /* jne: not equal / not zero */

loc_00012017: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_00012023;

loc_0001201C: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00012023: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + edx;

loc_0001202E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x3C (16-bit) */
    MEM16(edi + 2) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00012040; /* jle: less or equal (signed <=) */

loc_00012038: ;
    MEM16(edi + 2) = 0x3C;
    goto loc_0001204C;

loc_00012040: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFC4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFC4 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001204C; /* jge: greater or equal (signed >=) */

loc_00012046: ;
    MEM16(edi + 2) = 0xFFC4;

loc_0001204C: ;
    SET_LO16(eax, MEM16(edi + 2));
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    edx = SX16(LO16(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    MEM16(edi + 4) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0001206B; /* jle: less or equal (signed <=) */

loc_00012065: ;
    MEM16(edi + 4) = 0;

loc_0001206B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012080
 * Original: 0x00012080 - 0x000120E0 (96 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012080: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x40);
    ebp = MEM32(esi + 0x44);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4B0);
    MEM32(esp + 0x18) = eax;
    eax = ZX8(MEM8(esp + 0x1C));
    edx = MEM32(eax * 4 + 0x336BE4);
    PUSH32(esp, edi);
    edi = ecx + esi + 0x50;
    ecx = MEM32(edx);
    ebx = MEM32(ecx);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x31C060);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000120C9u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_000120C9: ;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x20) = 0;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012159(); return; } /* jle: less or equal (signed <=) */

loc_000120DD: ;
    /* nop */

    g_seh_ebp = ebp; sub_000120E0(); return; /* fallthrough 0x000120E0 */

}

/**
 * sub_000120E0
 * Original: 0x000120E0 - 0x000120ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000120E0: ;
    edx = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000120F0(); return; /* tail jmp 0x000120F0 */

}

/**
 * sub_000120F0
 * Original: 0x000120F0 - 0x00012159 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120F0(void)
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

loc_000120F0: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000120FE; /* jne: not equal / not zero */

loc_000120F8: ;
    ebx = ebx & 0x7FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000120FE: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(LO16(ebx));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    if (CMP_EQ(_fa, _fb)) goto loc_00012127; /* je: equal / zero */

loc_00012122: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp)); /* fsub dword ptr [ebp] */
    goto loc_0001212A;

loc_00012127: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp)); /* fadd dword ptr [ebp] */

loc_0001212A: ;
    eax = SX8(LO8(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000120F0; /* jl: less (signed <) */

loc_0001213D: ;
    ebx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esp + 0x20));
    SET_LO8(ecx, MEM8(esi + 0x30));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x20) = LO8(eax);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000120E0(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00012159(); return; /* fallthrough 0x00012159 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012159
 * Original: 0x00012159 - 0x00012163 (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012159(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012159: ;
    RECOMP_UNIMPL("wbinvd", 0x00012159u); /* TODO: wbinvd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012170
 * Original: 0x00012170 - 0x000122CD (349 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012170(void)
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

loc_00012170: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x300048) = 0x2FF698;
    MEM32(0x30004C) = 0x300050;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C8);
    esi = MEM32(edi * 4 + 0x300048);
    MEM32(0x300A00) = 0;
    MEM32(0x300A04) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM8(esi) = LO8(eax);
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x18) = 0x4000;
    MEM16(esi + 2) = LO16(edx);
    MEM16(esi + 4) = LO16(edx);
    MEM16(esi + 6) = LO16(edx);
    MEM8(esi + 8) = 0x1E;
    SET_LO8(ebx, MEM8(ecx + 0x30D9A2));
    if (CMP_NE(_fa, _fb)) goto loc_000121FA; /* jne: not equal / not zero */

loc_000121F3: ;
    ecx = 0x2B90A0;
    goto loc_00012220;

loc_000121FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012206; /* jne: not equal / not zero */

loc_000121FF: ;
    ecx = 0x2B6248;
    goto loc_00012220;

loc_00012206: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012212; /* jne: not equal / not zero */

loc_0001220B: ;
    ecx = 0x2B7D58;
    goto loc_00012220;

loc_00012212: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000126B5(); return; } /* jne: not equal / not zero */

loc_0001221B: ;
    ecx = 0x2B9810;

loc_00012220: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, ebp);
    MEM8(esi + 9) = 0;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = edx;
    MEM8(esi + 0x30) = 0;
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x44) = edx;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = edx;
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000126B4(); return; } /* je: equal / zero */

loc_0001224F: ;
    SET_LO8(ebx, MEM8(ebp));
    MEM8(esi + 9) = LO8(ebx);
    ebx = ZX8(MEM8(ebp + 1));
    MEM32(esp + 0x1C) = ebx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(ecx + eax * 4 + 0x24);
    MEM32(esi + 0x34) = ebx;
    ebx = MEM32(ecx + eax * 4 + 0x48);
    MEM32(esi + 0x38) = ebx;
    ebx = MEM32(ecx + eax * 4 + 0x6C);
    MEM32(esi + 0x3C) = ebx;
    ebx = MEM32(ecx + eax * 4 + 0x90);
    SET_LO8(ebx, MEM8(ebx));
    MEM8(esi + 0x30) = LO8(ebx);
    ebx = MEM32(ecx + eax * 4 + 0xB4);
    MEM32(esi + 0x40) = ebx;
    ebx = MEM32(ecx + eax * 4 + 0xD8);
    MEM32(esi + 0x44) = ebx;
    ebx = MEM32(ecx + eax * 4 + 0xFC);
    MEM32(esi + 0x48) = ebx;
    ebx = MEM32(ecx + eax * 4 + 0x120);
    MEM32(esi + 0x4C) = ebx;
    eax = MEM32(ecx + eax * 4 + 0x144);
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0001234C(); return; } /* jle: less or equal (signed <=) */

loc_000122C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x504;
    g_seh_ebp = ebp; sub_000122D0(); return; /* tail jmp 0x000122D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000122D0
 * Original: 0x000122D0 - 0x0001234C (124 bytes, 36 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000122D0(void)
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

loc_000122D0: ;
    ebx = MEM32(esi + 0x48);
    fp_push(MEMF(eax + ebx)); /* fld float */
    ebp = MEM32(esi + 0x44);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ebp)); /* fsub dword ptr [eax + ebp] */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esi + 0x44);
    fp_push(MEMF(ebx + eax + -8)); /* fld float */
    ebp = MEM32(esi + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ebp + -8)); /* fsub dword ptr [eax + ebp - 8] */
    MEMF(ecx + -12) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esi + 0x44);
    fp_push(MEMF(ebx + eax + -4)); /* fld float */
    ebp = MEM32(esi + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ebp + -4)); /* fsub dword ptr [eax + ebp - 4] */
    MEMF(ecx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esi + 0x4C);
    fp_push(MEMF(ebx + eax + -12)); /* fld float */
    ebp = MEM32(esi + 0x44);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ebp + -12)); /* fsub dword ptr [eax + ebp - 0xc] */
    MEMF(ecx + -1216) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esi + 0x44);
    fp_push(MEMF(ebx + eax + -8)); /* fld float */
    ebp = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ebp + -8)); /* fsub dword ptr [eax + ebp - 8] */
    MEMF(ecx + -1212) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esi + 0x44);
    fp_push(MEMF(ebx + eax + -4)); /* fld float */
    ebp = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ebp + -4)); /* fsub dword ptr [eax + ebp - 4] */
    MEMF(ecx + -1208) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000122D0; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0001234C(); return; /* fallthrough 0x0001234C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001234C
 * Original: 0x0001234C - 0x000123A3 (87 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001234C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001234C: ;
    ecx = MEM32(edi * 4 + 0x336BE4);
    eax = MEM32(ecx);
    ecx = MEM32(eax);
    edx = edi;
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + ecx;
    edx = MEM32(eax * 4 + 0x31C060);
    edi = edi << 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x30D020);
    PUSH32(esp, 0);
    ebp = eax + eax * 2;
    PUSH32(esp, edx);
    ebp = ebp * 4 + 0x31E060;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00012388u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00012388: ;
    edx = MEM32(ebx + 0x10);
    edi = MEM32(ebp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x20) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000123E1(); return; } /* jbe: below or equal (unsigned <=) */

loc_0001239C: ;
    ebp = eax + 8;
    MEM32(esp + 0x10) = ebp;

    g_seh_ebp = ebp; sub_000123A3(); return; /* fallthrough 0x000123A3 */

}

/**
 * sub_000123A3
 * Original: 0x000123A3 - 0x000123E1 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000123A3: ;
    edx = MEM32(ebx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000123C1; /* jbe: below or equal (unsigned <=) */

loc_000123AC: ;
    /* nop */

loc_000123B0: ;
    ebp = ZX16(MEM16(edi + eax * 2));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123CE; /* je: equal / zero */

loc_000123B8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000123B0; /* jb: below (unsigned <) */

loc_000123BD: ;
    ebp = MEM32(esp + 0x10);

loc_000123C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp) = eax;
    goto loc_000123D2;

loc_000123CE: ;
    ebp = MEM32(esp + 0x10);

loc_000123D2: ;
    eax = MEM32(ebx + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_000123A3; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_000123E1(); return; /* fallthrough 0x000123E1 */

}

/**
 * sub_000123E1
 * Original: 0x000123E1 - 0x00012413 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000123E1: ;
    ebp = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM8(ebp + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 1), 0x80 (8-bit) */
    eax = MEM32(esi + 0x44);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x34) = eax;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0001266A(); return; } /* jne: not equal / not zero */

loc_000123F9: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012537(); return; } /* jle: less or equal (signed <=) */

loc_0001240C: ;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00012413(); return; /* fallthrough 0x00012413 */

}

/**
 * sub_00012413
 * Original: 0x00012413 - 0x00012440 (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012413(void)
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

loc_00012413: ;
    eax = MEM32(ebx + 0x18);
    fp_push(MEMF(0x22C13C)); /* fld float */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = 0x47C35000;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0x28) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000124EA(); return; } /* jbe: below or equal (unsigned <=) */

loc_0001243A: ;
    /* nop */

    g_seh_ebp = ebp; sub_00012440(); return; /* fallthrough 0x00012440 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012440
 * Original: 0x00012440 - 0x000124EA (170 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012440(void)
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

loc_00012440: ;
    ecx = MEM32(esp + 0x20);
    SET_LO16(ecx, MEM16(ecx + edi * 2));
    ebx = MEM32(esp + 0x2C);
    edx = ZX16(LO16(ecx));
    eax = edx;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp)); /* fadd dword ptr [ebp] */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000124C0; /* jp: parity */

loc_00012486: ;
    ebx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000124A3; /* jle: less or equal (signed <=) */

loc_00012490: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM16(ebx + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + eax * 2), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124C0; /* je: equal / zero */

loc_0001249A: ;
    ebx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012490; /* jl: less (signed <) */

loc_000124A3: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000124B6; /* jne: not equal / not zero */

loc_000124B0: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000124B8;

loc_000124B6: ;
    fp_pop(); /* fstp st(0) */

loc_000124B8: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x18) = edx;

loc_000124C0: ;
    eax = MEM32(esp + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012440; /* jb: below (unsigned <) */

loc_000124CD: ;
    eax = MEM32(esp + 0x18);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ebx = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000124EC(); return; } /* je: equal / zero */

loc_000124DC: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM16(ecx + edx * 2) = LO16(eax);
    g_seh_ebp = ebp; sub_00012517(); return; /* tail jmp 0x00012517 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000124EA
 * Original: 0x000124EA - 0x00012537 (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000124EA(void)
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

loc_000124EA: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x000124F6u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000124F6: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x00012500u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00012500: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x0001250Au); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0001250A: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x00012514u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00012514: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012413(); return; } /* jl: less (signed <) */

loc_0001252F: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00012537(); return; /* fallthrough 0x00012537 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000124EC
 * Original: 0x000124EC - 0x00012537 (75 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000124EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000124EC: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x000124F6u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000124F6: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x00012500u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00012500: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x0001250Au); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0001250A: ;
    PUSH32(esp, 0x22C104);
    PUSH32(esp, 0x00012514u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00012514: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012413(); return; } /* jl: less (signed <) */

loc_0001252F: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00012537(); return; /* fallthrough 0x00012537 */

}

/**
 * sub_00012517
 * Original: 0x00012517 - 0x00012537 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012517(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012517: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012413(); return; } /* jl: less (signed <) */

loc_0001252F: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x20);

    g_seh_ebp = ebp; sub_00012537(); return; /* fallthrough 0x00012537 */

}

/**
 * sub_00012537
 * Original: 0x00012537 - 0x00012554 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012537(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012537: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012666(); return; } /* jle: less or equal (signed <=) */

loc_0001254D: ;
    ebx = MEM32(ebx + 0x18);
    MEM32(esp + 0x28) = ebx;

    g_seh_ebp = ebp; sub_00012554(); return; /* fallthrough 0x00012554 */

}

/**
 * sub_00012554
 * Original: 0x00012554 - 0x00012569 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012554(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012554: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00012655(); return; } /* jbe: below or equal (unsigned <=) */

loc_00012562: ;
    SET_LO16(ebp, MEM16(ebp + ecx * 2));
    g_seh_ebp = ebp; sub_00012570(); return; /* tail jmp 0x00012570 */

}

/**
 * sub_00012570
 * Original: 0x00012570 - 0x00012655 (229 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012570(void)
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

loc_00012570: ;
    SET_LO16(edi, MEM16(edi + eax * 2));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012634; /* je: equal / zero */

loc_0001257D: ;
    eax = MEM32(esp + 0x2C);
    edx = ZX16(LO16(ebp));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax;
    ebx = ZX16(LO16(edi));
    edx = ebx;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012634; /* jp: parity */

loc_000125A5: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012634; /* jp: parity */

loc_000125B8: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012634; /* jp: parity */

loc_000125C7: ;
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000125E5; /* jp: parity */

loc_000125D6: ;
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00012634; /* jnp: not parity */

loc_000125E5: ;
    edx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000125FB; /* jbe: below or equal (unsigned <=) */

loc_000125EF: ;
    /* nop */

loc_000125F0: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000125FB; /* je: equal / zero */

loc_000125F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000125F0; /* jb: below (unsigned <) */

loc_000125FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012634; /* jne: not equal / not zero */

loc_000125FF: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012623; /* jbe: below or equal (unsigned <=) */

loc_00012609: ;
    /* nop */

loc_00012610: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM16(ecx + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax * 2), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012623; /* je: equal / zero */

loc_0001261A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012610; /* jb: below (unsigned <) */

loc_00012623: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012634; /* jne: not equal / not zero */

loc_0001262B: ;
    MEM32(esp + edx * 4 + 0x38) = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;

loc_00012634: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00012570; /* jb: below (unsigned <) */

loc_0001264D: ;
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_00012655(); return; /* fallthrough 0x00012655 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012655
 * Original: 0x00012655 - 0x00012666 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012655(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012655: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012554(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_00012666(); return; /* fallthrough 0x00012666 */

}

/**
 * sub_00012666
 * Original: 0x00012666 - 0x0001266A (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012666(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012666: ;
    MEM8(ebp + 1) = MEM8(ebp + 1) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0001266A(); return; /* fallthrough 0x0001266A */

}

/**
 * sub_0001266A
 * Original: 0x0001266A - 0x000126B4 (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001266A(void)
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

loc_0001266A: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000126B2; /* jle: less or equal (signed <=) */

loc_00012673: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = ZX16(MEM16(ebp + eax * 2));
    if (CMP_NE(_fa, _fb)) goto loc_00012682; /* jne: not equal / not zero */

loc_0001267C: ;
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00012682: ;
    edi = MEM32(esp + 0x34);
    ecx = eax + eax * 2;
    ecx = edi + ecx * 4;
    edi = MEM32(esp + 0x2C);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ecx);
    MEM32(edx) = edi;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012673; /* jl: less (signed <) */

loc_000126B2: ;
    RECOMP_UNIMPL("wbinvd", 0x000126B2u); /* TODO: wbinvd */

    g_seh_ebp = ebp; sub_000126B4(); return; /* fallthrough 0x000126B4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000126B4
 * Original: 0x000126B4 - 0x000126B5 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000126B4: ;
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_000126B5(); return; /* fallthrough 0x000126B5 */

}

/**
 * sub_000126B5
 * Original: 0x000126B5 - 0x000126BF (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126B5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000126B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000126C0
 * Original: 0x000126C0 - 0x00012744 (132 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000126C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000126D2u); RECOMP_ABI_CALL(0x00011F70u, sub_00011F70); /* call 0x00011F70 */

loc_000126D2: ;
    SET_LO16(eax, MEM16(esi + 2));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 6) = MEM16(esi + 6) + LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(esi + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012732; /* jge: greater or equal (signed >=) */

loc_000126E8: ;
    _fa = (uint32_t)(MEM16(edi * 2 + 0x347EB8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 2 + 0x347EB8), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012708; /* je: equal / zero */

loc_000126F2: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 5 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012708; /* jge: greater or equal (signed >=) */

loc_000126F8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFB (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012708; /* jle: less or equal (signed <=) */

loc_000126FE: ;
    MEM16(esi + 6) = LO16(edx);
    MEM16(esi + 2) = LO16(edx);
    goto loc_0001272E;

loc_00012708: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001270Eu); RECOMP_ABI_CALL(0x00011D40u, sub_00011D40); /* call 0x00011D40 */

loc_0001270E: ;
    SET_LO16(eax, MEM16(esi + 6));
    SET_LO16(ecx, MEM16(esi + 2));
    SET_LO16(edx, MEM16(esi + 4));
    SET_LO16(eax, (uint32_t)(0u - (uint32_t)(LO16(eax))));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    SET_LO16(ecx, (uint32_t)(0u - (uint32_t)(LO16(ecx))));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 6) = LO16(eax);
    MEM16(esi + 2) = LO16(ecx);
    SET_LO16(edx, (uint32_t)(0u - (uint32_t)(LO16(edx))));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */

loc_0001272E: ;
    MEM16(esi + 4) = LO16(edx);

loc_00012732: ;
    eax = 0xFF;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), LO16(eax) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012741; /* jle: less or equal (signed <=) */

loc_0001273D: ;
    MEM16(esi + 6) = LO16(eax);

loc_00012741: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012750
 * Original: 0x00012750 - 0x0001281E (206 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012750(void)
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

loc_00012750: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi * 4 + 0x300048);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012763u); RECOMP_ABI_CALL(0x00030C20u, sub_00030C20); /* call 0x00030C20 */

loc_00012763: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001281B; /* je: equal / zero */

loc_0001276E: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001281B; /* je: equal / zero */

loc_00012779: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX16(MEM16(eax + 0x30D9C8));
    edx = edi;
    edx = edx << 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000127B8; /* je: equal / zero */

loc_00012790: ;
    eax = edi;
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000127B8; /* je: equal / zero */

loc_0001279C: ;
    edx = eax + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000127B8; /* je: equal / zero */

loc_000127A3: ;
    edx = eax + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000127B8; /* je: equal / zero */

loc_000127AA: ;
    edx = eax + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000127B8; /* je: equal / zero */

loc_000127B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000127D6; /* jne: not equal / not zero */

loc_000127B8: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000127DE;

loc_000127D6: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x20);

loc_000127DE: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000127EAu); RECOMP_ABI_CALL(0x00011E30u, sub_00011E30); /* call 0x00011E30 */

loc_000127EA: ;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x00012808u); RECOMP_ABI_CALL(0x00011BB0u, sub_00011BB0); /* call 0x00011BB0 */

loc_00012808: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001280Fu); RECOMP_ABI_CALL(0x000126C0u, sub_000126C0); /* call 0x000126C0 */

loc_0001280F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012816u); RECOMP_ABI_CALL(0x00012080u, sub_00012080); /* call 0x00012080 */

loc_00012816: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001281B: ;
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
 * sub_00012820
 * Original: 0x00012820 - 0x000128D2 (178 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012820(void)
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

loc_00012820: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 2 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0001285F; /* jne: not equal / not zero */

loc_0001282E: ;
    eax = ZX8(MEM8(esp + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(eax, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x8C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x8C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012851; /* je: equal / zero */

loc_00012840: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x8D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x8D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012851; /* je: equal / zero */

loc_00012844: ;
    eax = ZX8(MEM8(esp + 0x1C));
    ecx = MEM32(ebx + 0x30);
    edi = MEM32(ecx + eax * 4);
    goto loc_0001286A;

loc_00012851: ;
    eax = ZX8(MEM8(esp + 0x1C));
    edi = MEM32(eax * 4 + 0x2BA6A8);
    goto loc_0001286A;

loc_0001285F: ;
    eax = ZX8(MEM8(esp + 0x1C));
    edx = MEM32(ebx + 0x30);
    edi = MEM32(edx + eax * 4);

loc_0001286A: ;
    ecx = MEM32(ebx + 0x40);
    eax = eax + eax * 2;
    fp_push(MEMF(ecx + eax * 4 + 8)); /* fld float */
    edx = MEM32(ecx + eax * 4 + 4);
    esi = ecx + eax * 4;
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001288Au); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_0001288A: ;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012892u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_00012892: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3013C0;
    PUSH32(esp, 0x0001289Fu); RECOMP_ABI_CALL(0x0006ACC0u, sub_0006ACC0); /* call 0x0006ACC0 */

loc_0001289F: ;
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, 0x000128A7u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000128A7: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    edx = MEM32(esi);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000128BCu); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_000128BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000128C2u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_000128C2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = 0x301D80;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0006ACC0(); return; /* tail jmp 0x0006ACC0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000128E0
 * Original: 0x000128E0 - 0x000128FC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000128E0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000128FB; /* jle: less or equal (signed <=) */

loc_000128F6: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000128FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012900
 * Original: 0x00012900 - 0x00012A14 (276 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012900(void)
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

loc_00012900: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012914u); RECOMP_ABI_CALL(0x000128E0u, sub_000128E0); /* call 0x000128E0 */

loc_00012914: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2BA640)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2ba640] */
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001295E; /* jp: parity */

loc_00012930: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012932: ;
    fp_push(MEMF(edx * 4 + 0x2BA624)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001295E; /* je: equal / zero */

loc_00012944: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(ecx));
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2BA640)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2ba640] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00012932; /* jnp: not parity */

loc_0001295E: ;
    edx = ZX8(MEM8(esp + 0x24));
    ecx = ZX8(LO8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0xC);
    eax = ecx + eax * 2;
    SET_LO8(ecx, MEM8(esp + 0x28));
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 2 (8-bit) */
    MEM32(esi) = ecx;
    edx = ecx;
    ecx = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_000129B2; /* jne: not equal / not zero */

loc_00012995: ;
    eax = ZX8(MEM8(esp + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(eax, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x8C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x8C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129AB; /* je: equal / zero */

loc_000129A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x8D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x8D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000129B2; /* jne: not equal / not zero */

loc_000129AB: ;
    eax = 0x5C71;
    goto loc_000129B5;

loc_000129B2: ;
    eax = MEM32(ecx + 0x24);

loc_000129B5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000129BE; /* jge: greater or equal (signed >=) */

loc_000129B9: ;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = ebx;

loc_000129BE: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000129CA; /* jle: less or equal (signed <=) */

loc_000129C5: ;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = ebx;

loc_000129CA: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A10; /* je: equal / zero */

loc_000129D2: ;
    edi = MEM32(esi);
    eax = SX8(LO8(eax));
    edx = eax + eax * 8;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx + -204);
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AAA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000129FE; /* jle: less or equal (signed <=) */

loc_000129EF: ;
    _fb = (uint32_t)(0xFFFFD556u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFD556u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000129FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD556u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD556u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012A10; /* jge: greater or equal (signed >=) */

loc_00012A05: ;
    _fb = (uint32_t)(0x2AAA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2AAA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = ebx;

loc_00012A10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012A20
 * Original: 0x00012A20 - 0x00012AC5 (165 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A20: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(0x3013B4);
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xE38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012A53; /* jle: less or equal (signed <=) */

loc_00012A4A: ;
    edx = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;

loc_00012A53: ;
    edx = MEM32(0x3013B0);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x3013B8));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012A76; /* jle: less or equal (signed <=) */

loc_00012A71: ;
    eax = 0x8000;

loc_00012A76: ;
    _fb = (uint32_t)(MEM32(0x301D70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x301D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xE38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xE38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012A99; /* jle: less or equal (signed <=) */

loc_00012A90: ;
    edx = 0x10000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;

loc_00012A99: ;
    edx = MEM32(0x301D6C);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x301D74));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012ABE; /* jle: less or equal (signed <=) */

loc_00012AB9: ;
    ecx = 0x8000;

loc_00012ABE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012AC4; /* jge: greater or equal (signed >=) */

loc_00012AC2: ;
    eax = ecx;

loc_00012AC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012AD0
 * Original: 0x00012AD0 - 0x00012B69 (153 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AD0(void)
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

loc_00012AD0: ;
    ecx = ZX8(MEM8(esp + 4));
    fp_push(MEMF(0x22C144)); /* fld float */
    fp_push(MEMF(0x30F918)); /* fld float */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30D9A4)); /* fadd dword ptr [eax + 0x30d9a4] */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30D9AC)); /* fadd dword ptr [eax + 0x30d9ac] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00012B46; /* jnp: not parity */

loc_00012B15: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30F918)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30f918] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012B48; /* je: equal / zero */

loc_00012B22: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00012B48; /* jnp: not parity */

loc_00012B33: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30D8E4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30d8e4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012B48; /* je: equal / zero */

loc_00012B44: ;
    goto loc_00012B50;

loc_00012B46: ;
    fp_pop(); /* fstp st(0) */

loc_00012B48: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C140)); /* fld float */

loc_00012B50: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30C274)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30c274] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012B66; /* jne: not equal / not zero */

loc_00012B63: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00012B66: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012B70
 * Original: 0x00012B70 - 0x00012BBB (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012B70: ;
    ecx = ZX8(MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = MEM32(ecx * 8 + 0x349EF8);
    edx = ecx * 8 + 0x300A40;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012BA0; /* jle: less or equal (signed <=) */

loc_00012B97: ;
    edi = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;

loc_00012BA0: ;
    SET_LO8(ecx, MEM8(ecx + 0x301D64));
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx) = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(0x301400) = eax;
    MEM32(0x301D68) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012BC0
 * Original: 0x00012BC0 - 0x00012BF9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00012BC0(void)
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

loc_00012BC0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00012BCC; /* jge: greater or equal (signed >=) */

loc_00012BCA: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00012BCC: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00012BD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012BE0; /* je: equal / zero */

loc_00012BDA: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00012BE0: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BEC; /* je: equal / zero */

loc_00012BE6: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_00012BD6;

loc_00012BEC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012BF8; /* jge: greater or equal (signed >=) */

loc_00012BF2: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */

loc_00012BF8: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012C00
 * Original: 0x00012C00 - 0x00012C01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C00(void)
{

loc_00012C00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012C10
 * Original: 0x00012C10 - 0x00012C1C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012C10: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012C20
 * Original: 0x00012C20 - 0x00012C21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C20(void)
{

loc_00012C20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012C30
 * Original: 0x00012C30 - 0x00012C37 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012C30: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012C40
 * Original: 0x00012C40 - 0x00012C53 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012C40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012C4Fu); RECOMP_ABI_CALL(0x00012BC0u, sub_00012BC0); /* call 0x00012BC0 */

loc_00012C4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012C60
 * Original: 0x00012C60 - 0x00012C67 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012C60: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012C70
 * Original: 0x00012C70 - 0x00012C8F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012C70: ;
    fp_push(MEMF(0x902830)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x902834);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x902838);
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012C90
 * Original: 0x00012C90 - 0x00012F40 (688 bytes, 203 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C90(void)
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

loc_00012C90: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    ecx = ZX8(MEM8(esp + 0xD8));
    MEM32(esp + 0xD0) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(edx, MEM8(eax + 0x30D9A1));
    SET_LO8(eax, MEM8(eax + 0x30D9A2));
    PUSH32(esp, ebx);
    MEM32(0x300A30) = 0x300A50;
    MEM32(0x300A34) = 0x301408;
    PUSH32(esp, esi);
    esi = MEM32(ecx * 4 + 0x300A30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 0x2BA648;
    MEM32(esi + 0x954) = ebx;
    MEM32(esi + 0x958) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esp + 0xC) = edi;
    MEM8(esi + 1) = LO8(ebx);

loc_00012CF6: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012D01; /* jne: not equal / not zero */

loc_00012CFC: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D0F; /* je: equal / zero */

loc_00012D01: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00013055(); return; } /* je: equal / zero */

loc_00012D0A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00012CF6;

loc_00012D0F: ;
    eax = ZX8(MEM8(esp + 0xE4));
    edx = MEM32(esp + 0xE8);
    ecx = MEM32(edx);
    MEM32(esp + 0xC) = edi;
    edi = eax;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edi * 4 + 0x30D020);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx * 4 + 0x31C060);
    MEM32(esi + 0x954) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + ecx * 2;
    eax = edx * 4 + 0x31E060;
    PUSH32(esp, ebp);
    MEM32(esi + 0x958) = eax;
    eax = MEM32(esi + 0x954);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012D66u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00012D66: ;
    MEM32(0x301D78) = eax;
    ecx = MEM32(esi + 0x958);
    edx = MEM32(ecx + 4);
    edi = MEM32(edi + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM16(esp + 0x18) = 0x8000;
    if (CMP_BE(_fa, _fb)) goto loc_00012DC3; /* jbe: below or equal (unsigned <=) */

loc_00012D8A: ;
    /* nop */

loc_00012D90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012DB0; /* jle: less or equal (signed <=) */

loc_00012D96: ;
    SET_LO16(edx, MEM16(edx + ecx * 2));
    /* nop */

loc_00012DA0: ;
    _fa = (uint32_t)(MEM16(esp + eax * 2 + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + eax * 2 + 0x18), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DAC; /* je: equal / zero */

loc_00012DA7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012DA0; /* jl: less (signed <) */

loc_00012DAC: ;
    edx = MEM32(esp + 0x14);

loc_00012DB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012DBE; /* jne: not equal / not zero */

loc_00012DB4: ;
    SET_LO16(eax, MEM16(edx + ecx * 2));
    MEM16(esp + ebp * 2 + 0x18) = LO16(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00012DBE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012D90; /* jb: below (unsigned <) */

loc_00012DC3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012E0B; /* jbe: below or equal (unsigned <=) */

loc_00012DC9: ;
    /* nop */

loc_00012DD0: ;
    ecx = ZX16(MEM16(esp + edi * 2 + 0x18));
    eax = MEM32(0x301D78);
    edx = ecx;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x22C148);
    PUSH32(esp, 0x00012E03u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00012E03: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012DD0; /* jb: below (unsigned <) */

loc_00012E0B: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    MEM8(esi + 1) = 1;
    MEM8(esi) = LO8(ebx);
    SET_LO8(edx, MEM8(edi + 2));
    ecx = ZX8(MEM8(esp + 0xE8));
    MEM8(ecx + 0x301404) = LO8(edx);
    edx = edi;
    SET_LO8(edx, MEM8(edx + 3));
    MEM8(ecx + 0x300A38) = LO8(edx);
    edx = edi;
    SET_LO8(edx, MEM8(edx + 4));
    MEM8(ecx + 0x301D64) = LO8(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + 2) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esi + 3) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(esi + 7) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 6));
    MEM8(esi + 8) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(esi + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 7));
    MEM8(esi + 9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xF));
    MEM8(esi + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(esi + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x10));
    MEM8(esi + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0xB) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x11));
    MEM8(esi + 0x13) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xA));
    MEM8(esi + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x12));
    MEM8(esi + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xB));
    ebp = esi + 8;
    MEM8(esi + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x13));
    MEM8(esi + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xC));
    MEM8(esi + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(esi + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xD));
    MEM8(esi + 0xF) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x15));
    MEM8(esi + 0x17) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(esi + 5) = LO8(edx);
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(esi + 4) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(esi + 6) = LO8(edx);
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(esi + 0x30) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(esi + 0x34) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(esi + 0x3C) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(esi + 0x40) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(esi + 0x38) = edx;
    edx = ZX8(MEM8(esi + 3));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3495C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3495C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ecx;
    ecx = MEM32(eax + 0x44);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(eax + 0x48);
    SET_LO8(ecx, MEM8(esi + 7));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM32(esi + 0x50) = edx;
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001300E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00012F39: ;
    ecx = esi + 0x5C;
    MEM32(esp + 0x10) = ecx;

    g_seh_ebp = ebp; sub_00012F40(); return; /* fallthrough 0x00012F40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012F40
 * Original: 0x00012F40 - 0x00012F60 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012F40: ;
    SET_LO8(ecx, MEM8(esi + eax + 8));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00012FF4(); return; } /* jbe: below or equal (unsigned <=) */

loc_00012F4E: ;
    eax = eax * 4 + 1;
    edi = ZX16(LO16(eax));
    eax = MEM32(esp + 0x10);
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi;

    g_seh_ebp = ebp; sub_00012F60(); return; /* fallthrough 0x00012F60 */

}

/**
 * sub_00012F60
 * Original: 0x00012F60 - 0x0001300E (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012F60: ;
    MEM8(eax + 0x48) = LO8(ebx);
    MEM32(eax + 4) = ebx;
    ecx = 0x8000;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    ebx = eax + 8;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x14) = ecx;
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = ecx;
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x24) = ecx;
    MEM32(ebx + 0x28) = ecx;
    MEM32(ebx + 0x2C) = ecx;
    MEM32(ebx + 0x30) = ecx;
    MEM32(ebx + 0x34) = ecx;
    MEM32(ebx + 0x38) = ecx;
    MEM32(ebx + 0x3C) = ecx;
    ecx = MEM32(esi + 0x34);
    ecx = ZX16(MEM16(edi + ecx));
    ebx = MEM32(0x301D78);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + ebx);
    MEM32(eax + 0x4C) = ebx;
    ebx = MEM32(0x301D78);
    ebx = MEM32(ecx + ebx + 4);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x301D78);
    ecx = MEM32(ecx + ebx + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x54) = ecx;
    MEM8(eax + 0x48) = LO8(ebx);
    ecx = ZX8(MEM8(ebp));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012F60; /* jl: less (signed <) */

loc_00012FF0: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x120;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 7));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012F40(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0001300E(); return; /* fallthrough 0x0001300E */

}

/**
 * sub_00012FF4
 * Original: 0x00012FF4 - 0x0001300E (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012FF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012FF4: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x120;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 7));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00012F40(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0001300E(); return; /* fallthrough 0x0001300E */

}

/**
 * sub_0001300E
 * Original: 0x0001300E - 0x00013055 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001300E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001300E: ;
    eax = ZX8(MEM8(esp + 0xE8));
    ecx = MEM32(eax * 8 + 0x349EF4);
    edx = MEM32(eax * 8 + 0x349EF8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x301400) = ebx;
    MEM32(0x301D68) = ebx;
    MEM32(eax * 8 + 0x300A3C) = ecx;
    MEM32(eax * 8 + 0x300A40) = edx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xD0);
    PUSH32(esp, 0x0001304Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0001304E: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013055
 * Original: 0x00013055 - 0x00013070 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013055(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013055: ;
    ecx = MEM32(esp + 0xDC);
    MEM32(esp + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00013068u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00013068: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013070
 * Original: 0x00013070 - 0x000130C6 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013070(void)
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

loc_00013070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000130A1u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_000130A1: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    fp_push(MEMF(esi)); /* fld float */
    edx = MEM32(esi + 8);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000130BBu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_000130BB: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000130D0
 * Original: 0x000130D0 - 0x0001321A (330 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000130D0(void)
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

loc_000130D0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(esp + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    fp_push(MEMF(eax + 0x30C2AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30C2A0)); /* fsub dword ptr [eax + 0x30c2a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax + 0x30C2AC;
    edx = eax + 0x30C2A0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = eax + 0x30C2F4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    eax = eax + 0x30C2E8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + -4)); /* fsub dword ptr [eax - 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00013147u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00013147: ;
    esi = MEM32(esp + 0x38);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00013153u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_00013153: ;
    PUSH32(esp, 0x00013158u); RECOMP_ABI_CALL(0x0006B1B0u, sub_0006B1B0); /* call 0x0006B1B0 */

loc_00013158: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013171u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00013171: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001318Au); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_0001318A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    PUSH32(esp, 0x00013197u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00013197: ;
    PUSH32(esp, 0x3013B4);
    edx = esp + 0x20;
    PUSH32(esp, 0x3013B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000131ABu); RECOMP_ABI_CALL(0x00013070u, sub_00013070); /* call 0x00013070 */

loc_000131AB: ;
    ecx = MEM32(0x3013B0);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(0x3013B8) = eax;
    eax = 0x8000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3013B0) = eax;
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x301D70);
    ecx = esp + 0x38;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x301D6C);
    PUSH32(esp, ecx);
    MEM32(0x3013B0) = eax;
    PUSH32(esp, 0x000131E8u); RECOMP_ABI_CALL(0x00013070u, sub_00013070); /* call 0x00013070 */

loc_000131E8: ;
    ecx = MEM32(0x301D6C);
    edx = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0x8000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x301D6C) = eax;
    MEM32(0x301D74) = edx;
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x301D6C) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013220
 * Original: 0x00013220 - 0x000133B7 (407 bytes, 108 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013220(void)
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

loc_00013220: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(esp + 0x20));
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x24);
    ecx = ecx + eax * 4;
    SET_LO8(eax, MEM8(eax + 0x300A38));
    PUSH32(esp, esi);
    esi = ecx + ecx * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esi + 0x349F08);
    ecx = MEM32(esi + 0x349F0C);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001326E; /* je: equal / zero */

loc_00013255: ;
    edx = ZX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x00013263u); RECOMP_ABI_CALL(0x00012BC0u, sub_00012BC0); /* call 0x00012BC0 */

loc_00013263: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001326E: ;
    eax = MEM32(esi + 0x349F10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0001327Fu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001327F: ;
    ecx = 0x301D80;
    PUSH32(esp, 0x00013289u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_00013289: ;
    PUSH32(esp, 0x0001328Eu); RECOMP_ABI_CALL(0x0006B1B0u, sub_0006B1B0); /* call 0x0006B1B0 */

loc_0001328E: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esi = MEM32(esp + 0x30);
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000132BFu); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_000132BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    PUSH32(esp, 0x000132CCu); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_000132CC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000132E7u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_000132E7: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00013307; /* je: equal / zero */

loc_000132F2: ;
    edx = MEM32(0x301400);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0001331D;

loc_00013307: ;
    eax = MEM32(0x301400);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */

loc_0001331D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push((double)SMEM32(0x301D68)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013355u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00013355: ;
    edx = MEM32(esp + 0x38);
    ecx = 0xFFFF8000u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00013394u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_00013394: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x0001339Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001339F: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000133C0
 * Original: 0x000133C0 - 0x0001363F (639 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133C0(void)
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

loc_000133C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000133E0u); RECOMP_ABI_CALL(0x00012820u, sub_00012820); /* call 0x00012820 */

loc_000133E0: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000133EAu); RECOMP_ABI_CALL(0x00012AD0u, sub_00012AD0); /* call 0x00012AD0 */

loc_000133EA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001341B; /* je: equal / zero */

loc_000133F1: ;
    edi = MEM32(esp + 0x34);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM8(esi) = 1;
    PUSH32(esp, 0x00013413u); RECOMP_ABI_CALL(0x00012900u, sub_00012900); /* call 0x00012900 */

loc_00013413: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000134CB;

loc_0001341B: ;
    edi = ZX8(LO8(edx));
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi) = 0;
    _fa = (uint32_t)(MEM32(edi + 0x348640)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x348640), 0x3F800000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013489; /* je: equal / zero */

loc_00013430: ;
    ecx = MEM32(esp + 0x28);
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x349F08) = edi;
    MEM32(eax + 0x349F0C) = edi;
    MEM32(eax + 0x349F10) = edi;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x301400) = 0x6000;
    MEM32(0x301D68) = edi;
    PUSH32(esp, 0x00013476u); RECOMP_ABI_CALL(0x00013220u, sub_00013220); /* call 0x00013220 */

loc_00013476: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0xFF);
    goto loc_000134B6;

loc_00013489: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000134A0u); RECOMP_ABI_CALL(0x00013220u, sub_00013220); /* call 0x00013220 */

loc_000134A0: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 5));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_000134B6: ;
    edi = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000134C8u); RECOMP_ABI_CALL(0x00012900u, sub_00012900); /* call 0x00012900 */

loc_000134C8: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000134CB: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x50);
    edx = MEM32(edi);
    MEM32(edi + ecx * 4 + 0x10) = edx;
    SET_LO8(eax, MEM8(edi + 0x50));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = 0x3013C0;
    MEM8(edi + 0x50) = LO8(eax);
    PUSH32(esp, 0x000134E9u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000134E9: ;
    ecx = SX8(LO8(ebx));
    SET_LO8(eax, MEM8(ecx + esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00013513; /* ja: above (unsigned >) */

loc_000134F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000134FCu); RECOMP_ABI_CALL(0x00012A20u, sub_00012A20); /* call 0x00012A20 */

loc_000134FC: ;
    MEM32(0x3013AC) = eax;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00013513; /* jle: less or equal (signed <=) */

loc_0001350A: ;
    MEM32(edi) = eax;
    MEM32(edi + 0xC) = 0;

loc_00013513: ;
    ecx = MEM32(esi + 0x4C);
    ebp = MEM32(edi);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, 3);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = SX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001352E; /* jge: greater or equal (signed >=) */

loc_0001352C: ;
    ebp = ecx;

loc_0001352E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00013537; /* jle: less or equal (signed <=) */

loc_00013535: ;
    ebp = eax;

loc_00013537: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax);
    edx = ecx + ebp + -32768;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001354Fu); RECOMP_ABI_CALL(0x0006C050u, sub_0006C050); /* call 0x0006C050 */

loc_0001354F: ;
    edx = MEM32(esi + 0x38);
    SET_LO16(ebx, SX8(LO8(ebx)));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = ebx * 4;
    ecx = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    fp_push(MEMF(edx + ecx * 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00013575u); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_00013575: ;
    fp_push(MEMF(0x902830)); /* fld float */
    eax = MEM32(0x902838);
    fp_push(MEMF(0x902834)); /* fld float */
    MEM32(esp + 0x24) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    eax = MEM32(esi + 0x34);
    esi = MEM32(0x301D78);
    ecx = ebx * 4 + 1;
    edx = ZX16(LO16(ecx));
    edx = ZX16(MEM16(eax + edx * 2));
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    eax = edx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    MEMF(eax + esi) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(0x301D78);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    ecx = MEM32(0x301D78);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_00013627; /* jbe: below or equal (unsigned <=) */

loc_000135F5: ;
    SET_LO16(ecx, ZX8(HI8(edx)));
    edx = MEM32(0x301D78);
    esi = MEM32(eax + edx);
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + edx) = esi;
    edx = MEM32(0x301D78);
    esi = MEM32(eax + edx + 4);
    MEM32(ecx + edx + 4) = esi;
    edx = MEM32(0x301D78);
    eax = MEM32(eax + edx + 8);
    MEM32(ecx + edx + 8) = eax;

loc_00013627: ;
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 4) = ecx;
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
 * sub_00013640
 * Original: 0x00013640 - 0x0001382E (494 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013640(void)
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

loc_00013640: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM8(esp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    SET_LO8(eax, MEM8(esi + 0x50));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    SET_LO8(ebx, MEM8(edi + 4));
    SET_LO8(ecx, LO8(eax));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ebx = (uint32_t)(int32_t)SMEM8(esp + 0x28);
    eax = SX8(LO8(eax));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + ecx * 4 + 0x10);
    MEM32(esi) = ecx;
    MEM32(esi + eax * 4 + 0x10) = ecx;
    ecx = ZX8(MEM8(ebx + edi + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00013694; /* jg: greater (signed >) */

loc_00013682: ;
    eax = MEM32(0x3013AC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00013694; /* jle: less or equal (signed <=) */

loc_0001368B: ;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = 0;

loc_00013694: ;
    eax = ZX8(MEM8(esp + 0x20));
    SET_LO8(ecx, MEM8(eax + 0x301404));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    edx = MEM32(esi);
    if (CMP_AE(_fa, _fb)) goto loc_000136AC; /* jae: above or equal (unsigned >=) */

loc_000136A6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000136AC: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    SET_LO8(ecx, 3);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(MEM8(esp + 0x2C)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = MEM32(edi + 0x4C);
    eax = SX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000136CB; /* jge: greater or equal (signed >=) */

loc_000136C9: ;
    edx = ecx;

loc_000136CB: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000136D4; /* jle: less or equal (signed <=) */

loc_000136D2: ;
    edx = eax;

loc_000136D4: ;
    MEM32(esi + 4) = edx;
    SET_LO8(eax, MEM8(edi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013706; /* je: equal / zero */

loc_000136DE: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00013706; /* jle: less or equal (signed <=) */

loc_000136E6: ;
    eax = ebp + ebx * 2;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edi + -200);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_00013706; /* js: sign (negative) */

loc_000136FD: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x20) = eax;
    goto loc_0001370E;

loc_00013706: ;
    MEM32(esp + 0x20) = 0;

loc_0001370E: ;
    ecx = MEM32(esp + 0x38);
    ebx = MEM32(ecx + 4);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 8) = eax;
    edx = MEM32(edi + 0x3C);
    ecx = MEM32(edx + ebp * 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001372Bu); RECOMP_ABI_CALL(0x0006C050u, sub_0006C050); /* call 0x0006C050 */

loc_0001372B: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esp + 0x2C));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esp + 0x30));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ebp = eax + edx * 4;
    edx = MEM32(edi + 0x38);
    ecx = ZX16(LO16(ebp));
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(edx + ecx * 4) - fp_top()); /* fsubr dword ptr [edx + ecx*4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001375Fu); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_0001375F: ;
    fp_push(MEMF(0x902830)); /* fld float */
    edx = MEM32(edi + 0x34);
    fp_push(MEMF(0x902834)); /* fld float */
    eax = MEM32(0x902838);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ebx = MEM32(0x301D78);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ebp));
    edx = ZX16(MEM16(edx + ecx * 2));
    edi = esi + 0x54;
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    eax = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + ebx) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(0x301D78);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    ecx = MEM32(0x301D78);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(eax + ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_0001380B; /* jbe: below or equal (unsigned <=) */

loc_000137D9: ;
    SET_LO16(ecx, ZX8(HI8(edx)));
    edx = MEM32(0x301D78);
    ebx = MEM32(eax + edx);
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + edx) = ebx;
    edx = MEM32(0x301D78);
    ebx = MEM32(eax + edx + 4);
    MEM32(ecx + edx + 4) = ebx;
    edx = MEM32(0x301D78);
    eax = MEM32(eax + edx + 8);
    MEM32(ecx + edx + 8) = eax;

loc_0001380B: ;
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 4) = ecx;
    SET_LO8(edx, MEM8(esi + 0x50));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x50) = LO8(edx);
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
 * sub_00013830
 * Original: 0x00013830 - 0x00013915 (229 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013830(void)
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

loc_00013830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(LO8(ebx));
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A1));
    ebp = edi * 4;
    esi = MEM32(ebp + 0x300A30);
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x18) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00013AC8(); return; } /* je: equal / zero */

loc_00013865: ;
    eax = MEM32(esi + 0x954);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013873u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00013873: ;
    edx = (uint32_t)(int32_t)SMEM8(0x3487BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(0x301D78) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000139CA(); return; } /* jne: not equal / not zero */

loc_00013887: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + 0x349E64);
    ecx = MEM32(eax + 0x349E60);
    fp_push(MEMF(eax + 0x349E60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x349FF8)); /* fsub dword ptr [eax + 0x349ff8] */
    MEM32(eax + 0x349FF8) = ecx;
    ecx = MEM32(eax + 0x349E68);
    MEMF(eax + 0x349F08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x349E64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x349FFC)); /* fsub dword ptr [eax + 0x349ffc] */
    MEM32(eax + 0x349FFC) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEMF(eax + 0x349F0C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(eax + 0x349E68)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34A000)); /* fsub dword ptr [eax + 0x34a000] */
    MEM32(eax + 0x34A000) = ecx;
    MEMF(eax + 0x349F10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000138FAu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_000138FA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00013900u); RECOMP_ABI_CALL(0x00012B70u, sub_00012B70); /* call 0x00012B70 */

loc_00013900: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x10) = 0;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00013AC6(); return; } /* jbe: below or equal (unsigned <=) */

loc_00013913: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00013915(); return; /* fallthrough 0x00013915 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013915
 * Original: 0x00013915 - 0x00013940 (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013915(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013915: ;
    eax = ebx + ebx * 8;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + esi + 0x54;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edi;
    PUSH32(esp, 0x00013928u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00013928: ;
    PUSH32(esp, 0x0001392Du); RECOMP_ABI_CALL(0x0006ACA0u, sub_0006ACA0); /* call 0x0006ACA0 */

loc_0001392D: ;
    SET_LO8(eax, MEM8(ebx + esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000139A2(); return; } /* jbe: below or equal (unsigned <=) */

loc_0001393A: ;
    /* nop */

    g_seh_ebp = ebp; sub_00013940(); return; /* fallthrough 0x00013940 */

}

/**
 * sub_00013940
 * Original: 0x00013940 - 0x000139A2 (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013940: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013968; /* jne: not equal / not zero */

loc_00013948: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013963u); RECOMP_ABI_CALL(0x000133C0u, sub_000133C0); /* call 0x000133C0 */

loc_00013963: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013987;

loc_00013968: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00013984u); RECOMP_ABI_CALL(0x00013640u, sub_00013640); /* call 0x00013640 */

loc_00013984: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00013987: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    ecx = ZX8(MEM8(ebx + esi + 8));
    ebp = edi;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = SX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_00013940; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_000139A2(); return; /* fallthrough 0x000139A2 */

}

/**
 * sub_000139A2
 * Original: 0x000139A2 - 0x000139CA (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000139A2: ;
    ecx = 1;
    PUSH32(esp, 0x000139ACu); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_000139AC: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ebx = SX8(LO8(eax));
    MEM8(esp + 0x10) = LO8(eax);
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00013915(); return; } /* jl: less (signed <) */

loc_000139C5: ;
    g_seh_ebp = ebp; sub_00013AC6(); return; /* tail jmp 0x00013AC6 */

}

/**
 * sub_000139CA
 * Original: 0x000139CA - 0x000139E1 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000139CA: ;
    SET_LO8(eax, MEM8(esi + 7));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00013AC6(); return; } /* jbe: below or equal (unsigned <=) */

loc_000139DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;

    g_seh_ebp = ebp; sub_000139E1(); return; /* fallthrough 0x000139E1 */

}

/**
 * sub_000139E1
 * Original: 0x000139E1 - 0x00013A07 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000139E1: ;
    ecx = eax + eax * 8;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + esi + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 8), LO8(ebx) (8-bit) */
    ecx = ecx + esi + 0x54;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00013AAD(); return; } /* jbe: below or equal (unsigned <=) */

loc_000139F7: ;
    SET_LO16(eax, SX8(LO8(edx)));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = eax;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013A10(); return; /* tail jmp 0x00013A10 */

}

/**
 * sub_00013A07
 * Original: 0x00013A07 - 0x00013AAD (166 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013A07: ;
    eax = MEM32(esp + 0x18);
    goto loc_00013A10;

    /* nop */

loc_00013A10: ;
    SET_LO16(edx, SX8(LO8(ebx)));
    ebp = MEM32(0x301D78);
    eax = edx + eax + 1;
    edx = ZX16(LO16(eax));
    eax = MEM32(esi + 0x34);
    SET_LO16(eax, MEM16(eax + edx * 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(eax));
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;
    SET_LO16(edx, ZX8(HI8(eax)));
    eax = ZX16(LO16(edi));
    edi = MEM32(ecx + -4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(eax + ebp) = edi;
    edi = MEM32(ecx);
    ebp = MEM32(0x301D78);
    MEM32(eax + ebp + 4) = edi;
    edi = MEM32(ecx + 4);
    ebp = MEM32(0x301D78);
    MEM32(eax + ebp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A90; /* je: equal / zero */

loc_00013A62: ;
    edi = MEM32(0x301D78);
    ebp = MEM32(eax + edi);
    edx = ZX16(LO16(edx));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + edi) = ebp;
    edi = MEM32(0x301D78);
    ebp = MEM32(eax + edi + 4);
    MEM32(edx + edi + 4) = ebp;
    edi = MEM32(0x301D78);
    eax = MEM32(eax + edi + 8);
    MEM32(edx + edi + 8) = eax;

loc_00013A90: ;
    edx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(edx + esi + 8));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = SX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013A07; /* jl: less (signed <) */

loc_00013AA9: ;
    SET_LO8(edx, MEM8(esp + 0x10));

    g_seh_ebp = ebp; sub_00013AAD(); return; /* fallthrough 0x00013AAD */

}

/**
 * sub_00013A10
 * Original: 0x00013A10 - 0x00013AAD (157 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013A10: ;
    SET_LO16(edx, SX8(LO8(ebx)));
    ebp = MEM32(0x301D78);
    eax = edx + eax + 1;
    edx = ZX16(LO16(eax));
    eax = MEM32(esi + 0x34);
    SET_LO16(eax, MEM16(eax + edx * 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(eax));
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;
    SET_LO16(edx, ZX8(HI8(eax)));
    eax = ZX16(LO16(edi));
    edi = MEM32(ecx + -4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(eax + ebp) = edi;
    edi = MEM32(ecx);
    ebp = MEM32(0x301D78);
    MEM32(eax + ebp + 4) = edi;
    edi = MEM32(ecx + 4);
    ebp = MEM32(0x301D78);
    MEM32(eax + ebp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A90; /* je: equal / zero */

loc_00013A62: ;
    edi = MEM32(0x301D78);
    ebp = MEM32(eax + edi);
    edx = ZX16(LO16(edx));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + edi) = ebp;
    edi = MEM32(0x301D78);
    ebp = MEM32(eax + edi + 4);
    MEM32(edx + edi + 4) = ebp;
    edi = MEM32(0x301D78);
    eax = MEM32(eax + edi + 8);
    MEM32(edx + edi + 8) = eax;

loc_00013A90: ;
    edx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(edx + esi + 8));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = SX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00013A07(); return; } /* jl: less (signed <) */

loc_00013AA9: ;
    SET_LO8(edx, MEM8(esp + 0x10));

    g_seh_ebp = ebp; sub_00013AAD(); return; /* fallthrough 0x00013AAD */

}

/**
 * sub_00013AAD
 * Original: 0x00013AAD - 0x00013AC8 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013AAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013AAD: ;
    ecx = ZX8(MEM8(esi + 7));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = SX8(LO8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000139E1(); return; } /* jl: less (signed <) */

loc_00013AC6: ;
    RECOMP_UNIMPL("wbinvd", 0x00013AC6u); /* TODO: wbinvd */

    g_seh_ebp = ebp; sub_00013AC8(); return; /* fallthrough 0x00013AC8 */

}

/**
 * sub_00013AC6
 * Original: 0x00013AC6 - 0x00013AC8 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013AC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013AC6: ;
    RECOMP_UNIMPL("wbinvd", 0x00013AC6u); /* TODO: wbinvd */

    g_seh_ebp = ebp; sub_00013AC8(); return; /* fallthrough 0x00013AC8 */

}

/**
 * sub_00013AC8
 * Original: 0x00013AC8 - 0x00013AD0 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013AC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013AC8: ;
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
 * sub_00013AE0
 * Original: 0x00013AE0 - 0x00013AFE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013AE0: ;
    _fa = (uint32_t)(MEM8(eax + edx * 4 + 0x301F88)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 4 + 0x301F88), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013AFB; /* je: equal / zero */

loc_00013AE9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013AE0; /* jl: less (signed <) */

loc_00013AEF: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), LO8(ecx) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_00013AFB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00013B00
 * Original: 0x00013B00 - 0x00013BE0 (224 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013B00: ;
    eax = MEM32(0x30F910);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = ZX8(LO8(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(edx, MEM8(eax + 0x30D9CD));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B81; /* je: equal / zero */

loc_00013B2B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B81; /* je: equal / zero */

loc_00013B30: ;
    SET_LO8(eax, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x59 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013B4D; /* jb: below (unsigned <) */

loc_00013B3A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5E (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00013B4D; /* ja: above (unsigned >) */

loc_00013B3E: ;
    SET_LO8(eax, MEM8(0x316FF4));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x302278) = LO8(eax);
    goto loc_00013B81;

loc_00013B4D: ;
    edx = edi + 0x4000;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013B70; /* jge: greater or equal (signed >=) */

loc_00013B61: ;
    SET_LO8(eax, MEM8(0x316FF4));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x302278) = LO8(eax);
    goto loc_00013B81;

loc_00013B70: ;
    SET_LO8(edx, MEM8(0x316FF4));
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x302278) = LO8(edx);

loc_00013B81: ;
    _fb = (uint32_t)(0xFFFFAAAAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFAAAAu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x5555 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx = esi + 0x1555;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2AAA (32-bit) */
    MEM8(ecx + 0x301F84) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00013BBB; /* jge: greater or equal (signed >=) */

loc_00013BB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x3025C4) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013BBB: ;
    _fb = (uint32_t)(0xFFFF9555u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFF9555u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2AAA (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM8(ecx + 0x3025C4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013BE0
 * Original: 0x00013BE0 - 0x00013BF5 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BE0(void)
{

loc_00013BE0: ;
    MEM32(0x3024B0) = 1;
    MEM32(0x302260) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C00
 * Original: 0x00013C00 - 0x00013C16 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C00: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x30223C) = LO8(ecx);
    MEM8(eax + 0x302118) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013C20
 * Original: 0x00013C20 - 0x00013C4D (45 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C20(void)
{

loc_00013C20: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, 0xFF);
    MEM8(eax * 4 + 0x301F88) = LO8(ecx);
    MEM8(eax * 4 + 0x301F89) = LO8(ecx);
    MEM8(eax * 4 + 0x301F8A) = LO8(ecx);
    MEM8(eax * 4 + 0x301F8B) = LO8(ecx);
    MEM8(eax + 0x302130) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C50
 * Original: 0x00013C50 - 0x00013C83 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C50: ;
    SET_LO16(eax, MEM16(0x301E3C));
    SET_LO8(ecx, MEM8(0x301E62));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(0x301E3C) = LO16(eax);
    MEM8(0x301E62) = LO8(ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_00013C82; /* jge: greater or equal (signed >=) */

loc_00013C7B: ;
    MEM8(0x30223E) = 1;

loc_00013C82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C90
 * Original: 0x00013C90 - 0x00013CC7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C90: ;
    _fa = (uint32_t)(MEM8(0x301FB1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013CA0; /* jne: not equal / not zero */

loc_00013C99: ;
    MEM8(0x301FB1) = 0;

loc_00013CA0: ;
    SET_LO16(eax, MEM16(0x302250));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013CB1; /* je: equal / zero */

loc_00013CAB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00013CC6; /* jbe: below or equal (unsigned <=) */

loc_00013CB1: ;
    SET_LO8(eax, MEM8(0x301E62));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(eax);

loc_00013CC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013CD0
 * Original: 0x00013CD0 - 0x00013D09 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013CD0: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x302278)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x302278), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013D08; /* jne: not equal / not zero */

loc_00013CE0: ;
    SET_LO16(eax, MEM16(0x302250));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax & 0xFF3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x302250) = LO16(ecx);

loc_00013D08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013D10
 * Original: 0x00013D10 - 0x00013D54 (68 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D10: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x3025C0)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3025C0), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D27; /* je: equal / zero */

loc_00013D20: ;
    MEM8(eax + 0x301E44) = 0;

loc_00013D27: ;
    _fa = (uint32_t)(MEM8(eax + 0x301E44)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x301E44), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00013D53; /* jae: above or equal (unsigned >=) */

loc_00013D30: ;
    SET_LO8(ecx, MEM8(eax + 0x3026B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D53; /* je: equal / zero */

loc_00013D3A: ;
    eax = MEM32(0x301FA0);
    MEM32(eax + 0x10) = 0x40000000;
    eax = ZX8(MEM8(0x301FB0));
    MEM8(eax + 0x301E44) = MEM8(eax + 0x301E44) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x301E44)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00013D53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013D60
 * Original: 0x00013D60 - 0x00013DE9 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D60: ;
    SET_LO8(ecx, MEM8(0x301FB0));
    eax = ZX8(LO8(ecx));
    SET_LO8(edx, MEM8(eax + 0x301F84));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DE8; /* jne: not equal / not zero */

loc_00013D73: ;
    SET_LO8(eax, MEM8(eax + 0x301E38));
    SET_LO8(edx, MEM8(0x316FF4));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_00013DB7; /* jne: not equal / not zero */

loc_00013D85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D8D; /* je: equal / zero */

loc_00013D89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013D9C; /* jne: not equal / not zero */

loc_00013D8D: ;
    eax = MEM32(0x301FA0);
    MEM8(eax + 0x3A) = 1;
    SET_LO8(ecx, MEM8(0x301FB0));

loc_00013D9C: ;
    ecx = ZX8(LO8(ecx));
    SET_LO8(edx, MEM8(ecx + 0x301E38));
    SET_LO8(edx, LO8(edx) & 0xF0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x90 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DE8; /* jne: not equal / not zero */

loc_00013DAD: ;
    eax = MEM32(0x301FA0);
    MEM8(eax + 0x3A) = 2;
    esp += 4; return; /* ret */

loc_00013DB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013DBF; /* je: equal / zero */

loc_00013DBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x60 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DCF; /* jne: not equal / not zero */

loc_00013DBF: ;
    ecx = MEM32(0x301FA0);
    MEM8(ecx + 0x3A) = 1;
    SET_LO8(ecx, MEM8(0x301FB0));

loc_00013DCF: ;
    edx = ZX8(LO8(ecx));
    SET_LO8(eax, MEM8(edx + 0x301E38));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x50 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DE8; /* jne: not equal / not zero */

loc_00013DDE: ;
    ecx = MEM32(0x301FA0);
    MEM8(ecx + 0x3A) = 2;

loc_00013DE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013DF0
 * Original: 0x00013DF0 - 0x00013F28 (312 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013DF0: ;
    SET_LO8(edx, MEM8(0x301FB0));
    ecx = ZX8(LO8(edx));
    eax = ZX8(MEM8(ecx + 0x3025C0));
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00013EC0; /* ja: above (unsigned >) */

loc_00013E0D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x13F28); /* switch: 7 entries, 4 targets */
    if (_jt == 0x00013E14u) goto loc_00013E14;
    if (_jt == 0x00013E26u) goto loc_00013E26;
    if (_jt == 0x00013E77u) goto loc_00013E77;
    if (_jt == 0x00013EC0u) goto loc_00013EC0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00013E14: ;
    eax = MEM32(0x301FA0);
    SET_LO16(edx, MEM16(eax + 0x24));
    _fb = (uint32_t)(0xE) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - 0xE);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    goto loc_00013EFA;

loc_00013E26: ;
    eax = MEM32(0x301FA0);
    SET_LO16(edx, MEM16(eax + 0x24));
    eax = ecx;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(eax * 4 + 0x3026CC);
    MEM16(ecx * 2 + 0x3020F0) = LO16(edx);
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F02; /* je: equal / zero */

loc_00013E4D: ;
    SET_LO8(edx, MEM8(ecx + 0x302258));

loc_00013E53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013E66; /* je: equal / zero */

loc_00013E57: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013E53; /* jne: not equal / not zero */

loc_00013E61: ;
    goto loc_00013F02;

loc_00013E66: ;
    SET_LO16(edx, MEM16(esi + 2));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ecx * 2 + 0x3020F0) = MEM16(ecx * 2 + 0x3020F0) + LO16(edx);
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x3020F0)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_00013F02;

loc_00013E77: ;
    SET_LO8(eax, MEM8(0x302110));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(0x3023A0);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E8C; /* je: equal / zero */

loc_00013E86: ;
    esi = MEM32(0x301E4C);

loc_00013E8C: ;
    MEM16(ecx * 2 + 0x3020F0) = 0;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F02; /* je: equal / zero */

loc_00013E9C: ;
    SET_LO8(edx, MEM8(ecx + 0x301F80));

loc_00013EA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EB2; /* je: equal / zero */

loc_00013EA6: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EA2; /* jne: not equal / not zero */

loc_00013EB0: ;
    goto loc_00013F02;

loc_00013EB2: ;
    SET_LO16(eax, MEM16(esi + 2));
    MEM16(ecx * 2 + 0x3020F0) = LO16(eax);
    goto loc_00013F02;

loc_00013EC0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    esi = MEM32(0x302128);
    if (CMP_EQ(_fa, _fb)) goto loc_00013ED0; /* je: equal / zero */

loc_00013ECA: ;
    esi = MEM32(0x3020D8);

loc_00013ED0: ;
    SET_LO8(edx, MEM8(ecx + 0x302258));
    MEM16(ecx * 2 + 0x3020F0) = 0;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F02; /* je: equal / zero */

loc_00013EE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EF6; /* je: equal / zero */

loc_00013EEA: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EE6; /* jne: not equal / not zero */

loc_00013EF4: ;
    goto loc_00013F02;

loc_00013EF6: ;
    SET_LO16(edx, MEM16(esi + 2));

loc_00013EFA: ;
    MEM16(ecx * 2 + 0x3020F0) = LO16(edx);

loc_00013F02: ;
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x3020F0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x3020F0), 0 (16-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00013F16; /* jle: less or equal (signed <=) */

loc_00013F0E: ;
    MEM8(ecx + 0x3020D0) = 0;
    esp += 4; return; /* ret */

loc_00013F16: ;
    MEM16(ecx * 2 + 0x301E5C) = 0x14;
    MEM8(ecx + 0x3020D0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00013F50
 * Original: 0x00013F50 - 0x00013F88 (56 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013F50: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x3026B8));
    MEM16(eax * 2 + 0x3020F0) = MEM16(eax * 2 + 0x3020F0) - 1;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F72; /* je: equal / zero */

loc_00013F69: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax * 2 + 0x3020F0) = MEM16(eax * 2 + 0x3020F0) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_00013F72: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x3020F0), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013F87; /* jge: greater or equal (signed >=) */

loc_00013F7D: ;
    MEM16(eax * 2 + 0x3020F0) = 0;

loc_00013F87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013F90
 * Original: 0x00013F90 - 0x000140B0 (288 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013F90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(0x316FF4));
    SET_LO8(eax, MEM8(0x301FB0));
    SET_LO8(edx, MEM8(0x302398));
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = MEM32(0x302280);
    PUSH32(esp, esi);
    MEM8(esp + 0x14) = 0x1A;
    MEM8(esp + 0x15) = 0x1B;
    MEM8(esp + 0x16) = 0x1C;
    MEM8(esp + 0x17) = 0x1D;
    MEM8(esp + 0xC) = 0x26;
    MEM8(esp + 0xD) = 0x27;
    MEM8(esp + 0xE) = 0x28;
    MEM8(esp + 0xF) = 0x29;
    MEM8(esp + 0x10) = 0x22;
    MEM8(esp + 0x11) = 0x23;
    MEM8(esp + 0x12) = 0x24;
    MEM8(esp + 0x13) = 0x25;
    MEM8(esp + 8) = 0x2E;
    MEM8(esp + 9) = 0x2F;
    MEM8(esp + 0xA) = 0x30;
    MEM8(esp + 0xB) = 0x31;
    if ((_fa != 0)) goto loc_0001400E; /* jne: not equal / not zero */

loc_00014000: ;
    esi = ZX8(LO8(edx));
    SET_LO8(ebx, MEM8(esi + ecx));
    SET_LO8(ebx, LO8(ebx) & 0x90);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x90 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014020; /* je: equal / zero */

loc_0001400E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001403D; /* jne: not equal / not zero */

loc_00014012: ;
    esi = ZX8(LO8(edx));
    SET_LO8(ebx, MEM8(esi + ecx));
    SET_LO8(ebx, LO8(ebx) & 0x50);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x50 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001403D; /* jne: not equal / not zero */

loc_00014020: ;
    eax = MEM32(0x301FA0);
    edx = ZX8(MEM8(eax + 0x31));
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = esp + edx + 8;
    SET_LO8(ecx, MEM8(edx + ecx * 2));
    POP32(esp, esi);
    MEM8(eax + 0x2C) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001403D: ;
    edx = ZX8(LO8(edx));
    SET_LO8(ecx, MEM8(edx + ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014065; /* je: equal / zero */

loc_00014048: ;
    eax = MEM32(0x301FA0);
    edx = ZX8(MEM8(eax + 0x31));
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = esp + edx + 0xC;
    SET_LO8(ecx, MEM8(edx + ecx * 2));
    POP32(esp, esi);
    MEM8(eax + 0x2C) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00014065: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001406D; /* jne: not equal / not zero */

loc_00014069: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00014076; /* js: sign (negative) */

loc_0001406D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014093; /* jne: not equal / not zero */

loc_00014071: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014093; /* je: equal / zero */

loc_00014076: ;
    eax = MEM32(0x301FA0);
    ecx = ZX8(MEM8(eax + 0x31));
    edx = ZX8(MEM8(eax + 0x2F));
    ecx = esp + ecx + 0x10;
    SET_LO8(edx, MEM8(ecx + edx * 2));
    POP32(esp, esi);
    MEM8(eax + 0x2C) = LO8(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00014093: ;
    eax = MEM32(0x301FA0);
    edx = ZX8(MEM8(eax + 0x31));
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = esp + edx + 0x14;
    SET_LO8(ecx, MEM8(edx + ecx * 2));
    POP32(esp, esi);
    MEM8(eax + 0x2C) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000140B0
 * Original: 0x000140B0 - 0x0001414C (156 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000140B0(void)
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

loc_000140B0: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 8));
    PUSH32(esp, edi);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x000140C5u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_000140C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30D9A4)); /* fadd dword ptr [esi + 0x30d9a4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000140DAu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_000140DA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30D9AC)); /* fadd dword ptr [esi + 0x30d9ac] */
    POP32(esp, esi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014149; /* je: equal / zero */

loc_00014101: ;
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00014149; /* jnp: not parity */

loc_00014118: ;
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014149; /* je: equal / zero */

loc_0001412F: ;
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00014149; /* jnp: not parity */

loc_00014146: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00014149: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00014150
 * Original: 0x00014150 - 0x000141B2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014150(void)
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

loc_00014150: ;
    fp_push(MEMF(0x315AD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000141AF; /* je: equal / zero */

loc_00014167: ;
    fp_push(MEMF(0x315AD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000141AF; /* jnp: not parity */

loc_0001417E: ;
    fp_push(MEMF(0x30DAAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000141AF; /* je: equal / zero */

loc_00014195: ;
    fp_push(MEMF(0x30DAAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000141AF; /* jnp: not parity */

loc_000141AC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000141AF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000141C0
 * Original: 0x000141C0 - 0x00014216 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000141C0: ;
    eax = MEM32(0x302134);
    eax = ZX8(MEM8(eax + 0x46));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000141FA; /* je: equal / zero */

loc_000141CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000141E6; /* je: equal / zero */

loc_000141CF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00014215; /* jne: not equal / not zero */

loc_000141D2: ;
    _fa = (uint32_t)(MEM8(0x301FB2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB2), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014215; /* je: equal / zero */

loc_000141DB: ;
    ecx = MEM32(0x301FA0);
    MEM8(ecx + 0x3A) = 2;
    esp += 4; return; /* ret */

loc_000141E6: ;
    _fa = (uint32_t)(MEM8(0x301FB2)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB2), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014215; /* je: equal / zero */

loc_000141EF: ;
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x3A) = 1;
    esp += 4; return; /* ret */

loc_000141FA: ;
    _fa = (uint32_t)(MEM8(0x301FB2)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB2), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014215; /* je: equal / zero */

loc_00014203: ;
    eax = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(eax + 0x2E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0x3A) = LO8(ecx);

loc_00014215: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014220
 * Original: 0x00014220 - 0x0001423E (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014220: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001423A; /* je: equal / zero */

loc_0001422B: ;
    PUSH32(esp, 0x00014230u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_00014230: ;
    ecx = ZX16(LO16(esi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    eax = edx;
    esp += 4; return; /* ret */

loc_0001423A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014240
 * Original: 0x00014240 - 0x00014266 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014240: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014251; /* je: equal / zero */

loc_0001424D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014260; /* jne: not equal / not zero */

loc_00014251: ;
    SET_LO8(eax, MEM8(ecx + 0x4D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014263; /* je: equal / zero */

loc_00014258: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014263; /* je: equal / zero */

loc_0001425C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014263; /* je: equal / zero */

loc_00014260: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00014263: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00014270
 * Original: 0x00014270 - 0x00014296 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014270: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014281; /* je: equal / zero */

loc_0001427D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014290; /* jne: not equal / not zero */

loc_00014281: ;
    SET_LO8(eax, MEM8(ecx + 0x4D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014293; /* je: equal / zero */

loc_00014288: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014293; /* je: equal / zero */

loc_0001428C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014293; /* je: equal / zero */

loc_00014290: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00014293: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000142A0
 * Original: 0x000142A0 - 0x000142C7 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000142A0: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000142C4; /* je: equal / zero */

loc_000142AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000142B8; /* jne: not equal / not zero */

loc_000142B3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x41)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x41), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000142C4; /* je: equal / zero */

loc_000142B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000142C1; /* jne: not equal / not zero */

loc_000142BC: ;
    _fa = (uint32_t)(MEM8(ecx + 0x41)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x41), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000142C4; /* je: equal / zero */

loc_000142C1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000142C4: ;
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_000142D0
 * Original: 0x000142D0 - 0x000142E8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000142D0: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(0x301E3C) = LO16(ecx);
    MEM32(0x3020D4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000142F0
 * Original: 0x000142F0 - 0x0001431B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000142F0: ;
    ecx = MEM32(0x3020D4);
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x3020F8) = MEM16(0x3020F8) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = ecx;
    SET_LO8(ecx, MEM8(0x301E62));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x301E62) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014320
 * Original: 0x00014320 - 0x00014408 (232 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014320: ;
    _fa = (uint32_t)(MEM8(0x301FB1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB1), 1 (8-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x301E62));
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00014343; /* jne: not equal / not zero */

loc_00014331: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(ebx);

loc_00014343: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(0x302250) = LO16(ecx);
    MEM32(0x3020D4) = eax;
    PUSH32(esp, 0x0001435Fu); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_0001435F: ;
    eax = MEM32(0x302250);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    edi = MEM32(0x302280);
    if (TEST_NZ(_fa, _fb)) goto loc_00014375; /* jne: not equal / not zero */

loc_0001436F: ;
    edi = MEM32(0x30210C);

loc_00014375: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000143AE; /* je: equal / zero */

loc_0001437A: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014401; /* je: equal / zero */

loc_00014383: ;
    SET_LO8(edx, MEM8(0x302250));
    goto loc_00014391;

loc_0001438B: ;
    SET_LO8(ebx, MEM8(0x301E62));

loc_00014391: ;
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM8(eax + edi)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + edi), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014401; /* jne: not equal / not zero */

loc_00014399: ;
    PUSH32(esp, 0x0001439Eu); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_0001439E: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001438B; /* jne: not equal / not zero */

loc_000143A7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

loc_000143AE: ;
    SET_LO16(eax, MEM16(0x302250));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000143C4; /* je: equal / zero */

loc_000143B9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    edx = 0xF;
    if (CMP_BE(_fa, _fb)) goto loc_000143C9; /* jbe: below or equal (unsigned <=) */

loc_000143C4: ;
    edx = 0xF0;

loc_000143C9: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014401; /* je: equal / zero */

loc_000143D2: ;
    PUSH32(esp, esi);
    SET_LO16(esi, ZX8(MEM8(0x302250)));
    goto loc_000143E3;

loc_000143DD: ;
    SET_LO8(ebx, MEM8(0x301E62));

loc_000143E3: ;
    ecx = ZX8(LO8(ebx));
    SET_LO16(eax, ZX8(MEM8(ecx + edi)));
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014400; /* je: equal / zero */

loc_000143F2: ;
    PUSH32(esp, 0x000143F7u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_000143F7: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000143DD; /* jne: not equal / not zero */

loc_00014400: ;
    POP32(esp, esi);

loc_00014401: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_00014410
 * Original: 0x00014410 - 0x00014429 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014410: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014428; /* jne: not equal / not zero */

loc_00014421: ;
    MEM8(0x30223E) = 1;

loc_00014428: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014430
 * Original: 0x00014430 - 0x00014498 (104 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014430: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x302110));
    SET_LO16(edx, ZX8(MEM8(eax + 0x302238)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014490; /* jne: not equal / not zero */

loc_00014454: ;
    edx = MEM32(0x302134);
    SET_LO16(edx, ZX8(MEM8(edx + 0x2A)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014490; /* jne: not equal / not zero */

loc_00014464: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014490; /* jne: not equal / not zero */

loc_00014470: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3020F8);
    edx = (uint32_t)(int32_t)SMEM16(0x301E3C);
    eax = ZX16(MEM16(eax * 2 + 0x30226C));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00014490; /* jg: greater (signed >) */

loc_0001448C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014497; /* jge: greater or equal (signed >=) */

loc_00014490: ;
    MEM8(0x30223E) = 1;

loc_00014497: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000144A0
 * Original: 0x000144A0 - 0x000144BC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000144A0: ;
    ecx = ZX8(MEM8(esp + 4));
    edx = MEM32(0x302284);
    eax = ecx + -1;
    ecx = ZX8(MEM8(ecx + edx));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(eax + edx));
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000144C0
 * Original: 0x000144C0 - 0x00014556 (150 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000144C0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x301FB1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB1), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x301E62));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000144E5; /* jne: not equal / not zero */

loc_000144D3: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(ebx);

loc_000144E5: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    MEM16(0x302250) = LO16(ecx);
    SET_LO16(ebp, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    PUSH32(esp, 0x0001450Cu); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_0001450C: ;
    eax = MEM32(0x302250);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO16(esi, LO16(eax));
    if (TEST_Z(_fa, _fb)) goto loc_00014524; /* je: equal / zero */

loc_00014519: ;
    MEM16(esp + 0xC) = LO16(esi);
    edx = MEM32(esp + 0xC);
    goto loc_00014544;

loc_00014524: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00014530; /* jne: not equal / not zero */

loc_00014529: ;
    edx = 0xFF;
    goto loc_00014544;

loc_00014530: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, 0xF);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xE1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xF)) >> 32) & 1);
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014544: ;
    SET_LO8(eax, MEM8(0x30223E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000145C4(); return; } /* je: equal / zero */

loc_0001454D: ;
    PUSH32(esp, edi);
    edi = MEM32(0x302280);
    g_seh_ebp = ebp; sub_00014560(); return; /* tail jmp 0x00014560 */

}

/**
 * sub_00014556
 * Original: 0x00014556 - 0x000145C4 (110 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014556(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014556: ;
    SET_LO8(ebx, MEM8(0x301E62));
    /* nop */
    ecx = ZX8(LO8(ebx));
    SET_LO16(ecx, ZX8(MEM8(ecx + edi)));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014589; /* je: equal / zero */

loc_0001456F: ;
    PUSH32(esp, 0x00014574u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_00014574: ;
    SET_LO8(eax, MEM8(0x30223E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014556; /* jne: not equal / not zero */

loc_0001457D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

loc_00014589: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000145C3; /* je: equal / zero */

loc_0001458D: ;
    /* nop */

loc_00014590: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000145C3; /* jbe: below or equal (unsigned <=) */

loc_0001459B: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(ebx));
    MEM8(0x301E62) = LO8(ebx);
    SET_LO16(ecx, ZX8(MEM8(eax + edi)));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014590; /* je: equal / zero */

loc_000145BC: ;
    MEM8(0x30223E) = 1;

loc_000145C3: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_000145C4(); return; /* fallthrough 0x000145C4 */

}

/**
 * sub_00014560
 * Original: 0x00014560 - 0x000145C4 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014560: ;
    ecx = ZX8(LO8(ebx));
    SET_LO16(ecx, ZX8(MEM8(ecx + edi)));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014589; /* je: equal / zero */

loc_0001456F: ;
    PUSH32(esp, 0x00014574u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_00014574: ;
    SET_LO8(eax, MEM8(0x30223E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00014556(); return; } /* jne: not equal / not zero */

loc_0001457D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

loc_00014589: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000145C3; /* je: equal / zero */

loc_0001458D: ;
    /* nop */

loc_00014590: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000145C3; /* jbe: below or equal (unsigned <=) */

loc_0001459B: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(ebx));
    MEM8(0x301E62) = LO8(ebx);
    SET_LO16(ecx, ZX8(MEM8(eax + edi)));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014590; /* je: equal / zero */

loc_000145BC: ;
    MEM8(0x30223E) = 1;

loc_000145C3: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_000145C4(); return; /* fallthrough 0x000145C4 */

}

/**
 * sub_000145C4
 * Original: 0x000145C4 - 0x000145CF (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000145C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000145C4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_000145D0
 * Original: 0x000145D0 - 0x00014670 (160 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000145D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000145D0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x301FB1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB1), 1 (8-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x301E62));
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000145F4; /* jne: not equal / not zero */

loc_000145E2: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(ebx);

loc_000145F4: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(0x302250) = LO16(ecx);
    MEM32(0x3020D4) = eax;
    PUSH32(esp, 0x00014610u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_00014610: ;
    eax = MEM32(0x302250);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    edi = MEM32(0x302280);
    if (TEST_NZ(_fa, _fb)) goto loc_00014626; /* jne: not equal / not zero */

loc_00014620: ;
    edi = MEM32(0x30210C);

loc_00014626: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001463D; /* je: equal / zero */

loc_0001462B: ;
    SET_LO16(edx, MEM16(0x302250));
    MEM16(esp + 8) = LO16(edx);
    edx = MEM32(esp + 8);
    goto loc_00014658;

loc_0001463D: ;
    SET_LO16(eax, MEM16(0x302250));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014653; /* je: equal / zero */

loc_00014648: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    edx = 0xF;
    if (CMP_BE(_fa, _fb)) goto loc_00014658; /* jbe: below or equal (unsigned <=) */

loc_00014653: ;
    edx = 0xF0;

loc_00014658: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000146A2(); return; } /* je: equal / zero */

loc_00014661: ;
    PUSH32(esp, esi);
    SET_LO16(esi, ZX8(MEM8(0x302250)));
    /* nop */

    g_seh_ebp = ebp; sub_00014670(); return; /* fallthrough 0x00014670 */

}

/**
 * sub_00014670
 * Original: 0x00014670 - 0x000146A2 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014670: ;
    eax = ZX8(LO8(ebx));
    SET_LO16(eax, ZX8(MEM8(eax + edi)));
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000146A1; /* je: equal / zero */

loc_0001467F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001469A; /* jne: not equal / not zero */

loc_00014684: ;
    PUSH32(esp, 0x00014689u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_00014689: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000146A1; /* je: equal / zero */

loc_00014692: ;
    SET_LO8(ebx, MEM8(0x301E62));
    goto loc_00014670;

loc_0001469A: ;
    MEM8(0x30223E) = 1;

loc_000146A1: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_000146A2(); return; /* fallthrough 0x000146A2 */

}

/**
 * sub_000146A2
 * Original: 0x000146A2 - 0x000146AC (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000146A2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_000146B0
 * Original: 0x000146B0 - 0x000146C2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000146B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000146BF; /* jb: below (unsigned <) */

loc_000146B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000146BF; /* ja: above (unsigned >) */

loc_000146BC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000146BF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000146D0
 * Original: 0x000146D0 - 0x000146E2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000146D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000146DF; /* jb: below (unsigned <) */

loc_000146D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x8A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x8A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000146DF; /* ja: above (unsigned >) */

loc_000146DC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000146DF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000146F0
 * Original: 0x000146F0 - 0x00014702 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000146F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000146FF; /* jb: below (unsigned <) */

loc_000146F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x44 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000146FF; /* ja: above (unsigned >) */

loc_000146FC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000146FF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014710
 * Original: 0x00014710 - 0x000147AE (158 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014710: ;
    SET_LO8(eax, MEM8(0x301FB1));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014731; /* jne: not equal / not zero */

loc_0001471C: ;
    SET_LO8(eax, MEM8(0x301E62));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(eax);

loc_00014731: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x3020D4);
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, edi);
    MEM16(0x302250) = LO16(eax);
    PUSH32(esp, 0x00014749u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_00014749: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(ecx + 0x302278));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM32(0x3020D4) = esi;
    SET_LO16(ebx, MEM16(esi));
    if (CMP_NE(_fa, _fb)) goto loc_00014782; /* jne: not equal / not zero */

loc_00014766: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ebx = ebx & 0xFF3F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00014782: ;
    eax = MEM32(0x302250);
    edx = MEM32(0x302280);
    ecx = MEM32(0x30210C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    MEM32(0x3020D4) = esi;
    MEM32(esp + 0x10) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000147A9; /* jne: not equal / not zero */

loc_000147A5: ;
    MEM32(esp + 0x10) = ecx;

loc_000147A9: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    ebp = edx;

    g_seh_ebp = ebp; sub_000147AE(); return; /* fallthrough 0x000147AE */

}

/**
 * sub_000147AE
 * Original: 0x000147AE - 0x0001486D (191 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000147AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000147AE: ;
    if (_flags /* jne: not equal / not zero */) goto loc_000147B2;

loc_000147B0: ;
    ebp = ecx;

loc_000147B2: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000147C9; /* je: equal / zero */

loc_000147B7: ;
    SET_LO16(ecx, MEM16(0x302250));
    MEM16(esp + 0x14) = LO16(ecx);
    edi = MEM32(esp + 0x14);
    goto loc_000147E4;

loc_000147C9: ;
    SET_LO16(eax, MEM16(0x302250));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000147DF; /* je: equal / zero */

loc_000147D4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    edi = 0xF;
    if (CMP_BE(_fa, _fb)) goto loc_000147E4; /* jbe: below or equal (unsigned <=) */

loc_000147DF: ;
    edi = 0xF0;

loc_000147E4: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000147ED; /* je: equal / zero */

loc_000147E9: ;
    edx = ebx;
    goto loc_00014802;

loc_000147ED: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000147FD; /* je: equal / zero */

loc_000147F2: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0xF (16-bit) */
    edx = 0xF;
    if (CMP_BE(_fa, _fb)) goto loc_00014802; /* jbe: below or equal (unsigned <=) */

loc_000147FD: ;
    edx = 0xF0;

loc_00014802: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014861; /* je: equal / zero */

loc_0001480B: ;
    SET_LO16(esi, ZX8(MEM8(0x302250)));
    goto loc_00014820;

    /* nop */
    /* nop */

loc_00014820: ;
    eax = ZX8(MEM8(0x301E62));
    ecx = MEM32(esp + 0x10);
    SET_LO16(ecx, ZX8(MEM8(eax + ecx)));
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014861; /* je: equal / zero */

loc_00014837: ;
    SET_LO8(eax, MEM8(eax + ebp));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001485A; /* je: equal / zero */

loc_00014840: ;
    PUSH32(esp, 0x00014845u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_00014845: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014820; /* jne: not equal / not zero */

loc_0001484E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

loc_0001485A: ;
    MEM8(0x30223E) = 1;

loc_00014861: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_00014870
 * Original: 0x00014870 - 0x000148AC (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014870: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    SET_LO16(edx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO16(eax, MEM16(eax * 2 + 0x30226C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000148A4; /* jb: below (unsigned <) */

loc_0001489F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000148AB; /* jbe: below or equal (unsigned <=) */

loc_000148A4: ;
    MEM8(0x30223E) = 1;

loc_000148AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000148B0
 * Original: 0x000148B0 - 0x000148C4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000148B0: ;
    eax = MEM32(0x302134);
    SET_LO8(ecx, MEM8(eax + 0x43));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000148C3; /* jne: not equal / not zero */

loc_000148BC: ;
    MEM8(0x30223E) = 1;

loc_000148C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000148D0
 * Original: 0x000148D0 - 0x00014943 (115 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000148D0: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    SET_LO8(edx, 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014942; /* jne: not equal / not zero */

loc_000148DF: ;
    eax = ZX8(MEM8(0x301FB0));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x302130));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00014942; /* jle: less or equal (signed <=) */

loc_000148F2: ;
    SET_LO8(eax, MEM8(eax * 4 + 0x301F88));
    MEM8(ecx + 0x2C) = LO8(eax);
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax * 4 + 0x301F89));
    MEM8(eax * 4 + 0x301F88) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax * 4 + 0x301F8A));
    MEM8(eax * 4 + 0x301F89) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax * 4 + 0x301F8B));
    MEM8(eax * 4 + 0x301F8A) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x302130));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax * 4 + 0x301F8B) = LO8(edx);
    MEM8(eax + 0x302130) = LO8(ecx);

loc_00014942: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014950
 * Original: 0x00014950 - 0x000149CA (122 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014950: ;
    SET_LO8(eax, MEM8(0x301FB1));
    SET_LO8(edx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014970; /* jne: not equal / not zero */

loc_0001495B: ;
    SET_LO8(eax, MEM8(0x301E62));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(eax);

loc_00014970: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x301FB0));
    PUSH32(esp, esi);
    SET_LO16(esi, ZX8(MEM8(eax + 0x3020B8)));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000149BE; /* jne: not equal / not zero */

loc_00014995: ;
    SET_LO16(ecx, MEM16(0x3020F8));
    esi = (uint32_t)(int32_t)SMEM16(0x301E3C);
    SET_LO16(eax, MEM16(eax * 2 + 0x301F94));
    PUSH32(esp, edi);
    edi = SX16(LO16(ecx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = SX16(LO16(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_000149BE; /* jg: greater (signed >) */

loc_000149B9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000149C4; /* jge: greater or equal (signed >=) */

loc_000149BE: ;
    MEM8(0x30223E) = LO8(edx);

loc_000149C4: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_000149D0
 * Original: 0x000149D0 - 0x000149FC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000149D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000149D0: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO16(edx, ZX8(MEM8(eax + 0x3020B8)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000149FB; /* je: equal / zero */

loc_000149F4: ;
    MEM8(0x30223E) = 1;

loc_000149FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014A00
 * Original: 0x00014A00 - 0x00014A86 (134 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014A00: ;
    _fa = (uint32_t)(MEM8(0x301FB1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014A1E; /* jne: not equal / not zero */

loc_00014A09: ;
    SET_LO8(eax, MEM8(0x301E62));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3020F8) = MEM16(0x3020F8) + 1;
    _fa = (uint32_t)(MEM16(0x3020F8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x301E62) = LO8(eax);

loc_00014A1E: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO16(edx, ZX8(MEM8(eax + 0x302238)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014A7A; /* jne: not equal / not zero */

loc_00014A42: ;
    edx = MEM32(0x301FA0);
    PUSH32(esp, esi);
    SET_LO16(esi, ZX8(MEM8(edx + 0x2A)));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ecx) (16-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00014A7A; /* jne: not equal / not zero */

loc_00014A54: ;
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014A7A; /* jne: not equal / not zero */

loc_00014A5A: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3020F8);
    edx = (uint32_t)(int32_t)SMEM16(0x301E3C);
    eax = ZX16(MEM16(eax * 2 + 0x30226C));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00014A7A; /* jg: greater (signed >) */

loc_00014A76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014A81; /* jge: greater or equal (signed >=) */

loc_00014A7A: ;
    MEM8(0x30223E) = 1;

loc_00014A81: ;
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_00014A90
 * Original: 0x00014A90 - 0x00014AF1 (97 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014A90: ;
    eax = MEM32(0x3020D4);
    SET_LO16(edx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO16(ecx, ZX8(MEM8(eax + 0x3020B8)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014ABC; /* je: equal / zero */

loc_00014AB4: ;
    MEM8(0x30223E) = 1;
    esp += 4; return; /* ret */

loc_00014ABC: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014AF0; /* je: equal / zero */

loc_00014AC5: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3026DC);
    /* nop */

loc_00014AD0: ;
    eax = ZX8(MEM8(0x301E62));
    SET_LO16(ecx, ZX8(MEM8(eax + esi)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014AEF; /* je: equal / zero */

loc_00014AE1: ;
    PUSH32(esp, 0x00014AE6u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_00014AE6: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014AD0; /* jne: not equal / not zero */

loc_00014AEF: ;
    POP32(esp, esi);

loc_00014AF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014B00
 * Original: 0x00014B00 - 0x00014B2F (47 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B00: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    eax = ZX8(MEM8(0x301FB0));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO16(edx, ZX8(MEM8(eax + 0x30D9CA)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014B2E; /* je: equal / zero */

loc_00014B27: ;
    MEM8(0x30223E) = 1;

loc_00014B2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014B30
 * Original: 0x00014B30 - 0x00014B57 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B30: ;
    eax = MEM32(0x301FA0);
    SET_LO16(ecx, ZX8(MEM8(eax + 0x2A)));
    edx = MEM32(0x3020D4);
    eax = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edx) (16-bit) */
    MEM32(0x3020D4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00014B56; /* je: equal / zero */

loc_00014B4F: ;
    MEM8(0x30223E) = 1;

loc_00014B56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014B60
 * Original: 0x00014B60 - 0x00014B9F (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B60: ;
    eax = ZX8(MEM8(0x301FB0));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x30D9CE));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00014B9E; /* je: equal / zero */

loc_00014B7A: ;
    edx = (uint32_t)(int32_t)SMEM16(0x301E3C);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x3020FC);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(0x3020F8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00014B9E; /* jle: less or equal (signed <=) */

loc_00014B98: ;
    MEM8(0x30223E) = LO8(ecx);

loc_00014B9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014BA0
 * Original: 0x00014BA0 - 0x00014BDA (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014BA0: ;
    eax = ZX8(MEM8(0x301FB0));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(edx, MEM8(ecx + 0x30D9CE));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014BD9; /* je: equal / zero */

loc_00014BB6: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x3020FC);
    eax = (uint32_t)(int32_t)SMEM16(0x301E3C);
    ecx = (uint32_t)(int32_t)SMEM16(0x3020F8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00014BD9; /* jle: less or equal (signed <=) */

loc_00014BD2: ;
    MEM8(0x30223E) = 1;

loc_00014BD9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014BE0
 * Original: 0x00014BE0 - 0x00014BF9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014BE0: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x35)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x35), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014BF1; /* jne: not equal / not zero */

loc_00014BEB: ;
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014BF8; /* je: equal / zero */

loc_00014BF1: ;
    MEM8(0x30223E) = 1;

loc_00014BF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014C00
 * Original: 0x00014C00 - 0x00014C08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C00(void)
{

loc_00014C00: ;
    MEM8(0x301FB1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00014C10
 * Original: 0x00014C10 - 0x00014C59 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C10(void)
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

loc_00014C10: ;
    eax = MEM32(0x301FA0);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00014C2Fu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00014C2F: ;
    ecx = eax;
    eax = MEM32(0x301FA0);
    esi = MEM32(eax + 0x1C);
    edx = 0xFFFFC000u;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(eax + 0x4C) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00014C60
 * Original: 0x00014C60 - 0x00014C75 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C60(void)
{

loc_00014C60: ;
    eax = MEM32(0x3020D4);
    MEM8(0x3020D2) = 1;
    SET_LO8(ecx, MEM8(eax));
    MEM8(0x3025C2) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014C80
 * Original: 0x00014C80 - 0x00014D76 (246 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014C80: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00014D54; /* jne: not equal / not zero */

loc_00014C8E: ;
    esi = ZX8(MEM8(0x301FB0));
    esi = esi * 8 + 0x301DE0;

loc_00014C9C: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(0x3025BC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014CB2; /* je: equal / zero */

loc_00014CAD: ;
    SET_LO8(eax, MEM8(edx));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CB2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014CC0; /* je: equal / zero */

loc_00014CB7: ;
    _fb = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CC0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014CCE; /* je: equal / zero */

loc_00014CC5: ;
    _fb = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CCE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014CDC; /* je: equal / zero */

loc_00014CD3: ;
    _fb = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CDC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014CEA; /* je: equal / zero */

loc_00014CE1: ;
    _fb = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CEA: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014CF7; /* je: equal / zero */

loc_00014CEF: ;
    _fb = (uint32_t)(MEM8(esi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CF7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D05; /* je: equal / zero */

loc_00014CFC: ;
    _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D05: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D13; /* je: equal / zero */

loc_00014D0A: ;
    _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFE00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFE00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D13: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00014D20; /* jns: not sign (positive) */

loc_00014D17: ;
    _fb = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D20: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D2E; /* je: equal / zero */

loc_00014D25: ;
    _fb = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFC00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D2E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D3C; /* je: equal / zero */

loc_00014D33: ;
    _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D3C: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D4A; /* je: equal / zero */

loc_00014D41: ;
    _fb = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D4A: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D52; /* je: equal / zero */

loc_00014D4F: ;
    _fb = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00014D52: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00014D54: ;
    eax = ZX8(MEM8(0x301FB0));
    eax = MEM32(eax * 4 + 0x30F9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    esi = eax * 8 + 0x307620;
    if (CMP_NE(_fa, _fb)) goto loc_00014C9C; /* jne: not equal / not zero */

loc_00014D72: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014D80
 * Original: 0x00014D80 - 0x00014E1A (154 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014D80: ;
    edx = MEM32(esp + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x307344);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    edx = edx + 0x307344;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 4);
    MEM32(edi) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00014DB0: ;
    eax = MEM32(edx);
    ebp = MEM32(ebx + esi * 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    MEM32(ebx + esi * 4) = ebp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014DD3; /* je: equal / zero */

loc_00014DC1: ;
    ecx = eax;

loc_00014DC3: ;
    ebp = MEM32(edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + ebp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014DC3; /* jne: not equal / not zero */

loc_00014DD3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00014DB0; /* jle: less or equal (signed <=) */

loc_00014DD9: ;
    ecx = MEM32(edx);
    esi = MEM32(edi + 8);
    ebp = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 8) = esi;
    eax = MEM32(edx);
    esi = MEM32(edi + 0x48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x10) = ebp;
    eax = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x7C);
    MEM32(edi + 0x14) = ebx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = esi;
    edx = MEM32(edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x7C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014E20
 * Original: 0x00014E20 - 0x00014ED0 (176 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014E20: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + 0x307344);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = ecx + 0x307344;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = MEM32(ecx);
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    MEM32(esi) = edx;
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 8;

loc_00014E52: ;
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + -8) = MEM32(eax + -8) + edi;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax + 4);
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00014E52; /* jne: not equal / not zero */

loc_00014E70: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E97; /* je: equal / zero */

loc_00014E77: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E97; /* je: equal / zero */

loc_00014E83: ;
    edx = eax;

loc_00014E85: ;
    edi = MEM32(ecx);
    ebx = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014E85; /* jne: not equal / not zero */

loc_00014E97: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014EC2; /* je: equal / zero */

loc_00014E9E: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014EC2; /* je: equal / zero */

loc_00014EAA: ;
    edx = eax;
    /* nop */

loc_00014EB0: ;
    edi = MEM32(ecx);
    ebx = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014EB0; /* jne: not equal / not zero */

loc_00014EC2: ;
    eax = MEM32(ecx);
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014ED0
 * Original: 0x00014ED0 - 0x00014F00 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014ED0: ;
    edx = MEM32(esp + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x307348);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    edx = edx + 0x307348;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 4);
    MEM32(edi) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 4) = eax;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

    g_seh_ebp = ebp; sub_00014F00(); return; /* fallthrough 0x00014F00 */

}

/**
 * sub_00014F00
 * Original: 0x00014F00 - 0x00014F13 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014F00: ;
    eax = MEM32(edx);
    ebp = MEM32(ebx + esi * 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp;
    MEM32(ebx + esi * 4) = ebp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00014F23(); return; } /* je: equal / zero */

loc_00014F11: ;
    ecx = eax;

    g_seh_ebp = ebp; sub_00014F13(); return; /* fallthrough 0x00014F13 */

}

/**
 * sub_00014F13
 * Original: 0x00014F13 - 0x00014F23 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014F13: ;
    ebp = MEM32(edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - ebp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014F13; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00014F23(); return; /* fallthrough 0x00014F23 */

}

/**
 * sub_00014F23
 * Original: 0x00014F23 - 0x00014F6A (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014F23: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00014F00(); return; } /* jle: less or equal (signed <=) */

loc_00014F29: ;
    ecx = MEM32(edx);
    esi = MEM32(edi + 8);
    ebp = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 8) = esi;
    eax = MEM32(edx);
    esi = MEM32(edi + 0x48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0xC) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x10) = ebp;
    eax = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x7C);
    MEM32(edi + 0x14) = ebx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x48) = esi;
    edx = MEM32(edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x7C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014F70
 * Original: 0x00014F70 - 0x00015018 (168 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014F70: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + 0x307348);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = ecx + 0x307348;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    eax = MEM32(ecx);
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    MEM32(esi) = edx;
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 8;

loc_00014FA2: ;
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + -8) = MEM32(eax + -8) - edi;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + -4) = MEM32(eax + -4) - edi;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax + 4);
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00014FA2; /* jne: not equal / not zero */

loc_00014FC0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014FE5; /* je: equal / zero */

loc_00014FC7: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014FE5; /* je: equal / zero */

loc_00014FD1: ;
    edx = eax;

loc_00014FD3: ;
    edi = MEM32(ecx);
    ebx = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014FD3; /* jne: not equal / not zero */

loc_00014FE5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001500A; /* je: equal / zero */

loc_00014FEC: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001500A; /* je: equal / zero */

loc_00014FF6: ;
    edx = eax;

loc_00014FF8: ;
    edi = MEM32(ecx);
    ebx = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014FF8; /* jne: not equal / not zero */

loc_0001500A: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015020
 * Original: 0x00015020 - 0x000150A0 (128 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015020: ;
    SET_LO8(eax, MEM8(0x30D00B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x301E30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x301E30) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015035; /* je: equal / zero */

loc_0001502D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015035; /* jne: not equal / not zero */

loc_00015031: ;
    SET_LO8(eax, 0xA);
    goto loc_0001503E;

loc_00015035: ;
    SET_LO8(eax, MEM8(0x302108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001506A; /* jl: less (signed <) */

loc_0001503E: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x302108) = LO8(eax);
    if ((_fas >= 0)) goto loc_0001506A; /* jns: not sign (positive) */

loc_00015047: ;
    ecx = 2;
    eax = 0x3025CE;
    MEM8(0x301FB0) = LO8(ecx);

loc_00015057: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00015057; /* jne: not equal / not zero */

loc_00015060: ;
    MEM32(0x3020C4) = 9;

loc_0001506A: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015080; /* jne: not equal / not zero */

loc_00015073: ;
    SET_LO8(eax, MEM8(0x3024B4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015080; /* je: equal / zero */

loc_0001507C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00015089;

loc_00015080: ;
    SET_LO8(eax, MEM8(0x301F92));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000150D3(); return; } /* jl: less (signed <) */

loc_00015089: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x301F92) = LO8(eax);
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_000150D3(); return; } /* jns: not sign (positive) */

loc_00015092: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x301FB0) = LO8(edx);
    /* nop */

    g_seh_ebp = ebp; sub_000150A0(); return; /* fallthrough 0x000150A0 */

}

/**
 * sub_000150A0
 * Original: 0x000150A0 - 0x000150D3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000150A0: ;
    PUSH32(esp, 0x000150A5u); RECOMP_ABI_CALL(0x00013C20u, sub_00013C20); /* call 0x00013C20 */

loc_000150A5: ;
    eax = ZX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    PUSH32(esp, edx);
    MEM8(eax + 0x30D9CC) = 0xFF;
    PUSH32(esp, 0x000150B8u); RECOMP_ABI_CALL(0x000176F0u, sub_000176F0); /* call 0x000176F0 */

loc_000150B8: ;
    SET_LO8(edx, MEM8(0x301FB0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    MEM8(0x301FB0) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_000150A0; /* jb: below (unsigned <) */

loc_000150CE: ;
    g_seh_ebp = ebp; sub_00013BE0(); return; /* tail jmp 0x00013BE0 */

}

/**
 * sub_000150D3
 * Original: 0x000150D3 - 0x000150E0 (13 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150D3(void)
{

loc_000150D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000150E0
 * Original: 0x000150E0 - 0x00015180 (160 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000150E0: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(0x2BB568));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(edx, MEM16(eax + 0x30226C));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 1 (16-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00015117; /* jne: not equal / not zero */

loc_000150FE: ;
    edx = ZX16(MEM16(eax + 0x301E50));
    esi = ZX8(LO8(ecx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015126; /* jle: less or equal (signed <=) */

loc_0001510D: ;
    SET_LO8(ecx, MEM8(eax + 0x301E50));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00015126;

loc_00015117: ;
    SET_LO16(esi, ZX8(LO8(ecx)));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015126; /* jbe: below or equal (unsigned <=) */

loc_00015120: ;
    SET_LO8(ecx, MEM8(eax + 0x30226C));

loc_00015126: ;
    eax = MEM32(0x301FA0);
    esi = ZX8(LO8(ecx));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(eax + 0x50) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0001517D; /* jle: less or equal (signed <=) */

loc_00015138: ;
    goto loc_00015140;

    /* nop */

loc_00015140: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x302398));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 2);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015158u); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_00015158: ;
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015171; /* jne: not equal / not zero */

loc_00015161: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x50), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015179; /* je: equal / zero */

loc_0001516C: ;
    MEM8(eax + 0x50) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00015171: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015140; /* jl: less (signed <) */

loc_00015176: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00015179: ;
    MEM8(eax + 0x50) = 0;

loc_0001517D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015180
 * Original: 0x00015180 - 0x00015231 (177 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015180: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM16(0x302250) = LO16(ecx);
    MEM32(0x3020D4) = eax;
    PUSH32(esp, 0x0001519Eu); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_0001519E: ;
    SET_LO16(esi, MEM16(0x302250));
    SET_LO16(edx, 0xF);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x301E62));
    PUSH32(esp, 1);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xE1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xF)) >> 32) & 1);
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000151C6u); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_000151C6: ;
    SET_LO8(ecx, MEM8(0x30223E));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO16(eax, ZX8(LO8(eax)));
    if (CMP_EQ(_fa, _fb)) goto loc_0001522A; /* je: equal / zero */

loc_000151D8: ;
    PUSH32(esp, edi);
    edi = MEM32(0x302284);
    /* nop */

loc_000151E0: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00015229; /* je: equal / zero */

loc_000151E7: ;
    ecx = ZX8(MEM8(0x301E62));
    _fa = (uint32_t)(MEM8(ecx + edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + edi), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00015222; /* jne: not equal / not zero */

loc_000151F3: ;
    PUSH32(esp, 0x000151F8u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_000151F8: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x301E62));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015208u); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_00015208: ;
    SET_LO8(ecx, MEM8(0x30223E));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO16(eax, ZX8(LO8(eax)));
    if (CMP_NE(_fa, _fb)) goto loc_000151E0; /* jne: not equal / not zero */

loc_0001521A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

loc_00015222: ;
    MEM8(0x30223E) = 1;

loc_00015229: ;
    POP32(esp, edi);

loc_0001522A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_00015240
 * Original: 0x00015240 - 0x000152CD (141 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015240: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM16(0x302250) = LO16(ecx);
    MEM32(0x3020D4) = eax;
    PUSH32(esp, 0x0001525Eu); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_0001525E: ;
    SET_LO16(edi, MEM16(0x302250));
    SET_LO16(edx, 0xF);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x301E62));
    PUSH32(esp, 1);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xE1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xF)) >> 32) & 1);
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015286u); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_00015286: ;
    SET_LO8(ecx, MEM8(0x30223E));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO16(eax, ZX8(LO8(eax)));
    if (CMP_EQ(_fa, _fb)) goto loc_000152C6; /* je: equal / zero */

loc_00015298: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000152C6; /* je: equal / zero */

loc_0001529F: ;
    PUSH32(esp, 0x000152A4u); RECOMP_ABI_CALL(0x00013C50u, sub_00013C50); /* call 0x00013C50 */

loc_000152A4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x301E62));
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000152B4u); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_000152B4: ;
    SET_LO8(ecx, MEM8(0x30223E));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO16(eax, ZX8(LO8(eax)));
    if (CMP_NE(_fa, _fb)) goto loc_00015298; /* jne: not equal / not zero */

loc_000152C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00013C90(); return; /* tail jmp 0x00013C90 */

}

/**
 * sub_000152D0
 * Original: 0x000152D0 - 0x000154B8 (488 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152D0(void)
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

loc_000152D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x302134);
    SET_LO8(ebx, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000152F9; /* jne: not equal / not zero */

loc_000152E3: ;
    _fa = (uint32_t)(MEM8(edi + 0x2A)) & 0xFFu; _fb = (uint32_t)(0x9A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2A), 0x9A (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000152F1; /* jae: above or equal (unsigned >=) */

loc_000152E9: ;
    fp_push(MEMF(0x2BB75C)); /* fld float */
    goto loc_000152FF;

loc_000152F1: ;
    fp_push(MEMF(0x2BB760)); /* fld float */
    goto loc_000152FF;

loc_000152F9: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */

loc_000152FF: ;
    SET_LO16(eax, MEM16(0x301F84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015313; /* jne: not equal / not zero */

loc_00015309: ;
    ecx = MEM32(0x30224C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    goto loc_0001531B;

loc_00015313: ;
    edx = MEM32(0x30224C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */

loc_0001531B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015328; /* jne: not equal / not zero */

loc_0001531F: ;
    eax = MEM32(0x302120);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    goto loc_00015330;

loc_00015328: ;
    ecx = MEM32(0x302120);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */

loc_00015330: ;
    ebp = MEM32(0x301FA0);
    SET_LO8(edx, MEM8(ebp + 0x2E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_LO8(eax, MEM8(0x301FB0));
    if (CMP_NE(_fa, _fb)) goto loc_0001535C; /* jne: not equal / not zero */

loc_00015343: ;
    esi = ZX8(MEM8(0x3026D8));
    ecx = ZX8(LO8(eax));
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ecx + esi + 0x301FB8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + esi + 0x301FB8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001535C; /* jne: not equal / not zero */

loc_0001535A: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0001535C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ZX8(MEM8(esp + 0x18));
    esi = MEM32(0x3026BC);
    if (CMP_EQ(_fa, _fb)) goto loc_00015371; /* je: equal / zero */

loc_0001536B: ;
    esi = MEM32(0x301FAC);

loc_00015371: ;
    ecx = esi + ecx * 8;
    esi = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x3025C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154AE; /* jne: not equal / not zero */

loc_00015385: ;
    eax = ZX8(MEM8(0x302110));
    SET_LO8(eax, MEM8(eax + 0x3025C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000154AE; /* jne: not equal / not zero */

loc_0001539E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30C514)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30c514] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000154B0; /* jne: not equal / not zero */

loc_000153B2: ;
    SET_LO8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000153C1; /* je: equal / zero */

loc_000153B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154B0; /* jne: not equal / not zero */

loc_000153C1: ;
    SET_LO8(ecx, MEM8(ecx + 1));
    _fa = (uint32_t)(MEM8(edi + 0x2E)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2E), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000153D2; /* je: equal / zero */

loc_000153C9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154B0; /* jne: not equal / not zero */

loc_000153D2: ;
    SET_LO8(eax, MEM8(edi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154B0; /* jne: not equal / not zero */

loc_000153DD: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000154B0; /* jp: parity */

loc_000153F0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_000153F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    SET_LO8(eax, 2);
    if (CMP_NE(_fa, _fb)) goto loc_00015417; /* jne: not equal / not zero */

loc_000153FF: ;
    _fa = (uint32_t)(MEM8(edi + 0x33)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x33), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015417; /* jne: not equal / not zero */

loc_00015404: ;
    ecx = esi;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 0x302248));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_00015417: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001542D; /* jne: not equal / not zero */

loc_0001541B: ;
    _fa = (uint32_t)(MEM8(edi + 0x33)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x33), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001542D; /* jne: not equal / not zero */

loc_00015420: ;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x302248));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_0001542D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_00015432: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015442; /* jne: not equal / not zero */

loc_00015437: ;
    SET_LO8(eax, MEM8(edi + 0x3B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_0001543E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_00015442: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_00015447: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015452; /* jne: not equal / not zero */

loc_0001544C: ;
    _fa = (uint32_t)(MEM8(edi + 0x41)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x41), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_00015452: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001545D; /* jne: not equal / not zero */

loc_00015457: ;
    _fa = (uint32_t)(MEM8(edi + 0x41)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x41), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_0001545D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001547B; /* jne: not equal / not zero */

loc_00015462: ;
    _fa = (uint32_t)(MEM8(ebp + 1)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 1), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001547B; /* jne: not equal / not zero */

loc_00015468: ;
    _fa = (uint32_t)(MEM8(edi + 0x2B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2B), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001547B; /* jne: not equal / not zero */

loc_0001546E: ;
    _fa = (uint32_t)(MEM8(edi + 0x2A)) & 0xFFu; _fb = (uint32_t)(0xE2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2A), 0xE2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001547B; /* jne: not equal / not zero */

loc_00015474: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A6; /* je: equal / zero */

loc_0001547B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154B0; /* jne: not equal / not zero */

loc_00015480: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x2A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154B0; /* je: equal / zero */

loc_0001548A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x13 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154B0; /* je: equal / zero */

loc_0001548F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015495u); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_00015495: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154B0; /* jne: not equal / not zero */

loc_0001549C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x34 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000154A6; /* jb: below (unsigned <) */

loc_000154A1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3F (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000154B0; /* jbe: below or equal (unsigned <=) */

loc_000154A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000154AE: ;
    fp_pop(); /* fstp st(0) */

loc_000154B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_000154C0
 * Original: 0x000154C0 - 0x0001553E (126 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000154C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000154C0: ;
    eax = MEM32(0x3020D4);
    eax = ZX16(MEM16(eax));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001550E; /* je: equal / zero */

loc_000154CD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000154E0; /* je: equal / zero */

loc_000154D0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00015536; /* jne: not equal / not zero */

loc_000154D3: ;
    PUSH32(esp, 0x000154D8u); RECOMP_ABI_CALL(0x00014C10u, sub_00014C10); /* call 0x00014C10 */

loc_000154D8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x3020D4) = MEM32(0x3020D4) - 2;
    _fa = (uint32_t)(MEM32(0x3020D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_000154E0: ;
    eax = MEM32(0x301FA0);
    ecx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(MEM32(0x30AA68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x30AA68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(eax + 0x4C) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x3020D4) = MEM32(0x3020D4) - 2;
    _fa = (uint32_t)(MEM32(0x3020D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_0001550E: ;
    eax = MEM32(0x301FA0);
    edx = MEM32(0x30AA68);
    ecx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(eax + 0x4C) = LO8(edx);

loc_00015536: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x3020D4) = MEM32(0x3020D4) - 2;
    _fa = (uint32_t)(MEM32(0x3020D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015540
 * Original: 0x00015540 - 0x0001558C (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015540: ;
    eax = MEM32(0x3020D4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3020D4) = eax;
    _fa = (uint32_t)(MEM8(0x30225A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30225A), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001556E; /* jne: not equal / not zero */

loc_00015559: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, 1);
    MEM8(ecx + 0x3020E8) = LO8(eax);
    MEM8(0x30223E) = LO8(eax);
    esp += 4; return; /* ret */

loc_0001556E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015574u); RECOMP_ABI_CALL(0x000152D0u, sub_000152D0); /* call 0x000152D0 */

loc_00015574: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + 0x3020E8) = LO8(eax);
    MEM8(0x30223E) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00015590
 * Original: 0x00015590 - 0x00015794 (516 bytes, 120 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015590: ;
    eax = MEM32(0x301E58);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(0x302398));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x3020D4) = ecx;
    MEM8(0x30223E) = LO8(ebx);
    MEM8(0x3020D2) = LO8(ebx);
    MEM16(0x301E3C) = LO16(ebx);
    MEM16(0x3020F8) = LO16(ebx);
    MEM8(0x301FB1) = 1;
    MEM8(0x301E62) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00015792; /* je: equal / zero */

loc_000155D5: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000155E0;

    /* nop */

loc_000155E0: ;
    eax = ZX16(MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    MEM32(0x3020D4) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00015698; /* jg: greater (signed >) */

loc_000155F5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015691; /* je: equal / zero */

loc_000155FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001570A; /* ja: above (unsigned >) */

loc_00015604: ;
    eax = ZX8(MEM8(eax + 0x157CC));
    { uint32_t _jt = MEM32(eax * 4 + 0x15794); /* switch: 14 entries, 14 targets */
    if (_jt == 0x00015612u) goto loc_00015612;
    if (_jt == 0x0001561Cu) goto loc_0001561C;
    if (_jt == 0x00015626u) goto loc_00015626;
    if (_jt == 0x00015630u) goto loc_00015630;
    if (_jt == 0x0001563Au) goto loc_0001563A;
    if (_jt == 0x00015644u) goto loc_00015644;
    if (_jt == 0x0001564Eu) goto loc_0001564E;
    if (_jt == 0x00015658u) goto loc_00015658;
    if (_jt == 0x00015662u) goto loc_00015662;
    if (_jt == 0x0001566Cu) goto loc_0001566C;
    if (_jt == 0x00015676u) goto loc_00015676;
    if (_jt == 0x00015680u) goto loc_00015680;
    if (_jt == 0x0001568Au) goto loc_0001568A;
    if (_jt == 0x0001570Au) goto loc_0001570A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00015612: ;
    PUSH32(esp, 0x00015617u); RECOMP_ABI_CALL(0x000142D0u, sub_000142D0); /* call 0x000142D0 */

loc_00015617: ;
    goto loc_0001570A;

loc_0001561C: ;
    PUSH32(esp, 0x00015621u); RECOMP_ABI_CALL(0x000142F0u, sub_000142F0); /* call 0x000142F0 */

loc_00015621: ;
    goto loc_0001570A;

loc_00015626: ;
    PUSH32(esp, 0x0001562Bu); RECOMP_ABI_CALL(0x00014320u, sub_00014320); /* call 0x00014320 */

loc_0001562B: ;
    goto loc_0001570A;

loc_00015630: ;
    PUSH32(esp, 0x00015635u); RECOMP_ABI_CALL(0x00015240u, sub_00015240); /* call 0x00015240 */

loc_00015635: ;
    goto loc_0001570A;

loc_0001563A: ;
    PUSH32(esp, 0x0001563Fu); RECOMP_ABI_CALL(0x000144C0u, sub_000144C0); /* call 0x000144C0 */

loc_0001563F: ;
    goto loc_0001570A;

loc_00015644: ;
    PUSH32(esp, 0x00015649u); RECOMP_ABI_CALL(0x000145D0u, sub_000145D0); /* call 0x000145D0 */

loc_00015649: ;
    goto loc_0001570A;

loc_0001564E: ;
    PUSH32(esp, 0x00015653u); RECOMP_ABI_CALL(0x00014710u, sub_00014710); /* call 0x00014710 */

loc_00015653: ;
    goto loc_0001570A;

loc_00015658: ;
    PUSH32(esp, 0x0001565Du); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0001565D: ;
    goto loc_0001570A;

loc_00015662: ;
    PUSH32(esp, 0x00015667u); RECOMP_ABI_CALL(0x00014950u, sub_00014950); /* call 0x00014950 */

loc_00015667: ;
    goto loc_0001570A;

loc_0001566C: ;
    PUSH32(esp, 0x00015671u); RECOMP_ABI_CALL(0x00014A00u, sub_00014A00); /* call 0x00014A00 */

loc_00015671: ;
    goto loc_0001570A;

loc_00015676: ;
    PUSH32(esp, 0x0001567Bu); RECOMP_ABI_CALL(0x00014430u, sub_00014430); /* call 0x00014430 */

loc_0001567B: ;
    goto loc_0001570A;

loc_00015680: ;
    PUSH32(esp, 0x00015685u); RECOMP_ABI_CALL(0x00015540u, sub_00015540); /* call 0x00015540 */

loc_00015685: ;
    goto loc_0001570A;

loc_0001568A: ;
    PUSH32(esp, 0x0001568Fu); RECOMP_ABI_CALL(0x00014410u, sub_00014410); /* call 0x00014410 */

loc_0001568F: ;
    goto loc_0001570A;

loc_00015691: ;
    PUSH32(esp, 0x00015696u); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00015696: ;
    goto loc_0001570A;

loc_00015698: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001570A; /* jg: greater (signed >) */

loc_0001569F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015705; /* je: equal / zero */

loc_000156A1: ;
    _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFDAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001570A; /* ja: above (unsigned >) */

loc_000156A9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x157F4); /* switch: 14 entries, 12 targets */
    if (_jt == 0x000156B0u) goto loc_000156B0;
    if (_jt == 0x000156B7u) goto loc_000156B7;
    if (_jt == 0x000156BEu) goto loc_000156BE;
    if (_jt == 0x000156C5u) goto loc_000156C5;
    if (_jt == 0x000156CCu) goto loc_000156CC;
    if (_jt == 0x000156D3u) goto loc_000156D3;
    if (_jt == 0x000156DAu) goto loc_000156DA;
    if (_jt == 0x000156E1u) goto loc_000156E1;
    if (_jt == 0x000156E8u) goto loc_000156E8;
    if (_jt == 0x000156EFu) goto loc_000156EF;
    if (_jt == 0x000156F6u) goto loc_000156F6;
    if (_jt == 0x0001570Au) goto loc_0001570A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000156B0: ;
    PUSH32(esp, 0x000156B5u); RECOMP_ABI_CALL(0x000149D0u, sub_000149D0); /* call 0x000149D0 */

loc_000156B5: ;
    goto loc_0001570A;

loc_000156B7: ;
    PUSH32(esp, 0x000156BCu); RECOMP_ABI_CALL(0x00014A90u, sub_00014A90); /* call 0x00014A90 */

loc_000156BC: ;
    goto loc_0001570A;

loc_000156BE: ;
    PUSH32(esp, 0x000156C3u); RECOMP_ABI_CALL(0x00014B00u, sub_00014B00); /* call 0x00014B00 */

loc_000156C3: ;
    goto loc_0001570A;

loc_000156C5: ;
    PUSH32(esp, 0x000156CAu); RECOMP_ABI_CALL(0x00014B30u, sub_00014B30); /* call 0x00014B30 */

loc_000156CA: ;
    goto loc_0001570A;

loc_000156CC: ;
    PUSH32(esp, 0x000156D1u); RECOMP_ABI_CALL(0x00014BA0u, sub_00014BA0); /* call 0x00014BA0 */

loc_000156D1: ;
    goto loc_0001570A;

loc_000156D3: ;
    PUSH32(esp, 0x000156D8u); RECOMP_ABI_CALL(0x00014BE0u, sub_00014BE0); /* call 0x00014BE0 */

loc_000156D8: ;
    goto loc_0001570A;

loc_000156DA: ;
    PUSH32(esp, 0x000156DFu); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_000156DF: ;
    goto loc_0001570A;

loc_000156E1: ;
    PUSH32(esp, 0x000156E6u); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_000156E6: ;
    goto loc_0001570A;

loc_000156E8: ;
    PUSH32(esp, 0x000156EDu); RECOMP_ABI_CALL(0x00014C00u, sub_00014C00); /* call 0x00014C00 */

loc_000156ED: ;
    goto loc_0001570A;

loc_000156EF: ;
    PUSH32(esp, 0x000156F4u); RECOMP_ABI_CALL(0x000154C0u, sub_000154C0); /* call 0x000154C0 */

loc_000156F4: ;
    goto loc_0001570A;

loc_000156F6: ;
    ecx = ZX8(MEM8(0x301FB0));
    MEM8(ecx + 0x3020E8) = LO8(ebx);
    goto loc_0001570A;

loc_00015705: ;
    PUSH32(esp, 0x0001570Au); RECOMP_ABI_CALL(0x00014C60u, sub_00014C60); /* call 0x00014C60 */

loc_0001570A: ;
    _fa = (uint32_t)(MEM8(0x30223E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30223E), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001574D; /* jne: not equal / not zero */

loc_00015713: ;
    edx = MEM32(0x301E58);
    ecx = MEM32(esi + edx + 4);
    SET_LO8(eax, MEM8(0x302398));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3020D4) = ecx;
    MEM8(0x30223E) = LO8(ebx);
    MEM16(0x301E3C) = LO16(ebx);
    MEM16(0x3020F8) = LO16(ebx);
    MEM8(0x301FB1) = 1;
    MEM8(0x301E62) = LO8(eax);
    goto loc_0001575C;

loc_0001574D: ;
    _fa = (uint32_t)(MEM8(0x3020D2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3020D2), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015767; /* je: equal / zero */

loc_00015756: ;
    ecx = MEM32(0x3020D4);

loc_0001575C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000155E0; /* jne: not equal / not zero */

loc_00015764: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00015767: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x302130));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015791; /* jge: greater or equal (signed >=) */

loc_00015779: ;
    SET_LO8(ebx, MEM8(0x3025C2));
    edx = SX8(LO8(ecx));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + eax * 4 + 0x301F88) = LO8(ebx);
    MEM8(eax + 0x302130) = LO8(ecx);

loc_00015791: ;
    POP32(esp, esi);

loc_00015792: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015830
 * Original: 0x00015830 - 0x000158C1 (145 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015830: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    SET_LO8(eax, MEM8(0x301FB0));
    edx = ZX8(LO8(eax));
    if (CMP_L(_fas, _fbs)) goto loc_0001584A; /* jl: less (signed <) */

loc_00015841: ;
    MEM8(edx + 0x302248) = 1;
    goto loc_00015851;

loc_0001584A: ;
    MEM8(edx + 0x302248) = 0;

loc_00015851: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx * 4;
    ecx = MEM32(0x301E6C);
    if (CMP_EQ(_fa, _fb)) goto loc_00015869; /* je: equal / zero */

loc_00015863: ;
    ecx = MEM32(0x301F7C);

loc_00015869: ;
    edx = MEM32(esi + ecx);
    PUSH32(esp, eax);
    MEM32(0x301E58) = edx;
    PUSH32(esp, 0x00015878u); RECOMP_ABI_CALL(0x00015590u, sub_00015590); /* call 0x00015590 */

loc_00015878: ;
    SET_LO8(ecx, MEM8(0x301FB0));
    SET_LO8(edx, MEM8(0x3025C2));
    eax = ZX8(LO8(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    MEM8(eax + 0x301DD8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000158BF; /* jne: not equal / not zero */

loc_00015896: ;
    MEM8(eax + 0x302248) = 0;
    eax = MEM32(esi + 0x2BB4E8);
    PUSH32(esp, ecx);
    MEM32(0x301E58) = eax;
    PUSH32(esp, 0x000158AEu); RECOMP_ABI_CALL(0x00015590u, sub_00015590); /* call 0x00015590 */

loc_000158AE: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x301DD8) = 1;

loc_000158BF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000158D0
 * Original: 0x000158D0 - 0x0001592A (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000158D0: ;
    SET_LO8(eax, MEM8(0x301FB0));
    ecx = MEM32(0x301E6C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_000158ED; /* je: equal / zero */

loc_000158E7: ;
    ecx = MEM32(0x301F7C);

loc_000158ED: ;
    edx = MEM32(esi + ecx);
    PUSH32(esp, eax);
    MEM32(0x301E58) = edx;
    PUSH32(esp, 0x000158FCu); RECOMP_ABI_CALL(0x00015590u, sub_00015590); /* call 0x00015590 */

loc_000158FC: ;
    SET_LO8(eax, MEM8(0x3025C2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015928; /* jne: not equal / not zero */

loc_00015908: ;
    eax = MEM32(esi + 0x2BB4E8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x301FB0));
    MEM32(0x301E58) = eax;
    SET_LO8(ecx, LO8(ecx) ^ 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00015590(); return; /* tail jmp 0x00015590 */

loc_00015928: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015930
 * Original: 0x00015930 - 0x0001598E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015930: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(ecx + 0x3B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001597F; /* je: equal / zero */

loc_0001593D: ;
    if (CMP_BE(_fa, _fb)) goto loc_00015989; /* jbe: below or equal (unsigned <=) */

loc_0001593F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00015989; /* ja: above (unsigned >) */

loc_00015943: ;
    eax = ZX8(MEM8(ecx + 0x3D));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00015970; /* je: equal / zero */

loc_0001594C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00015961; /* je: equal / zero */

loc_0001594F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00015989; /* jne: not equal / not zero */

loc_00015952: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00015959u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015959: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000148D0(); return; /* tail jmp 0x000148D0 */

loc_00015961: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00015968u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015968: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000148D0(); return; /* tail jmp 0x000148D0 */

loc_00015970: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00015977u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015977: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000148D0(); return; /* tail jmp 0x000148D0 */

loc_0001597F: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00015986u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015989: ;
    g_seh_ebp = ebp; sub_000148D0(); return; /* tail jmp 0x000148D0 */

}

/**
 * sub_00015990
 * Original: 0x00015990 - 0x00015A3E (174 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015990: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(esi + 0x3025C0));
    PUSH32(esp, edi);
    edi = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000159B1; /* je: equal / zero */

loc_000159AC: ;
    PUSH32(esp, 0x000159B1u); RECOMP_ABI_CALL(0x00013DF0u, sub_00013DF0); /* call 0x00013DF0 */

loc_000159B1: ;
    eax = ZX8(MEM8(esi + 0x3020D0));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00015A1A; /* je: equal / zero */

loc_000159BD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00015A3B; /* jne: not equal / not zero */

loc_000159C0: ;
    SET_LO8(eax, MEM8(edi + 0x2F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(edi + 0x31));
    if (CMP_NE(_fa, _fb)) goto loc_000159D6; /* jne: not equal / not zero */

loc_000159CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000159D2; /* jne: not equal / not zero */

loc_000159CE: ;
    PUSH32(esp, 0xB);
    goto loc_000159E0;

loc_000159D2: ;
    PUSH32(esp, 0xC);
    goto loc_000159E0;

loc_000159D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000159DE; /* jne: not equal / not zero */

loc_000159DA: ;
    PUSH32(esp, 0xD);
    goto loc_000159E0;

loc_000159DE: ;
    PUSH32(esp, 0xE);

loc_000159E0: ;
    PUSH32(esp, 0x000159E5u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_000159E5: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x302130));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015A00; /* je: equal / zero */

loc_000159F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000148D0(); return; /* tail jmp 0x000148D0 */

loc_00015A00: ;
    MEM16(eax * 2 + 0x301E5C) = MEM16(eax * 2 + 0x301E5C) - 1;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x301E5C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 2 + 0x301E5C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x301E5C), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015A3B; /* jge: greater or equal (signed >=) */

loc_00015A13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00013F90(); return; /* tail jmp 0x00013F90 */

loc_00015A1A: ;
    PUSH32(esp, 0x00015A1Fu); RECOMP_ABI_CALL(0x00013F50u, sub_00013F50); /* call 0x00013F50 */

loc_00015A1F: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x3020F0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x3020F0), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015A3B; /* jg: greater (signed >) */

loc_00015A2A: ;
    MEM16(esi * 2 + 0x301E5C) = 0x14;
    MEM8(esi + 0x3020D0) = 1;

loc_00015A3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015A40
 * Original: 0x00015A40 - 0x00015A4F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015A40: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00015A47u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015A47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000148D0(); return; /* tail jmp 0x000148D0 */

}

/**
 * sub_00015A50
 * Original: 0x00015A50 - 0x00015B90 (320 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015A50: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    edx = MEM32(0x302284);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = ZX8(MEM8(0x3026D8));
    SET_LO8(eax, MEM8(ecx + edx));
    if (CMP_NE(_fa, _fb)) goto loc_00015B3F; /* jne: not equal / not zero */

loc_00015A75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015A8D; /* jne: not equal / not zero */

loc_00015A79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00015A80u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015A80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015A88u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015A88: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015A8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x302398));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015A9Cu); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_00015A9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00015B61; /* ja: above (unsigned >) */

loc_00015AAC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15B6C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00015AB3u) goto loc_00015AB3;
    if (_jt == 0x00015AC7u) goto loc_00015AC7;
    if (_jt == 0x00015ADBu) goto loc_00015ADB;
    if (_jt == 0x00015AEFu) goto loc_00015AEF;
    if (_jt == 0x00015B03u) goto loc_00015B03;
    if (_jt == 0x00015B17u) goto loc_00015B17;
    if (_jt == 0x00015B2Bu) goto loc_00015B2B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00015AB3: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x00015ABAu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015ABA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015AC2u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015AC2: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015AC7: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00015ACEu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015ACE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015AD6u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015AD6: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015ADB: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00015AE2u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015AE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015AEAu); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015AEA: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015AEF: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x00015AF6u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015AF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015AFEu); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015AFE: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015B03: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x00015B0Au); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015B0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015B12u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015B12: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015B17: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x00015B1Eu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015B1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015B26u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015B26: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015B2B: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00015B32u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015B32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015B3Au); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015B3A: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015B3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015B57; /* jne: not equal / not zero */

loc_00015B43: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00015B4Au); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015B4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015B52u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015B52: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

loc_00015B57: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00015B5Eu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015B5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015B61: ;
    PUSH32(esp, 0x00015B66u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015B66: ;
    g_seh_ebp = ebp; sub_00013D60(); return; /* tail jmp 0x00013D60 */

    /* nop */
    SET_LO8(ebx, 0x5A);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00015B90(); return; /* fallthrough 0x00015B90 */

}

/**
 * sub_00015B90
 * Original: 0x00015B90 - 0x00015DEF (607 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x301F98));
    SET_LO8(ecx, MEM8(0x3026D8));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x302398));
    MEM8(esp + 7) = LO8(eax);
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(edx, MEM8(eax + 0x3026C0));
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    MEM8(eax + 0x301E60) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x301E48));
    PUSH32(esp, edi);
    edi = MEM32(0x302284);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x3026C0) = LO8(edx);
    MEM8(esp + 0xC) = 0;
    MEM8(0x30225A) = 1;
    MEM8(esp + 0xD) = LO8(ebx);
    MEM8(esp + 0xE) = LO8(ecx);
    MEM8(eax + 0x301E48) = 0;
    edx = 1;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, ebp);
    /* nop */

loc_00015C00: ;
    ebp = esi;
    ebp = ebp & 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi + ebp)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ebp), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015C34; /* jne: not equal / not zero */

loc_00015C0B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015C00; /* jle: less or equal (signed <=) */

loc_00015C12: ;
    esi = MEM32(esp + 0x14);
    edx = 1;
    goto loc_00015C20;

    /* nop */

loc_00015C20: ;
    ebp = esi;
    ebp = ebp & 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi + ebp)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ebp), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015C74; /* jne: not equal / not zero */

loc_00015C2B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015C20; /* jle: less or equal (signed <=) */

loc_00015C32: ;
    goto loc_00015CA0;

loc_00015C34: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x3026D8) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x301F98));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax + 0x3025C0)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3025C0), 7 (8-bit) */
    MEM8(0x301F98) = LO8(ecx);
    MEM8(0x302398) = LO8(ebx);
    SET_LO8(ecx, 2);
    if (CMP_NE(_fa, _fb)) goto loc_00015CA4; /* jne: not equal / not zero */

loc_00015C66: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015CA4; /* jg: greater (signed >) */

loc_00015C6B: ;
    MEM8(0x30225A) = 0;
    goto loc_00015CA4;

loc_00015C74: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x3026D8) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x301F98));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x302398) = LO8(ebx);
    MEM8(0x301F98) = LO8(ecx);
    MEM8(esp + 0x10) = 1;

loc_00015CA0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));

loc_00015CA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(0x3025C2) = 0xFF;
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00015DCB; /* je: equal / zero */

loc_00015CB4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    if (CMP_NE(_fa, _fb)) goto loc_00015D02; /* jne: not equal / not zero */

loc_00015CBF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CFE; /* jne: not equal / not zero */

loc_00015CC3: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015CCBu); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_00015CCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00015DCB; /* ja: above (unsigned >) */

loc_00015CDB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15DF0); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00015CE2u) goto loc_00015CE2;
    if (_jt == 0x00015CE6u) goto loc_00015CE6;
    if (_jt == 0x00015CEAu) goto loc_00015CEA;
    if (_jt == 0x00015CEEu) goto loc_00015CEE;
    if (_jt == 0x00015CF2u) goto loc_00015CF2;
    if (_jt == 0x00015CF6u) goto loc_00015CF6;
    if (_jt == 0x00015CFAu) goto loc_00015CFA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00015CE2: ;
    PUSH32(esp, 0x12);
    goto loc_00015D0C;

loc_00015CE6: ;
    PUSH32(esp, 0x13);
    goto loc_00015D0C;

loc_00015CEA: ;
    PUSH32(esp, 0x14);
    goto loc_00015D0C;

loc_00015CEE: ;
    PUSH32(esp, 0x15);
    goto loc_00015D0C;

loc_00015CF2: ;
    PUSH32(esp, 0x16);
    goto loc_00015D0C;

loc_00015CF6: ;
    PUSH32(esp, 0x17);
    goto loc_00015D0C;

loc_00015CFA: ;
    PUSH32(esp, 0x18);
    goto loc_00015D0C;

loc_00015CFE: ;
    PUSH32(esp, 3);
    goto loc_00015D0C;

loc_00015D02: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D0A; /* jne: not equal / not zero */

loc_00015D06: ;
    PUSH32(esp, 0);
    goto loc_00015D0C;

loc_00015D0A: ;
    PUSH32(esp, 2);

loc_00015D0C: ;
    PUSH32(esp, 0x00015D11u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015D11: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x3025C2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DCB; /* je: equal / zero */

loc_00015D25: ;
    eax = ZX8(MEM8(0x301FB0));
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM8(eax + 0x3020B8) = LO8(ecx);
    MEM16(eax * 2 + 0x301F94) = LO16(esi);
    PUSH32(esp, 0x00015D43u); RECOMP_ABI_CALL(0x00057150u, sub_00057150); /* call 0x00057150 */

loc_00015D43: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x301E48) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x3025C2));
    if (CMP_NE(_fa, _fb)) goto loc_00015D92; /* jne: not equal / not zero */

loc_00015D5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D92; /* je: equal / zero */

loc_00015D60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D92; /* je: equal / zero */

loc_00015D64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D92; /* je: equal / zero */

loc_00015D68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x11 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D92; /* je: equal / zero */

loc_00015D6C: ;
    SET_LO8(edx, MEM8(ecx + 0x302130));
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(0x3025C2) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00015DA2; /* jle: less or equal (signed <=) */

loc_00015D7D: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x302130) = LO8(edx);
    edx = SX8(LO8(edx));
    MEM8(edx + ecx * 4 + 0x301F88) = 0xFF;
    goto loc_00015DA2;

loc_00015D92: ;
    _fa = (uint32_t)(MEM8(ecx + 0x301E48)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x301E48), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015DA2; /* jne: not equal / not zero */

loc_00015D9B: ;
    MEM8(ecx + 0x30223C) = 1;

loc_00015DA2: ;
    _fa = (uint32_t)(MEM8(0x301E3A)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301E3A), 2 (8-bit) */
    MEM8(ecx + 0x3020B8) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x301E48));
    MEM16(ecx * 2 + 0x301F94) = LO16(esi);
    MEM8(ecx + 0x3026C0) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00015DCB; /* je: equal / zero */

loc_00015DC5: ;
    MEM8(ecx + 0x301E60) = LO8(eax);

loc_00015DCB: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    SET_LO8(ecx, MEM8(esp + 0xE));
    SET_LO8(edx, MEM8(esp + 0xF));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x302398) = LO8(eax);
    MEM8(0x3026D8) = LO8(ecx);
    MEM8(0x301F98) = LO8(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015E10
 * Original: 0x00015E10 - 0x0001629E (1166 bytes, 311 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015E10: ;
    eax = MEM32(0x301FA0);
    PUSH32(esp, ebx);
    MEM8(0x30225A) = 0;
    MEM8(eax + 0x3A) = 0;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(edx + 0x3025C0));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E5E; /* je: equal / zero */

loc_00015E3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015E45; /* jb: below (unsigned <) */

loc_00015E41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015E4D; /* jbe: below or equal (unsigned <=) */

loc_00015E45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E4D; /* je: equal / zero */

loc_00015E49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E5E; /* jne: not equal / not zero */

loc_00015E4D: ;
    PUSH32(esp, 0x00015E52u); RECOMP_ABI_CALL(0x00013C20u, sub_00013C20); /* call 0x00013C20 */

loc_00015E52: ;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEM8(ecx + 0x30D9CC) = 0xFF;

loc_00015E5E: ;
    SET_LO8(eax, MEM8(edx + 0x302130));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015E6E; /* jg: greater (signed >) */

loc_00015E68: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E7F; /* je: equal / zero */

loc_00015E6E: ;
    SET_LO8(eax, MEM8(edx + 0x301E48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E88; /* jne: not equal / not zero */

loc_00015E78: ;
    SET_LO8(eax, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E88; /* je: equal / zero */

loc_00015E7F: ;
    SET_LO8(eax, MEM8(edi + 0x2D));
    MEM8(edx + 0x301E48) = LO8(eax);

loc_00015E88: ;
    SET_LO8(eax, MEM8(edx + 0x301E48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x3026C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x3026C0) (8-bit) */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00015E9F; /* je: equal / zero */

loc_00015E9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EB6; /* je: equal / zero */

loc_00015E9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EA7; /* je: equal / zero */

loc_00015EA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015EDA; /* jne: not equal / not zero */

loc_00015EA7: ;
    SET_LO8(eax, MEM8(edi + 0x41));
    _fa = (uint32_t)(MEM8(edx + 0x3026E4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x3026E4), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EDA; /* je: equal / zero */

loc_00015EB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015EDA; /* jne: not equal / not zero */

loc_00015EB6: ;
    MEM8(edx + 0x3020B8) = 0xFF;
    PUSH32(esp, 0x00015EC2u); RECOMP_ABI_CALL(0x00015B90u, sub_00015B90); /* call 0x00015B90 */

loc_00015EC2: ;
    PUSH32(esp, 0x00015EC7u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015EC7: ;
    edi = MEM32(0x301FA0);
    MEM8(0x3025C2) = 0xFF;
    MEM8(0x301E70) = LO8(ebx);

loc_00015EDA: ;
    esi = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(esi + 0x301E48));
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00016293; /* ja: above (unsigned >) */

loc_00015EF3: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x162A0); /* switch: 23 entries, 20 targets */
    if (_jt == 0x00015EFAu) goto loc_00015EFA;
    if (_jt == 0x00015F37u) goto loc_00015F37;
    if (_jt == 0x00015F98u) goto loc_00015F98;
    if (_jt == 0x00015FC4u) goto loc_00015FC4;
    if (_jt == 0x00015FCBu) goto loc_00015FCB;
    if (_jt == 0x00015FD2u) goto loc_00015FD2;
    if (_jt == 0x00015FD9u) goto loc_00015FD9;
    if (_jt == 0x00015FE0u) goto loc_00015FE0;
    if (_jt == 0x00015FE7u) goto loc_00015FE7;
    if (_jt == 0x00015FEEu) goto loc_00015FEE;
    if (_jt == 0x00016042u) goto loc_00016042;
    if (_jt == 0x000160EAu) goto loc_000160EA;
    if (_jt == 0x000160FFu) goto loc_000160FF;
    if (_jt == 0x00016128u) goto loc_00016128;
    if (_jt == 0x00016138u) goto loc_00016138;
    if (_jt == 0x00016166u) goto loc_00016166;
    if (_jt == 0x00016225u) goto loc_00016225;
    if (_jt == 0x00016235u) goto loc_00016235;
    if (_jt == 0x0001625Au) goto loc_0001625A;
    if (_jt == 0x0001628Eu) goto loc_0001628E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00015EFA: ;
    PUSH32(esp, 0x00015EFFu); RECOMP_ABI_CALL(0x00015A50u, sub_00015A50); /* call 0x00015A50 */

loc_00015EFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3025C2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016293; /* je: equal / zero */

loc_00015F0E: ;
    ecx = ZX8(MEM8(0x301FB0));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015F1Cu); RECOMP_ABI_CALL(0x00057150u, sub_00057150); /* call 0x00057150 */

loc_00015F1C: ;
    edx = ZX8(MEM8(0x301FB0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx + 0x301E48) = LO8(eax);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00015F37: ;
    _fa = (uint32_t)(MEM8(esi + 0x30223C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30223C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00015F43: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x3026C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x3026C0) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00015F4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x301E60)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x301E60) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00015F5B: ;
    eax = ZX8(MEM8(0x3026D8));
    ecx = MEM32(0x302284);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001628E; /* je: equal / zero */

loc_00015F72: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x302398));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015F81u); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_00015F81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001628E; /* ja: above (unsigned >) */

loc_00015F91: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x162E0); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00015F98u) goto loc_00015F98;
    if (_jt == 0x00015FC4u) goto loc_00015FC4;
    if (_jt == 0x00015FCBu) goto loc_00015FCB;
    if (_jt == 0x00015FD2u) goto loc_00015FD2;
    if (_jt == 0x00015FD9u) goto loc_00015FD9;
    if (_jt == 0x00015FE0u) goto loc_00015FE0;
    if (_jt == 0x00015FE7u) goto loc_00015FE7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00015F98: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x00015F9Fu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_00015F9F: ;
    SET_LO8(eax, MEM8(0x3025C2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00015FAF: ;
    PUSH32(esp, 0x00015FB4u); RECOMP_ABI_CALL(0x00013C00u, sub_00013C00); /* call 0x00013C00 */

loc_00015FB4: ;
    PUSH32(esp, 0x00015FB9u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00015FB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00015FC4: ;
    PUSH32(esp, 0x1A);
    goto loc_00016286;

loc_00015FCB: ;
    PUSH32(esp, 0x1B);
    goto loc_00016286;

loc_00015FD2: ;
    PUSH32(esp, 0x1C);
    goto loc_00016286;

loc_00015FD9: ;
    PUSH32(esp, 0x1D);
    goto loc_00016286;

loc_00015FE0: ;
    PUSH32(esp, 0x1E);
    goto loc_00016286;

loc_00015FE7: ;
    PUSH32(esp, 0x1F);
    goto loc_00016286;

loc_00015FEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x3026C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x3026C0) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00015FFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x301E60)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x301E60) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00016006: ;
    eax = ZX8(MEM8(0x3026D8));
    ecx = MEM32(0x302284);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001628E; /* je: equal / zero */

loc_0001601D: ;
    _fa = (uint32_t)(MEM8(esi + 0x302118)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x302118), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00016029: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00016033: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x301F9C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x301F9C), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00016092; /* jg: greater (signed >) */

loc_0001603E: ;
    PUSH32(esp, 5);
    goto loc_000160B4;

loc_00016042: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x3026C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x3026C0) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_0001604E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x301E60)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x301E60) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_0001605A: ;
    eax = ZX8(MEM8(0x3026D8));
    ecx = MEM32(0x302284);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001628E; /* je: equal / zero */

loc_00016071: ;
    _fa = (uint32_t)(MEM8(esi + 0x302118)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x302118), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_0001607D: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_00016087: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x301F9C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x301F9C), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000160B2; /* jle: less or equal (signed <=) */

loc_00016092: ;
    MEM16(esi * 2 + 0x301F9C) = 0x1E;
    MEM8(esi + 0x3020EC) = LO8(ebx);
    PUSH32(esp, 0x000160A7u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_000160A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000160B2: ;
    PUSH32(esp, 6);

loc_000160B4: ;
    PUSH32(esp, 0x000160B9u); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_000160B9: ;
    SET_LO8(eax, MEM8(0x3025C2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001628E; /* jne: not equal / not zero */

loc_000160C9: ;
    edx = ZX8(MEM8(0x301FB0));
    MEM16(edx * 2 + 0x301F9C) = 0x1E;
    PUSH32(esp, 0x000160DFu); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_000160DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000160EA: ;
    _fa = (uint32_t)(MEM8(edi + 0x41)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x41), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001613D; /* je: equal / zero */

loc_000160EF: ;
    PUSH32(esp, 0x000160F4u); RECOMP_ABI_CALL(0x00013D60u, sub_00013D60); /* call 0x00013D60 */

loc_000160F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000160FF: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016293; /* jne: not equal / not zero */

loc_00016109: ;
    _fa = (uint32_t)(MEM8(0x301E70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301E70), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016118; /* jne: not equal / not zero */

loc_00016111: ;
    PUSH32(esp, 7);
    goto loc_00016286;

loc_00016118: ;
    PUSH32(esp, 0x0001611Du); RECOMP_ABI_CALL(0x00015930u, sub_00015930); /* call 0x00015930 */

loc_0001611D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00016128: ;
    PUSH32(esp, 0x0001612Du); RECOMP_ABI_CALL(0x00013D10u, sub_00013D10); /* call 0x00013D10 */

loc_0001612D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00016138: ;
    _fa = (uint32_t)(MEM8(edi + 0x41)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x41), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001614D; /* jne: not equal / not zero */

loc_0001613D: ;
    PUSH32(esp, 0x00016142u); RECOMP_ABI_CALL(0x00015A50u, sub_00015A50); /* call 0x00015A50 */

loc_00016142: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001614D: ;
    _fa = (uint32_t)(MEM8(edi + 0x44)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x44), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016293; /* jne: not equal / not zero */

loc_00016156: ;
    PUSH32(esp, 0x0001615Bu); RECOMP_ABI_CALL(0x000150E0u, sub_000150E0); /* call 0x000150E0 */

loc_0001615B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00016166: ;
    _fa = (uint32_t)(MEM8(edi + 0x2A)) & 0xFFu; _fb = (uint32_t)(0x4E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2A), 0x4E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001618F; /* jne: not equal / not zero */

loc_0001616C: ;
    eax = ZX8(MEM8(0x3026D8));
    ecx = MEM32(0x302284);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016205; /* je: equal / zero */

loc_00016183: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0001618Au); RECOMP_ABI_CALL(0x000158D0u, sub_000158D0); /* call 0x000158D0 */

loc_0001618A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00016205;

loc_0001618F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x302398));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001619Eu); RECOMP_ABI_CALL(0x000144A0u, sub_000144A0); /* call 0x000144A0 */

loc_0001619E: ;
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016205; /* jne: not equal / not zero */

loc_000161A7: ;
    _fa = (uint32_t)(MEM8(esi + 0x302118)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x302118), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016205; /* jne: not equal / not zero */

loc_000161AF: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016205; /* jne: not equal / not zero */

loc_000161B5: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x301F9C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x301F9C), 0 (16-bit) */
    PUSH32(esp, 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_000161E3; /* jle: less or equal (signed <=) */

loc_000161C2: ;
    MEM16(esi * 2 + 0x301F9C) = 0x1E;
    PUSH32(esp, 0x000161D1u); RECOMP_ABI_CALL(0x000158D0u, sub_000158D0); /* call 0x000158D0 */

loc_000161D1: ;
    eax = ZX8(MEM8(0x301FB0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x3020EC) = LO8(ebx);
    goto loc_00016205;

loc_000161E3: ;
    PUSH32(esp, 0x000161E8u); RECOMP_ABI_CALL(0x000158D0u, sub_000158D0); /* call 0x000158D0 */

loc_000161E8: ;
    SET_LO8(eax, MEM8(0x3025C2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016205; /* jne: not equal / not zero */

loc_000161F4: ;
    ecx = ZX8(MEM8(0x301FB0));
    MEM16(ecx * 2 + 0x301F9C) = 0x1E;

loc_00016205: ;
    PUSH32(esp, 0x0001620Au); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_0001620A: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x44)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x44), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016293; /* jne: not equal / not zero */

loc_00016215: ;
    PUSH32(esp, 0x0001621Au); RECOMP_ABI_CALL(0x000150E0u, sub_000150E0); /* call 0x000150E0 */

loc_0001621A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00016225: ;
    PUSH32(esp, 0x0001622Au); RECOMP_ABI_CALL(0x00015990u, sub_00015990); /* call 0x00015990 */

loc_0001622A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00016235: ;
    SET_LO8(eax, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x3025C0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016293; /* je: equal / zero */

loc_00016240: ;
    ecx = MEM32(0x302134);
    SET_LO8(edx, MEM8(ecx + 0x2A));
    POP32(esp, edi);
    MEM8(esi + 0x301F80) = LO8(edx);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001625A: ;
    _fa = (uint32_t)(MEM8(esi + 0x30223C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30223C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016293; /* jne: not equal / not zero */

loc_00016262: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001626Du); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_0001626D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016284; /* jne: not equal / not zero */

loc_00016274: ;
    PUSH32(esp, 0x00016279u); RECOMP_ABI_CALL(0x00015A40u, sub_00015A40); /* call 0x00015A40 */

loc_00016279: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00016284: ;
    PUSH32(esp, 0x11);

loc_00016286: ;
    PUSH32(esp, 0x0001628Bu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_0001628B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001628E: ;
    PUSH32(esp, 0x00016293u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00016293: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016283
 * Original: 0x00016283 - 0x0001629E (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016283(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016283: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00016293u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00016293: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x301E70) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016300
 * Original: 0x00016300 - 0x000166AD (941 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016300: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x3322B0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3322B0), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x3025BC) = 0x2BB74C;
    if (CMP_NE(_fa, _fb)) goto loc_00016568; /* jne: not equal / not zero */

loc_0001631C: ;
    SET_LO8(eax, MEM8(0x3252AA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163BB; /* je: equal / zero */

loc_00016329: ;
    SET_LO8(eax, MEM8(0x3252B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163BB; /* je: equal / zero */

loc_00016336: ;
    SET_LO8(eax, MEM8(0x32B3A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016375; /* jne: not equal / not zero */

loc_0001633F: ;
    eax = MEM32(0x30739C);
    _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(0x3020BC) = eax;
    PUSH32(esp, 0x00016358u); RECOMP_ABI_CALL(0x00014D80u, sub_00014D80); /* call 0x00014D80 */

loc_00016358: ;
    eax = MEM32(0x3074A4);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(0x302268) = eax;
    PUSH32(esp, 0x0001636Cu); RECOMP_ABI_CALL(0x00014E20u, sub_00014E20); /* call 0x00014E20 */

loc_0001636C: ;
    MEM8(0x32B3A4) = 1;
    goto loc_000163B8;

loc_00016375: ;
    ecx = MEM32(0x3073A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163BB; /* je: equal / zero */

loc_0001637F: ;
    eax = MEM32(0x3074A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163BB; /* je: equal / zero */

loc_00016388: ;
    eax = MEM32(0x3020BC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(0x3020BC) = eax;
    PUSH32(esp, 0x0001639Eu); RECOMP_ABI_CALL(0x00014ED0u, sub_00014ED0); /* call 0x00014ED0 */

loc_0001639E: ;
    eax = MEM32(0x302268);
    _fb = (uint32_t)(MEM32(0x3074A8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x3074A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(0x302268) = eax;
    PUSH32(esp, 0x000163B8u); RECOMP_ABI_CALL(0x00014F70u, sub_00014F70); /* call 0x00014F70 */

loc_000163B8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000163BB: ;
    SET_LO8(eax, MEM8(0x3252AB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645A; /* je: equal / zero */

loc_000163C8: ;
    SET_LO8(eax, MEM8(0x3252B1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645A; /* je: equal / zero */

loc_000163D5: ;
    SET_LO8(eax, MEM8(0x32B3A5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016414; /* jne: not equal / not zero */

loc_000163DE: ;
    eax = MEM32(0x3073C8);
    _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(0x302100) = eax;
    PUSH32(esp, 0x000163F7u); RECOMP_ABI_CALL(0x00014D80u, sub_00014D80); /* call 0x00014D80 */

loc_000163F7: ;
    eax = MEM32(0x3074D0);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(0x3026C4) = eax;
    PUSH32(esp, 0x0001640Bu); RECOMP_ABI_CALL(0x00014E20u, sub_00014E20); /* call 0x00014E20 */

loc_0001640B: ;
    MEM8(0x32B3A5) = 1;
    goto loc_00016457;

loc_00016414: ;
    ecx = MEM32(0x3073CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645A; /* je: equal / zero */

loc_0001641E: ;
    eax = MEM32(0x3074D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645A; /* je: equal / zero */

loc_00016427: ;
    eax = MEM32(0x302100);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(0x302100) = eax;
    PUSH32(esp, 0x0001643Du); RECOMP_ABI_CALL(0x00014ED0u, sub_00014ED0); /* call 0x00014ED0 */

loc_0001643D: ;
    eax = MEM32(0x3026C4);
    _fb = (uint32_t)(MEM32(0x3074D4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x3074D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(0x3026C4) = eax;
    PUSH32(esp, 0x00016457u); RECOMP_ABI_CALL(0x00014F70u, sub_00014F70); /* call 0x00014F70 */

loc_00016457: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001645A: ;
    SET_LO8(eax, MEM8(0x3252AA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016487; /* jne: not equal / not zero */

loc_00016463: ;
    SET_LO8(eax, MEM8(0x3252B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016487; /* jne: not equal / not zero */

loc_0001646C: ;
    ecx = MEM32(0x302100);
    edx = MEM32(0x3026C4);
    eax = ecx;
    MEM32(0x3020BC) = eax;
    MEM32(0x302268) = edx;
    goto loc_000164BF;

loc_00016487: ;
    SET_LO8(eax, MEM8(0x3252AB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000164B4; /* jne: not equal / not zero */

loc_00016490: ;
    SET_LO8(eax, MEM8(0x3252B1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000164B4; /* jne: not equal / not zero */

loc_00016499: ;
    eax = MEM32(0x3020BC);
    edx = MEM32(0x302268);
    ecx = eax;
    MEM32(0x302100) = ecx;
    MEM32(0x3026C4) = edx;
    goto loc_000164BF;

loc_000164B4: ;
    eax = MEM32(0x3020BC);
    ecx = MEM32(0x302100);

loc_000164BF: ;
    edx = MEM32(eax);
    MEM32(0x301E34) = edx;
    edx = MEM32(ecx);
    MEM32(0x3020C0) = edx;
    edx = MEM32(eax + 4);
    MEM32(0x301E6C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x301F7C) = edx;
    edx = MEM32(eax + 8);
    MEM32(0x302128) = edx;
    edx = MEM32(ecx + 8);
    MEM32(0x3020D8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(0x3023A0) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(0x301E4C) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(0x30224C) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(0x302120) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(0x3026BC) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(0x301FAC) = edx;
    edx = MEM32(0x302268);
    edx = MEM32(edx);
    MEM32(0x3026E8) = edx;
    edx = MEM32(0x3026C4);
    edx = MEM32(edx);
    MEM32(0x302270) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(0x30228C) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(0x3026D4) = edx;
    eax = MEM32(eax + 0x7C);
    MEM32(0x3026CC) = eax;
    ecx = MEM32(ecx + 0x7C);
    MEM32(0x3026D0) = ecx;

loc_00016568: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x3024A9) = 0;
    MEM8(0x30223F) = 0;
    MEM8(0x302398) = 0;
    MEM32(0x30227C) = 0;
    MEM8(0x301FB0) = LO8(ebx);
    MEM32(0x301DDC) = 0x11;
    /* nop */

loc_000165A0: ;
    PUSH32(esp, 0x000165A5u); RECOMP_ABI_CALL(0x00013BE0u, sub_00013BE0); /* call 0x00013BE0 */

loc_000165A5: ;
    PUSH32(esp, 0x000165AAu); RECOMP_ABI_CALL(0x00013C20u, sub_00013C20); /* call 0x00013C20 */

loc_000165AA: ;
    eax = ZX8(LO8(ebx));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEM8(ecx + 0x30D9CC) = 0xFF;
    SET_LO16(edx, MEM16(ecx + 0x30D9C0));
    MEM16(eax * 2 + 0x3020E4) = LO16(edx);
    MEM8(eax + 0x3020B8) = 0xFF;
    MEM8(eax + 0x302238) = 0xFF;
    MEM8(eax + 0x302240) = 0xFF;
    MEM8(eax + 0x302258) = 0xFF;
    MEM8(eax + 0x3025C0) = 0;
    MEM8(eax + 0x3026E0) = 0;
    MEM8(eax + 0x3026E4) = 0;
    MEM8(eax + 0x302254) = 0;
    MEM8(eax + 0x301E48) = 0;
    MEM8(eax + 0x301E60) = 0;
    MEM8(eax + 0x3026C0) = 0;
    MEM8(eax + 0x301DF0) = 0xFF;
    MEM8(eax + 0x3020DC) = 0;
    MEM8(eax + 0x301E38) = 0;
    MEM8(eax + 0x301FA8) = 0;
    MEM8(eax + 0x3026B8) = 0;
    MEM8(eax + 0x30225C) = 0;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + 0x302298;
    edx = eax + 0x301E78;
    esi = eax + 0x301FB8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM8(ecx + 0x10) = LO8(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM8(edx + 0x10) = LO8(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    MEM32(esi + 0xC) = edx;
    MEM8(esi + 0x10) = LO8(edx);
    MEM8(0x301FB0) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_000165A0; /* jb: below (unsigned <) */

loc_00016695: ;
    _fa = (uint32_t)(MEM8(0x306320)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x306320), 4 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x3024B4) = 0xFF;
    MEM8(0x301FB2) = LO8(eax);
    g_seh_ebp = ebp; sub_000166B0(); return; /* tail jmp 0x000166B0 */

}

/**
 * sub_000166B0
 * Original: 0x000166B0 - 0x000167F0 (320 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
/* GEN-EDIT: constant-stack task 166B0/167F0/16AC4. Native recursion is not a guest jump. */
static void task_frame_body_000166B0(uint32_t *next);
static void task_frame_body_000167F0(uint32_t *next);
static void task_frame_body_00016AC4(uint32_t *next);
static void task_frame_cycle(uint32_t entry)
{
    while (entry) {
        uint32_t next = 0;
        switch (entry) {
        case 0x000166B0u: task_frame_body_000166B0(&next); break;
        case 0x000167F0u: task_frame_body_000167F0(&next); break;
        case 0x00016AC4u: task_frame_body_00016AC4(&next); break;
        }
        entry = next;
    }
}
void sub_000166B0(void) { task_frame_cycle(0x000166B0u); }
void sub_000167F0(void) { task_frame_cycle(0x000167F0u); }
void sub_00016AC4(void) { task_frame_cycle(0x00016AC4u); }
static void task_frame_body_000166B0(uint32_t *next)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000166B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000166B7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000166B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x30AAB0) = 0;
    PUSH32(esp, 0x000166C6u); RECOMP_ABI_CALL(0x00015020u, sub_00015020); /* call 0x00015020 */

loc_000166C6: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000166DD; /* je: equal / zero */

loc_000166CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x30AE54) = LO8(ebx);
    goto loc_000166E3;

loc_000166DD: ;
    SET_LO8(ebx, MEM8(0x30AE54));

loc_000166E3: ;
    ecx = MEM32(0x30D9BC);
    edx = MEM32(0x30D9B4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000166F8u); RECOMP_ABI_CALL(0x00013B00u, sub_00013B00); /* call 0x00013B00 */

loc_000166F8: ;
    eax = MEM32(0x30DA14);
    ecx = MEM32(0x30DA0C);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8000)) >> 32) & 1);
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8000)) >> 32) & 1);
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00016717u); RECOMP_ABI_CALL(0x00013B00u, sub_00013B00); /* call 0x00013B00 */

loc_00016717: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016736; /* jne: not equal / not zero */

loc_00016723: ;
    eax = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + edx * 2;
    goto loc_00016759;

loc_00016736: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016753; /* jne: not equal / not zero */

loc_0001673F: ;
    edx = MEM32(0x2BAB04);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xC0)) >> 32) & 1);
    edx = edx + 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x302290) = edx;
    goto loc_00016770;

loc_00016753: ;
    eax = ZX8(LO8(ebx));
    edx = eax + eax * 2;

loc_00016759: ;
    ecx = ZX8(MEM8(0x306320));
    eax = MEM32(ecx * 4 + 0x2BAAF8);
    ecx = eax + edx * 8;
    MEM32(0x302290) = ecx;

loc_00016770: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x301F9C;
    ecx = 0x30D9CD;
    edi = 2;

loc_00016781: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001678D; /* je: equal / zero */

loc_00016788: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001679F; /* jne: not equal / not zero */

loc_0001678D: ;
    _fa = (uint32_t)(MEM8(ecx + -1)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + -1), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001679F; /* je: equal / zero */

loc_00016793: ;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x302118) = 0;

loc_0001679F: ;
    _fa = (uint32_t)(MEM8(eax + 0x30239C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30239C), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000167C8; /* jne: not equal / not zero */

loc_000167A8: ;
    SET_LO8(edx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000167C8; /* jne: not equal / not zero */

loc_000167AF: ;
    SET_LO8(edx, MEM8(ecx + -3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x302258)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x302258) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000167C8; /* jne: not equal / not zero */

loc_000167BA: ;
    MEM8(eax + 0x30223C) = 0;
    MEM8(eax + 0x302118) = 0;

loc_000167C8: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000167D1; /* je: equal / zero */

loc_000167CE: ;
    MEM16(esi) = MEM16(esi) - 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_000167D1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x58)) >> 32) & 1);
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00016781; /* jne: not equal / not zero */

loc_000167DB: ;
    SET_LO16(ebp, MEM16(0x301FA4));
    MEM8(0x301FB0) = 0;
    /* nop */

    g_seh_ebp = ebp; *next = 0x000167F0u; return; /* fallthrough 0x000167F0 */

}

/**
 * sub_000167F0
 * Original: 0x000167F0 - 0x00016AC4 (724 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
static void task_frame_body_000167F0(uint32_t *next)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000167F0: ;
    esi = ZX8(MEM8(0x301FB0));
    edi = MEM32(esi * 4 + 0x30F9B4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x6E9A94));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016810u); RECOMP_ABI_CALL(0x00014C80u, sub_00014C80); /* call 0x00014C80 */

loc_00016810: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x6E9A90));
    SET_LO8(ebx, LO8(eax));
    MEM8(esi + 0x301FA8) = LO8(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016827u); RECOMP_ABI_CALL(0x00014C80u, sub_00014C80); /* call 0x00014C80 */

loc_00016827: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 0x6E9A9C));
    MEM8(esp + 0x1B) = LO8(eax);
    MEM8(esi + 0x301E38) = LO8(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00016840u); RECOMP_ABI_CALL(0x00014C80u, sub_00014C80); /* call 0x00014C80 */

loc_00016840: ;
    MEM8(esi + 0x30225C) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x6E9A98));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016855u); RECOMP_ABI_CALL(0x00014C80u, sub_00014C80); /* call 0x00014C80 */

loc_00016855: ;
    edx = ZX8(MEM8(0x302398));
    ecx = esi;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esi + 0x301E38));
    MEM8(edx + 0x301FB8) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    MEM8(esi + 0x3026B8) = LO8(eax);
    MEM8(edx + 0x301E78) = LO8(eax);
    MEM8(edx + 0x302298) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0001689F; /* je: equal / zero */

loc_0001688B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    SET_LO8(ecx, MEM8(edx + 0x302298));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0x302298) = LO8(ecx);

loc_0001689F: ;
    SET_LO8(eax, MEM8(esi + 0x302258));
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(edx, MEM8(ecx + 0x30D9CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000168CF; /* jne: not equal / not zero */

loc_000168B4: ;
    SET_LO8(eax, MEM8(ecx + 0x30D9CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016966; /* jne: not equal / not zero */

loc_000168C2: ;
    _fa = (uint32_t)(MEM8(ecx + 0x30D9EF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9EF), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016966; /* jne: not equal / not zero */

loc_000168CF: ;
    MEM8(esi + 0x302238) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x3025C0));
    MEM8(ecx + 0x30D9EE) = 0;
    SET_LO8(eax, MEM8(ecx + 0x30D9CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    MEM8(esi + 0x302118) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0001690A; /* je: equal / zero */

loc_000168F3: ;
    _fa = (uint32_t)(MEM8(esi + 0x3020E8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3020E8), 1 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x30223C) = LO8(ebx);
    MEM8(esi + 0x3020E8) = 0;

loc_0001690A: ;
    SET_LO16(edi, MEM16(esi * 2 + 0x30226C));
    MEM16(esi * 2 + 0x301E50) = LO16(edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    MEM8(esi + 0x3020EC) = 0;
    MEM16(esi * 2 + 0x30226C) = LO16(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001693B; /* je: equal / zero */

loc_0001692F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001693B; /* je: equal / zero */

loc_00016933: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001693B; /* je: equal / zero */

loc_00016937: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016968; /* jne: not equal / not zero */

loc_0001693B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001694B; /* je: equal / zero */

loc_0001693F: ;
    MEM16(esi * 2 + 0x301F9C) = 0xF;
    goto loc_00016968;

loc_0001694B: ;
    SET_LO16(edx, 0x10);
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - LO16(ebp));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(esi * 2 + 0x301F9C) = LO16(edx);
    if ((_fas >= 0)) goto loc_00016968; /* jns: not sign (positive) */

loc_0001695C: ;
    MEM16(esi * 2 + 0x301F9C) = LO16(edi);
    goto loc_00016968;

loc_00016966: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016968: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016978; /* je: equal / zero */

loc_0001696C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016978; /* je: equal / zero */

loc_00016970: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A1B; /* jne: not equal / not zero */

loc_00016978: ;
    ecx = ZX8(MEM8(ecx + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x302258)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x302258) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000169C8; /* je: equal / zero */

loc_00016987: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001698Eu); RECOMP_ABI_CALL(0x00057B80u, sub_00057B80); /* call 0x00057B80 */

loc_0001698E: ;
    esi = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(0x3145B0));
    SET_LO8(ecx, MEM8(0x317037));
    SET_LO8(edx, MEM8(0x30D8E8));
    SET_LO16(ebp, MEM16(0x301FA4));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x302264) = LO8(eax);
    MEM8(esi + 0x301E54) = LO8(ecx);
    MEM8(esi + 0x301E40) = LO8(edx);
    MEM8(esi + 0x30212C) = LO8(eax);

loc_000169C8: ;
    SET_LO8(edx, MEM8(esi + 0x302254));
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(eax, MEM8(ecx + 0x30D9D3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A0C; /* je: equal / zero */

loc_000169DD: ;
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00016A00; /* je: equal / zero */

loc_000169E4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000169F2; /* je: equal / zero */

loc_000169E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00016A0C; /* jne: not equal / not zero */

loc_000169EA: ;
    SET_LO8(edx, MEM8(esi + 0x301E40));
    goto loc_00016A06;

loc_000169F2: ;
    SET_LO8(eax, MEM8(esi + 0x301E54));
    MEM8(esi + 0x30212C) = LO8(eax);
    goto loc_00016A0C;

loc_00016A00: ;
    SET_LO8(edx, MEM8(esi + 0x302264));

loc_00016A06: ;
    MEM8(esi + 0x30212C) = LO8(edx);

loc_00016A0C: ;
    SET_LO8(eax, MEM8(0x30AE36));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A1B; /* jne: not equal / not zero */

loc_00016A15: ;
    MEM8(esi + 0x30212C) = MEM8(esi + 0x30212C) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x30212C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00016A1B: ;
    edx = ecx + 0x30D9A0;
    MEM32(0x301FA0) = edx;
    SET_LO8(eax, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A32; /* je: equal / zero */

loc_00016A2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A4E; /* jne: not equal / not zero */

loc_00016A32: ;
    _fa = (uint32_t)(MEM8(edx + 0x35)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x35), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A4E; /* jne: not equal / not zero */

loc_00016A38: ;
    SET_LO8(eax, MEM8(esi + 0x30239C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A45; /* jne: not equal / not zero */

loc_00016A42: ;
    SET_LO16(ebp, 0); /* xor self */
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */

loc_00016A45: ;
    SET_LO16(ebp, LO16(ebp) + 1);
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x301FA4) = LO16(ebp);

loc_00016A4E: ;
    SET_LO8(eax, MEM8(esi + 0x3020DC));
    SET_LO8(edx, MEM8(ecx + 0x30D9CE));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    eax = 0x3E7;
    if (CMP_EQ(_fa, _fb)) goto loc_00016A6E; /* je: equal / zero */

loc_00016A65: ;
    MEM16(esi + 0x3020FC) = LO16(edi);
    goto loc_00016A7E;

loc_00016A6E: ;
    _fa = (uint32_t)(MEM16(esi + 0x3020FC)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x3020FC), LO16(eax) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00016A7E; /* jge: greater or equal (signed >=) */

loc_00016A77: ;
    MEM16(esi + 0x3020FC) = MEM16(esi + 0x3020FC) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x3020FC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00016A7E: ;
    _fa = (uint32_t)(MEM16(esi + 0x301F94)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x301F94), LO16(eax) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00016A8E; /* jge: greater or equal (signed >=) */

loc_00016A87: ;
    MEM16(esi + 0x301F94) = MEM16(esi + 0x301F94) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x301F94)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00016A8E: ;
    SET_LO8(ecx, MEM8(0x30AE36));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016AA8; /* jne: not equal / not zero */

loc_00016A98: ;
    _fa = (uint32_t)(MEM16(esi + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x30226C), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00016AA8; /* jae: above or equal (unsigned >=) */

loc_00016AA1: ;
    MEM16(esi + 0x30226C) = MEM16(esi + 0x30226C) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x30226C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00016AA8: ;
    SET_LO8(eax, MEM8(0x301FB0));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(0x301FB0) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000167F0; /* jb: below (unsigned <) */

loc_00016ABC: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x301FB0) = LO8(ebx);

    g_seh_ebp = ebp; *next = 0x00016AC4u; return; /* fallthrough 0x00016AC4 */

}

/**
 * sub_00016AC4
 * Original: 0x00016AC4 - 0x00016D99 (725 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
static void task_frame_body_00016AC4(uint32_t *next)
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

loc_00016AC4: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(ebx));
    MEM8(0x302110) = LO8(edx);
    ecx = eax;
    edx = ZX8(LO8(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    esi = eax + 0x301FB8;
    MEM32(0x302280) = esi;
    esi = eax + 0x301E78;
    eax = eax + 0x302298;
    MEM32(0x30210C) = eax;
    SET_LO8(eax, MEM8(0x30AE18));
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30D9A0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30D9A0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM32(0x301FA0) = ecx;
    MEM32(0x302134) = edx;
    MEM32(0x302284) = esi;
    MEM8(0x3025C2) = 0xFF;
    if (CMP_EQ(_fa, _fb)) goto loc_00016B43; /* je: equal / zero */

loc_00016B2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B99; /* jne: not equal / not zero */

loc_00016B2F: ;
    _fa = (uint32_t)(MEM8(0x30EDC8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EDC8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B99; /* jne: not equal / not zero */

loc_00016B37: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B99; /* jne: not equal / not zero */

loc_00016B3C: ;
    PUSH32(esp, 0x00016B41u); RECOMP_ABI_CALL(0x00015E10u, sub_00015E10); /* call 0x00015E10 */

loc_00016B41: ;
    goto loc_00016B93;

loc_00016B43: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B4F; /* jne: not equal / not zero */

loc_00016B48: ;
    PUSH32(esp, 0x00016B4Du); RECOMP_ABI_CALL(0x00015E10u, sub_00015E10); /* call 0x00015E10 */

loc_00016B4D: ;
    goto loc_00016B93;

loc_00016B4F: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00016B99; /* jnp: not parity */

loc_00016B61: ;
    _fa = (uint32_t)(MEM8(edx + 0x52)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x52), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B7B; /* jne: not equal / not zero */

loc_00016B67: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016B7B; /* jb: below (unsigned <) */

loc_00016B70: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00016B7B; /* ja: above (unsigned >) */

loc_00016B74: ;
    MEM8(0x3024A9) = 1;

loc_00016B7B: ;
    _fa = (uint32_t)(MEM8(edx + 0x2D)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2D), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B87; /* je: equal / zero */

loc_00016B81: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B8E; /* jne: not equal / not zero */

loc_00016B87: ;
    MEM8(0x3024A9) = 0;

loc_00016B8E: ;
    PUSH32(esp, 0x00016B93u); RECOMP_ABI_CALL(0x00019CF0u, sub_00019CF0); /* call 0x00019CF0 */

loc_00016B93: ;
    SET_LO8(ebx, MEM8(0x301FB0));

loc_00016B99: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x30D9A4;

loc_00016BA0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x29)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x29), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C0D; /* jne: not equal / not zero */

loc_00016BA6: ;
    ebp = ZX8(MEM8(ecx + 0x26));
    edx = esi;
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    eax = ZX8(MEM8(eax + 0x30D9CA));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C0D; /* jne: not equal / not zero */

loc_00016BC0: ;
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00016C04; /* jnp: not parity */

loc_00016BD5: ;
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016C06; /* je: equal / zero */

loc_00016BE0: ;
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00016C04; /* jnp: not parity */

loc_00016BF6: ;
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016C0D; /* jne: not equal / not zero */

loc_00016C02: ;
    goto loc_00016C06;

loc_00016C04: ;
    fp_pop(); /* fstp st(0) */

loc_00016C06: ;
    MEM8(edx + 0x302118) = 0;

loc_00016C0D: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30DA54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30DA54 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016BA0; /* jl: less (signed <) */

loc_00016C19: ;
    SET_LO8(edx, MEM8(0x3025C2));
    ecx = ZX8(LO8(ebx));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    MEM32(0x301DDC) = esi;
    MEM8(ecx + 0x301E68) = LO8(edx);
    MEM8(0x301FB0) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_00016AC4; /* jb: below (unsigned <) */

loc_00016C3F: ;
    SET_LO8(edx, MEM8(0x30D9CD));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C69; /* je: equal / zero */

loc_00016C4E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C69; /* je: equal / zero */

loc_00016C53: ;
    SET_LO8(edx, MEM8(0x30DA25));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C63; /* je: equal / zero */

loc_00016C5E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C6D; /* jne: not equal / not zero */

loc_00016C63: ;
    SET_LO8(ecx, 1);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00016C6D;

loc_00016C69: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);

loc_00016C6D: ;
    SET_LO8(edx, MEM8(0x3020EC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x3020ED)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(0x3020ED) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CA9; /* je: equal / zero */

loc_00016C7B: ;
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(MEM8(ecx + 0x3020EC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x3020EC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C94; /* jne: not equal / not zero */

loc_00016C87: ;
    eax = ZX8(LO8(eax));
    MEM16(eax * 2 + 0x301F9C) = LO16(edi);
    goto loc_00016CA9;

loc_00016C94: ;
    MEM16(ecx * 2 + 0x301F9C) = LO16(edi);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEM8(ecx + 0x30D9CC) = 0xFF;

loc_00016CA9: ;
    MEM8(0x3020EC) = 0;
    MEM8(0x3020ED) = 0;
    ecx = 0x30D9D3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 2;
    MEM8(0x301FB0) = 2;
    /* nop */

loc_00016CD0: ;
    SET_LO8(edx, MEM8(eax + 0x301E68));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CE9; /* je: equal / zero */

loc_00016CDB: ;
    MEM8(eax + 0x3020B8) = LO8(edx);
    MEM16(eax * 2 + 0x301F94) = LO16(edi);

loc_00016CE9: ;
    SET_LO8(edx, MEM8(ecx + -6));
    MEM8(eax + 0x3025C0) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 0x302254) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -9));
    MEM8(eax + 0x302258) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -7));
    MEM8(eax + 0x302240) = LO8(edx);
    SET_LO16(edx, MEM16(ecx + -19));
    MEM16(eax * 2 + 0x3020E4) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 0x3026E4) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 0x30239C) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -5));
    MEM8(eax + 0x3020DC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x11));
    MEM8(eax + 0x3026E0) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x3026C0));
    MEM8(eax + 0x301E60) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x301E48));
    MEM8(eax + 0x3026C0) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00016CD0; /* jne: not equal / not zero */

loc_00016D5F: ;
    SET_LO8(eax, MEM8(0x30D00B));
    SET_LO8(edx, MEM8(0x3026D8));
    SET_LO8(ecx, MEM8(0x30AE18));
    MEM8(0x301E30) = LO8(eax);
    SET_LO8(eax, MEM8(0x302398));
    MEM8(0x3026D8) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x3024B4) = LO8(ecx);
    MEM8(0x301F98) = LO8(edx);
    MEM8(0x302398) = LO8(eax);
    g_seh_ebp = ebp; *next = 0x000166B0u; return; /* tail jmp 0x000166B0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016DA0
 * Original: 0x00016DA0 - 0x00016DE1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016DA0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30D9A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0x34));
    SET_LO8(edx, MEM8(eax + 0x31));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    SET_LO8(ecx, MEM8(esp + 8));
    if (CMP_NE(_fa, _fb)) goto loc_00016DCC; /* jne: not equal / not zero */

loc_00016DBC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016DC5; /* jne: not equal / not zero */

loc_00016DC1: ;
    SET_LO8(ecx, 3);
    goto loc_00016DCC;

loc_00016DC5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016DCC; /* jne: not equal / not zero */

loc_00016DCA: ;
    SET_LO8(ecx, 4);

loc_00016DCC: ;
    eax = ZX8(MEM8(eax + 0x2F));
    ecx = ZX8(LO8(ecx));
    eax = eax + ecx * 2;
    ecx = ZX8(LO8(edx));
    SET_LO8(eax, MEM8(ecx + eax * 2 + 0x2BB6D4));
    esp += 4; return; /* ret */

}

/**
 * sub_00016DF0
 * Original: 0x00016DF0 - 0x00016E09 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DF0(void)
{

loc_00016DF0: ;
    eax = ZX8(MEM8(esp + 4));
    edx = ZX8(MEM8(esp + 8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x30263C);
    eax = MEM32(ecx);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00016E10
 * Original: 0x00016E10 - 0x00016E3B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016E10: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E3A; /* je: equal / zero */

loc_00016E1A: ;
    edx = MEM32(0x301FA0);
    SET_LO8(edx, MEM8(edx + 0x2A));

loc_00016E23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E32; /* je: equal / zero */

loc_00016E27: ;
    SET_LO8(eax, MEM8(ecx + 3));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E23; /* jne: not equal / not zero */

loc_00016E31: ;
    esp += 4; return; /* ret */

loc_00016E32: ;
    SET_LO8(eax, MEM8(ecx + 1));
    MEM8(0x3025C2) = LO8(eax);

loc_00016E3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016E40
 * Original: 0x00016E40 - 0x00016E53 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016E40: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00016E6A(); return; } /* je: equal / zero */

loc_00016E4A: ;
    edx = MEM32(0x302134);
    SET_LO8(edx, MEM8(edx + 0x2A));

    g_seh_ebp = ebp; sub_00016E53(); return; /* fallthrough 0x00016E53 */

}

/**
 * sub_00016E53
 * Original: 0x00016E53 - 0x00016E6A (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016E53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E62; /* je: equal / zero */

loc_00016E57: ;
    SET_LO8(eax, MEM8(ecx + 3));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E53; /* jne: not equal / not zero */

loc_00016E61: ;
    esp += 4; return; /* ret */

loc_00016E62: ;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(0x3025C2) = LO8(eax);

    g_seh_ebp = ebp; sub_00016E6A(); return; /* fallthrough 0x00016E6A */

}

/**
 * sub_00016E6A
 * Original: 0x00016E6A - 0x00016E6B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E6A(void)
{

loc_00016E6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016E70
 * Original: 0x00016E70 - 0x00016EB7 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016E70: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 6) = 1;
    ecx = MEM32(0x3026EC);
    MEM16(ecx + 8) = 0;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE0 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016EA2; /* jb: below (unsigned <) */

loc_00016E8E: ;
    edx = ZX8(LO8(ecx));
    eax = MEM32(edx * 4 + 0x2BB20C);
    ecx = MEM32(0x3026EC);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

loc_00016EA2: ;
    eax = MEM32(0x3026EC);
    edx = MEM32(eax + 0x74);
    edx = MEM32(edx + 8);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(edx + ecx * 4);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00016EC0
 * Original: 0x00016EC0 - 0x00016EE5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016EC0: ;
    eax = MEM32(0x3026EC);
    MEM16(eax + 8) = MEM16(eax + 8) - 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00016EE4; /* jg: greater (signed >) */

loc_00016ED5: ;
    MEM16(eax + 8) = 0;
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 2;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016EE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016EF0
 * Original: 0x00016EF0 - 0x00016EF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016EF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016F00
 * Original: 0x00016F00 - 0x00016F26 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016F00: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016F0F; /* jne: not equal / not zero */

loc_00016F0B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00016F0F: ;
    PUSH32(esp, 0x00016F14u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_00016F14: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX16(LO16(esi));
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_00016F30
 * Original: 0x00016F30 - 0x00016F94 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016F30(void)
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

loc_00016F30: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 6)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016F40u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00016F40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016F93; /* jne: not equal / not zero */

loc_00016F47: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C164)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c164] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016F68; /* jne: not equal / not zero */

loc_00016F5E: ;
    fp_pop(); /* fstp st(0) */
    MEM8(0x3025C2) = 5;
    esp += 4; return; /* ret */

loc_00016F68: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C160)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c160] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016F7F; /* jne: not equal / not zero */

loc_00016F75: ;
    fp_pop(); /* fstp st(0) */
    MEM8(0x3025C2) = 3;
    esp += 4; return; /* ret */

loc_00016F7F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016F93; /* jne: not equal / not zero */

loc_00016F8C: ;
    MEM8(0x3025C2) = 1;

loc_00016F93: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016FA0
 * Original: 0x00016FA0 - 0x00017008 (104 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016FA0(void)
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

loc_00016FA0: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2A)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2A), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016FB3; /* jne: not equal / not zero */

loc_00016FAB: ;
    MEM8(0x3025C2) = 0xFF;
    esp += 4; return; /* ret */

loc_00016FB3: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    SET_LO8(ecx, MEM8(eax + 0x2E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (CMP_NE(_fa, _fb)) goto loc_00016FE7; /* jne: not equal / not zero */

loc_00016FC8: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016FD5; /* jne: not equal / not zero */

loc_00016FCD: ;
    MEM8(0x3025C2) = 1;
    esp += 4; return; /* ret */

loc_00016FD5: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_00016FE7: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016FF4; /* jne: not equal / not zero */

loc_00016FEC: ;
    MEM8(0x3025C2) = 0xB;
    esp += 4; return; /* ret */

loc_00016FF4: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xB) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0xB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017010
 * Original: 0x00017010 - 0x00017167 (343 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017010(void)
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

loc_00017010: ;
    SET_LO8(ecx, MEM8(0x301FB0));
    edx = MEM32(0x30F910);
    eax = ZX8(LO8(ecx));
    eax = eax << 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(0x3025C2));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00017166; /* ja: above (unsigned >) */

loc_00017035: ;
    edx = ZX8(MEM8(edx + 0x17184));
    { uint32_t _jt = MEM32(edx * 4 + 0x17168); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00017043u) goto loc_00017043;
    if (_jt == 0x000170BAu) goto loc_000170BA;
    if (_jt == 0x000170ECu) goto loc_000170EC;
    if (_jt == 0x000170F9u) goto loc_000170F9;
    if (_jt == 0x00017119u) goto loc_00017119;
    if (_jt == 0x00017147u) goto loc_00017147;
    if (_jt == 0x00017166u) goto loc_00017166;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00017043: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2A)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2A), 5 (8-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_00017085; /* jne: not equal / not zero */

loc_00017050: ;
    PUSH32(esp, 0x40133333);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001705Bu); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_0001705B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001715F; /* je: equal / zero */

loc_00017066: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00017166; /* jp: parity */

loc_0001707D: ;
    MEM8(0x3025C2) = 0xFF;
    esp += 4; return; /* ret */

loc_00017085: ;
    PUSH32(esp, 0x3FCCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017090u); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_00017090: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001715F; /* je: equal / zero */

loc_0001709B: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00017166; /* jp: parity */

loc_000170B2: ;
    MEM8(0x3025C2) = 0xFF;
    esp += 4; return; /* ret */

loc_000170BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FCCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000170C6u); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_000170C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000170E4; /* je: equal / zero */

loc_000170CD: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00017166; /* jp: parity */

loc_000170E4: ;
    MEM8(0x3025C2) = 0xA;
    esp += 4; return; /* ret */

loc_000170EC: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FCCCCCD);
    goto loc_00017152;

loc_000170F9: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FCCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001710Au); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_0001710A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017166; /* jne: not equal / not zero */

loc_00017111: ;
    MEM8(0x3025C2) = 0xA;
    esp += 4; return; /* ret */

loc_00017119: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017125u); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_00017125: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001715F; /* je: equal / zero */

loc_0001712C: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C144)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c144] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00017166; /* jp: parity */

loc_0001713F: ;
    MEM8(0x3025C2) = 0xFF;
    esp += 4; return; /* ret */

loc_00017147: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FE66666);

loc_00017152: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017158u); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_00017158: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017166; /* jne: not equal / not zero */

loc_0001715F: ;
    MEM8(0x3025C2) = 0xFF;

loc_00017166: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000171A0
 * Original: 0x000171A0 - 0x0001720F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000171A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000171A0: ;
    ecx = MEM32(0x3026EC);
    SET_LO8(eax, MEM8(ecx + 0x20));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000171CF; /* jne: not equal / not zero */

loc_000171B2: ;
    eax = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(eax + 0xA)));
    SET_LO16(edx, ZX8(MEM8(ecx + 0x21)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001720A; /* jbe: below or equal (unsigned <=) */

loc_000171C9: ;
    MEM8(ecx + 0x21) = 0xFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000171CF: ;
    MEM8(ecx + 0x22) = LO8(eax);
    eax = ZX8(MEM8(0x30ECC0));
    ecx = MEM32(0x3026EC);
    PUSH32(esp, esi);
    esi = 9;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(ecx + 0x21));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    MEM8(ecx + 0x23) = LO8(eax);
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x20) = LO8(ebx);
    edx = MEM32(0x302290);
    SET_LO8(eax, MEM8(edx + 9));
    ecx = MEM32(0x3026EC);

loc_0001720A: ;
    MEM8(ecx + 0x21) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017210
 * Original: 0x00017210 - 0x00017296 (134 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017210: ;
    eax = ZX8(MEM8(esp + 4));
    edx = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00017293; /* ja: above (unsigned >) */

loc_0001721E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x17298); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00017225u) goto loc_00017225;
    if (_jt == 0x0001724Au) goto loc_0001724A;
    if (_jt == 0x0001726Fu) goto loc_0001726F;
    if (_jt == 0x00017282u) goto loc_00017282;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00017225: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017236; /* je: equal / zero */

loc_00017232: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017293; /* jne: not equal / not zero */

loc_00017236: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017242; /* jne: not equal / not zero */

loc_0001723C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017293; /* je: equal / zero */

loc_00017242: ;
    _fa = (uint32_t)(MEM8(ecx + 0x46)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x46), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017293; /* je: equal / zero */

loc_00017247: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0001724A: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001725B; /* je: equal / zero */

loc_00017257: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017293; /* jne: not equal / not zero */

loc_0001725B: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017267; /* jne: not equal / not zero */

loc_00017261: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017293; /* je: equal / zero */

loc_00017267: ;
    _fa = (uint32_t)(MEM8(ecx + 0x46)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x46), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017293; /* jne: not equal / not zero */

loc_0001726C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0001726F: ;
    eax = MEM32(0x302134);
    SET_LO8(eax, MEM8(eax + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001727F; /* je: equal / zero */

loc_0001727B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017293; /* jne: not equal / not zero */

loc_0001727F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00017282: ;
    eax = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017293; /* jne: not equal / not zero */

loc_0001728D: ;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001727F; /* jne: not equal / not zero */

loc_00017293: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000172B0
 * Original: 0x000172B0 - 0x000172FD (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000172B0: ;
    eax = MEM32(0x302134);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000172C2; /* je: equal / zero */

loc_000172BD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000172CE; /* jne: not equal / not zero */

loc_000172C2: ;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000172F5; /* jne: not equal / not zero */

loc_000172C8: ;
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000172F5; /* jne: not equal / not zero */

loc_000172CE: ;
    eax = ZX8(MEM8(eax + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000172F2; /* je: equal / zero */

loc_000172D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000172F2; /* je: equal / zero */

loc_000172DA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000172EF; /* jne: not equal / not zero */

loc_000172DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000172E5u); RECOMP_ABI_CALL(0x000146F0u, sub_000146F0); /* call 0x000146F0 */

loc_000172E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000172EF; /* jne: not equal / not zero */

loc_000172EC: ;
    SET_LO8(eax, 3);
    esp += 4; return; /* ret */

loc_000172EF: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000172F2: ;
    SET_LO8(eax, 2);
    esp += 4; return; /* ret */

loc_000172F5: ;
    _fa = (uint32_t)(MEM8(eax + 0x46)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x46), 3 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00017300
 * Original: 0x00017300 - 0x00017348 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax + 4) = 0;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    SET_LO16(edx, ZX8(MEM8(ecx)));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax + 1) = LO8(edx);
    SET_LO16(edx, ZX8(MEM8(ecx + 1)));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO16(edx, ZX8(MEM8(ecx + 2)));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + 3));
    MEM8(eax + 3) = LO8(edx);
    SET_LO16(ecx, ZX8(MEM8(ecx + 3)));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017350
 * Original: 0x00017350 - 0x0001739B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017350: ;
    ecx = ZX8(MEM8(esp + 8));
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    SET_LO16(esi, ZX8(MEM8(ecx + eax)));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO16(edi, (uint32_t)(int32_t)SMEM8(esp + 0x14));
    edx = edi + esi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001737A; /* jge: greater or equal (signed >=) */

loc_00017370: ;
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) - LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM8(ecx) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001737A: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00017392; /* jle: less or equal (signed <=) */

loc_00017381: ;
    edx = 0xFF;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(ecx) = 0xFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00017392: ;
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(edi);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000173A0
 * Original: 0x000173A0 - 0x0001743C (156 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000173A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000173A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esp + 0x14));
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, ZX8(MEM8(eax)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esp + 0x18));
    MEM16(esp) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esp + 0x1C));
    MEM16(esp + 2) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(eax + 2)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esp + 0x20));
    MEM16(esp + 4) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(eax + 3)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 6) = LO16(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 4) = LO16(ecx);
    /* nop */

loc_00017400: ;
    _fa = (uint32_t)(MEM16(esp + ecx * 2)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + ecx * 2), 1 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001740D; /* jge: greater or equal (signed >=) */

loc_00017407: ;
    MEM16(esp + ecx * 2) = 1;

loc_0001740D: ;
    _fa = (uint32_t)(MEM16(esp + ecx * 2)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + ecx * 2), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001741B; /* jle: less or equal (signed <=) */

loc_00017415: ;
    MEM16(esp + ecx * 2) = 0xFF;

loc_0001741B: ;
    SET_LO8(edx, MEM8(esp + ecx * 2));
    MEM8(ecx + eax) = LO8(edx);
    SET_LO16(edx, ZX8(LO8(edx)));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 4) = MEM16(eax + 4) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017400; /* jl: less (signed <) */

loc_0001742F: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00017438u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00017438: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017440
 * Original: 0x00017440 - 0x0001747D (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO16(esi, ZX8(MEM8(edi)));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017459u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00017459: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(eax) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00017477; /* ja: above (unsigned >) */

loc_00017461: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 4 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00017477; /* jae: above or equal (unsigned >=) */

loc_00017467: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ebx));
    SET_LO16(edx, ZX8(MEM8(ecx + edi)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00017461; /* jbe: below or equal (unsigned <=) */

loc_00017477: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017480
 * Original: 0x00017480 - 0x000174A5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_LO16(ecx, ZX8(MEM8(esi)));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017496u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00017496: ;
    SET_LO16(edx, ZX8(MEM8(esi)));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000174B0
 * Original: 0x000174B0 - 0x000174B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000174B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000174B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000174C0
 * Original: 0x000174C0 - 0x000175F2 (306 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000174C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000174C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x3C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp) = LO16(eax);
    MEM16(esp + 2) = LO16(eax);
    eax = 0x10;
    ecx = 0x40;
    MEM16(esp + 4) = LO16(eax);
    MEM16(esp + 0x1A) = LO16(eax);
    MEM16(esp + 0x1C) = LO16(eax);
    MEM16(esp + 0x22) = LO16(eax);
    eax = MEM32(0x302134);
    edx = 0x30;
    MEM16(esp + 0xA) = LO16(ecx);
    MEM16(esp + 0x14) = LO16(ecx);
    MEM16(esp + 0x28) = LO16(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x33), 2 (8-bit) */
    PUSH32(esp, ebx);
    ebx = 0x80;
    MEM16(esp + 0xA) = 0x20;
    MEM16(esp + 0xC) = LO16(edx);
    MEM16(esp + 0x10) = 0x50;
    MEM16(esp + 0x12) = 0x60;
    MEM16(esp + 0x14) = 0x70;
    MEM16(esp + 0x16) = LO16(ebx);
    MEM16(esp + 0x1A) = LO16(edx);
    MEM16(esp + 0x1C) = 0x20;
    MEM16(esp + 0x22) = 8;
    MEM16(esp + 0x24) = 8;
    MEM16(esp + 0x28) = 0x20;
    MEM16(esp + 0x2A) = LO16(edx);
    MEM16(esp + 0x2E) = 0x50;
    MEM16(esp + 0x30) = 0x60;
    MEM16(esp + 0x32) = LO16(ebx);
    MEM16(esp + 0x34) = 0xA0;
    MEM16(esp + 0x36) = 0xC0;
    MEM16(esp + 0x38) = 0xD0;
    MEM16(esp + 0x3A) = 0xE0;
    MEM16(esp + 0x3C) = 0xF0;
    MEM16(esp + 0x3E) = 0x100;
    if (CMP_NE(_fa, _fb)) goto loc_000175E2; /* jne: not equal / not zero */

loc_000175A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000175E2; /* jne: not equal / not zero */

loc_000175A9: ;
    eax = ZX8(MEM8(0x302110));
    SET_LO8(ebx, MEM8(eax + 0x30212C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x1D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x1D (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000175BD; /* jbe: below or equal (unsigned <=) */

loc_000175BB: ;
    SET_LO8(ebx, 0x1D);

loc_000175BD: ;
    PUSH32(esp, 0x000175C2u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_000175C2: ;
    ecx = ZX8(LO8(ebx));
    edx = ZX16(MEM16(esp + ecx * 2 + 4));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x000175DEu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000175DE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000175E2: ;
    ecx = MEM32(esp + 0x40);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000175EEu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000175EE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017600
 * Original: 0x00017600 - 0x00017618 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017600: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x44));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017615; /* jne: not equal / not zero */

loc_0001760B: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017615; /* jne: not equal / not zero */

loc_00017612: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00017615: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017620
 * Original: 0x00017620 - 0x000176E1 (193 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017620: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    SET_LO8(eax, MEM8(0x301FB2));
    SET_LO8(edx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017672; /* jne: not equal / not zero */

loc_00017638: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_0001763C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_00017640: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_00017644: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_00017648: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_0001764C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_00017650: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_00017654: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001765C; /* je: equal / zero */

loc_00017658: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001768F; /* jne: not equal / not zero */

loc_0001765C: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2E)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2E), LO8(edx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x12) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x12);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(edx);
    esp += 4; return; /* ret */

loc_00017672: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001767A; /* je: equal / zero */

loc_00017676: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001768F; /* jne: not equal / not zero */

loc_0001767A: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2E), LO8(edx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x12) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x12);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(ecx);
    esp += 4; return; /* ret */

loc_0001768F: ;
    ecx = MEM32(0x301FA0);
    MEM8(0x3026C8) = LO8(eax);
    SET_LO8(ecx, MEM8(ecx + 0x2E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000176C1; /* jne: not equal / not zero */

loc_000176A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176B9; /* je: equal / zero */

loc_000176A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176B9; /* je: equal / zero */

loc_000176A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176B9; /* je: equal / zero */

loc_000176AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176B9; /* je: equal / zero */

loc_000176B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176B9; /* je: equal / zero */

loc_000176B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000176E0; /* jne: not equal / not zero */

loc_000176B9: ;
    MEM8(0x3025C2) = 0xFF;
    esp += 4; return; /* ret */

loc_000176C1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000176E0; /* jne: not equal / not zero */

loc_000176C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176D9; /* je: equal / zero */

loc_000176C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176D9; /* je: equal / zero */

loc_000176CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176D9; /* je: equal / zero */

loc_000176D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000176D9; /* je: equal / zero */

loc_000176D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000176E0; /* jne: not equal / not zero */

loc_000176D9: ;
    MEM8(0x3025C2) = 0xA;

loc_000176E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000176F0
 * Original: 0x000176F0 - 0x0001777B (139 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000176F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000176F0: ;
    SET_LO8(ecx, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    _fb = (uint32_t)(0x3025C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3025C8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    SET_LO8(edx, 0xFF);
    MEM16(esi) = LO16(eax);
    MEM8(esi + 2) = LO8(eax);
    MEM8(esi + 6) = LO8(eax);
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = LO8(eax);
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = LO8(eax);
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(edx);
    MEM8(esi + 0x1C) = LO8(eax);
    MEM8(esi + 0x20) = LO8(edx);
    MEM8(esi + 0x21) = LO8(eax);
    MEM8(esi + 0x22) = LO8(edx);
    MEM8(esi + 0x23) = LO8(eax);
    MEM8(esi + 0x24) = LO8(eax);
    MEM8(esi + 0x25) = 0x7F;
    if (CMP_NE(_fa, _fb)) goto loc_00017747; /* jne: not equal / not zero */

loc_0001773D: ;
    eax = MEM32(0x3026E8);
    MEM32(esi + 0x74) = eax;
    goto loc_00017750;

loc_00017747: ;
    ecx = MEM32(0x302270);
    MEM32(esi + 0x74) = ecx;

loc_00017750: ;
    edx = MEM32(esi + 0x74);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x26;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017763u); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_00017763: ;
    edx = MEM32(esi + 0x74);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017776u); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_00017776: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00017780
 * Original: 0x00017780 - 0x0001783F (191 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017780(void)
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

loc_00017780: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C16C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c16c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001783E; /* jp: parity */

loc_00017797: ;
    eax = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(eax + 0x43)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x43), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001783E; /* jne: not equal / not zero */

loc_000177A6: ;
    ecx = MEM32(0x3026EC);
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001783E; /* jne: not equal / not zero */

loc_000177B7: ;
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 0x15)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000177C8u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_000177C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017834; /* jne: not equal / not zero */

loc_000177CF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x301FB0));
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000177E0u); RECOMP_ABI_CALL(0x00016DF0u, sub_00016DF0); /* call 0x00016DF0 */

loc_000177E0: ;
    SET_LO16(edx, ZX8(MEM8(0x30ECC0)));
    esi = eax;
    eax = 7;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000177F9u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_000177F9: ;
    ecx = ZX8(MEM8(0x302110));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx * 2 + 0x3020F0));
    ecx = ZX8(MEM8(esi));
    SET_LO16(edx, (uint32_t)(((int32_t)(int16_t)(LO16(edx))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + edx + 0x14;
    eax = SX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001782B; /* jg: greater (signed >) */

loc_0001781F: ;
    /* nop */

loc_00017820: ;
    edx = ZX8(MEM8(esi + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00017820; /* jle: less or equal (signed <=) */

loc_0001782B: ;
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(0x3025C2) = LO8(eax);
    POP32(esp, esi);

loc_00017834: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x15) = 1;

loc_0001783E: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017840
 * Original: 0x00017840 - 0x00017918 (216 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x301FB0));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017857u); RECOMP_ABI_CALL(0x00016DF0u, sub_00016DF0); /* call 0x00016DF0 */

loc_00017857: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001790E; /* je: equal / zero */

loc_00017864: ;
    edx = ZX8(LO8(ebx));
    ebx = 1;
    _fa = (uint32_t)(MEM16(edx * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 2 + 0x30226C), LO16(ebx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000178D5; /* ja: above (unsigned >) */

loc_00017876: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 0xD)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017886u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00017886: ;
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000178D1; /* jne: not equal / not zero */

loc_00017893: ;
    MEM8(edx + 2) = LO8(ebx);
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 5)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000178A6u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_000178A6: ;
    edx = ZX8(MEM8(0x301FB0));
    ecx = MEM32(0x302290);
    _fb = (uint32_t)(MEM16(edx * 2 + 0x301F9C)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx * 2 + 0x301F9C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(edx, ZX8(MEM8(ecx + 4)));
    ecx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 4) = LO16(eax);
    goto loc_000178D5;

loc_000178D1: ;
    MEM8(edx + 2) = 0;

loc_000178D5: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001790E; /* jne: not equal / not zero */

loc_000178DF: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x302118)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x302118), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017911; /* jne: not equal / not zero */

loc_000178EE: ;
    MEM16(eax + 4) = MEM16(eax + 4) - 1;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001790D; /* jg: greater (signed >) */

loc_00017900: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00017906u); RECOMP_ABI_CALL(0x00016E10u, sub_00016E10); /* call 0x00016E10 */

loc_00017906: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 2) = 0;

loc_0001790D: ;
    POP32(esp, esi);

loc_0001790E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017911: ;
    POP32(esp, edi);
    MEM8(eax + 2) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017920
 * Original: 0x00017920 - 0x000179FA (218 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017920: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x302110));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017934u); RECOMP_ABI_CALL(0x00016DF0u, sub_00016DF0); /* call 0x00016DF0 */

loc_00017934: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000179F1; /* je: equal / zero */

loc_00017941: ;
    edx = ZX8(MEM8(0x301FB0));
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(MEM16(edx * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 2 + 0x30226C), LO16(ebx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000179B7; /* ja: above (unsigned >) */

loc_00017958: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 0xE)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017968u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00017968: ;
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000179B3; /* jne: not equal / not zero */

loc_00017975: ;
    MEM8(edx + 2) = LO8(ebx);
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 5)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017988u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00017988: ;
    edx = ZX8(MEM8(0x302110));
    ecx = MEM32(0x302290);
    _fb = (uint32_t)(MEM16(edx * 2 + 0x301F9C)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx * 2 + 0x301F9C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(edx, ZX8(MEM8(ecx + 4)));
    ecx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 4) = LO16(eax);
    goto loc_000179B7;

loc_000179B3: ;
    MEM8(edx + 2) = 0;

loc_000179B7: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000179F0; /* jne: not equal / not zero */

loc_000179C1: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x302118)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x302118), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000179F3; /* jne: not equal / not zero */

loc_000179D0: ;
    MEM16(eax + 4) = MEM16(eax + 4) - 1;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000179EF; /* jg: greater (signed >) */

loc_000179E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000179E8u); RECOMP_ABI_CALL(0x00016E40u, sub_00016E40); /* call 0x00016E40 */

loc_000179E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 2) = 0;

loc_000179EF: ;
    POP32(esp, esi);

loc_000179F0: ;
    POP32(esp, ebx);

loc_000179F1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000179F3: ;
    POP32(esp, ebx);
    MEM8(eax + 2) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00017A00
 * Original: 0x00017A00 - 0x00017A07 (7 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00017A07(); return; /* fallthrough 0x00017A07 */

}

/**
 * sub_00017A07
 * Original: 0x00017A07 - 0x00017A0C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A07: ;
    ebp = 2;

    g_seh_ebp = ebp; sub_00017A0C(); return; /* fallthrough 0x00017A0C */

}

/**
 * sub_00017A0C
 * Original: 0x00017A0C - 0x00017AF6 (234 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A0C: ;
    esi = MEM32(0x3026EC);

loc_00017A12: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017A1C: ;
    eax = MEM32(esi + 0xC);
    ecx = ZX8(MEM8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00017A12; /* ja: above (unsigned >) */

loc_00017A27: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x18370)); return; /* indirect tail jmp */

    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001808C(); return; } /* jne: not equal / not zero */

loc_00017A38: ;
    SET_LO16(eax, ZX8(MEM8(eax + 1)));
    MEM16(esi + 8) = LO16(eax);
    esi = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001808C(); return; } /* jne: not equal / not zero */

loc_00017A51: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00017A0C;

    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000180CF(); return; } /* jne: not equal / not zero */

loc_00017A60: ;
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017A6Bu); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00017A6B: ;
    edx = MEM32(0x3026EC);
    MEM16(edx + 8) = LO16(eax);
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000180CF(); return; } /* jne: not equal / not zero */

loc_00017A88: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00017A0C;

    ecx = ZX8(MEM8(0x301FB0));
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x30226C), LO16(edx) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jb: below (unsigned <) */

loc_00017AAA: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00017A0C;

    SET_LO16(ecx, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    edi = MEM32(0x301FA0);
    if (CMP_EQ(_fa, _fb)) goto loc_00017AE9; /* je: equal / zero */

loc_00017AC1: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017ACB: ;
    edx = ZX8(MEM8(0x301FB0));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x3025C0) (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* je: equal / zero */

loc_00017AE9: ;
    SET_LO8(edx, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00017B46(); return; } /* jne: not equal / not zero */

loc_00017AF1: ;
    ebp = 2;

    g_seh_ebp = ebp; sub_00017AF6(); return; /* fallthrough 0x00017AF6 */

}

/**
 * sub_00017A12
 * Original: 0x00017A12 - 0x0001836F (2397 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A12: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017A1C: ;
    eax = MEM32(esi + 0xC);
    ecx = ZX8(MEM8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00017A12; /* ja: above (unsigned >) */

loc_00017A27: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x18370)); return; /* indirect tail jmp */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017A2E
 * Original: 0x00017A2E - 0x0001836F (2369 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A2E: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001808C; /* jne: not equal / not zero */

loc_00017A38: ;
    SET_LO16(eax, ZX8(MEM8(eax + 1)));
    MEM16(esi + 8) = LO16(eax);
    esi = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001808C; /* jne: not equal / not zero */

loc_00017A51: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_0001808C: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(edx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180B8; /* jne: not equal / not zero */

loc_0001809C: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180B8; /* jne: not equal / not zero */

loc_000180A7: ;
    _fa = (uint32_t)(MEM8(eax + 0x35)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x35), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180B8; /* jne: not equal / not zero */

loc_000180AD: ;
    PUSH32(esp, 0x000180B2u); RECOMP_ABI_CALL(0x00016EC0u, sub_00016EC0); /* call 0x00016EC0 */

loc_000180B2: ;
    esi = MEM32(0x3026EC);

loc_000180B8: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_000180C6: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017A56
 * Original: 0x00017A56 - 0x0001836F (2329 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A56: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180CF; /* jne: not equal / not zero */

loc_00017A60: ;
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017A6Bu); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00017A6B: ;
    edx = MEM32(0x3026EC);
    MEM16(edx + 8) = LO16(eax);
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180CF; /* jne: not equal / not zero */

loc_00017A88: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_000180CF: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180FB; /* jne: not equal / not zero */

loc_000180DF: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180FB; /* jne: not equal / not zero */

loc_000180EA: ;
    _fa = (uint32_t)(MEM8(eax + 0x35)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x35), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180FB; /* jne: not equal / not zero */

loc_000180F0: ;
    PUSH32(esp, 0x000180F5u); RECOMP_ABI_CALL(0x00016EC0u, sub_00016EC0); /* call 0x00016EC0 */

loc_000180F5: ;
    esi = MEM32(0x3026EC);

loc_000180FB: ;
    edx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_0001810C: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017A90
 * Original: 0x00017A90 - 0x0001836F (2271 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A90: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x30226C), LO16(edx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018369; /* jb: below (unsigned <) */

loc_00017AAA: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017AB2
 * Original: 0x00017AB2 - 0x0001836F (2237 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017AB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017AB2: ;
    SET_LO16(ecx, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    edi = MEM32(0x301FA0);
    if (CMP_EQ(_fa, _fb)) goto loc_00017AE9; /* je: equal / zero */

loc_00017AC1: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017ACB: ;
    edx = ZX8(MEM8(0x301FB0));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x3025C0) (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00018369; /* je: equal / zero */

loc_00017AE9: ;
    SET_LO8(edx, MEM8(edi + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B46; /* jne: not equal / not zero */

loc_00017AF1: ;
    ebp = 2;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3026EC);
    MEM16(eax + 8) = LO16(ebx);
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00017B46: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018239; /* jne: not equal / not zero */

loc_00017B50: ;
    MEM8(esi + 6) = LO8(ebx);
    g_seh_ebp = ebp; sub_00017A07(); return; /* tail jmp 0x00017A07 */

loc_00018239: ;
    POP32(esp, edi);
    MEM16(esi + 8) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017AF6
 * Original: 0x00017AF6 - 0x00017B07 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017AF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017AF6: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3026EC);
    MEM16(eax + 8) = LO16(ebx);
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

}

/**
 * sub_00017B46
 * Original: 0x00017B46 - 0x00017CC1 (379 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017B46: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018239(); return; } /* jne: not equal / not zero */

loc_00017B50: ;
    MEM8(esi + 6) = LO8(ebx);
    g_seh_ebp = ebp; sub_00017A07(); return; /* tail jmp 0x00017A07 */

    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B6C; /* jne: not equal / not zero */

loc_00017B63: ;
    MEM8(esi + 6) = LO8(ebx);
    esi = MEM32(0x3026EC);

loc_00017B6C: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017B7C: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x6EA8A8), 1 (8-bit) */
    goto loc_00017BF8;

    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017B98: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(edx + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x6EA8A8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017BA8: ;
    MEM8(esi + 6) = LO8(ebx);
    goto loc_00017BEA;

    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017BB8u); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017BCC: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6EA8A8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017BDC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017BE7u); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017BE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017BEA: ;
    esi = MEM32(0x3026EC);

loc_00017BF0: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), LO8(ebx) (8-bit) */

loc_00017BF8: ;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017BFE: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C25; /* jne: not equal / not zero */

loc_00017C11: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017C1Cu); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017C1C: ;
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017C25: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017C34: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6EA8A8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017C48: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

    SET_LO16(ecx, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    ebp = MEM32(0x301FA0);
    edx = eax + 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00017C8A; /* je: equal / zero */

loc_00017C62: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_00017C6C: ;
    ecx = ZX8(MEM8(0x301FB0));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(ebp + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x302258)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x302258) (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* je: equal / zero */

loc_00017C8A: ;
    edi = ZX8(MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00017CC1(); return; } /* jle: less or equal (signed <=) */

loc_00017C94: ;
    SET_LO8(eax, MEM8(ebp + 0x2A));

loc_00017C97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017CA5; /* je: equal / zero */

loc_00017C9B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017C97; /* jl: less (signed <) */

loc_00017CA3: ;
    g_seh_ebp = ebp; sub_00017CC1(); return; /* tail jmp 0x00017CC1 */

loc_00017CA5: ;
    edx = ZX8(MEM8(edx + 1));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017CAFu); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017CAF: ;
    eax = MEM32(0x3026EC);
    MEM16(eax + 8) = LO16(ebx);
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00017CC1(); return; /* fallthrough 0x00017CC1 */

}

/**
 * sub_00017B58
 * Original: 0x00017B58 - 0x0001836F (2071 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017B58: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B6C; /* jne: not equal / not zero */

loc_00017B63: ;
    MEM8(esi + 6) = LO8(ebx);
    esi = MEM32(0x3026EC);

loc_00017B6C: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017B7C: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x6EA8A8), 1 (8-bit) */
    goto loc_00017BF8;

loc_00017BF8: ;
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017BFE: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017B8C
 * Original: 0x00017B8C - 0x0001836F (2019 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017B8C: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017B98: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(edx + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x6EA8A8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017BA8: ;
    MEM8(esi + 6) = LO8(ebx);
    goto loc_00017BEA;

loc_00017BEA: ;
    esi = MEM32(0x3026EC);

loc_00017BF0: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017BFE: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017BAD
 * Original: 0x00017BAD - 0x00017BC0 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017BAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017BAD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017BB8u); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

}

/**
 * sub_00017BC0
 * Original: 0x00017BC0 - 0x0001836F (1967 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017BC0: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017BCC: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6EA8A8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BF0; /* jne: not equal / not zero */

loc_00017BDC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017BE7u); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017BE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x3026EC);

loc_00017BF0: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017BFE: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017C06
 * Original: 0x00017C06 - 0x0001836F (1897 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017C06: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C25; /* jne: not equal / not zero */

loc_00017C11: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017C1Cu); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017C1C: ;
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017C25: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017C34: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x6EA8A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6EA8A8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017C48: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017C50
 * Original: 0x00017C50 - 0x0001836F (1823 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017C50: ;
    SET_LO16(ecx, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    ebp = MEM32(0x301FA0);
    edx = eax + 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00017C8A; /* je: equal / zero */

loc_00017C62: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017C6C: ;
    ecx = ZX8(MEM8(0x301FB0));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(ebp + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x302258)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x302258) (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00018369; /* je: equal / zero */

loc_00017C8A: ;
    edi = ZX8(MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00017CC1; /* jle: less or equal (signed <=) */

loc_00017C94: ;
    SET_LO8(eax, MEM8(ebp + 0x2A));

loc_00017C97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017CA5; /* je: equal / zero */

loc_00017C9B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017C97; /* jl: less (signed <) */

loc_00017CA3: ;
    goto loc_00017CC1;

loc_00017CA5: ;
    edx = ZX8(MEM8(edx + 1));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017CAFu); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017CAF: ;
    eax = MEM32(0x3026EC);
    MEM16(eax + 8) = LO16(ebx);
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017CC1: ;
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001833E; /* jne: not equal / not zero */

loc_00017CD0: ;
    MEM8(esi + 6) = LO8(ebx);
    g_seh_ebp = ebp; sub_00017A07(); return; /* tail jmp 0x00017A07 */

loc_0001833E: ;
    POP32(esp, edi);
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017CC1
 * Original: 0x00017CC1 - 0x00017CD8 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017CC1: ;
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001833E(); return; } /* jne: not equal / not zero */

loc_00017CD0: ;
    MEM8(esi + 6) = LO8(ebx);
    g_seh_ebp = ebp; sub_00017A07(); return; /* tail jmp 0x00017A07 */

}

/**
 * sub_00017CD8
 * Original: 0x00017CD8 - 0x00017CFA (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017CD8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x3026EC);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 1));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017CF2u); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_00017CF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

}

/**
 * sub_00017CFA
 * Original: 0x00017CFA - 0x00018115 (1051 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017CFA: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001810C; /* je: equal / zero */

loc_00017D05: ;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x3026EC);
    MEM32(ecx + 0x10) = ebx;
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_0001810C: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017D16
 * Original: 0x00017D16 - 0x0001836F (1625 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017D16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017D16: ;
    edx = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(edx + 0x2A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017D28: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x3026EC);
    MEM16(edx + 8) = LO16(ebx);
    g_seh_ebp = ebp; sub_00017A0C(); return; /* tail jmp 0x00017A0C */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017D3A
 * Original: 0x00017D3A - 0x0001836F (1589 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017D3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017D3A: ;
    ecx = MEM32(0x302134);
    SET_LO8(edx, MEM8(ecx + 0x2A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017D4C: ;
    g_seh_ebp = ebp; sub_00017AF6(); return; /* tail jmp 0x00017AF6 */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017D51
 * Original: 0x00017D51 - 0x0001836F (1566 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017D51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017D51: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017D63: ;
    g_seh_ebp = ebp; sub_00017AF6(); return; /* tail jmp 0x00017AF6 */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017D68
 * Original: 0x00017D68 - 0x0001836F (1543 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017D68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017D68: ;
    ecx = MEM32(0x302134);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017D7A: ;
    g_seh_ebp = ebp; sub_00017AF6(); return; /* tail jmp 0x00017AF6 */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017D7F
 * Original: 0x00017D7F - 0x0001836F (1520 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017D7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017D7F: ;
    PUSH32(esp, 0x00017D84u); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00017D84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017D8C: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x301F84)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x301F84), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017DBA; /* jne: not equal / not zero */

loc_00017D9B: ;
    eax = MEM32(0x3026EC);
    edx = MEM32(eax + 0xC);
    SET_LO8(ecx, MEM8(edx + 1));
    MEM8(0x3025C2) = LO8(ecx);
    ecx = MEM32(eax + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00017DBA: ;
    edx = MEM32(0x3026EC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 6) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017DC9
 * Original: 0x00017DC9 - 0x0001836F (1446 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017DC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017DC9: ;
    PUSH32(esp, 0x00017DCEu); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00017DCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017DD6: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    goto loc_00017FB2;

loc_00017F7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 6) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00017FB2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    eax = MEM32(0x3026EC);
    if (CMP_NE(_fa, _fb)) goto loc_00017F7C; /* jne: not equal / not zero */

loc_00017FBC: ;
    ecx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(ecx + 1));
    POP32(esp, edi);
    MEM8(0x3025C2) = LO8(edx);
    ecx = MEM32(eax + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017DE8
 * Original: 0x00017DE8 - 0x0001836F (1415 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017DE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017DE8: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017DF9; /* jb: below (unsigned <) */

loc_00017DF5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00017DFD; /* jbe: below or equal (unsigned <=) */

loc_00017DF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017E2E; /* jne: not equal / not zero */

loc_00017DFD: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017E2E; /* jne: not equal / not zero */

loc_00017E03: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(edx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017E2E; /* jne: not equal / not zero */

loc_00017E13: ;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(0x3025C2) = LO8(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x3026EC);
    ecx = MEM32(0x301FA0);

loc_00017E2E: ;
    SET_LO8(eax, MEM8(ecx + 0x2D));
    goto loc_00018104;

loc_00018104: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_0001810C: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017E36
 * Original: 0x00017E36 - 0x0001836F (1337 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017E36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017E36: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180FB; /* jne: not equal / not zero */

loc_00017E46: ;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(0x3025C2) = LO8(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000180F5;

loc_000180F5: ;
    esi = MEM32(0x3026EC);

loc_000180FB: ;
    edx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_0001810C: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017E5A
 * Original: 0x00017E5A - 0x00017E74 (26 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017E5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017E5A: ;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(0x3025C2) = LO8(ecx);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017E74
 * Original: 0x00017E74 - 0x0001836F (1275 bytes, 68 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017E74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017E74: ;
    PUSH32(esp, 0x00017E79u); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00017E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017E81: ;
    edx = MEM32(0x3026EC);
    eax = MEM32(edx + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017E95u); RECOMP_ABI_CALL(0x000152D0u, sub_000152D0); /* call 0x000152D0 */

loc_00017E95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    SET_LO8(eax, MEM8(0x301FB0));
    if (CMP_NE(_fa, _fb)) goto loc_00017EF4; /* jne: not equal / not zero */

loc_00017EA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(0x3026EC);
    if (CMP_NE(_fa, _fb)) goto loc_00017ECF; /* jne: not equal / not zero */

loc_00017EAA: ;
    edx = MEM32(eax + 0xC);
    ecx = ZX8(MEM8(edx + 1));
    edx = MEM32(0x30228C);
    SET_LO8(ecx, MEM8(edx + ecx * 2));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00017ECF: ;
    edx = MEM32(eax + 0xC);
    ecx = ZX8(MEM8(edx + 1));
    edx = MEM32(0x3026D4);
    SET_LO8(ecx, MEM8(edx + ecx * 2));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00017EF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(0x3026EC);
    edx = MEM32(eax + 0xC);
    ecx = ZX8(MEM8(edx + 1));
    edx = MEM32(0x30228C);
    if (CMP_EQ(_fa, _fb)) goto loc_00017F10; /* je: equal / zero */

loc_00017F0A: ;
    edx = MEM32(0x3026D4);

loc_00017F10: ;
    SET_LO8(ecx, MEM8(edx + ecx * 2 + 1));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3025C2) = LO8(ecx);
    POP32(esp, ebp);
    MEM8(eax + 6) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017F23
 * Original: 0x00017F23 - 0x0001836F (1100 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017F23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017F23: ;
    PUSH32(esp, 0x00017F28u); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00017F28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = MEM32(0x3026EC);
    if (CMP_NE(_fa, _fb)) goto loc_00017F4F; /* jne: not equal / not zero */

loc_00017F31: ;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017F4F; /* jne: not equal / not zero */

loc_00017F37: ;
    edx = MEM32(eax + 0xC);
    SET_LO8(ecx, MEM8(edx + 1));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3025C2) = LO8(ecx);
    MEM16(eax + 8) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00017F4F: ;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017F5A: ;
    edx = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017F85; /* je: equal / zero */

loc_00017F68: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017F73; /* jne: not equal / not zero */

loc_00017F6D: ;
    _fa = (uint32_t)(MEM8(edx + 0x2A)) & 0xFFu; _fb = (uint32_t)(0x98) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2A), 0x98 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017F85; /* je: equal / zero */

loc_00017F73: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018369; /* je: equal / zero */

loc_00017F7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 6) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00017F85: ;
    ecx = MEM32(eax + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x3026EC);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(edx + 8) = LO16(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017F7C
 * Original: 0x00017F7C - 0x00017F85 (9 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017F7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017F7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 6) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017F85
 * Original: 0x00017F85 - 0x00017F9D (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017F85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017F85: ;
    ecx = MEM32(eax + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x3026EC);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(edx + 8) = LO16(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017F9D
 * Original: 0x00017F9D - 0x0001836F (978 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017F9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017F9D: ;
    PUSH32(esp, 0x00017FA2u); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00017FA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017FAA: ;
    eax = MEM32(0x302134);
    SET_LO8(ecx, MEM8(eax + 0x43));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    eax = MEM32(0x3026EC);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00017F7C(); return; } /* jne: not equal / not zero */

loc_00017FBC: ;
    ecx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(ecx + 1));
    POP32(esp, edi);
    MEM8(0x3025C2) = LO8(edx);
    ecx = MEM32(eax + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017FB2
 * Original: 0x00017FB2 - 0x00017FD6 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017FB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017FB2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    eax = MEM32(0x3026EC);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00017F7C(); return; } /* jne: not equal / not zero */

loc_00017FBC: ;
    ecx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(ecx + 1));
    POP32(esp, edi);
    MEM8(0x3025C2) = LO8(edx);
    ecx = MEM32(eax + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017FD6
 * Original: 0x00017FD6 - 0x0001836F (921 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017FD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017FD6: ;
    PUSH32(esp, 0x00017FDBu); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00017FDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00017FE3: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018080; /* jne: not equal / not zero */

loc_00017FF2: ;
    ecx = MEM32(eax + 0xC);
    SET_LO16(edx, ZX8(MEM8(ecx + 1)));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 8) = LO16(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

loc_00018080: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001800A
 * Original: 0x0001800A - 0x0001836F (869 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001800A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001800A: ;
    PUSH32(esp, 0x0001800Fu); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_0001800F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00018017: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001803D; /* jne: not equal / not zero */

loc_00018022: ;
    eax = MEM32(eax + 0xC);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018030u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00018030: ;
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + 8) = LO16(eax);

loc_0001803D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018049
 * Original: 0x00018049 - 0x0001836F (806 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018049(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018049: ;
    PUSH32(esp, 0x0001804Eu); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_0001804E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00018056: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018080; /* jne: not equal / not zero */

loc_00018061: ;
    ecx = MEM32(eax + 0xC);
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(0x30ECC0));
    esi = 7;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax + 8) = LO16(edx);

loc_00018080: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018080
 * Original: 0x00018080 - 0x0001808C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018080: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

}

/**
 * sub_0001808C
 * Original: 0x0001808C - 0x000180CF (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001808C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001808C: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(edx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180B8; /* jne: not equal / not zero */

loc_0001809C: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180B8; /* jne: not equal / not zero */

loc_000180A7: ;
    _fa = (uint32_t)(MEM8(eax + 0x35)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x35), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000180B8; /* jne: not equal / not zero */

loc_000180AD: ;
    PUSH32(esp, 0x000180B2u); RECOMP_ABI_CALL(0x00016EC0u, sub_00016EC0); /* call 0x00016EC0 */

loc_000180B2: ;
    esi = MEM32(0x3026EC);

loc_000180B8: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

loc_000180C6: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000180CF
 * Original: 0x000180CF - 0x000180F5 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000180CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000180CF: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000180FB(); return; } /* jne: not equal / not zero */

loc_000180DF: ;
    eax = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000180FB(); return; } /* jne: not equal / not zero */

loc_000180EA: ;
    _fa = (uint32_t)(MEM8(eax + 0x35)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x35), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000180FB(); return; } /* jne: not equal / not zero */

loc_000180F0: ;
    PUSH32(esp, 0x000180F5u); RECOMP_ABI_CALL(0x00016EC0u, sub_00016EC0); /* call 0x00016EC0 */

    g_seh_ebp = ebp; sub_000180F5(); return; /* fallthrough 0x000180F5 */

}

/**
 * sub_000180F5
 * Original: 0x000180F5 - 0x000180FB (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000180F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000180F5: ;
    esi = MEM32(0x3026EC);

    g_seh_ebp = ebp; sub_000180FB(); return; /* fallthrough 0x000180FB */

}

/**
 * sub_000180FB
 * Original: 0x000180FB - 0x00018104 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000180FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000180FB: ;
    edx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edx + 0x2D));

    g_seh_ebp = ebp; sub_00018104(); return; /* fallthrough 0x00018104 */

}

/**
 * sub_00018104
 * Original: 0x00018104 - 0x0001810C (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018104(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018104: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018369(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0001810C(); return; /* fallthrough 0x0001810C */

}
