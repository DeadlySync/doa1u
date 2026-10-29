/**
 * DOAU1 - Recompiled code chunk 9
 * Functions: 250 (0x000633F0 - 0x0006A080)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000633F0
 * Original: 0x000633F0 - 0x000633F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000633F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000633F0: ;
    g_seh_ebp = ebp; sub_00163010(); return; /* tail jmp 0x00163010 */

}

/**
 * sub_00063400
 * Original: 0x00063400 - 0x0006340C (12 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063400(void)
{

loc_00063400: ;
    PUSH32(esp, 0x00063405u); RECOMP_ABI_CALL(0x001633D0u, sub_001633D0); /* call 0x001633D0 */

loc_00063405: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00063410
 * Original: 0x00063410 - 0x0006341D (13 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063410(void)
{

loc_00063410: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006341Cu); RECOMP_ABI_CALL(0x00163000u, sub_00163000); /* call 0x00163000 */

loc_0006341C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00063420
 * Original: 0x00063420 - 0x00063570 (336 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063420_gen(void) /* named widescreen shadow */
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

loc_00063420: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0xC;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x902800);
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x00063458u); RECOMP_ABI_CALL(0x0006B040u, sub_0006B040); /* call 0x0006B040 */

loc_00063458: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x30C400);
    PUSH32(esp, 0x0006346Au); RECOMP_ABI_CALL(0x0006B040u, sub_0006B040); /* call 0x0006B040 */

loc_0006346A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30C3F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30c3f8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00063509; /* jnp: not parity */

loc_00063486: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30AE2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30ae2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00063509; /* je: equal / zero */

loc_0006349A: ;
    fp_push(MEMF(0x306324)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30AD90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006350F; /* jne: not equal / not zero */

loc_000634CD: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006350F; /* jne: not equal / not zero */

loc_000634DE: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00063567; /* jp: parity */

loc_00063509: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006350F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00063519u); RECOMP_ABI_CALL(0x00062CD0u, sub_00062CD0); /* call 0x00062CD0 */

loc_00063519: ;
    fp_push(MEMF(0x30EDC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(0x30C3C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00063509; /* jnp: not parity */

loc_0006353B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00063545u); RECOMP_ABI_CALL(0x00062CD0u, sub_00062CD0); /* call 0x00062CD0 */

loc_00063545: ;
    fp_push(MEMF(0x30AE20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(0x30AA58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00063509; /* jnp: not parity */

loc_00063567: ;
    eax = 1;
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
 * sub_000636F0
 * Original: 0x000636F0 - 0x00063879 (393 bytes, 122 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000636F0(void)
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

loc_000636F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    MEM32(esp + 4) = edx;
    esi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00063872; /* jnp: not parity */

loc_0006370F: ;
    PUSH32(esp, ebx);
    MEM32(0x779200) = MEM32(0x779200) + 1;
    _fa = (uint32_t)(MEM32(0x779200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    MEM32(0x30D8A0) = eax;
    ecx = MEM32(esi + 8);
    MEM32(0x30D89C) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = edx;
    eax = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = eax;
    ecx = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = ecx;
    edx = MEM32(esi + 0x44);
    ecx = MEM32(esp + 0x28);
    MEM32(0x30D8B0) = edx;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(0x30D8C0) = eax;
    MEM32(0x30D8C8) = ecx;
    PUSH32(esp, 0x00063782u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00063782: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0006378Cu); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_0006378C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063871; /* je: equal / zero */

loc_00063794: ;
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x18) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063870; /* je: equal / zero */

loc_000637A9: ;
    ebx = 2;
    PUSH32(esp, ebp);
    /* nop */

loc_000637B0: ;
    _fa = (uint32_t)(MEM32(0x30D8A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30D8A0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000637D2; /* je: equal / zero */

loc_000637B8: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000637C0u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_000637C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000637D2; /* jne: not equal / not zero */

loc_000637C4: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi + edx * 4);
    esi = esi + edx * 4;
    goto loc_00063867;

loc_000637D2: ;
    MEM32(esp + 0x24) = esi;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + eax + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x30D8C4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00063869; /* jle: less or equal (signed <=) */

loc_000637FB: ;
    goto loc_00063800;

    /* nop */

loc_00063800: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00063808: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00063823; /* jne: not equal / not zero */

loc_0006380C: ;
    ebp = MEM32(esi + 4);
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esi + 8);
    ecx = ecx + ebp + 2;
    ebp = MEM32(esi + 0xC);
    MEM32(esp + 0x1C) = ebp;
    goto loc_00063830;

loc_00063823: ;
    ebp = MEM32(esi + 8);
    ecx = ecx + ebp + 4;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00063830; /* jne: not equal / not zero */

loc_0006382F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00063830: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00063808; /* jg: greater (signed >) */

loc_00063839: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00063854; /* jne: not equal / not zero */

loc_00063848: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00063852u); RECOMP_ABI_CALL(0x000682A0u, sub_000682A0); /* call 0x000682A0 */

loc_00063852: ;
    goto loc_0006385E;

loc_00063854: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006385Eu); RECOMP_ABI_CALL(0x00067A90u, sub_00067A90); /* call 0x00067A90 */

loc_0006385E: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00063800; /* jg: greater (signed >) */

loc_00063867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_00063869: ;
    if (CMP_NE(_fa, _fb)) goto loc_000637B0; /* jne: not equal / not zero */

loc_0006386F: ;
    POP32(esp, ebp);

loc_00063870: ;
    POP32(esp, edi);

loc_00063871: ;
    POP32(esp, ebx);

loc_00063872: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00063880
 * Original: 0x00063880 - 0x00063887 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063880: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000636F0(); return; /* tail jmp 0x000636F0 */

}

/**
 * sub_00063890
 * Original: 0x00063890 - 0x0006389A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063890: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000636F0(); return; /* tail jmp 0x000636F0 */

}

/**
 * sub_000638A0
 * Original: 0x000638A0 - 0x00063D03 (1123 bytes, 237 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000638A0(void)
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

loc_000638A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi * 4 + 0x6EED30);
    PUSH32(esp, edi);
    edi = edx;
    eax = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000638C8; /* je: equal / zero */

loc_000638B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000638BFu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000638BF: ;
    eax = MEM32(edi);
    MEM32(esi * 4 + 0x6EED30) = eax;

loc_000638C8: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi * 4 + 0x6EED40);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ebx = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00063C05; /* je: equal / zero */

loc_000638E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00063C05; /* ja: above (unsigned >) */

loc_000638EA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x63D04); /* switch: 12 entries, 12 targets */
    if (_jt == 0x000638F1u) goto loc_000638F1;
    if (_jt == 0x00063921u) goto loc_00063921;
    if (_jt == 0x00063954u) goto loc_00063954;
    if (_jt == 0x00063996u) goto loc_00063996;
    if (_jt == 0x000639BCu) goto loc_000639BC;
    if (_jt == 0x000639C6u) goto loc_000639C6;
    if (_jt == 0x00063A1Au) goto loc_00063A1A;
    if (_jt == 0x00063A5Eu) goto loc_00063A5E;
    if (_jt == 0x00063A94u) goto loc_00063A94;
    if (_jt == 0x00063AF1u) goto loc_00063AF1;
    if (_jt == 0x00063B45u) goto loc_00063B45;
    if (_jt == 0x00063BBEu) goto loc_00063BBE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000638F1: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = 4;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809EC) = ebp;
    MEM32(eax + 0x1809F0) = 3;
    MEM32(eax + 0x1809F8) = ebx;
    goto loc_00063A3F;

loc_00063921: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 4;
    MEM32(eax + 0x1809E0) = ecx;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809EC) = ebp;
    MEM32(eax + 0x1809F0) = ecx;
    MEM32(eax + 0x1809F8) = ebx;
    MEM32(eax + 0x1809FC) = ebp;
    goto loc_00063BF1;

loc_00063954: ;
    ecx = MEM32(0x1809A8);
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = ebx;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809F0) = 3;
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(eax + 0x1809FC) = ebp;
    eax = MEM32(edi + 8);
    MEM32(esi * 4 + 0x6EED40) = eax;
    goto loc_00063C05;

loc_00063996: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = ebx;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809F0) = 4;
    MEM32(eax + 0x1809F8) = ebx;
    goto loc_00063A3F;

loc_000639BC: ;
    ecx = 0xE;
    goto loc_00063BC3;

loc_000639C6: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 4;
    MEM32(eax + 0x1809E0) = ecx;
    MEM32(eax + 0x1809E8) = ebp;
    edx = 1;
    MEM32(eax + 0x1809EC) = edx;
    MEM32(eax + 0x1809F0) = ecx;
    ecx = MEM32(0x1809A8);
    MEM32(eax + 0x1809F8) = ebp;
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(eax + 0x1809FC) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi * 4 + 0x6EED40) = eax;
    goto loc_00063C05;

loc_00063A1A: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = 0x12;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809EC) = ebp;
    MEM32(eax + 0x1809F0) = 3;

loc_00063A3F: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x800;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x1809FC) = ebp;
    ecx = MEM32(edi + 8);
    MEM32(esi * 4 + 0x6EED40) = ecx;
    goto loc_00063C05;

loc_00063A5E: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = 0x12;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809EC) = ebp;
    MEM32(eax + 0x1809F0) = 4;
    MEM32(eax + 0x1809F8) = ebx;
    MEM32(eax + 0x1809FC) = ebp;
    goto loc_00063BF1;

loc_00063A94: ;
    edx = MEM32(0x1809A8);
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = 0x17;
    ecx = 1;
    MEM32(eax + 0x1809E4) = ecx;
    MEM32(eax + 0x1809E8) = ebx;
    MEM32(eax + 0x1809EC) = ebp;
    MEM32(eax + 0x1809F0) = 4;
    MEM32(eax + 0x1809F8) = ebx;
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = edx;
    MEM32(eax + 0x1809FC) = ecx;
    eax = MEM32(edi + 8);
    MEM32(esi * 4 + 0x6EED40) = eax;
    goto loc_00063C05;

loc_00063AF1: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 4;
    MEM32(eax + 0x1809E0) = ecx;
    MEM32(eax + 0x1809E8) = ebx;
    edx = 1;
    MEM32(eax + 0x1809EC) = edx;
    MEM32(eax + 0x1809F0) = ecx;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x1809F8) = ebx;
    MEM32(0x1809A8) = ecx;
    MEM32(eax + 0x1809FC) = edx;
    ecx = MEM32(edi + 8);
    MEM32(esi * 4 + 0x6EED40) = ecx;
    goto loc_00063C05;

loc_00063B45: ;
    fp_push(MEMF(0x30D8C8)); /* fld float */
    eax = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 4;
    MEM32(eax + 0x1809E0) = ecx;
    MEM32(eax + 0x1809E8) = 3;
    edx = 1;
    MEM32(eax + 0x1809EC) = edx;
    MEM32(eax + 0x1809F0) = ecx;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x1809F8) = 3;
    MEM32(0x1809A8) = ecx;
    MEM32(eax + 0x1809FC) = edx;
    PUSH32(esp, 0x00063BA3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00063BA3: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00063BB1u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_00063BB1: ;
    MEM32(esi * 4 + 0x6EED40) = 0x777;
    goto loc_00063C05;

loc_00063BBE: ;
    ecx = 4;

loc_00063BC3: ;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809E0) = ecx;
    MEM32(eax + 0x1809E8) = ebx;
    edx = 1;
    MEM32(eax + 0x1809EC) = edx;
    MEM32(eax + 0x1809F0) = ecx;
    MEM32(eax + 0x1809F8) = ebx;
    MEM32(eax + 0x1809FC) = edx;

loc_00063BF1: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x800;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(edi + 8);
    MEM32(esi * 4 + 0x6EED40) = edx;

loc_00063C05: ;
    ecx = MEM32(edi + 0xC);
    eax = esi * 4 + 0x6EED50;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063CFB; /* je: equal / zero */

loc_00063C1D: ;
    _fa = (uint32_t)(MEM32(0x30D8A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30D8A0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063C5F; /* je: equal / zero */

loc_00063C25: ;
    ecx = ZX8(MEM8(edi + 0xD));
    eax = MEM32(0x1809A8);
    MEM32(esp + 0x18) = ecx;
    ecx = esi;
    edx = 1;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    MEM32(0x1809A8) = eax;
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x1809C8) = ecx;

loc_00063C5F: ;
    eax = MEM32(edi + 0xC);
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00063CC6; /* ja: above (unsigned >) */

loc_00063C6E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00063CA2; /* je: equal / zero */

loc_00063C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063C82; /* je: equal / zero */

loc_00063C74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00063CF2; /* jne: not equal / not zero */

loc_00063C7B: ;
    PUSH32(esp, 0x30000);
    goto loc_00063CD2;

loc_00063C82: ;
    ebx = MEM32(0x1809A8);
    ebx = ebx | 0x400;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1809A8) = ebx;
    MEM32(eax + 0x180A04) = ebp;
    PUSH32(esp, ebp);
    goto loc_00063CEC;

loc_00063CA2: ;
    ebp = MEM32(0x1809A8);
    ebp = ebp | 0x400;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1809A8) = ebp;
    MEM32(ecx + 0x180A04) = ebx;
    PUSH32(esp, 0x10000);
    goto loc_00063CEC;

loc_00063CC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00063CF2; /* jne: not equal / not zero */

loc_00063CCD: ;
    PUSH32(esp, 0x20000);

loc_00063CD2: ;
    eax = MEM32(0x1809A8);
    edx = esi;
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x180A04) = ebx;
    MEM32(0x1809A8) = eax;

loc_00063CEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00063CF2u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_00063CF2: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;

loc_00063CFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00063D40
 * Original: 0x00063D40 - 0x00063DA5 (101 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00063D40: ;
    PUSH32(esp, esi);
    esi = edx;
    eax = MEM32(esi * 4 + 0x6EED30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063D61; /* je: equal / zero */

loc_00063D4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00063D56u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00063D56: ;
    MEM32(esi * 4 + 0x6EED30) = 0;

loc_00063D61: ;
    ecx = MEM32(esi * 4 + 0x6EED40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77777) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x77777 (32-bit) */
    eax = esi * 4 + 0x6EED40;
    if (CMP_EQ(_fa, _fb)) goto loc_00063DA3; /* je: equal / zero */

loc_00063D77: ;
    edx = MEM32(0x1809A8);
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 1;
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1809E0) = ecx;
    MEM32(0x1809A8) = edx;
    MEM32(esi + 0x1809F0) = ecx;
    MEM32(eax) = 0x77777;

loc_00063DA3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00063DB0
 * Original: 0x00063DB0 - 0x00063E07 (87 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00063DB0: ;
    ecx = MEM32(0x6EED20);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063DD6; /* je: equal / zero */

loc_00063DBF: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x180D20) = eax;
    ecx = MEM32(edx);
    MEM32(0x6EED20) = ecx;

loc_00063DD6: ;
    esi = MEM32(edx + 0x20);
    ecx = MEM32(0x6EED2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00063E06; /* je: equal / zero */

loc_00063DE4: ;
    MEM32(0x180D4C) = eax;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x3200;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x180D48) = 1;
    edx = MEM32(edx + 0x20);
    MEM32(0x6EED2C) = edx;

loc_00063E06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00063E10
 * Original: 0x00063E10 - 0x00063E7B (107 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063E10: ;
    eax = MEM32(0x6EED60);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x30D8C4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00063E53; /* je: equal / zero */

loc_00063E22: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00063E4D; /* ja: above (unsigned >) */

loc_00063E27: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x63E7C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00063E2Eu) goto loc_00063E2E;
    if (_jt == 0x00063E35u) goto loc_00063E35;
    if (_jt == 0x00063E3Cu) goto loc_00063E3C;
    if (_jt == 0x00063E43u) goto loc_00063E43;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00063E2E: ;
    PUSH32(esp, 0x112);
    goto loc_00063E48;

loc_00063E35: ;
    PUSH32(esp, 0x312);
    goto loc_00063E48;

loc_00063E3C: ;
    PUSH32(esp, 0x142);
    goto loc_00063E48;

loc_00063E43: ;
    PUSH32(esp, 0x342);

loc_00063E48: ;
    PUSH32(esp, 0x00063E4Du); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_00063E4D: ;
    MEM32(0x6EED60) = esi;

loc_00063E53: ;
    eax = MEM32(esi * 4 + 0x2E59DC);
    ecx = MEM32(esi * 4 + 0x30D8A4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00063E6Au); RECOMP_ABI_CALL(0x00167670u, sub_00167670); /* call 0x00167670 */

loc_00063E6A: ;
    edx = MEM32(esi * 4 + 0x30D8B4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00063E79u); RECOMP_ABI_CALL(0x00164EB0u, sub_00164EB0); /* call 0x00164EB0 */

loc_00063E79: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00063E90
 * Original: 0x00063E90 - 0x0006410F (639 bytes, 175 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00063E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00063E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FE5F4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x779200);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x779200) = ebx;
    ecx = MEM32(esi + 4);
    MEM32(0x30D8A0) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x30D89C) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = ecx;
    edx = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    MEM32(0x30D8B0) = eax;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(0x30D8C0) = ecx;
    MEM32(0x30D8C8) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063F25u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00063F25: ;
    ebx = esi + 0x50;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063F2Fu); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00063F2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064107; /* je: equal / zero */

loc_00063F37: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 4;
    MEM32(0x1809A8) = ecx;
    edx = 0xC0;
    ecx = 0x40340;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1809DC) = eax;
    MEM32(0x180A5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063F67u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00063F67: ;
    MEM32(0x180CA4) = 0xC0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000640BD; /* je: equal / zero */

loc_00063F7A: ;
    ebp = MEM32(esp + 0x88);

loc_00063F81: ;
    eax = MEM32(0x30D8A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00063FA4; /* je: equal / zero */

loc_00063F8A: ;
    ecx = ebx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063F92u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00063F92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00063FA4; /* jne: not equal / not zero */

loc_00063F96: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx + edx * 4);
    ebx = ebx + edx * 4;
    goto loc_000640B5;

loc_00063FA4: ;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x18;
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
    edi = MEM32(esp + 0x14);
    edx = esp + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063FC0u); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_00063FC0: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063FCAu); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00063FCA: ;
    _fa = (uint32_t)(MEM16(esp + 0x22)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x22), 2 (16-bit) */
    ecx = 0x4035C;
    if (CMP_NE(_fa, _fb)) goto loc_00063FEA; /* jne: not equal / not zero */

loc_00063FD7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063FDEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00063FDE: ;
    MEM32(0x180CB0) = 0;
    goto loc_00063FFE;

loc_00063FEA: ;
    edx = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00063FF4u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00063FF4: ;
    MEM32(0x180CB0) = 1;

loc_00063FFE: ;
    edx = MEM32(esp + 0x80);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064029; /* jbe: below or equal (unsigned <=) */

loc_0006400E: ;
    edi = edi;

loc_00064010: ;
    PUSH32(esp, esi);
    edx = ebx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006401Au); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_0006401A: ;
    edx = MEM32(esp + 0x80);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00064010; /* jb: below (unsigned <) */

loc_00064029: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064030u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00064030: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006403Cu); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_0006403C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000640B7; /* jle: less or equal (signed <=) */

loc_00064043: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00064050: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00064063; /* jne: not equal / not zero */

loc_00064057: ;
    ebp = MEM32(ebx + 4);
    eax = MEM32(ebx + 0xC);
    edi = edi + edx + 2;
    goto loc_0006406E;

loc_00064063: ;
    edi = edi + edx + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006406E; /* jne: not equal / not zero */

loc_0006406D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006406E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064050; /* jg: greater (signed >) */

loc_00064077: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006407Du); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006407D: ;
    eax = MEM32(0x1809A4);
    ecx = eax + ebp * 2;
    esi = edi + -2;
    PUSH32(esp, ecx);
    edx = esi + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064094u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_00064094: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064043; /* jg: greater (signed >) */

loc_000640B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_000640B7: ;
    if (CMP_NE(_fa, _fb)) goto loc_00063F81; /* jne: not equal / not zero */

loc_000640BD: ;
    esi = 1;
    edx = esi;
    ecx = 0x4035C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000640CEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000640CE: ;
    edx = esi;
    ecx = 0x40340;
    MEM32(0x180CB0) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000640E0u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000640E0: ;
    eax = MEM32(0x1809A8);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x180CA4) = esi;
    MEM32(0x1809DC) = 0;
    MEM32(0x1809A8) = eax;
    MEM32(0x180A5C) = 0;

loc_00064107: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00064110
 * Original: 0x00064110 - 0x000642A2 (402 bytes, 122 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064110: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x779200);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(0x8FE5F4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x779200) = ebp;
    eax = MEM32(esi + 4);
    MEM32(0x30D8A0) = eax;
    ecx = MEM32(esi + 8);
    MEM32(0x30D89C) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = edx;
    eax = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = eax;
    ecx = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(0x30D8B0) = edx;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(esp + 0x14) = ebx;
    MEM32(0x30D8C0) = eax;
    MEM32(0x30D8C8) = 0x3F800000;
    PUSH32(esp, 0x0006419Bu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_0006419B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x000641A5u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_000641A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006429B; /* je: equal / zero */

loc_000641AD: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006429B; /* je: equal / zero */

loc_000641BB: ;
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);

loc_000641C0: ;
    eax = MEM32(0x30D8A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000641E3; /* je: equal / zero */

loc_000641C9: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000641D1u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_000641D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000641E3; /* jne: not equal / not zero */

loc_000641D5: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi + ecx * 4);
    esi = esi + ecx * 4;
    goto loc_00064292;

loc_000641E3: ;
    edx = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    esi = esi + edx + 4;
    PUSH32(esp, 0x000641F9u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000641F9: ;
    edx = 1;
    ecx = ebx;
    PUSH32(esp, 0x00064205u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00064205: ;
    edx = MEM32(esi + 4);
    edi = MEM32(esi);
    ecx = ebx;
    PUSH32(esp, 0x00064211u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00064211: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00064294; /* jle: less or equal (signed <=) */

loc_0006421C: ;
    /* nop */

loc_00064220: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00064226: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064239; /* jne: not equal / not zero */

loc_0006422A: ;
    eax = MEM32(esi + 8);
    ebp = MEM32(esi + 4);
    ebx = ebx + eax + 2;
    eax = MEM32(esi + 0xC);
    goto loc_00064247;

loc_00064239: ;
    edx = MEM32(esi + 8);
    ebx = ebx + edx + 4;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064247; /* jne: not equal / not zero */

loc_00064246: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064247: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064226; /* jg: greater (signed >) */

loc_00064250: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064256u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00064256: ;
    eax = MEM32(0x1809A4);
    ecx = eax + ebp * 2;
    edi = ebx + -2;
    PUSH32(esp, ecx);
    edx = edi + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0006426Du); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_0006426D: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064220; /* jg: greater (signed >) */

loc_0006428E: ;
    ebx = MEM32(esp + 0x10);

loc_00064292: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_00064294: ;
    if (CMP_NE(_fa, _fb)) goto loc_000641C0; /* jne: not equal / not zero */

loc_0006429A: ;
    POP32(esp, edi);

loc_0006429B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000642B0
 * Original: 0x000642B0 - 0x0006432C (124 bytes, 47 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000642B0(void)
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

loc_000642B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx + 0x10;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000642C0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000642CF; /* jne: not equal / not zero */

loc_000642C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_0006431C;

loc_000642CF: ;
    eax = MEM32(eax + 4);
    edi = MEM32(ebp + 0x2E5A08);
    ebx = MEM32(ebp + 0x2E5A0C);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000642E6u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_000642E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064311; /* je: equal / zero */

loc_000642EA: ;
    ecx = edi * 4;
    edx = ebx * 4;

loc_000642F8: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000642F8; /* jne: not equal / not zero */

loc_00064311: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;

loc_0006431C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000642C0; /* jb: below (unsigned <) */

loc_00064324: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00064330
 * Original: 0x00064330 - 0x000644D2 (418 bytes, 128 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00064330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00064330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FE5F4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x779200);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x779200) = ebx;
    ecx = MEM32(esi + 4);
    MEM32(0x30D8A0) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x30D89C) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = ecx;
    edx = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    MEM32(0x30D8B0) = eax;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(0x30D8C0) = ecx;
    MEM32(0x30D8C8) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000643C5u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_000643C5: ;
    ebx = esi + 0x50;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000643CFu); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_000643CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000644CA; /* je: equal / zero */

loc_000643D7: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000644C5; /* je: equal / zero */

loc_000643E5: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_000643F0: ;
    eax = MEM32(0x30D8A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064413; /* je: equal / zero */

loc_000643F9: ;
    ecx = ebx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064401u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00064401: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064413; /* jne: not equal / not zero */

loc_00064405: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(ebx + edx * 4);
    ebx = ebx + edx * 4;
    goto loc_000644BD;

loc_00064413: ;
    eax = esp + 0x54;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x30;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0006442Au); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_0006442A: ;
    eax = MEM32(esp + 0x98);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006443D; /* jbe: below or equal (unsigned <=) */

loc_00064438: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006443D: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006444Bu); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_0006444B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000644BF; /* jle: less or equal (signed <=) */

loc_00064452: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00064458: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0006446B; /* jne: not equal / not zero */

loc_0006445F: ;
    ebp = MEM32(ebx + 4);
    eax = MEM32(ebx + 0xC);
    esi = esi + edx + 2;
    goto loc_00064476;

loc_0006446B: ;
    esi = esi + edx + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064476; /* jne: not equal / not zero */

loc_00064475: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064476: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064458; /* jg: greater (signed >) */

loc_0006447F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064485u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00064485: ;
    eax = MEM32(0x1809A4);
    ecx = eax + ebp * 2;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esi + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006449Cu); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_0006449C: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064452; /* jg: greater (signed >) */

loc_000644BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_000644BF: ;
    if (CMP_NE(_fa, _fb)) goto loc_000643F0; /* jne: not equal / not zero */

loc_000644C5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000644CAu); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_000644CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000644E0
 * Original: 0x000644E0 - 0x000645B7 (215 bytes, 81 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000644E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000644E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    esi = ecx;
    PUSH32(esp, 0x000644F2u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_000644F2: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x000644FCu); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_000644FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000645B2; /* je: equal / zero */

loc_00064504: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000645A9; /* je: equal / zero */

loc_00064512: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00064520: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x00064528u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00064528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064536; /* jne: not equal / not zero */

loc_0006452C: ;
    eax = MEM32(esi + 4);
    esi = esi + eax * 4;
    eax = MEM32(esi);
    goto loc_0006459E;

loc_00064536: ;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064548; /* jbe: below or equal (unsigned <=) */

loc_00064543: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00064548: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000645A0; /* jle: less or equal (signed <=) */

loc_00064551: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00064557: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006456A; /* jne: not equal / not zero */

loc_0006455B: ;
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 4);
    edi = edi + edx + 2;
    edx = MEM32(esi + 0xC);
    goto loc_00064578;

loc_0006456A: ;
    ebp = MEM32(esi + 8);
    edi = edi + ebp + 4;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064578; /* jne: not equal / not zero */

loc_00064577: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064578: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064557; /* jg: greater (signed >) */

loc_00064581: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00064587u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00064587: ;
    eax = MEM32(0x1809A4);
    ecx = eax + ebx * 2;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00064598u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_00064598: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064551; /* jg: greater (signed >) */

loc_0006459E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_000645A0: ;
    if (CMP_NE(_fa, _fb)) goto loc_00064520; /* jne: not equal / not zero */

loc_000645A6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000645A9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00062500(); return; /* tail jmp 0x00062500 */

loc_000645B2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000645C0
 * Original: 0x000645C0 - 0x00064805 (581 bytes, 158 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000645C0(void)
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

loc_000645C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(0x8FE5F4);
    if (CMP_LE(_fas, _fbs)) goto loc_000647FB; /* jle: less or equal (signed <=) */

loc_000645D9: ;
    fp_push(MEMF(0x6EED6C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000647FB; /* jnp: not parity */

loc_000645F0: ;
    MEM32(esp + 4) = edx;
    MEM32(0x779200) = MEM32(0x779200) + 1;
    _fa = (uint32_t)(MEM32(0x779200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 4);
    MEM32(0x30D8A0) = eax;
    edx = MEM32(ecx + 8);
    MEM32(0x30D89C) = edx;
    eax = MEM32(ecx + 0x14);
    MEM32(0x30D8A4) = eax;
    edx = MEM32(ecx + 0x1C);
    MEM32(0x30D8B4) = edx;
    eax = MEM32(ecx + 0x24);
    MEM32(0x30D8A8) = eax;
    edx = MEM32(ecx + 0x2C);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(ecx + 0x34);
    MEM32(0x30D8AC) = eax;
    edx = MEM32(ecx + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, ebx);
    MEM32(0x30D8B0) = eax;
    edx = MEM32(ecx + 0x4C);
    ebx = ecx + 0x60;
    PUSH32(esp, esi);
    MEM32(0x30D8C0) = edx;
    MEM32(0x30D8C8) = 0x3F800000;
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0006467B; /* jne: not equal / not zero */

loc_00064666: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    fp_push(MEMF(0x6EED6C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00064694; /* jnp: not parity */

loc_0006467B: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x0006468Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006468A: ;
    MEM32(0x180C9C) = 1;

loc_00064694: ;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x2C;
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
    edx = esp + 0x2C;
    ecx = ebp;
    PUSH32(esp, 0x000646ACu); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_000646AC: ;
    eax = esp + 0x50;
    fp_push(MEMF(0x6EED6C)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000646C4u); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_000646C4: ;
    _fa = (uint32_t)(MEM16(esp + 0x36)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x36), 2 (16-bit) */
    ecx = 0x4035C;
    if (CMP_NE(_fa, _fb)) goto loc_000646E4; /* jne: not equal / not zero */

loc_000646D1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000646D8u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000646D8: ;
    MEM32(0x180CB0) = 0;
    goto loc_000646F8;

loc_000646E4: ;
    edx = 1;
    PUSH32(esp, 0x000646EEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000646EE: ;
    MEM32(0x180CB0) = 1;

loc_000646F8: ;
    edx = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064721; /* jbe: below or equal (unsigned <=) */

loc_00064708: ;
    PUSH32(esp, esi);
    edx = ebx;
    ecx = ebp;
    PUSH32(esp, 0x00064712u); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_00064712: ;
    edx = MEM32(esp + 0x94);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00064708; /* jb: below (unsigned <) */

loc_00064721: ;
    ecx = ebp;
    PUSH32(esp, 0x00064728u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00064728: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(ebx);
    ecx = ebp;
    PUSH32(esp, 0x00064734u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00064734: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 8;

loc_00064740: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064756; /* jne: not equal / not zero */

loc_00064744: ;
    edx = MEM32(eax + -4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    esi = esi + edx + 2;
    edx = MEM32(eax + 4);
    goto loc_00064763;

loc_00064756: ;
    ebx = MEM32(eax);
    esi = esi + ebx + 4;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064763; /* jne: not equal / not zero */

loc_00064762: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064763: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064740; /* jg: greater (signed >) */

loc_0006476C: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00064772u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00064772: ;
    ebx = MEM32(esp + 0x9C);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000647C9; /* je: equal / zero */

loc_00064780: ;
    ebp = esi + 2;

loc_00064783: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0006478Fu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_0006478F: ;
    eax = MEM32(0x1809A4);
    ecx = MEM32(esp + 0x14);
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x000647ABu); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_000647AB: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    if ((_fa != 0)) goto loc_00064783; /* jne: not equal / not zero */

loc_000647C9: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0x000647D8u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000647D8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEM32(0x180CB0) = 1;
    PUSH32(esp, 0x000647EEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000647EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x180C9C) = 0;
    POP32(esp, ebx);

loc_000647FB: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00064810
 * Original: 0x00064810 - 0x00064A59 (585 bytes, 159 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064810(void)
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

loc_00064810: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    MEM32(0x779200) = MEM32(0x779200) + 1;
    _fa = (uint32_t)(MEM32(0x779200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 4);
    MEM32(0x30D8A0) = eax;
    edx = MEM32(ecx + 8);
    MEM32(0x30D89C) = edx;
    eax = MEM32(ecx + 0x14);
    MEM32(0x30D8A4) = eax;
    edx = MEM32(ecx + 0x1C);
    MEM32(0x30D8B4) = edx;
    eax = MEM32(ecx + 0x24);
    MEM32(0x30D8A8) = eax;
    edx = MEM32(ecx + 0x2C);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(ecx + 0x34);
    MEM32(0x30D8AC) = eax;
    edx = MEM32(ecx + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8FE5F4);
    MEM32(0x30D8B0) = eax;
    edx = MEM32(ecx + 0x4C);
    ebx = ecx + 0x60;
    PUSH32(esp, esi);
    MEM32(0x30D8C0) = edx;
    MEM32(0x30D8C8) = 0x3F800000;
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 0 (16-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0xBF800000u;
    if (CMP_EQ(_fa, _fb)) goto loc_000648B4; /* je: equal / zero */

loc_0006489B: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x000648AAu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000648AA: ;
    MEM32(0x180C9C) = 1;

loc_000648B4: ;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x34;
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
    edx = esp + 0x34;
    ecx = ebp;
    PUSH32(esp, 0x000648CCu); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_000648CC: ;
    _fa = (uint32_t)(MEM16(esp + 0x3E)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x3E), 2 (16-bit) */
    eax = MEM32(esp + 0x64);
    MEM32(esp + 0x14) = eax;
    ecx = 0x4035C;
    if (CMP_NE(_fa, _fb)) goto loc_000648F4; /* jne: not equal / not zero */

loc_000648E1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000648E8u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000648E8: ;
    MEM32(0x180CB0) = 0;
    goto loc_00064908;

loc_000648F4: ;
    edx = 1;
    PUSH32(esp, 0x000648FEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000648FE: ;
    MEM32(0x180CB0) = 1;

loc_00064908: ;
    edx = MEM32(esp + 0x9C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064931; /* jbe: below or equal (unsigned <=) */

loc_00064918: ;
    PUSH32(esp, esi);
    edx = ebx;
    ecx = ebp;
    PUSH32(esp, 0x00064922u); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_00064922: ;
    edx = MEM32(esp + 0x9C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00064918; /* jb: below (unsigned <) */

loc_00064931: ;
    ecx = ebp;
    PUSH32(esp, 0x00064938u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00064938: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(ebx);
    ecx = ebp;
    PUSH32(esp, 0x00064944u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00064944: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 8;

loc_00064950: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064966; /* jne: not equal / not zero */

loc_00064954: ;
    edx = MEM32(eax + -4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax);
    esi = esi + edx + 2;
    edx = MEM32(eax + 4);
    goto loc_00064973;

loc_00064966: ;
    ebx = MEM32(eax);
    esi = esi + ebx + 4;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064973; /* jne: not equal / not zero */

loc_00064972: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064973: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064950; /* jg: greater (signed >) */

loc_0006497C: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00064982u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00064982: ;
    edi = MEM32(esp + 0xA4);
    ebp = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00064993u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00064991u); } /* indirect call */
    }

loc_00064993: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064A1D; /* je: equal / zero */

loc_0006499E: ;
    ebx = esi + 2;

loc_000649A1: ;
    fp_push(MEMF(0x6EED6C)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000649D6; /* jnp: not parity */

loc_000649B4: ;
    fp_push(MEMF(0x6EED6C)); /* fld float */
    eax = esp + 0x58;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, eax);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000649CCu); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_000649CC: ;
    ecx = MEM32(0x6EED6C);
    MEM32(esp + 0x10) = ecx;

loc_000649D6: ;
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000649E2u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_000649E2: ;
    edx = MEM32(0x1809A4);
    eax = MEM32(esp + 0x1C);
    ecx = edx + eax * 2;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000649F8u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_000649F8: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00064A16u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00064A14u); } /* indirect call */
    }

loc_00064A16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000649A1; /* jne: not equal / not zero */

loc_00064A1D: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0x00064A2Cu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064A2C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEM32(0x180CB0) = 1;
    PUSH32(esp, 0x00064A42u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064A42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x180C9C) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00064A60
 * Original: 0x00064A60 - 0x00064D2A (714 bytes, 210 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00064A60(void)
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

loc_00064A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x8FE5F4);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00064D22; /* je: equal / zero */

loc_00064A8F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00064D22; /* jnp: not parity */

loc_00064AA4: ;
    MEM32(0x779200) = MEM32(0x779200) + 1;
    _fa = (uint32_t)(MEM32(0x779200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi + 4);
    MEM32(0x30D8A0) = edx;
    eax = MEM32(esi + 8);
    MEM32(0x30D89C) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = edx;
    eax = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = eax;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(esp + 0x14);
    MEM32(0x30D8B0) = ecx;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(0x30D8C0) = edx;
    MEM32(0x30D8C8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064B16u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00064B16: ;
    ebx = esi + 0x50;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064B20u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00064B20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064D22; /* je: equal / zero */

loc_00064B28: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064CF3; /* je: equal / zero */

loc_00064B36: ;
    ebp = MEM32(esp + 0x90);
    /* nop */

loc_00064B40: ;
    eax = MEM32(0x30D8A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064B63; /* je: equal / zero */

loc_00064B49: ;
    ecx = ebx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064B51u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00064B51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064B63; /* jne: not equal / not zero */

loc_00064B55: ;
    ecx = MEM32(ebx + 4);
    esi = MEM32(ebx + ecx * 4);
    ebx = ebx + ecx * 4;
    goto loc_00064CEB;

loc_00064B63: ;
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064B7D; /* jne: not equal / not zero */

loc_00064B6A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00064B96; /* jnp: not parity */

loc_00064B7D: ;
    edx = 1;
    ecx = 0x40304;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064B8Cu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064B8C: ;
    MEM32(0x180C9C) = 1;

loc_00064B96: ;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x20;
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
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edx = esp + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_00064BBF; /* jne: not equal / not zero */

loc_00064BB4: ;
    ecx = MEM32(esp + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064BBDu); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_00064BBD: ;
    goto loc_00064BC5;

loc_00064BBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00064BC2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00064BC0u); } /* indirect call */
    }

loc_00064BC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00064BC5: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064BDBu); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00064BDB: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), esi (32-bit) */
    ecx = 0x4035C;
    if (CMP_EQ(_fa, _fb)) goto loc_00064BFB; /* je: equal / zero */

loc_00064BE5: ;
    edx = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064BEFu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064BEF: ;
    MEM32(0x180CB0) = 1;
    goto loc_00064C08;

loc_00064BFB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064C02u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064C02: ;
    MEM32(0x180CB0) = esi;

loc_00064C08: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x88);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064C3D; /* jne: not equal / not zero */

loc_00064C19: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064C5C; /* jbe: below or equal (unsigned <=) */

loc_00064C1D: ;
    /* nop */

loc_00064C20: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    edx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064C2Cu); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_00064C2C: ;
    edx = MEM32(esp + 0x88);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00064C20; /* jb: below (unsigned <) */

loc_00064C3B: ;
    goto loc_00064C5C;

loc_00064C3D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064C5C; /* jbe: below or equal (unsigned <=) */

loc_00064C41: ;
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00064C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00064C47u); } /* indirect call */
    }

loc_00064C4A: ;
    edx = MEM32(esp + 0x94);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00064C41; /* jb: below (unsigned <) */

loc_00064C5C: ;
    edi = MEM32(esp + 0x18);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064C67u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00064C67: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064C73u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00064C73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00064CED; /* jle: less or equal (signed <=) */

loc_00064C7A: ;
    /* nop */

loc_00064C80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00064C86: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00064C99; /* jne: not equal / not zero */

loc_00064C8D: ;
    ebp = MEM32(ebx + 4);
    eax = MEM32(ebx + 0xC);
    edi = edi + edx + 2;
    goto loc_00064CA4;

loc_00064C99: ;
    edi = edi + edx + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064CA4; /* jne: not equal / not zero */

loc_00064CA3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064CA4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064C86; /* jg: greater (signed >) */

loc_00064CAD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064CB3u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00064CB3: ;
    eax = MEM32(0x1809A4);
    ecx = eax + ebp * 2;
    esi = edi + -2;
    PUSH32(esp, ecx);
    edx = esi + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064CCAu); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_00064CCA: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00064C80; /* jg: greater (signed >) */

loc_00064CEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_00064CED: ;
    if (CMP_NE(_fa, _fb)) goto loc_00064B40; /* jne: not equal / not zero */

loc_00064CF3: ;
    edx = 1;
    ecx = 0x4035C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064D02u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064D02: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEM32(0x180CB0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00064D18u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00064D18: ;
    MEM32(0x180C9C) = 0;

loc_00064D22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00064D30
 * Original: 0x00064D30 - 0x00064D95 (101 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064D30: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ecx + 0x14);
    MEM32(0x30D8A4) = eax;
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(0x30D8B4) = edx;
    eax = MEM32(ecx + 0x24);
    MEM32(0x30D8A8) = eax;
    edx = MEM32(ecx + 0x2C);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(ecx + 0x34);
    MEM32(0x30D8AC) = eax;
    edx = MEM32(ecx + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(0x30D8B0) = eax;
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, ebp);
    ebp = ecx + 0x60;
    MEM32(0x30D8C0) = edx;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00064F82(); return; } /* je: equal / zero */

loc_00064D92: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_00064D95(); return; /* fallthrough 0x00064D95 */

}

/**
 * sub_00064D95
 * Original: 0x00064D95 - 0x00064DF0 (91 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064D95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064D95: ;
    eax = MEM32(ebp + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00064DA7; /* jbe: below or equal (unsigned <=) */

loc_00064DA2: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00064DA7: ;
    edx = MEM32(ebp + 4);
    esi = MEM32(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x20);
    eax = eax + eax + 6;
    MEM32(esp + 0x48) = eax;
    eax = edx;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x30D8A4);
    edi = MEM32(eax + 0x30D8B4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00064DD6u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00064DD6: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00064F79(); return; } /* jle: less or equal (signed <=) */

loc_00064DEE: ;
    edi = edi;

    g_seh_ebp = ebp; sub_00064DF0(); return; /* fallthrough 0x00064DF0 */

}

/**
 * sub_00064DF0
 * Original: 0x00064DF0 - 0x00064E60 (112 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064DF0: ;
    SET_LO16(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    SET_LO16(ebp, 0); /* xor self */
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00064E00;

loc_00064DFC: ;
    edx = MEM32(esp + 0x14);

loc_00064E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00064E1C; /* jne: not equal / not zero */

loc_00064E08: ;
    edi = MEM32(edi + 4);
    MEM32(esp + 0x4C) = edi;
    edi = MEM32(esp + 0x10);
    edi = MEM32(edi + 8);
    edx = edx + edi + 2;
    goto loc_00064E36;

loc_00064E1C: ;
    edi = MEM32(edi + 8);
    edx = edx + edi + 4;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064E3A; /* jne: not equal / not zero */

loc_00064E31: ;
    edx = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00064E36: ;
    MEM32(esp + 0x14) = edx;

loc_00064E3A: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00064DFC; /* jg: greater (signed >) */

loc_00064E4B: ;
    eax = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00064F69(); return; } /* jbe: below or equal (unsigned <=) */

loc_00064E5D: ;
    /* nop */

    g_seh_ebp = ebp; sub_00064E60(); return; /* fallthrough 0x00064E60 */

}

/**
 * sub_00064E60
 * Original: 0x00064E60 - 0x00064F69 (265 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064E60: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edi, MEM16(edx + eax * 2));
    eax = ZX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x44));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    edx = MEM32(ebx + eax * 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ebx + eax * 4 + 4);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(ebx + eax * 4 + 8);
    MEM32(esp + 0x28) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00064F08; /* jbe: below or equal (unsigned <=) */

loc_00064E92: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064EF5; /* je: equal / zero */

loc_00064E97: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064EF5; /* je: equal / zero */

loc_00064E9C: ;
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064EF5; /* je: equal / zero */

loc_00064EA1: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064EB5u); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_00064EB5: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064EC9u); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_00064EC9: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064F05; /* je: equal / zero */

loc_00064ED4: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064EE8u); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_00064EE8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = 0;
    goto loc_00064F05;

loc_00064EF5: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00064F05; /* jne: not equal / not zero */

loc_00064EFD: ;
    MEM32(esp + 0x1C) = 1;

loc_00064F05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */

loc_00064F08: ;
    if (CMP_NE(_fa, _fb)) goto loc_00064F26; /* jne: not equal / not zero */

loc_00064F0A: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00064F26; /* je: equal / zero */

loc_00064F0F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064F23u); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_00064F23: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00064F26: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x24);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO16(ecx, LO16(ebp));
    SET_LO16(ebp, LO16(edi));
    MEM32(esp + 0x30) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00064E60; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_00064F69(); return; /* fallthrough 0x00064F69 */

}

/**
 * sub_00064F69
 * Original: 0x00064F69 - 0x00064F79 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064F69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064F69: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00064DF0(); return; } /* jg: greater (signed >) */

loc_00064F77: ;
    ebp = ecx;

    g_seh_ebp = ebp; sub_00064F79(); return; /* fallthrough 0x00064F79 */

}

/**
 * sub_00064F79
 * Original: 0x00064F79 - 0x00064F82 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064F79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064F79: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_00064D95(); return; }

loc_00064F7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00064F82(); return; /* fallthrough 0x00064F82 */

}

/**
 * sub_00064F82
 * Original: 0x00064F82 - 0x00064F95 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064F82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064F82: ;
    PUSH32(esp, 0x00064F87u); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_00064F87: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, ebp);
    PUSH32(esp, 0x00064F91u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00064F91: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00064FA0
 * Original: 0x00064FA0 - 0x00064FB9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00064FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x30D020) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30D020;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064FB5u); RECOMP_ABI_CALL(0x000632C0u, sub_000632C0); /* call 0x000632C0 */

loc_00064FB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00064FC0
 * Original: 0x00064FC0 - 0x00064FDC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00064FC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = eax + eax * 4;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x30AE58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30AE58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00064FD8u); RECOMP_ABI_CALL(0x000632C0u, sub_000632C0); /* call 0x000632C0 */

loc_00064FD8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00064FE0
 * Original: 0x00064FE0 - 0x00064FF2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00064FE0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30C808);
    PUSH32(esp, 0x00064FEEu); RECOMP_ABI_CALL(0x000632C0u, sub_000632C0); /* call 0x000632C0 */

loc_00064FEE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00065000
 * Original: 0x00065000 - 0x000650BD (189 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00065000_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FE5F4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x779200);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x779200) = ebx;
    ecx = MEM32(esi + 4);
    MEM32(0x30D8A0) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x30D89C) = edx;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = ecx;
    edx = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    MEM32(0x30D8B0) = eax;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(0x30D8C0) = ecx;
    MEM32(0x30D8C8) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00065095u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00065095: ;
    ebx = esi + 0x50;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006509Fu); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_0006509F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00065288(); return; } /* je: equal / zero */

loc_000650A7: ;
    eax = MEM32(ebx + 0x10);
    MEM32(esp + 0x20) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00065288(); return; } /* je: equal / zero */

loc_000650BB: ;
    g_seh_ebp = ebp; sub_000650C0(); return; /* tail jmp 0x000650C0 */

}

/**
 * sub_000650C0
 * Original: 0x000650C0 - 0x00065220 (352 bytes, 109 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000650C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000650C0: ;
    _fa = (uint32_t)(MEM32(0x30D8A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30D8A0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000650E2; /* je: equal / zero */

loc_000650C8: ;
    ecx = ebx + 0x10;
    PUSH32(esp, 0x000650D0u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_000650D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000650E2; /* jne: not equal / not zero */

loc_000650D4: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx + edx * 4);
    ebx = ebx + edx * 4;
    g_seh_ebp = ebp; sub_00065280(); return; /* tail jmp 0x00065280 */

loc_000650E2: ;
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), LO16(ebp) (16-bit) */
    edi = ebx + 8;
    if (CMP_NE(_fa, _fb)) goto loc_000651F6; /* jne: not equal / not zero */

loc_000650EF: ;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x30;
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
    edi = MEM32(esp + 0x2C);
    edx = esp + 0x30;
    ecx = edi;
    PUSH32(esp, 0x0006510Bu); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_0006510B: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065115u); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00065115: ;
    edx = MEM32(esp + 0x98);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006513E; /* jbe: below or equal (unsigned <=) */

loc_00065125: ;
    PUSH32(esp, esi);
    edx = ebx;
    ecx = edi;
    PUSH32(esp, 0x0006512Fu); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_0006512F: ;
    edx = MEM32(esp + 0x98);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065125; /* jb: below (unsigned <) */

loc_0006513E: ;
    ecx = edi;
    PUSH32(esp, 0x00065145u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00065145: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx);
    ecx = edi;
    PUSH32(esp, 0x00065151u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00065151: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00065282(); return; } /* jle: less or equal (signed <=) */

loc_0006515C: ;
    /* nop */

loc_00065160: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00065170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006518B; /* jne: not equal / not zero */

loc_00065174: ;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0xC);
    edi = edi + edx + 2;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00065199;

loc_0006518B: ;
    edx = MEM32(ebx + 8);
    edi = edi + edx + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065199; /* jne: not equal / not zero */

loc_00065198: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00065199: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00065170; /* jg: greater (signed >) */

loc_000651A2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000651A8u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_000651A8: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x1809A4);
    eax = edi + -2;
    ecx = edx + ecx * 2;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000651C8u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_000651C8: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6EED74) = ecx;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00065160; /* jg: greater (signed >) */

loc_000651F1: ;
    g_seh_ebp = ebp; sub_00065280(); return; /* tail jmp 0x00065280 */

loc_000651F6: ;
    MEM32(esp + 0x24) = ebx;
    eax = MEM32(ebx + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x68;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ebx + eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(0x30D8C4) = eax;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00065282(); return; } /* jle: less or equal (signed <=) */

loc_0006521E: ;
    edi = edi;

    g_seh_ebp = ebp; sub_00065220(); return; /* fallthrough 0x00065220 */

}

/**
 * sub_00065220
 * Original: 0x00065220 - 0x0006526D (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065220: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00065228: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065243; /* jne: not equal / not zero */

loc_0006522C: ;
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ebx + 8);
    eax = eax + edx + 2;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = edx;
    goto loc_00065251;

loc_00065243: ;
    edx = MEM32(ebx + 8);
    eax = eax + edx + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065251; /* jne: not equal / not zero */

loc_00065250: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00065251: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00065228; /* jg: greater (signed >) */

loc_0006525A: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    eax = ZX16(MEM16(edi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0006529C(); return; } /* je: equal / zero */

loc_00065267: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00065290(); return; } /* je: equal / zero */

loc_0006526A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0006527A(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0006526D(); return; /* fallthrough 0x0006526D */

}

/**
 * sub_0006526D
 * Original: 0x0006526D - 0x0006527A (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006526D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006526D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065277u); RECOMP_ABI_CALL(0x000682A0u, sub_000682A0); /* call 0x000682A0 */

loc_00065277: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0006527A(); return; /* fallthrough 0x0006527A */

}

/**
 * sub_00065277
 * Original: 0x00065277 - 0x0006527A (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065277(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065277: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0006527A(); return; /* fallthrough 0x0006527A */

}

/**
 * sub_0006527A
 * Original: 0x0006527A - 0x00065282 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006527A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006527A: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00065220(); return; } /* jg: greater (signed >) */

loc_00065280: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */

    g_seh_ebp = ebp; sub_00065282(); return; /* fallthrough 0x00065282 */

}

/**
 * sub_00065280
 * Original: 0x00065280 - 0x00065282 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065280: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */

    g_seh_ebp = ebp; sub_00065282(); return; /* fallthrough 0x00065282 */

}

/**
 * sub_00065282
 * Original: 0x00065282 - 0x00065288 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065282_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065282: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_000650C0(); return; }

    g_seh_ebp = ebp; sub_00065288(); return; /* fallthrough 0x00065288 */

}

/**
 * sub_00065288
 * Original: 0x00065288 - 0x00065290 (8 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065288(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065288: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00065290
 * Original: 0x00065290 - 0x0006529C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065290: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006529Au); RECOMP_ABI_CALL(0x00067AB0u, sub_00067AB0); /* call 0x00067AB0 */

loc_0006529A: ;
    g_seh_ebp = ebp; sub_00065277(); return; /* tail jmp 0x00065277 */

}

/**
 * sub_0006529C
 * Original: 0x0006529C - 0x00065530 (660 bytes, 188 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006529C(void)
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

loc_0006529C: ;
    _fa = (uint32_t)(MEM32(0x30D8A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30D8A0), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0006526D(); return; } /* jne: not equal / not zero */

loc_000652A4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000652AEu); RECOMP_ABI_CALL(0x00067AB0u, sub_00067AB0); /* call 0x00067AB0 */

loc_000652AE: ;
    g_seh_ebp = ebp; sub_00065277(); return; /* tail jmp 0x00065277 */

    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    eax = MEM32(0x8FE5F4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    MEM32(esp) = eax;
    PUSH32(esp, esi);
    esi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006551F; /* jnp: not parity */

loc_000652D9: ;
    PUSH32(esp, ebx);
    MEM32(0x779200) = MEM32(0x779200) + 1;
    _fa = (uint32_t)(MEM32(0x779200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 4);
    MEM32(0x30D8A0) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x30D89C) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(0x30D8A4) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(0x30D8B4) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(0x30D8A8) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(0x30D8B8) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(0x30D8AC) = ecx;
    edx = MEM32(esi + 0x3C);
    MEM32(0x30D8BC) = edx;
    eax = MEM32(esi + 0x44);
    edx = MEM32(esp + 0x94);
    MEM32(0x30D8B0) = eax;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    MEM32(0x30D8C0) = ecx;
    MEM32(0x30D8C8) = edx;
    PUSH32(esp, 0x00065350u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00065350: ;
    ebx = esi + 0x50;
    ecx = ebx;
    PUSH32(esp, 0x0006535Au); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_0006535A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006551E; /* je: equal / zero */

loc_00065362: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000654EF; /* je: equal / zero */

loc_00065370: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x7C);
    PUSH32(esp, edi);

loc_00065376: ;
    eax = MEM32(0x30D8A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065399; /* je: equal / zero */

loc_0006537F: ;
    ecx = ebx + 0x10;
    PUSH32(esp, 0x00065387u); RECOMP_ABI_CALL(0x00063420u, sub_00063420); /* call 0x00063420 */

loc_00065387: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065399; /* jne: not equal / not zero */

loc_0006538B: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(ebx + eax * 4);
    ebx = ebx + eax * 4;
    goto loc_000654E5;

loc_00065399: ;
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000653B6; /* jne: not equal / not zero */

loc_000653A0: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000653CF; /* jnp: not parity */

loc_000653B6: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x000653C5u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000653C5: ;
    MEM32(0x180C9C) = 1;

loc_000653CF: ;
    ecx = 0x1B;
    esi = ebx;
    edi = esp + 0x14;
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
    edi = MEM32(esp + 0x10);
    edx = esp + 0x14;
    ecx = edi;
    PUSH32(esp, 0x000653EBu); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_000653EB: ;
    ecx = esp + 0x38;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xA0)); /* fmul dword ptr [esp + 0xa0] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00065404u); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00065404: ;
    _fa = (uint32_t)(MEM16(esp + 0x1E)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x1E), 2 (16-bit) */
    ecx = 0x4035C;
    if (CMP_NE(_fa, _fb)) goto loc_00065424; /* jne: not equal / not zero */

loc_00065411: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00065418u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00065418: ;
    MEM32(0x180CB0) = 0;
    goto loc_00065438;

loc_00065424: ;
    edx = 1;
    PUSH32(esp, 0x0006542Eu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006542E: ;
    MEM32(0x180CB0) = 1;

loc_00065438: ;
    edx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006545B; /* jbe: below or equal (unsigned <=) */

loc_00065445: ;
    PUSH32(esp, esi);
    edx = ebx;
    ecx = edi;
    PUSH32(esp, 0x0006544Fu); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_0006544F: ;
    edx = MEM32(esp + 0x7C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065445; /* jb: below (unsigned <) */

loc_0006545B: ;
    ecx = edi;
    PUSH32(esp, 0x00065462u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00065462: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx);
    ecx = edi;
    PUSH32(esp, 0x0006546Eu); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_0006546E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000654E7; /* jle: less or equal (signed <=) */

loc_00065475: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00065480;

    /* nop */

loc_00065480: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00065493; /* jne: not equal / not zero */

loc_00065487: ;
    ebp = MEM32(ebx + 4);
    eax = MEM32(ebx + 0xC);
    edi = edi + edx + 2;
    goto loc_0006549E;

loc_00065493: ;
    edi = edi + edx + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006549E; /* jne: not equal / not zero */

loc_0006549D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006549E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00065480; /* jg: greater (signed >) */

loc_000654A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000654ADu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_000654AD: ;
    eax = MEM32(0x1809A4);
    ecx = eax + ebp * 2;
    esi = edi + -2;
    PUSH32(esp, ecx);
    edx = esi + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000654C4u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_000654C4: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    MEM32(0x6EED74) = ecx;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00065475; /* jg: greater (signed >) */

loc_000654E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_000654E7: ;
    if (CMP_NE(_fa, _fb)) goto loc_00065376; /* jne: not equal / not zero */

loc_000654ED: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000654EF: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0x000654FEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000654FE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEM32(0x180CB0) = 1;
    PUSH32(esp, 0x00065514u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00065514: ;
    MEM32(0x180C9C) = 0;

loc_0006551E: ;
    POP32(esp, ebx);

loc_0006551F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00065530
 * Original: 0x00065530 - 0x00065549 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065530(void)
{

loc_00065530: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00065550
 * Original: 0x00065550 - 0x00065660 (272 bytes, 91 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065550: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FE5F4);
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00065598; /* je: equal / zero */

loc_00065568: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00065577; /* je: equal / zero */

loc_0006556B: ;
    ebx = 0x306328;
    edi = 0x32B3B8;
    goto loc_000655B1;

loc_00065577: ;
    edi = ZX8(MEM8(esp + 0x24));
    ebx = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x640);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1900);
    _fb = (uint32_t)(0x307858) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x307858;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x330810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x330810;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000655B1;

loc_00065598: ;
    edi = ZX8(MEM8(esp + 0x24));
    ebx = edi;
    ebx = ebx << 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x317040) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x317040;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x31B048) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x31B048;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000655B1: ;
    ebp = MEM32(esp + 0x28);
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00065659; /* jbe: below or equal (unsigned <=) */

loc_000655C3: ;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, esi);
    goto loc_000655D0;

    /* nop */

loc_000655D0: ;
    ecx = MEM32(ebp);
    edx = MEM32(0x30ECBC);
    esi = edx + ecx;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000655EAu); RECOMP_ABI_CALL(0x00065530u, sub_00065530); /* call 0x00065530 */

loc_000655EA: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006561Eu); RECOMP_ABI_CALL(0x00187C93u, sub_00187C93); /* call 0x00187C93 */

loc_0006561E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065640; /* jne: not equal / not zero */

loc_00065622: ;
    ecx = MEM32(edi);
    MEM32(ebx) = ecx;
    PUSH32(esp, 0x0006562Bu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0006562B: ;
    _fb = (uint32_t)(MEM32(0x6EA874)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x6EA874);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00065640; /* jbe: below or equal (unsigned <=) */

loc_00065636: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0006563Du); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0006563D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00065640: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_000655D0; /* jne: not equal / not zero */

loc_00065658: ;
    POP32(esp, esi);

loc_00065659: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000656F0
 * Original: 0x000656F0 - 0x00065766 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000656F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000656F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0006571B; /* jge: greater or equal (signed >=) */

loc_000656F7: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_000656FE: ;
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

loc_0006571B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00065729; /* jge: greater or equal (signed >=) */

loc_00065720: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_000656FE;

loc_00065729: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065738; /* jne: not equal / not zero */

loc_0006572E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065735u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_00065735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00065738: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065747; /* jne: not equal / not zero */

loc_0006573D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065744u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_00065744: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00065747: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065756; /* jne: not equal / not zero */

loc_0006574C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065753u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_00065753: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00065756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00065763; /* jg: greater (signed >) */

loc_0006575B: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065763u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_00065763: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00065770
 * Original: 0x00065770 - 0x00065795 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00065770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065770: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00065782; /* jl: less (signed <) */

loc_0006577D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065784; /* jb: below (unsigned <) */

loc_00065782: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00065784: ;
    ecx = ecx + ecx * 4;
    edx = MEM32(ecx * 8 + 0x6EEE18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065794; /* jne: not equal / not zero */

loc_00065792: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00065794: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000657A0
 * Original: 0x000657A0 - 0x000657B5 (21 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000657A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000657A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000657AAu); RECOMP_ABI_CALL(0x00163E60u, sub_00163E60); /* call 0x00163E60 */

loc_000657AA: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000657C0
 * Original: 0x000657C0 - 0x000657EF (47 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000657C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000657C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000657D6u); RECOMP_ABI_CALL(0x00168610u, sub_00168610); /* call 0x00168610 */

loc_000657D6: ;
    ecx = MEM32(esp + 0x14);
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
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000657F0
 * Original: 0x000657F0 - 0x00065804 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000657F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000657F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000657FFu); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_000657FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00065810
 * Original: 0x00065810 - 0x0006582E (30 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065810: ;
    PUSH32(esp, 0x00065815u); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_00065815: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x88760866u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00065830
 * Original: 0x00065830 - 0x00065858 (40 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00065830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065830: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00065853u); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_00065853: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00065860
 * Original: 0x00065860 - 0x00065861 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065860(void)
{

loc_00065860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00065870
 * Original: 0x00065870 - 0x00065889 (25 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00065870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065870: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00065884u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_00065884: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00065890
 * Original: 0x00065890 - 0x000658B8 (40 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065890: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006589Fu); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_0006589F: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(edx) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000658C0
 * Original: 0x000658C0 - 0x000658ED (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000658C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000658C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000658D4u); RECOMP_ABI_CALL(0x00168470u, sub_00168470); /* call 0x00168470 */

loc_000658D4: ;
    ecx = MEM32(esp + 0x10);
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
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000658F0
 * Original: 0x000658F0 - 0x000658F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000658F0(void)
{

loc_000658F0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00065900
 * Original: 0x00065900 - 0x00065976 (118 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065900: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x14) = edi;
    MEM32(ecx + 0x18) = edi;
    MEM32(ecx + 0x1C) = edi;
    MEM32(ecx + 0x20) = edi;
    eax = esi;

loc_00065933: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00065945; /* jae: above or equal (unsigned >=) */

loc_00065939: ;
    edx = MEM32(ecx + 0xC);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0xC) = edx;
    edx = eax;

loc_00065945: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00065957; /* jae: above or equal (unsigned >=) */

loc_0006594B: ;
    ebp = MEM32(ecx + 0x10);
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x10) = ebp;
    edx = eax;

loc_00065957: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00065969; /* jae: above or equal (unsigned >=) */

loc_0006595D: ;
    ebp = MEM32(ecx + 0x14);
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x14) = ebp;
    edx = eax;

loc_00065969: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065933; /* jne: not equal / not zero */

loc_0006596F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00065980
 * Original: 0x00065980 - 0x000659AD (45 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065980: ;
    ecx = MEM32(ecx + 0xC);
    edx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000659AA; /* jb: below (unsigned <) */

loc_0006598E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_00065994: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000659A0; /* je: equal / zero */

loc_00065998: ;
    edi = edx;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000659A2;

loc_000659A0: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_000659A2: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00065994; /* jbe: below or equal (unsigned <=) */

loc_000659A8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000659AA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000659B0
 * Original: 0x000659B0 - 0x000659DD (45 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000659B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000659B0: ;
    ecx = MEM32(ecx + 0x10);
    edx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000659DA; /* jb: below (unsigned <) */

loc_000659BE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_000659C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000659D0; /* je: equal / zero */

loc_000659C8: ;
    edi = edx;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000659D2;

loc_000659D0: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_000659D2: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000659C4; /* jbe: below or equal (unsigned <=) */

loc_000659D8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000659DA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000659E0
 * Original: 0x000659E0 - 0x000659EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000659E0(void)
{

loc_000659E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000659F0
 * Original: 0x000659F0 - 0x000659FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000659F0(void)
{

loc_000659F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00065A00
 * Original: 0x00065A00 - 0x00065A0E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A00: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00065A10
 * Original: 0x00065A10 - 0x00065A1E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A10: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00065A20
 * Original: 0x00065A20 - 0x00065A27 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A20: ;
    eax = MEM32(ecx + 0x1C);
    eax = eax | MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00065A30
 * Original: 0x00065A30 - 0x00065A45 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065A41u); RECOMP_ABI_CALL(0x00065550u, sub_00065550); /* call 0x00065550 */

loc_00065A41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00065A50
 * Original: 0x00065A50 - 0x00065A65 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065A61u); RECOMP_ABI_CALL(0x00065550u, sub_00065550); /* call 0x00065550 */

loc_00065A61: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00065A70
 * Original: 0x00065A70 - 0x00065A85 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065A81u); RECOMP_ABI_CALL(0x00065550u, sub_00065550); /* call 0x00065550 */

loc_00065A81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00065A90
 * Original: 0x00065A90 - 0x00065AD4 (68 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ebx = eax + 0x307690;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00065AD0; /* jle: less or equal (signed <=) */

loc_00065AAB: ;
    esi = esi << 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x31B048) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x31B048;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00065AB4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065AC6; /* je: equal / zero */

loc_00065ABA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065AC0u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065AC0: ;
    MEM32(esi) = 0;

loc_00065AC6: ;
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00065AB4; /* jl: less (signed <) */

loc_00065AD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00065AE0
 * Original: 0x00065AE0 - 0x00065B27 (71 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065AE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ebx = eax + 0x3075DC;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00065B23; /* jle: less or equal (signed <=) */

loc_00065AFB: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x640);
    _fb = (uint32_t)(0x330810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x330810;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00065B07: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065B19; /* je: equal / zero */

loc_00065B0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065B13u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065B13: ;
    MEM32(esi) = 0;

loc_00065B19: ;
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00065B07; /* jl: less (signed <) */

loc_00065B23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00065B30
 * Original: 0x00065B30 - 0x00065B68 (56 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065B30: ;
    eax = MEM32(0x30C3D8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00065B66; /* jle: less or equal (signed <=) */

loc_00065B3C: ;
    /* nop */

loc_00065B40: ;
    eax = MEM32(esi * 4 + 0x32B3B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065B5C; /* je: equal / zero */

loc_00065B4B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065B51u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065B51: ;
    MEM32(esi * 4 + 0x32B3B8) = 0;

loc_00065B5C: ;
    eax = MEM32(0x30C3D8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00065B40; /* jl: less (signed <) */

loc_00065B66: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00065B70
 * Original: 0x00065B70 - 0x00065C0F (159 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065B70: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0xC);
    eax = MEM32(0x8FE5F4);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065B8Du); RECOMP_ABI_CALL(0x001873C6u, sub_001873C6); /* call 0x001873C6 */

loc_00065B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00065C0A; /* jl: less (signed <) */

loc_00065B91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00065BA0;

    /* nop */

loc_00065BA0: ;
    eax = MEM32(ebp + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065BF0; /* je: equal / zero */

loc_00065BA8: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065BB0u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00065BB0: ;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065BBFu); RECOMP_ABI_CALL(0x00168470u, sub_00168470); /* call 0x00168470 */

loc_00065BBF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00065BDC; /* je: equal / zero */

loc_00065BC5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065BE6; /* je: equal / zero */

loc_00065BC9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00065BDCu); RECOMP_ABI_CALL(0x0018759Au, sub_0018759A); /* call 0x0018759A */

loc_00065BDC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065BE6; /* je: equal / zero */

loc_00065BE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00065BE6u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065BE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065BF0; /* je: equal / zero */

loc_00065BEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00065BF0u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065BF0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00065BA0; /* jl: less (signed <) */

loc_00065BF6: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00065C06u); RECOMP_ABI_CALL(0x0018795Bu, sub_0018795B); /* call 0x0018795B */

loc_00065C06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00065C0A: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00065C10
 * Original: 0x00065C10 - 0x00065CC6 (182 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00065C1Bu); RECOMP_ABI_CALL(0x00065770u, sub_00065770); /* call 0x00065770 */

loc_00065C1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065C24; /* jne: not equal / not zero */

loc_00065C22: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00065C24: ;
    esi = esi + esi * 4;
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x6EEE3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00065C5C; /* ja: above (unsigned >) */

loc_00065C43: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x65CC8); /* switch: 8 entries, 6 targets */
    if (_jt == 0x00065C4Au) goto loc_00065C4A;
    if (_jt == 0x00065C57u) goto loc_00065C57;
    if (_jt == 0x00065C61u) goto loc_00065C61;
    if (_jt == 0x00065C9Bu) goto loc_00065C9B;
    if (_jt == 0x00065CA8u) goto loc_00065CA8;
    if (_jt == 0x00065CBBu) goto loc_00065CBB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00065C4A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065C61; /* je: equal / zero */

loc_00065C51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065C57u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065C57: ;
    MEM32(esi + 0x18) = edi;
    goto loc_00065C61;

loc_00065C5C: ;
    PUSH32(esp, 0x00065C61u); RECOMP_ABI_CALL(0x000A9E11u, sub_000A9E11); /* call 0x000A9E11 */

loc_00065C61: ;
    MEM32(esi + 0x24) = edi;
    eax = MEM32(0x6EEE38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00065C87; /* je: equal / zero */

loc_00065C6D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00065C77; /* je: equal / zero */

loc_00065C70: ;
    PUSH32(esp, 0x00065C75u); RECOMP_ABI_CALL(0x000A9E11u, sub_000A9E11); /* call 0x000A9E11 */

loc_00065C75: ;
    goto loc_00065C87;

loc_00065C77: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065C87; /* je: equal / zero */

loc_00065C7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065C84u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065C84: ;
    MEM32(esi + 0x14) = edi;

loc_00065C87: ;
    MEM32(esi + 0x20) = edi;
    eax = MEM32(0x6EEE34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00065CB6; /* ja: above (unsigned >) */

loc_00065C94: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x65CD8); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00065C9Bu) goto loc_00065C9B;
    if (_jt == 0x00065CA8u) goto loc_00065CA8;
    if (_jt == 0x00065CBBu) goto loc_00065CBB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00065C9B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065CBB; /* je: equal / zero */

loc_00065CA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065CA8u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00065CA8: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00065CB6: ;
    PUSH32(esp, 0x00065CBBu); RECOMP_ABI_CALL(0x000A9E11u, sub_000A9E11); /* call 0x000A9E11 */

loc_00065CBB: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00065D20
 * Original: 0x00065D20 - 0x00065D92 (114 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065D20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00065D2Bu); RECOMP_ABI_CALL(0x00065770u, sub_00065770); /* call 0x00065770 */

loc_00065D2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065D62; /* je: equal / zero */

loc_00065D32: ;
    esi = esi + esi * 4;
    PUSH32(esp, 0);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, 0x00065D43u); RECOMP_ABI_CALL(0x00163E60u, sub_00163E60); /* call 0x00163E60 */

loc_00065D43: ;
    MEM32(0x6EEE14) = eax;
    PUSH32(esp, 0x00065D4Du); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_00065D4D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x6EEE10) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88760866u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x88760866u (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00065D66; /* jge: greater or equal (signed >=) */

loc_00065D62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00065D66: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065D73u); RECOMP_ABI_CALL(0x00163AC0u, sub_00163AC0); /* call 0x00163AC0 */

loc_00065D73: ;
    ecx = MEM32(0x1809A8);
    eax = 1;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(0x1809C4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00065DA0
 * Original: 0x00065DA0 - 0x00065DC0 (32 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065DA0(void)
{

loc_00065DA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00065DBAu); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_00065DBA: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00065E10
 * Original: 0x00065E10 - 0x00065E47 (55 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065E10(void)
{

loc_00065E10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = eax * 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00065E3Au); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_00065E3A: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00065E45u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_00065E45: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00065E50
 * Original: 0x00065E50 - 0x00065E6F (31 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065E50(void)
{

loc_00065E50: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00065E69u); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_00065E69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00065E70
 * Original: 0x00065E70 - 0x00065F6C (252 bytes, 103 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065E70: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00065E85u); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_00065E85: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065F67; /* jne: not equal / not zero */

loc_00065E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00065EA2u); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_00065EA2: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00065EB7u); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_00065EB7: ;
    ebx = MEM32(esp + 0x40);
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065EDC; /* jb: below (unsigned <) */

loc_00065EC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00065ED4; /* je: equal / zero */

loc_00065ECC: ;
    esi = eax;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00065ED6;

loc_00065ED4: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00065ED6: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00065EC8; /* jbe: below or equal (unsigned <=) */

loc_00065EDC: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    edi = ecx;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065F05; /* jb: below (unsigned <) */

loc_00065EF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00065EFD; /* je: equal / zero */

loc_00065EF5: ;
    esi = eax;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00065EFF;

loc_00065EFD: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00065EFF: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00065EF1; /* jbe: below or equal (unsigned <=) */

loc_00065F05: ;
    eax = MEM32(esp + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00065F64; /* jbe: below or equal (unsigned <=) */

loc_00065F13: ;
    eax = MEM32(esp + 0x30);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00065F53; /* jbe: below or equal (unsigned <=) */

loc_00065F1D: ;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00065F20: ;
    ebx = MEM32(esp + 0x18);
    eax = ecx;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ebx + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00065F3E; /* je: equal / zero */

loc_00065F2F: ;
    MEM8(eax) = 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0xFF;

loc_00065F3E: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065F20; /* jb: below (unsigned <) */

loc_00065F4B: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x48);

loc_00065F53: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00065F13; /* jb: below (unsigned <) */

loc_00065F64: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00065F67: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00065F70
 * Original: 0x00065F70 - 0x00065FCD (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065F70: ;
    edx = MEM32(0x6EED78);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x6EEE18;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00065F81: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00065F9A; /* je: equal / zero */

loc_00065F86: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00065F91; /* jge: greater or equal (signed >=) */

loc_00065F8D: ;
    edi = eax;
    edx = ecx;

loc_00065F91: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00065F81; /* jb: below (unsigned <) */

loc_00065F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00065FB4; /* jne: not equal / not zero */

loc_00065F9F: ;
    esi = edi + edi * 4;
    PUSH32(esp, edi);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, 0x00065FAFu); RECOMP_ABI_CALL(0x00065C10u, sub_00065C10); /* call 0x00065C10 */

loc_00065FAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;

loc_00065FB4: ;
    ecx = MEM32(0x6EED78);
    MEM32(esi + 4) = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = 1;
    MEM32(0x6EED78) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00065FD0
 * Original: 0x00065FD0 - 0x000660B3 (227 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00065FD0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00065FDBu); RECOMP_ABI_CALL(0x00065F70u, sub_00065F70); /* call 0x00065F70 */

loc_00065FDB: ;
    ebx = MEM32(esp + 0x2C);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = edi + edi * 4;
    PUSH32(esp, 0);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1C) = 3;
    PUSH32(esp, 0x00065FFFu); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_00065FFF: ;
    ecx = MEM32(esp + 0x20);
    eax = edi + edi * 4;
    eax = eax * 4 + 0x6EEDD4;
    edx = ecx * 4;
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00066030u); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_00066030: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x20) = 1;
    PUSH32(esp, 0x00066050u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00066050: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00066076; /* jge: greater or equal (signed >=) */

loc_00066063: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066069u); RECOMP_ABI_CALL(0x00065C10u, sub_00065C10); /* call 0x00065C10 */

loc_00066069: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00066076: ;
    ecx = MEM32(esi + 8);
    edx = ecx * 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    eax = edi + edi * 2;
    eax = eax * 8 + 0x6EED88;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x24) = 3;
    edx = MEM32(edx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000660AAu); RECOMP_ABI_CALL(0x001A648Cu, sub_001A648C); /* call 0x001A648C */

loc_000660AA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000660C0
 * Original: 0x000660C0 - 0x000661D3 (275 bytes, 94 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000660C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000660C0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000660CBu); RECOMP_ABI_CALL(0x00065F70u, sub_00065F70); /* call 0x00065F70 */

loc_000660CB: ;
    ebx = MEM32(esp + 0x2C);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = edi + edi * 4;
    PUSH32(esp, 0);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1C) = 3;
    PUSH32(esp, 0x000660EFu); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_000660EF: ;
    ecx = MEM32(esp + 0x20);
    eax = edi + edi * 4;
    eax = eax * 4 + 0x6EEDD4;
    edx = ecx * 4;
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00066120u); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_00066120: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2362AC);
    PUSH32(esp, 0x0006613Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0006613F: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = 1;
    PUSH32(esp, 0x00066154u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00066154: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8007000Eu (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0006617A; /* jge: greater or equal (signed >=) */

loc_00066167: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006616Du); RECOMP_ABI_CALL(0x00065C10u, sub_00065C10); /* call 0x00065C10 */

loc_0006616D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006617A: ;
    ecx = MEM32(esi + 8);
    edx = ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = edi + edi * 2;
    eax = eax * 8 + 0x6EED88;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = 2;
    PUSH32(esp, 0x000661A8u); RECOMP_ABI_CALL(0x001A648Cu, sub_001A648C); /* call 0x001A648C */

loc_000661A8: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000661B6u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_000661B6: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x236294);
    PUSH32(esp, 0x000661C7u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000661C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000661E0
 * Original: 0x000661E0 - 0x000662A1 (193 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000661E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000661E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000661E9u); RECOMP_ABI_CALL(0x00065F70u, sub_00065F70); /* call 0x00065F70 */

loc_000661E9: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);
    edi = eax;
    ecx = ebx * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = edi + edi * 4;
    eax = eax * 4 + 0x6EEDD4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = edi + edi * 4;
    PUSH32(esp, ebp);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1C) = 2;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0006622Bu); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_0006622B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00066239u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_00066239: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x20) = 1;
    PUSH32(esp, 0x00066251u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_00066251: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00066289; /* jl: less (signed <) */

loc_00066264: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, 0x00066276u); RECOMP_ABI_CALL(0x00168610u, sub_00168610); /* call 0x00168610 */

loc_00066276: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x18) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8007000Eu (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0006629A; /* jge: greater or equal (signed >=) */

loc_00066289: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006628Fu); RECOMP_ABI_CALL(0x00065C10u, sub_00065C10); /* call 0x00065C10 */

loc_0006628F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006629A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000662B0
 * Original: 0x000662B0 - 0x00066385 (213 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000662B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000662B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000662BBu); RECOMP_ABI_CALL(0x00065F70u, sub_00065F70); /* call 0x00065F70 */

loc_000662BB: ;
    ebx = MEM32(esp + 0x2C);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = edi + edi * 4;
    PUSH32(esp, 0);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1C) = 3;
    PUSH32(esp, 0x000662DFu); RECOMP_ABI_CALL(0x001683D0u, sub_001683D0); /* call 0x001683D0 */

loc_000662DF: ;
    ecx = MEM32(esp + 0x20);
    eax = edi + edi * 4;
    eax = eax * 4 + 0x6EEDD4;
    edx = ecx * 4;
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00066313u); RECOMP_ABI_CALL(0x001A64CDu, sub_001A64CD); /* call 0x001A64CD */

loc_00066313: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x0006632Fu); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_0006632F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00066369; /* jl: less (signed <) */

loc_00066342: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0x00066356u); RECOMP_ABI_CALL(0x00168610u, sub_00168610); /* call 0x00168610 */

loc_00066356: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x18) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8007000Eu (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0006637C; /* jge: greater or equal (signed >=) */

loc_00066369: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006636Fu); RECOMP_ABI_CALL(0x00065C10u, sub_00065C10); /* call 0x00065C10 */

loc_0006636F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006637C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00066390
 * Original: 0x00066390 - 0x00066441 (177 bytes, 68 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00066390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066399u); RECOMP_ABI_CALL(0x00065F70u, sub_00065F70); /* call 0x00065F70 */

loc_00066399: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 3);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebp = eax;
    PUSH32(esp, 1);
    esi = ebp + ebp * 4;
    PUSH32(esp, edi);
    esi = esi * 8 + 0x6EEE18;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1C) = 1;
    PUSH32(esp, 0x000663C6u); RECOMP_ABI_CALL(0x00168310u, sub_00168310); /* call 0x00168310 */

loc_000663C6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x10) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00066429; /* jl: less (signed <) */

loc_000663D9: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x20) = 1;
    PUSH32(esp, 0x000663F1u); RECOMP_ABI_CALL(0x001683E0u, sub_001683E0); /* call 0x001683E0 */

loc_000663F1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00066429; /* jl: less (signed <) */

loc_00066404: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, 0x00066416u); RECOMP_ABI_CALL(0x00168610u, sub_00168610); /* call 0x00168610 */

loc_00066416: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x18) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0006643A; /* jge: greater or equal (signed >=) */

loc_00066429: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006642Fu); RECOMP_ABI_CALL(0x00065C10u, sub_00065C10); /* call 0x00065C10 */

loc_0006642F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006643A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00066450
 * Original: 0x00066450 - 0x0006687B (1067 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066450(void)
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

loc_00066450: ;
    fp_push(MEMF(0x2E5A28)); /* fld float */
    edx = MEM32(0x2E5A30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    ecx = MEM32(0x2E5A2C);
    eax = MEM32(0x2E5A28);
    MEM32(0x6EEE9C) = edx;
    MEMF(0x6EEEA4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x2E5A3C);
    fp_push(MEMF(0x2E5A2C)); /* fld float */
    MEM32(0x6EEE98) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    ecx = MEM32(0x2E5A38);
    MEM32(0x6EEF14) = edx;
    edx = MEM32(0x2E5A48);
    MEMF(0x6EEEA8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEF10) = ecx;
    fp_push(MEMF(0x2E5A30)); /* fld float */
    ecx = MEM32(0x2E5A40);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEF8C) = edx;
    edx = MEM32(0x2E5A4C);
    MEM32(0x6EEE94) = eax;
    MEMF(0x6EEEAC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 3;
    fp_push(MEMF(0x2E5A38)); /* fld float */
    MEM32(0x6EEF18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6EEF90) = edx;
    edx = MEM32(0x2E5A50);
    MEMF(0x6EEF20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEEB4) = 0x3DCCCCCD;
    fp_push(MEMF(0x2E5A3C)); /* fld float */
    MEM32(0x6EEEB8) = 0x3DCCCCCD;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEEBC) = 0x3DCCCCCD;
    MEM32(0x6EEEC0) = 0;
    MEM32(0x6EEEA0) = 0;
    MEMF(0x6EEF24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEEB0) = 0;
    fp_push(MEMF(0x2E5A40)); /* fld float */
    MEM32(0x6EEED0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEED4) = 0xBF800000u;
    MEM32(0x6EEED8) = 0;
    MEM32(0x6EEEDC) = 0x42C80000;
    MEMF(0x6EEF28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEEE4) = 0x3F800000;
    fp_push(MEMF(0x2E5A48)); /* fld float */
    MEM32(0x6EEEE8) = 0x3D4CCCCD;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEEEC) = 0x3A83126F;
    MEM32(0x6EEE90) = eax;
    MEM32(0x6EEEF8) = 0x3E99999A;
    MEMF(0x6EEF9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEEFC) = 0x3E99999A;
    MEM32(0x6EEF00) = 0x3E99999A;
    MEM32(0x6EEF30) = 0;
    MEM32(0x6EEF34) = 0;
    MEM32(0x6EEF38) = 0;
    MEM32(0x6EEF3C) = 0;
    MEM32(0x6EEF1C) = 0;
    MEM32(0x6EEF2C) = 0;
    MEM32(0x6EEF4C) = 0x3F800000;
    MEM32(0x6EEF50) = 0xBF800000u;
    MEM32(0x6EEF54) = 0;
    MEM32(0x6EEF58) = 0x42C80000;
    MEM32(0x6EEF60) = 0x3F800000;
    MEM32(0x6EEF64) = 0x3D4CCCCD;
    MEM32(0x6EEF68) = 0x3A83126F;
    MEM32(0x6EEF0C) = eax;
    MEM32(0x6EEF74) = 0x3E99999A;
    MEM32(0x6EEF78) = 0x3E99999A;
    MEM32(0x6EEF7C) = 0x3E99999A;
    MEM32(0x6EEF84) = ecx;
    MEM32(0x6EEFAC) = ecx;
    MEM32(0x6EEFB0) = ecx;
    MEM32(0x6EEFB4) = ecx;
    MEM32(0x6EEFB8) = ecx;
    MEM32(0x6EEF94) = edx;
    MEM32(0x6EEF98) = ecx;
    fp_push(MEMF(0x2E5A4C)); /* fld float */
    edx = MEM32(0x2E5A58);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EF008) = edx;
    edx = MEM32(0x2E5A5C);
    MEM32(0x6EF00C) = edx;
    MEMF(0x6EEFA0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x2E5A60);
    fp_push(MEMF(0x2E5A50)); /* fld float */
    MEM32(0x6EEFA8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEFC8) = 0x3F800000;
    MEM32(0x6EEFCC) = 0xBF800000u;
    MEM32(0x6EEFD0) = ecx;
    MEMF(0x6EEFA4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEFD4) = 0x42C80000;
    fp_push(MEMF(0x2E5A58)); /* fld float */
    MEM32(0x6EEFDC) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEFE0) = 0x3D4CCCCD;
    MEM32(0x6EEFE4) = 0x3A83126F;
    MEM32(0x6EEF88) = eax;
    MEMF(0x6EF018) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EEFF0) = 0x3E99999A;
    fp_push(MEMF(0x2E5A5C)); /* fld float */
    MEM32(0x6EEFF4) = 0x3E99999A;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EEFF8) = 0x3E99999A;
    MEM32(0x6EF000) = ecx;
    MEM32(0x6EF028) = ecx;
    MEMF(0x6EF01C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EF02C) = ecx;
    fp_push(MEMF(0x2E5A60)); /* fld float */
    MEM32(0x6EF030) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E0)); /* fmul dword ptr [0x22c1e0] */
    MEM32(0x6EF034) = ecx;
    MEM32(0x6EF010) = edx;
    MEM32(0x6EF014) = ecx;
    MEMF(0x6EF020) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6EF024) = ecx;
    MEM32(0x6EF044) = 0x3F800000;
    MEM32(0x6EF048) = 0xBF800000u;
    MEM32(0x6EF04C) = ecx;
    MEM32(0x6EF050) = 0x42C80000;
    MEM32(0x6EF058) = 0x3F800000;
    MEM32(0x6EF05C) = 0x3D4CCCCD;
    MEM32(0x6EF060) = 0x3A83126F;
    MEM32(0x6EF004) = eax;
    MEM32(0x6EF06C) = 0x3E99999A;
    MEM32(0x6EF070) = 0x3E99999A;
    MEM32(0x6EF074) = 0x3E99999A;
    MEM32(0x6EF07C) = ecx;
    MEM32(0x6EF0A0) = 0xFF202020u;
    MEM32(0x6EEF08) = 1;
    MEM32(0x6EF080) = eax;
    MEM32(0x6EF088) = ecx;
    MEM32(0x6EF08C) = ecx;
    MEM32(0x6EF090) = 0x437F0000;
    MEM32(0x6EF084) = ecx;
    MEM32(0x6EF094) = 0x3F800000;
    MEM32(0x6EF098) = 0x43160000;
    MEM32(0x6EF09C) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066880
 * Original: 0x00066880 - 0x00066975 (245 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066880: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x7C);
    eax = MEM32(esi + 0x6EEE90);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x6EEE94);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x6EEE98);
    MEM32(edi + 8) = edx;
    eax = MEM32(esi + 0x6EEE9C);
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(esi + 0x6EEEA4);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 0x6EEEA8);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(esi + 0x6EEEAC);
    MEM32(edi + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = eax;
    ecx = MEM32(esi + 0x6EEEC4);
    edx = MEM32(esi + 0x6EEEC8);
    eax = MEM32(esi + 0x6EEECC);
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00066900u); RECOMP_ABI_CALL(0x0006B0F0u, sub_0006B0F0); /* call 0x0006B0F0 */

loc_00066900: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x34) = ecx;
    MEM32(edi + 0x38) = edx;
    MEM32(edi + 0x3C) = eax;
    ecx = MEM32(esi + 0x6EEED0);
    MEM32(edi + 0x40) = ecx;
    edx = MEM32(esi + 0x6EEED4);
    MEM32(edi + 0x44) = edx;
    eax = MEM32(esi + 0x6EEED8);
    MEM32(edi + 0x48) = eax;
    ecx = MEM32(esi + 0x6EEEDC);
    MEM32(edi + 0x4C) = ecx;
    edx = MEM32(esi + 0x6EEEE0);
    MEM32(edi + 0x50) = edx;
    eax = MEM32(esi + 0x6EEEE4);
    MEM32(edi + 0x54) = eax;
    ecx = MEM32(esi + 0x6EEEE8);
    MEM32(edi + 0x58) = ecx;
    edx = MEM32(esi + 0x6EEEEC);
    MEM32(edi + 0x5C) = edx;
    eax = MEM32(esi + 0x6EEEF0);
    MEM32(edi + 0x60) = eax;
    ecx = MEM32(esi + 0x6EEEF4);
    MEM32(edi + 0x64) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00066980
 * Original: 0x00066980 - 0x000669A6 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066980(void)
{

loc_00066980: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x6EEED0) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x6EEED4) = edx;
    MEM32(eax + 0x6EEED8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000669B0
 * Original: 0x000669B0 - 0x000669D6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000669B0(void)
{

loc_000669B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(ecx);
    MEM32(eax + 0x6EEED0) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x6EEED4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x6EEED8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000669E0
 * Original: 0x000669E0 - 0x00066A06 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000669E0(void)
{

loc_000669E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x6EEEC4) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x6EEEC8) = edx;
    MEM32(eax + 0x6EEECC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00066A10
 * Original: 0x00066A10 - 0x00066A36 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066A10(void)
{

loc_00066A10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(ecx);
    MEM32(eax + 0x6EEEC4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x6EEEC8) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x6EEECC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00066A40
 * Original: 0x00066A40 - 0x00066A96 (86 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00066A40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00066A40: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6EEEF8)); /* fmul dword ptr [eax + 0x6eeef8] */
    MEM32(eax + 0x6EEE94) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x6EEE98) = edx;
    MEMF(eax + 0x6EEEA4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x6EEE9C) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6EEEFC)); /* fmul dword ptr [eax + 0x6eeefc] */
    MEMF(eax + 0x6EEEA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6EEF00)); /* fmul dword ptr [eax + 0x6eef00] */
    MEMF(eax + 0x6EEEAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066AA0
 * Original: 0x00066AA0 - 0x00066AF2 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00066AA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00066AA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(ecx);
    fp_push(MEMF(eax + 0x6EEEF8)); /* fld float */
    MEM32(eax + 0x6EEE94) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x6EEE98) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x6EEE9C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax + 0x6EEEA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x6EEEFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(eax + 0x6EEEA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x6EEF00)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(eax + 0x6EEEAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066B00
 * Original: 0x00066B00 - 0x00066B54 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00066B00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00066B00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(ecx + 4);
    fp_push(MEMF(eax + 0x6EEEF8)); /* fld float */
    MEM32(eax + 0x6EEE94) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x6EEE98) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x6EEE9C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(eax + 0x6EEEA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x6EEEFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(eax + 0x6EEEA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x6EEF00)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    MEMF(eax + 0x6EEEAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066B60
 * Original: 0x00066B60 - 0x00066B86 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066B60(void)
{

loc_00066B60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x6EEEB4) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x6EEEB8) = edx;
    MEM32(eax + 0x6EEEBC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00066B90
 * Original: 0x00066B90 - 0x00066BB6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066B90(void)
{

loc_00066B90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(ecx);
    MEM32(eax + 0x6EEEB4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x6EEEB8) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x6EEEBC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00066BC0
 * Original: 0x00066BC0 - 0x00066DBC (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066BC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00066BDB; /* jge: greater or equal (signed >=) */

loc_00066BC5: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x00066BD3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00066BD3: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_00066BDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00066C00; /* jge: greater or equal (signed >=) */

loc_00066BE3: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_00066C00: ;
    if (CMP_NE(_fa, _fb)) goto loc_00066C09; /* jne: not equal / not zero */

loc_00066C02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C08u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_00066C08: ;
    esp += 4; return; /* ret */

loc_00066C09: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C18; /* jne: not equal / not zero */

loc_00066C11: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C17u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_00066C17: ;
    esp += 4; return; /* ret */

loc_00066C18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C27; /* jne: not equal / not zero */

loc_00066C20: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C26u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_00066C26: ;
    esp += 4; return; /* ret */

loc_00066C27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C36; /* jne: not equal / not zero */

loc_00066C2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C35u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_00066C35: ;
    esp += 4; return; /* ret */

loc_00066C36: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C45; /* jne: not equal / not zero */

loc_00066C3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C44u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_00066C44: ;
    esp += 4; return; /* ret */

loc_00066C45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C54; /* jne: not equal / not zero */

loc_00066C4D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C53u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_00066C53: ;
    esp += 4; return; /* ret */

loc_00066C54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C63; /* jne: not equal / not zero */

loc_00066C5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C62u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_00066C62: ;
    esp += 4; return; /* ret */

loc_00066C63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C72; /* jne: not equal / not zero */

loc_00066C6B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C71u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00066C71: ;
    esp += 4; return; /* ret */

loc_00066C72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C81; /* jne: not equal / not zero */

loc_00066C7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C80u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_00066C80: ;
    esp += 4; return; /* ret */

loc_00066C81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C90; /* jne: not equal / not zero */

loc_00066C89: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C8Fu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_00066C8F: ;
    esp += 4; return; /* ret */

loc_00066C90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066C9F; /* jne: not equal / not zero */

loc_00066C98: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066C9Eu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00066C9E: ;
    esp += 4; return; /* ret */

loc_00066C9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066CAE; /* jne: not equal / not zero */

loc_00066CA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066CADu); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_00066CAD: ;
    esp += 4; return; /* ret */

loc_00066CAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066CBD; /* jne: not equal / not zero */

loc_00066CB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066CBCu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_00066CBC: ;
    esp += 4; return; /* ret */

loc_00066CBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066CCC; /* jne: not equal / not zero */

loc_00066CC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066CCBu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_00066CCB: ;
    esp += 4; return; /* ret */

loc_00066CCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066CDB; /* jne: not equal / not zero */

loc_00066CD4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066CDAu); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_00066CDA: ;
    esp += 4; return; /* ret */

loc_00066CDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066CEA; /* jne: not equal / not zero */

loc_00066CE3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066CE9u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_00066CE9: ;
    esp += 4; return; /* ret */

loc_00066CEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066CF9; /* jne: not equal / not zero */

loc_00066CF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066CF8u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_00066CF8: ;
    esp += 4; return; /* ret */

loc_00066CF9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D08; /* jne: not equal / not zero */

loc_00066D01: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D07u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_00066D07: ;
    esp += 4; return; /* ret */

loc_00066D08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D17; /* jne: not equal / not zero */

loc_00066D10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D16u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_00066D16: ;
    esp += 4; return; /* ret */

loc_00066D17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D26; /* jne: not equal / not zero */

loc_00066D1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D25u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_00066D25: ;
    esp += 4; return; /* ret */

loc_00066D26: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D35; /* jne: not equal / not zero */

loc_00066D2E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D34u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_00066D34: ;
    esp += 4; return; /* ret */

loc_00066D35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D44; /* jne: not equal / not zero */

loc_00066D3D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D43u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_00066D43: ;
    esp += 4; return; /* ret */

loc_00066D44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D53; /* jne: not equal / not zero */

loc_00066D4C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D52u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_00066D52: ;
    esp += 4; return; /* ret */

loc_00066D53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D62; /* jne: not equal / not zero */

loc_00066D5B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D61u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_00066D61: ;
    esp += 4; return; /* ret */

loc_00066D62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D71; /* jne: not equal / not zero */

loc_00066D6A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D70u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_00066D70: ;
    esp += 4; return; /* ret */

loc_00066D71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D80; /* jne: not equal / not zero */

loc_00066D79: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D7Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_00066D7F: ;
    esp += 4; return; /* ret */

loc_00066D80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D8F; /* jne: not equal / not zero */

loc_00066D88: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D8Eu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_00066D8E: ;
    esp += 4; return; /* ret */

loc_00066D8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066D9E; /* jne: not equal / not zero */

loc_00066D97: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066D9Du); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_00066D9D: ;
    esp += 4; return; /* ret */

loc_00066D9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066DAD; /* jne: not equal / not zero */

loc_00066DA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066DACu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_00066DAC: ;
    esp += 4; return; /* ret */

loc_00066DAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066DBB; /* jne: not equal / not zero */

loc_00066DB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00066DBBu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_00066DBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00066DC0
 * Original: 0x00066DC0 - 0x00066EAB (235 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066DC0(void)
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

loc_00066DC0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066DD8; /* jne: not equal / not zero */

loc_00066DD1: ;
    eax = 0xFF;
    goto loc_00066DFC;

loc_00066DD8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066DED; /* jp: parity */

loc_00066DE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00066DFC;

loc_00066DED: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066DFCu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066DFC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066E1F; /* jne: not equal / not zero */

loc_00066E18: ;
    eax = 0xFF;
    goto loc_00066E43;

loc_00066E1F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066E34; /* jp: parity */

loc_00066E30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00066E43;

loc_00066E34: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066E43u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066E43: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    SET_HI8(ecx, LO8(eax));
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066E6B; /* jne: not equal / not zero */

loc_00066E5A: ;
    eax = 0xFF;
    eax = eax & eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6EF0A0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00066E6B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066E8D; /* jp: parity */

loc_00066E7C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6EF0A0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00066E8D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066E9Cu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066E9C: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6EF0A0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066EB0
 * Original: 0x00066EB0 - 0x00066F09 (89 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066EB0(void)
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

loc_00066EB0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066EC8; /* jne: not equal / not zero */

loc_00066EC1: ;
    eax = 0xFF;
    goto loc_00066EEC;

loc_00066EC8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066EDD; /* jp: parity */

loc_00066ED9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00066EEC;

loc_00066EDD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066EECu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066EEC: ;
    ecx = eax;
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6EF0A0) = eax;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066F10
 * Original: 0x00066F10 - 0x00066FEF (223 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066F10(void)
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

loc_00066F10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066F2B; /* jne: not equal / not zero */

loc_00066F24: ;
    eax = 0xFF;
    goto loc_00066F4B;

loc_00066F2B: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066F3E; /* jp: parity */

loc_00066F3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00066F4B;

loc_00066F3E: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066F4Bu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066F4B: ;
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x6EF0A0) = eax;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066F6F; /* jne: not equal / not zero */

loc_00066F68: ;
    eax = 0xFF;
    goto loc_00066F91;

loc_00066F6F: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066F83; /* jp: parity */

loc_00066F7F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00066F91;

loc_00066F83: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066F91u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066F91: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, LO8(eax));
    eax = MEM32(0x6EF0A0);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6EF0A0) = eax;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00066FB8; /* jne: not equal / not zero */

loc_00066FB1: ;
    eax = 0xFF;
    goto loc_00066FDA;

loc_00066FB8: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00066FCC; /* jp: parity */

loc_00066FC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00066FDA;

loc_00066FCC: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x00066FDAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00066FDA: ;
    ecx = MEM32(0x6EF0A0);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6EF0A0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00066FF0
 * Original: 0x00066FF0 - 0x00067023 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066FF0: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006700E; /* jne: not equal / not zero */

loc_00066FFA: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    MEM32(eax + 0x6EEE90) = ecx;
    MEM32(eax + 0x6EEF08) = ecx;
    esp += 4; return; /* ret */

loc_0006700E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax * 4 + 0x2E5AC8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7C);
    MEM32(ecx + 0x6EEE90) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00067030
 * Original: 0x00067030 - 0x00067042 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067030(void)
{

loc_00067030: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    MEM32(eax + 0x6EEF08) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00067050
 * Original: 0x00067050 - 0x00067062 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067050(void)
{

loc_00067050: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    MEM32(eax + 0x6EEEDC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00067070
 * Original: 0x00067070 - 0x00067096 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067070(void)
{

loc_00067070: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x6EEEE4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x6EEEE8) = edx;
    MEM32(eax + 0x6EEEEC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000670A0
 * Original: 0x000670A0 - 0x000670B2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670A0(void)
{

loc_000670A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    MEM32(eax + 0x6EEEE0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000670C0
 * Original: 0x000670C0 - 0x000670D2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670C0(void)
{

loc_000670C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    MEM32(eax + 0x6EEEF0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000670E0
 * Original: 0x000670E0 - 0x000670F2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670E0(void)
{

loc_000670E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    MEM32(eax + 0x6EEEF4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00067100
 * Original: 0x00067100 - 0x00067120 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067100(void)
{

loc_00067100: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = ecx;
    MEM32(eax + 0x6EEEF8) = ecx;
    MEM32(eax + 0x6EEEFC) = edx;
    MEM32(eax + 0x6EEF00) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00067170
 * Original: 0x00067170 - 0x0006717A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067170(void)
{

loc_00067170: ;
    eax = MEM32(esp + 4);
    MEM32(0x6EF080) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067180
 * Original: 0x00067180 - 0x0006719E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067180(void)
{

loc_00067180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(0x6EF088) = eax;
    MEM32(0x6EF08C) = ecx;
    MEM32(0x6EF090) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000671A0
 * Original: 0x000671A0 - 0x000671BF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671A0(void)
{

loc_000671A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(0x6EF088) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x6EF08C) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(0x6EF090) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000671C0
 * Original: 0x000671C0 - 0x000671CA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671C0(void)
{

loc_000671C0: ;
    eax = MEM32(esp + 4);
    MEM32(0x6EF098) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000671D0
 * Original: 0x000671D0 - 0x000671DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671D0(void)
{

loc_000671D0: ;
    eax = MEM32(esp + 4);
    MEM32(0x6EF094) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000671E0
 * Original: 0x000671E0 - 0x000671EA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671E0(void)
{

loc_000671E0: ;
    eax = MEM32(esp + 4);
    MEM32(0x6EF09C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067210
 * Original: 0x00067210 - 0x00067215 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067210(void)
{

loc_00067210: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00067220
 * Original: 0x00067220 - 0x000672C8 (168 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00067220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067237u); RECOMP_ABI_CALL(0x0006ACC0u, sub_0006ACC0); /* call 0x0006ACC0 */

loc_00067237: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006723Cu); RECOMP_ABI_CALL(0x0006ACA0u, sub_0006ACA0); /* call 0x0006ACA0 */

loc_0006723C: ;
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067248u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00067248: ;
    ecx = 0x30AA70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067252u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_00067252: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6EEF08;
    /* nop */

loc_00067260: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006728A; /* je: equal / zero */

loc_00067265: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067270u); RECOMP_ABI_CALL(0x00066880u, sub_00066880); /* call 0x00066880 */

loc_00067270: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006728A; /* je: equal / zero */

loc_0006727B: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067286u); RECOMP_ABI_CALL(0x001647F0u, sub_001647F0); /* call 0x001647F0 */

loc_00067286: ;
    PUSH32(esp, 1);
    goto loc_0006728C;

loc_0006728A: ;
    PUSH32(esp, 0);

loc_0006728C: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067292u); RECOMP_ABI_CALL(0x00164AB0u, sub_00164AB0); /* call 0x00164AB0 */

loc_00067292: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6EF0F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6EF0F8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00067260; /* jl: less (signed <) */

loc_0006729E: ;
    eax = MEM32(0x1809A8);
    edx = MEM32(0x6EF0A0);
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esp + 0x10;
    MEM32(0x1809A8) = eax;
    MEM32(0x180D7C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000672C2u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000672C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000672D0
 * Original: 0x000672D0 - 0x00067432 (354 bytes, 85 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000672D0(void)
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

loc_000672D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x6EF080);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000672F4; /* jne: not equal / not zero */

loc_000672DC: ;
    eax = MEM32(0x1809A8);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x180D20) = ebx;
    MEM32(0x1809A8) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000672F4: ;
    fp_push(MEMF(0x6EF088)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x236290)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x236290] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00067311; /* jne: not equal / not zero */

loc_00067307: ;
    MEM32(0x6EF088) = 0x437F0000;

loc_00067311: ;
    fp_push(MEMF(0x6EF08C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x236290)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x236290] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006732E; /* jne: not equal / not zero */

loc_00067324: ;
    MEM32(0x6EF08C) = 0x437F0000;

loc_0006732E: ;
    fp_push(MEMF(0x6EF090)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x236290)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x236290] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006734B; /* jne: not equal / not zero */

loc_00067341: ;
    MEM32(0x6EF090) = 0x437F0000;

loc_0006734B: ;
    fp_push(MEMF(0x6EF088)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00067368; /* jp: parity */

loc_0006735E: ;
    MEM32(0x6EF088) = 0;

loc_00067368: ;
    fp_push(MEMF(0x6EF08C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00067385; /* jp: parity */

loc_0006737B: ;
    MEM32(0x6EF08C) = 0;

loc_00067385: ;
    fp_push(MEMF(0x6EF090)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000673A2; /* jp: parity */

loc_00067398: ;
    MEM32(0x6EF090) = 0;

loc_000673A2: ;
    fp_push(MEMF(0x6EF088)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000673AFu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000673AF: ;
    fp_push(MEMF(0x6EF08C)); /* fld float */
    esi = eax;
    PUSH32(esp, 0x000673BCu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000673BC: ;
    fp_push(MEMF(0x6EF090)); /* fld float */
    edi = eax;
    PUSH32(esp, 0x000673C9u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000673C9: ;
    ecx = MEM32(0x1809A8);
    esi = esi | 0xFFFFFF00u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x1809A8) = ecx;
    MEM32(0x180D24) = ebx;
    PUSH32(esp, 0x000673F7u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_000673F7: ;
    eax = MEM32(0x6EF094);
    edx = MEM32(0x6EF09C);
    ecx = MEM32(0x6EF098);
    MEM32(0x180D28) = eax;
    eax = MEM32(0x1809A8);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x1809A8) = eax;
    eax = edx;
    POP32(esp, esi);
    MEM32(0x180D2C) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(0x180D30) = eax;
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
 * sub_00067440
 * Original: 0x00067440 - 0x00067441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067440(void)
{

loc_00067440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00067450
 * Original: 0x00067450 - 0x0006745A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067450(void)
{

loc_00067450: ;
    eax = MEM32(esp + 4);
    MEM32(0x8FE238) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067460
 * Original: 0x00067460 - 0x0006746A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067460(void)
{

loc_00067460: ;
    eax = MEM32(esp + 4);
    MEM32(0x8FE23C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067470
 * Original: 0x00067470 - 0x0006747A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067470(void)
{

loc_00067470: ;
    eax = MEM32(esp + 4);
    MEM32(0x77E220) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067480
 * Original: 0x00067480 - 0x0006748A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067480(void)
{

loc_00067480: ;
    eax = MEM32(esp + 4);
    MEM32(0x7FE22C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067490
 * Original: 0x00067490 - 0x0006749A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067490(void)
{

loc_00067490: ;
    eax = MEM32(esp + 4);
    MEM32(0x7FE230) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000674A0
 * Original: 0x000674A0 - 0x000674AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674A0(void)
{

loc_000674A0: ;
    ecx = MEM32(eax * 4 + 0x180BB0);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000674B0
 * Original: 0x000674B0 - 0x000676AC (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000674B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000674CB; /* jge: greater or equal (signed >=) */

loc_000674B5: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x000674C3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000674C3: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_000674CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000674F0; /* jge: greater or equal (signed >=) */

loc_000674D3: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_000674F0: ;
    if (CMP_NE(_fa, _fb)) goto loc_000674F9; /* jne: not equal / not zero */

loc_000674F2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000674F8u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_000674F8: ;
    esp += 4; return; /* ret */

loc_000674F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067508; /* jne: not equal / not zero */

loc_00067501: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067507u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_00067507: ;
    esp += 4; return; /* ret */

loc_00067508: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067517; /* jne: not equal / not zero */

loc_00067510: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067516u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_00067516: ;
    esp += 4; return; /* ret */

loc_00067517: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067526; /* jne: not equal / not zero */

loc_0006751F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067525u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_00067525: ;
    esp += 4; return; /* ret */

loc_00067526: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067535; /* jne: not equal / not zero */

loc_0006752E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067534u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_00067534: ;
    esp += 4; return; /* ret */

loc_00067535: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067544; /* jne: not equal / not zero */

loc_0006753D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067543u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_00067543: ;
    esp += 4; return; /* ret */

loc_00067544: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067553; /* jne: not equal / not zero */

loc_0006754C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067552u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_00067552: ;
    esp += 4; return; /* ret */

loc_00067553: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067562; /* jne: not equal / not zero */

loc_0006755B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067561u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00067561: ;
    esp += 4; return; /* ret */

loc_00067562: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067571; /* jne: not equal / not zero */

loc_0006756A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067570u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_00067570: ;
    esp += 4; return; /* ret */

loc_00067571: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067580; /* jne: not equal / not zero */

loc_00067579: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006757Fu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_0006757F: ;
    esp += 4; return; /* ret */

loc_00067580: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006758F; /* jne: not equal / not zero */

loc_00067588: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006758Eu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006758E: ;
    esp += 4; return; /* ret */

loc_0006758F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006759E; /* jne: not equal / not zero */

loc_00067597: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006759Du); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_0006759D: ;
    esp += 4; return; /* ret */

loc_0006759E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000675AD; /* jne: not equal / not zero */

loc_000675A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000675ACu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_000675AC: ;
    esp += 4; return; /* ret */

loc_000675AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000675BC; /* jne: not equal / not zero */

loc_000675B5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000675BBu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_000675BB: ;
    esp += 4; return; /* ret */

loc_000675BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000675CB; /* jne: not equal / not zero */

loc_000675C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000675CAu); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_000675CA: ;
    esp += 4; return; /* ret */

loc_000675CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000675DA; /* jne: not equal / not zero */

loc_000675D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000675D9u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_000675D9: ;
    esp += 4; return; /* ret */

loc_000675DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000675E9; /* jne: not equal / not zero */

loc_000675E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000675E8u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_000675E8: ;
    esp += 4; return; /* ret */

loc_000675E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000675F8; /* jne: not equal / not zero */

loc_000675F1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000675F7u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_000675F7: ;
    esp += 4; return; /* ret */

loc_000675F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067607; /* jne: not equal / not zero */

loc_00067600: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067606u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_00067606: ;
    esp += 4; return; /* ret */

loc_00067607: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067616; /* jne: not equal / not zero */

loc_0006760F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067615u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_00067615: ;
    esp += 4; return; /* ret */

loc_00067616: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067625; /* jne: not equal / not zero */

loc_0006761E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067624u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_00067624: ;
    esp += 4; return; /* ret */

loc_00067625: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067634; /* jne: not equal / not zero */

loc_0006762D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067633u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_00067633: ;
    esp += 4; return; /* ret */

loc_00067634: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067643; /* jne: not equal / not zero */

loc_0006763C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067642u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_00067642: ;
    esp += 4; return; /* ret */

loc_00067643: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067652; /* jne: not equal / not zero */

loc_0006764B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067651u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_00067651: ;
    esp += 4; return; /* ret */

loc_00067652: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067661; /* jne: not equal / not zero */

loc_0006765A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067660u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_00067660: ;
    esp += 4; return; /* ret */

loc_00067661: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067670; /* jne: not equal / not zero */

loc_00067669: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006766Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_0006766F: ;
    esp += 4; return; /* ret */

loc_00067670: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006767F; /* jne: not equal / not zero */

loc_00067678: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006767Eu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_0006767E: ;
    esp += 4; return; /* ret */

loc_0006767F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006768E; /* jne: not equal / not zero */

loc_00067687: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006768Du); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_0006768D: ;
    esp += 4; return; /* ret */

loc_0006768E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006769D; /* jne: not equal / not zero */

loc_00067696: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006769Cu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_0006769C: ;
    esp += 4; return; /* ret */

loc_0006769D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000676AB; /* jne: not equal / not zero */

loc_000676A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000676ABu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_000676AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000676B0
 * Original: 0x000676B0 - 0x000676D5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676B0(void)
{

loc_000676B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000676E0
 * Original: 0x000676E0 - 0x00067726 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000676E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000676F3u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000676F3: ;
    ecx = 0x30C400;
    PUSH32(esp, 0x000676FDu); RECOMP_ABI_CALL(0x0006BD20u, sub_0006BD20); /* call 0x0006BD20 */

loc_000676FD: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx = MEM32(esi + 8);
    MEM32(esp + 8) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = eax;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x0006771Au); RECOMP_ABI_CALL(0x0006B0B0u, sub_0006B0B0); /* call 0x0006B0B0 */

loc_0006771A: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067730
 * Original: 0x00067730 - 0x00067774 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067730: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6EF0A0);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x6EEE90;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x7C;
    PUSH32(esp, esi);
    /* nop */

loc_00067750: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00067750; /* jne: not equal / not zero */

loc_0006775B: ;
    ecx = 0x6EF080;
    edx = 8;

loc_00067765: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00067765; /* jne: not equal / not zero */

loc_00067772: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00067780
 * Original: 0x00067780 - 0x000677CD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x6EF0A0) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x6EEE90;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x7C;
    PUSH32(esp, esi);
    /* nop */

loc_000677A0: ;
    esi = MEM32(eax);
    MEM32(ecx + eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000677A0; /* jne: not equal / not zero */

loc_000677AB: ;
    ecx = 0x6EF080;
    edx = 8;

loc_000677B5: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000677B5; /* jne: not equal / not zero */

loc_000677C2: ;
    PUSH32(esp, 0x000677C7u); RECOMP_ABI_CALL(0x000672D0u, sub_000672D0); /* call 0x000672D0 */

loc_000677C7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00067220(); return; /* tail jmp 0x00067220 */

}

/**
 * sub_000677D0
 * Original: 0x000677D0 - 0x0006783A (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000677D0(void)
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

loc_000677D0: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x560);
    _fb = (uint32_t)(0x6EF0C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6EF0C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x554);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000677FC; /* jne: not equal / not zero */

loc_000677F2: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x550) = ecx;

loc_000677FC: ;
    esi = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edi = edx;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    MEMF(eax + edx * 4 + 0x500) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x554);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    POP32(esp, edi);
    MEM32(eax + 0x554) = edx;
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00067839; /* jl: less (signed <) */

loc_0006782F: ;
    MEM32(eax + 0x554) = 0;

loc_00067839: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00067840
 * Original: 0x00067840 - 0x00067876 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067840: ;
    eax = 0x6EF614;
    goto loc_00067850;

    /* nop */
    edi = edi;

loc_00067850: ;
    ecx = 0xF;
    goto loc_00067860;

    /* nop */
    edi = edi;

loc_00067860: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x560) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x560;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00067860; /* jne: not equal / not zero */

loc_0006786E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F9754) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6F9754 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00067850; /* jl: less (signed <) */

loc_00067875: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00067880
 * Original: 0x00067880 - 0x00067881 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067880(void)
{

loc_00067880: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00067890
 * Original: 0x00067890 - 0x000678C5 (53 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067890(void)
{

loc_00067890: ;
    eax = MEM32(0x77920C);
    ecx = MEM32(0x779208);
    edx = MEM32(esp + 4);
    MEM32(0x7FE234) = 1;
    MEM32(0x779204) = eax;
    MEM32(0x6EF0B0) = ecx;
    MEM32(0x77920C) = 0x7FE238;
    MEM32(0x779208) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000678D0
 * Original: 0x000678D0 - 0x00067947 (119 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000678D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000678D0: ;
    PUSH32(esp, 0x000678D5u); RECOMP_ABI_CALL(0x00062D30u, sub_00062D30); /* call 0x00062D30 */

loc_000678D5: ;
    eax = 0x67440;
    MEM32(0x8FE238) = eax;
    MEM32(0x8FE23C) = eax;
    MEM32(0x77E220) = eax;
    MEM32(0x7FE22C) = eax;
    MEM32(0x7FE230) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FE240) = 0x7FE238;
    MEM32(0x77920C) = 0x6F9200;
    MEM32(0x7FE228) = 0x77E228;
    MEM32(0x779208) = 0x779210;
    MEM32(0x77E210) = edx;
    MEM32(0x77E214) = eax;
    MEM32(0x77E218) = eax;
    MEM32(0x77E21C) = eax;
    MEM32(0x779200) = edx;
    PUSH32(esp, 0x00067940u); RECOMP_ABI_CALL(0x00067840u, sub_00067840); /* call 0x00067840 */

loc_00067940: ;
    MEM32(0x7FE234) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00067950
 * Original: 0x00067950 - 0x00067A90 (320 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00067950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x779200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x77E21C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x77E21C) (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00067A45; /* je: equal / zero */

loc_00067971: ;
    ecx = esp + 0x10;
    MEM32(esi) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067980u); RECOMP_ABI_CALL(0x0006ACC0u, sub_0006ACC0); /* call 0x0006ACC0 */

loc_00067980: ;
    ecx = esi + 4;
    edx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006798Cu); RECOMP_ABI_CALL(0x0006A340u, sub_0006A340); /* call 0x0006A340 */

loc_0006798C: ;
    edx = MEM32(0x30D89C);
    MEM32(esi + 0x48) = edx;
    eax = MEM32(0x30D8A0);
    MEM32(esi + 0x4C) = eax;
    ecx = MEM32(0x30D8A4);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(0x30D8B4);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(0x30D8A8);
    MEM32(esi + 0x54) = eax;
    ecx = MEM32(0x30D8B8);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(0x30D8AC);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(0x30D8BC);
    MEM32(esi + 0x68) = eax;
    ecx = MEM32(0x30D8B0);
    MEM32(esi + 0x5C) = ecx;
    edx = MEM32(0x30D8C0);
    MEM32(esi + 0x6C) = edx;
    eax = MEM32(0x30D8C8);
    MEM32(esi + 0x70) = eax;
    eax = MEM32(0x180CAC);
    ecx = MEM32(0x180CA8);
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x78) = eax;
    ecx = MEM32(0x180CE4);
    eax = MEM32(0x180CE8);
    edx = MEM32(0x180CF4);
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0x7C) = edx;
    MEM32(esi + 0x80) = eax;
    eax = MEM32(0x779200);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    MEM32(0x77E21C) = eax;
    MEM32(0x77E210) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067A3Cu); RECOMP_ABI_CALL(0x00067730u, sub_00067730); /* call 0x00067730 */

loc_00067A3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x29C;

loc_00067A45: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(0x77E210);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067A68; /* je: equal / zero */

loc_00067A53: ;
    MEM32(eax) = 1;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00067A68: ;
    MEM32(eax) = 2;
    edx = MEM32(0x30D8C4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00067A90
 * Original: 0x00067A90 - 0x00067AA9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067A90: ;
    eax = MEM32(0x7FE228);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00067AA0u); RECOMP_ABI_CALL(0x00067950u, sub_00067950); /* call 0x00067950 */

loc_00067AA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7FE228) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067AB0
 * Original: 0x00067AB0 - 0x00067B21 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067AB0: ;
    ecx = MEM32(0x77E21C);
    eax = MEM32(0x779200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00067B0B; /* je: equal / zero */

loc_00067AC3: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(0x779208);
    MEM32(esi) = edx;
    edx = MEM32(eax + 4);
    esi = MEM32(0x779208);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(0x779208);
    MEM32(edx + 8) = eax;
    eax = MEM32(0x779208);
    MEM32(eax + 0xC) = 0;
    edx = MEM32(0x779208);
    eax = MEM32(0x77920C);
    MEM32(edx + 0x10) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x779208) = MEM32(0x779208) + 0x14;
    _fa = (uint32_t)(MEM32(0x779208)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00067B0B: ;
    edx = MEM32(0x77920C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00067B18u); RECOMP_ABI_CALL(0x00067950u, sub_00067950); /* call 0x00067950 */

loc_00067B18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77920C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00067B30
 * Original: 0x00067B30 - 0x00067DB9 (649 bytes, 170 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00067B30(void)
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

loc_00067B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FE5F4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 1;
    ecx = 0x40304;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067B54u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067B54: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    MEM32(0x180C9C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00067D6D; /* je: equal / zero */

loc_00067B6A: ;
    /* nop */

loc_00067B70: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00067C8C; /* je: equal / zero */

loc_00067B7B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00067BDA; /* je: equal / zero */

loc_00067B7E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00067D64; /* jne: not equal / not zero */

loc_00067B85: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067B91u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00067B91: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067B9Au); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00067B9A: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(0x1809A4);
    ecx = eax + edx * 2;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067BB4u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_00067BB4: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6EED74) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00067D64;

loc_00067BDA: ;
    esi = MEM32(ebx + 4);
    ecx = 0x1B;
    edi = esp + 0x10;
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
    _fa = (uint32_t)(MEM16(esp + 0x1A)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x1A), 2 (16-bit) */
    ecx = 0x4035C;
    if (CMP_NE(_fa, _fb)) goto loc_00067C08; /* jne: not equal / not zero */

loc_00067BF5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067BFCu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067BFC: ;
    MEM32(0x180CB0) = 0;
    goto loc_00067C1C;

loc_00067C08: ;
    edx = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067C12u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067C12: ;
    MEM32(0x180CB0) = 1;

loc_00067C1C: ;
    ecx = MEM32(esp + 0xC);
    edx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067C29u); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_00067C29: ;
    fp_push(MEMF(0x30D8C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00067C4A; /* jnp: not parity */

loc_00067C44: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00067C4C;

loc_00067C4A: ;
    fp_pop(); /* fstp st(0) */

loc_00067C4C: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067C56u); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00067C56: ;
    edx = MEM32(esp + 0x78);
    edi = MEM32(ebx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00067C7B; /* jbe: below or equal (unsigned <=) */

loc_00067C63: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067C6Fu); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_00067C6F: ;
    edx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00067C63; /* jb: below (unsigned <) */

loc_00067C7B: ;
    ecx = MEM32(esp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067C84u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00067C84: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00067D64;

loc_00067C8C: ;
    ecx = ebx + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067C94u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_00067C94: ;
    edx = ebx + 0x88;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067CA0u); RECOMP_ABI_CALL(0x00067780u, sub_00067780); /* call 0x00067780 */

loc_00067CA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067CAFu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00067CAF: ;
    eax = MEM32(ebx + 0x48);
    MEM32(0x30D89C) = eax;
    ecx = MEM32(ebx + 0x4C);
    MEM32(0x30D8A0) = ecx;
    edx = MEM32(ebx + 0x50);
    MEM32(0x30D8A4) = edx;
    eax = MEM32(ebx + 0x60);
    MEM32(0x30D8B4) = eax;
    ecx = MEM32(ebx + 0x54);
    MEM32(0x30D8A8) = ecx;
    edx = MEM32(ebx + 0x64);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(ebx + 0x58);
    MEM32(0x30D8AC) = eax;
    ecx = MEM32(ebx + 0x68);
    MEM32(0x30D8BC) = ecx;
    edx = MEM32(ebx + 0x5C);
    MEM32(0x30D8B0) = edx;
    eax = MEM32(ebx + 0x6C);
    MEM32(0x30D8C0) = eax;
    ecx = MEM32(ebx + 0x70);
    MEM32(0x30D8C8) = ecx;
    edx = MEM32(ebx + 0x78);
    ecx = MEM32(ebx + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D19u); RECOMP_ABI_CALL(0x00063390u, sub_00063390); /* call 0x00063390 */

loc_00067D19: ;
    esi = MEM32(ebx + 0x7C);
    edx = esi;
    ecx = 0x40338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D28u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067D28: ;
    MEM32(0x180CF4) = esi;
    esi = MEM32(ebx + 0x80);
    edx = esi;
    ecx = 0x40388;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D40u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067D40: ;
    MEM32(0x180CE8) = esi;
    esi = MEM32(ebx + 0x84);
    edx = esi;
    ecx = 0x40384;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D58u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067D58: ;
    MEM32(0x180CE4) = esi;
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x29C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00067D64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067B70; /* jne: not equal / not zero */

loc_00067D6D: ;
    edx = 1;
    ecx = 0x4035C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D7Cu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067D7C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x180CB0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D8Eu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00067D8E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067D9Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067D9A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40338;
    MEM32(0x180C9C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067DACu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067DAC: ;
    POP32(esp, edi);
    MEM32(0x180CF4) = esi;
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
 * sub_00067DC0
 * Original: 0x00067DC0 - 0x00067EF7 (311 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DC0(void)
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

loc_00067DC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00067DCDu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00067DCD: ;
    edi = MEM32(esp + 0x28);
    eax = MEM32(0x779208);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00067DF6; /* je: equal / zero */

loc_00067DDE: ;
    edi = edi;

loc_00067DE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00067DE6u); RECOMP_ABI_CALL(0x000676E0u, sub_000676E0); /* call 0x000676E0 */

loc_00067DE6: ;
    eax = MEM32(0x779208);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067DE0; /* jne: not equal / not zero */

loc_00067DF6: ;
    ecx = 1;
    PUSH32(esp, 0x00067E00u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00067E00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00067EF0; /* jl: less (signed <) */

loc_00067E09: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    ecx = ebp + ebp * 4;
    ebx = esi;
    esi = edi + eax * 4 + -20;
    edx = edi + ecx * 4 + -20;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x2C) = edx;

loc_00067E28: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00067E49; /* jle: less or equal (signed <=) */

loc_00067E2D: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00067E44u); RECOMP_ABI_CALL(0x000676B0u, sub_000676B0); /* call 0x000676B0 */

loc_00067E44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00067E6D;

loc_00067E49: ;
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00067E54u); RECOMP_ABI_CALL(0x000676B0u, sub_000676B0); /* call 0x000676B0 */

loc_00067E54: ;
    edx = edi;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00067E5Du); RECOMP_ABI_CALL(0x000676B0u, sub_000676B0); /* call 0x000676B0 */

loc_00067E5D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00067EE1; /* je: equal / zero */

loc_00067E6D: ;
    esi = ebp + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edx = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_00067EC3; /* jg: greater (signed >) */

loc_00067E77: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00067E8F; /* jge: greater or equal (signed >=) */

loc_00067E79: ;
    eax = esi + esi * 4;
    fp_push(MEMF(edi + eax * 4 + -8)); /* fld float */
    eax = edi + eax * 4 + -20;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00067E8F; /* jne: not equal / not zero */

loc_00067E8E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00067E8F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = esi + esi * 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + ecx * 4 + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + ecx*4 - 8] */
    ecx = edi + ecx * 4 + -20;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00067EBC; /* jne: not equal / not zero */

loc_00067EA5: ;
    edx = edx + edx * 4;
    PUSH32(esp, ecx);
    eax = edi + edx * 4 + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067EB3u); RECOMP_ABI_CALL(0x000676B0u, sub_000676B0); /* call 0x000676B0 */

loc_00067EB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00067EBF;

loc_00067EBC: ;
    esi = ebx + 1;

loc_00067EBF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00067E77; /* jle: less or equal (signed <=) */

loc_00067EC3: ;
    ecx = esp + 0x14;
    edx = edx + edx * 4;
    PUSH32(esp, ecx);
    eax = edi + edx * 4 + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067ED5u); RECOMP_ABI_CALL(0x000676B0u, sub_000676B0); /* call 0x000676B0 */

loc_00067ED5: ;
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00067E28;

loc_00067EE1: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067EECu); RECOMP_ABI_CALL(0x000676B0u, sub_000676B0); /* call 0x000676B0 */

loc_00067EEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_00067EF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00067F00
 * Original: 0x00067F00 - 0x00067F50 (80 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00067F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FE5F4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067F1Eu); RECOMP_ABI_CALL(0x00067DC0u, sub_00067DC0); /* call 0x00067DC0 */

loc_00067F1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 1;
    ecx = 0x40304;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00067F30u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067F30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x779208)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x779208) (32-bit) */
    eax = esi;
    MEM32(0x180C9C) = 1;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0006817E(); return; } /* je: equal / zero */

loc_00067F4C: ;
    /* nop */

    g_seh_ebp = ebp; sub_00067F50(); return; /* fallthrough 0x00067F50 */

}

/**
 * sub_00067F50
 * Original: 0x00067F50 - 0x00067F53 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067F50: ;
    ebx = MEM32(eax + 0x10);

    g_seh_ebp = ebp; sub_00067F53(); return; /* fallthrough 0x00067F53 */

}

/**
 * sub_00067F53
 * Original: 0x00067F53 - 0x0006817E (555 bytes, 141 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F53(void)
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

loc_00067F53: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0006807C; /* je: equal / zero */

loc_00067F5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00067FBD; /* je: equal / zero */

loc_00067F61: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00068154; /* jne: not equal / not zero */

loc_00067F68: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00067F74u); RECOMP_ABI_CALL(0x00063E10u, sub_00063E10); /* call 0x00063E10 */

loc_00067F74: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00067F7Du); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00067F7D: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(0x1809A4);
    ecx = eax + edx * 2;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00067F97u); RECOMP_ABI_CALL(0x001665C0u, sub_001665C0); /* call 0x001665C0 */

loc_00067F97: ;
    edx = MEM32(0x6EED70);
    ecx = MEM32(0x6EED74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6EED70) = edx;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6EED74) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00068154;

loc_00067FBD: ;
    esi = MEM32(ebx + 4);
    ecx = 0x1B;
    edi = esp + 0x18;
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
    _fa = (uint32_t)(MEM16(esp + 0x22)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x22), 2 (16-bit) */
    ecx = 0x4035C;
    if (CMP_NE(_fa, _fb)) goto loc_00067FEB; /* jne: not equal / not zero */

loc_00067FD8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00067FDFu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067FDF: ;
    MEM32(0x180CB0) = 0;
    goto loc_00067FFF;

loc_00067FEB: ;
    edx = 1;
    PUSH32(esp, 0x00067FF5u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00067FF5: ;
    MEM32(0x180CB0) = 1;

loc_00067FFF: ;
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x18;
    PUSH32(esp, 0x0006800Cu); RECOMP_ABI_CALL(0x00063DB0u, sub_00063DB0); /* call 0x00063DB0 */

loc_0006800C: ;
    fp_push(MEMF(0x30D8C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006802D; /* jnp: not parity */

loc_00068027: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006802F;

loc_0006802D: ;
    fp_pop(); /* fstp st(0) */

loc_0006802F: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00068039u); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00068039: ;
    edx = MEM32(esp + 0x80);
    edi = MEM32(ebx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006806B; /* jbe: below or equal (unsigned <=) */

loc_00068049: ;
    /* nop */

loc_00068050: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0x0006805Cu); RECOMP_ABI_CALL(0x000638A0u, sub_000638A0); /* call 0x000638A0 */

loc_0006805C: ;
    edx = MEM32(esp + 0x80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00068050; /* jb: below (unsigned <) */

loc_0006806B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00068074u); RECOMP_ABI_CALL(0x00063D40u, sub_00063D40); /* call 0x00063D40 */

loc_00068074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00068154;

loc_0006807C: ;
    ecx = ebx + 4;
    PUSH32(esp, 0x00068084u); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_00068084: ;
    edx = ebx + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00068090u); RECOMP_ABI_CALL(0x00067780u, sub_00067780); /* call 0x00067780 */

loc_00068090: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0006809Fu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_0006809F: ;
    eax = MEM32(ebx + 0x48);
    MEM32(0x30D89C) = eax;
    ecx = MEM32(ebx + 0x4C);
    MEM32(0x30D8A0) = ecx;
    edx = MEM32(ebx + 0x50);
    MEM32(0x30D8A4) = edx;
    eax = MEM32(ebx + 0x60);
    MEM32(0x30D8B4) = eax;
    ecx = MEM32(ebx + 0x54);
    MEM32(0x30D8A8) = ecx;
    edx = MEM32(ebx + 0x64);
    MEM32(0x30D8B8) = edx;
    eax = MEM32(ebx + 0x58);
    MEM32(0x30D8AC) = eax;
    ecx = MEM32(ebx + 0x68);
    MEM32(0x30D8BC) = ecx;
    edx = MEM32(ebx + 0x5C);
    MEM32(0x30D8B0) = edx;
    eax = MEM32(ebx + 0x6C);
    MEM32(0x30D8C0) = eax;
    ecx = MEM32(ebx + 0x70);
    MEM32(0x30D8C8) = ecx;
    edx = MEM32(ebx + 0x78);
    ecx = MEM32(ebx + 0x74);
    PUSH32(esp, 0x00068109u); RECOMP_ABI_CALL(0x00063390u, sub_00063390); /* call 0x00063390 */

loc_00068109: ;
    esi = MEM32(ebx + 0x7C);
    edx = esi;
    ecx = 0x40338;
    PUSH32(esp, 0x00068118u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068118: ;
    MEM32(0x180CF4) = esi;
    esi = MEM32(ebx + 0x80);
    edx = esi;
    ecx = 0x40388;
    PUSH32(esp, 0x00068130u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068130: ;
    MEM32(0x180CE8) = esi;
    esi = MEM32(ebx + 0x84);
    edx = esi;
    ecx = 0x40384;
    PUSH32(esp, 0x00068148u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068148: ;
    MEM32(0x180CE4) = esi;
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x29C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00068154: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068165; /* je: equal / zero */

loc_00068159: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x77920C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x77920C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067F53; /* jne: not equal / not zero */

loc_00068165: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x779208);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00067F50(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0006817E(); return; /* fallthrough 0x0006817E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006817E
 * Original: 0x0006817E - 0x000681CA (76 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006817E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006817E: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0x0006818Du); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0006818D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x180CB0) = 1;
    PUSH32(esp, 0x0006819Fu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006819F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x000681ABu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000681AB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40338;
    MEM32(0x180C9C) = esi;
    PUSH32(esp, 0x000681BDu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000681BD: ;
    POP32(esp, edi);
    MEM32(0x180CF4) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000681D0
 * Original: 0x000681D0 - 0x00068200 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000681D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000681D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000681DAu); RECOMP_ABI_CALL(0x00067F00u, sub_00067F00); /* call 0x00067F00 */

loc_000681DA: ;
    ecx = MEM32(0x779204);
    edx = MEM32(0x6EF0B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77920C) = ecx;
    MEM32(0x779208) = edx;
    MEM32(0x7FE234) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00068200
 * Original: 0x00068200 - 0x0006829E (158 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068200: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8FE238); PUSH32(esp, 0x00068206u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00068200u); } /* indirect call */
    }

loc_00068206: ;
    eax = MEM32(0x8FE240);
    PUSH32(esp, 0x7FE238);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068216u); RECOMP_ABI_CALL(0x00067B30u, sub_00067B30); /* call 0x00067B30 */

loc_00068216: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8FE23C); PUSH32(esp, 0x0006821Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00068216u); } /* indirect call */
    }

loc_0006821C: ;
    PUSH32(esp, 0x779210);
    PUSH32(esp, 0x00068226u); RECOMP_ABI_CALL(0x00067F00u, sub_00067F00); /* call 0x00067F00 */

loc_00068226: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0x00068238u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068238: ;
    PUSH32(esp, 0);
    MEM32(0x180CB0) = 1;
    PUSH32(esp, 0x00068249u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00068249: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0x00068258u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068258: ;
    PUSH32(esp, 0);
    MEM32(0x180CB0) = 1;
    PUSH32(esp, 0x00068269u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00068269: ;
    PUSH32(esp, 0x0006826Eu); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_0006826E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x7FE230); PUSH32(esp, 0x00068274u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006826Eu); } /* indirect call */
    }

loc_00068274: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x77E220); PUSH32(esp, 0x0006827Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00068274u); } /* indirect call */
    }

loc_0006827A: ;
    ecx = MEM32(0x7FE228);
    PUSH32(esp, 0x77E228);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006828Bu); RECOMP_ABI_CALL(0x00067B30u, sub_00067B30); /* call 0x00067B30 */

loc_0006828B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x7FE22C); PUSH32(esp, 0x00068294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006828Eu); } /* indirect call */
    }

loc_00068294: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006829Du); RECOMP_ABI_CALL(0x00164EB0u, sub_00164EB0); /* call 0x00164EB0 */

loc_0006829D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000682A0
 * Original: 0x000682A0 - 0x000682C8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000682A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000682A0: ;
    eax = MEM32(0x7FE234);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000682AE; /* je: equal / zero */

loc_000682A9: ;
    g_seh_ebp = ebp; sub_00067AB0(); return; /* tail jmp 0x00067AB0 */

loc_000682AE: ;
    ecx = MEM32(0x8FE240);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000682BFu); RECOMP_ABI_CALL(0x00067950u, sub_00067950); /* call 0x00067950 */

loc_000682BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FE240) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000682D0
 * Original: 0x000682D0 - 0x000682D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000682D0(void)
{

loc_000682D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000682E0
 * Original: 0x000682E0 - 0x000682E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000682E0(void)
{

loc_000682E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000682F0
 * Original: 0x000682F0 - 0x000682F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000682F0(void)
{

loc_000682F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068300
 * Original: 0x00068300 - 0x00068301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068300(void)
{

loc_00068300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068310
 * Original: 0x00068310 - 0x00068311 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068310(void)
{

loc_00068310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068320
 * Original: 0x00068320 - 0x00068321 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068320(void)
{

loc_00068320: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068330
 * Original: 0x00068330 - 0x00068331 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068330(void)
{

loc_00068330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068340
 * Original: 0x00068340 - 0x00068341 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068340(void)
{

loc_00068340: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068350
 * Original: 0x00068350 - 0x00068375 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00068350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00068350: ;
    fp_push(MEMF(0x8FE248)); /* fld float */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8FE24C)); /* fld float */
    edx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8FE250)); /* fld float */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00068380
 * Original: 0x00068380 - 0x00068381 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068380(void)
{

loc_00068380: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000683A0
 * Original: 0x000683A0 - 0x000683AE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000683A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000683A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x000683ADu); RECOMP_ABI_CALL(0x00151318u, sub_00151318); /* call 0x00151318 */

loc_000683AD: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000683B0
 * Original: 0x000683B0 - 0x000683BE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000683B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000683B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x000683BDu); RECOMP_ABI_CALL(0x00151318u, sub_00151318); /* call 0x00151318 */

loc_000683BD: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000683C0
 * Original: 0x000683C0 - 0x0006845E (158 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000683C0(void)
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

loc_000683C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x8FE248)); /* fdiv dword ptr [0x8fe248] */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8FE24C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2362C8)); /* fadd dword ptr [0x2362c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C260)); /* fmul dword ptr [0x22c260] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8FE250)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00068400: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x00068413u); RECOMP_ABI_CALL(0x00151318u, sub_00151318); /* call 0x00151318 */

loc_00068413: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x00068426u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00068426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006842E; /* jge: greater or equal (signed >=) */

loc_0006842A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006843A;

loc_0006842E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006843A; /* jle: less or equal (signed <=) */

loc_00068435: ;
    eax = 0xFF;

loc_0006843A: ;
    MEM8(esi + 0x8FE258) = LO8(eax);
    MEM8(esi + 0x8FE358) = LO8(eax);
    MEM8(esi + 0x8FE458) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00068400; /* jle: less or equal (signed <=) */

loc_00068459: ;
    POP32(esp, esi);
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
 * sub_00068460
 * Original: 0x00068460 - 0x0006846D (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068460(void)
{

loc_00068460: ;
    PUSH32(esp, 0x8FE258);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0006846Cu); RECOMP_ABI_CALL(0x00162B00u, sub_00162B00); /* call 0x00162B00 */

loc_0006846C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068470
 * Original: 0x00068470 - 0x00068497 (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068470: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(0x8FE248) = eax;
    MEM32(0x8FE24C) = ecx;
    MEM32(0x8FE250) = edx;
    PUSH32(esp, 0x00068492u); RECOMP_ABI_CALL(0x000683C0u, sub_000683C0); /* call 0x000683C0 */

loc_00068492: ;
    g_seh_ebp = ebp; sub_00068460(); return; /* tail jmp 0x00068460 */

}

/**
 * sub_000684A0
 * Original: 0x000684A0 - 0x000684B2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000684A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000684A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000684AEu); RECOMP_ABI_CALL(0x00068470u, sub_00068470); /* call 0x00068470 */

loc_000684AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000684C0
 * Original: 0x000684C0 - 0x000684C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000684C0(void)
{

loc_000684C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000684D0
 * Original: 0x000684D0 - 0x000684D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000684D0(void)
{

loc_000684D0: ;
    eax = MEM32(0x8FE570);
    esp += 4; return; /* ret */

}

/**
 * sub_000684E0
 * Original: 0x000684E0 - 0x000684EA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000684E0(void)
{

loc_000684E0: ;
    eax = MEM32(esp + 4);
    MEM32(0x8FE60C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000684F0
 * Original: 0x000684F0 - 0x000684F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000684F0(void)
{

loc_000684F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068500
 * Original: 0x00068500 - 0x00068501 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068500(void)
{

loc_00068500: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068520
 * Original: 0x00068520 - 0x00068534 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068520: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006852Fu); RECOMP_ABI_CALL(0x00168C80u, sub_00168C80); /* call 0x00168C80 */

loc_0006852F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00068540
 * Original: 0x00068540 - 0x00068541 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068540(void)
{

loc_00068540: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068550
 * Original: 0x00068550 - 0x00068551 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068550(void)
{

loc_00068550: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068560
 * Original: 0x00068560 - 0x0006875C (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068560: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006857B; /* jge: greater or equal (signed >=) */

loc_00068565: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x00068573u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068573: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0006857B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000685A0; /* jge: greater or equal (signed >=) */

loc_00068583: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_000685A0: ;
    if (CMP_NE(_fa, _fb)) goto loc_000685A9; /* jne: not equal / not zero */

loc_000685A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000685A8u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_000685A8: ;
    esp += 4; return; /* ret */

loc_000685A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000685B8; /* jne: not equal / not zero */

loc_000685B1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000685B7u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_000685B7: ;
    esp += 4; return; /* ret */

loc_000685B8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000685C7; /* jne: not equal / not zero */

loc_000685C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000685C6u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_000685C6: ;
    esp += 4; return; /* ret */

loc_000685C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000685D6; /* jne: not equal / not zero */

loc_000685CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000685D5u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_000685D5: ;
    esp += 4; return; /* ret */

loc_000685D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000685E5; /* jne: not equal / not zero */

loc_000685DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000685E4u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_000685E4: ;
    esp += 4; return; /* ret */

loc_000685E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000685F4; /* jne: not equal / not zero */

loc_000685ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000685F3u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_000685F3: ;
    esp += 4; return; /* ret */

loc_000685F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068603; /* jne: not equal / not zero */

loc_000685FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068602u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_00068602: ;
    esp += 4; return; /* ret */

loc_00068603: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068612; /* jne: not equal / not zero */

loc_0006860B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068611u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00068611: ;
    esp += 4; return; /* ret */

loc_00068612: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068621; /* jne: not equal / not zero */

loc_0006861A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068620u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_00068620: ;
    esp += 4; return; /* ret */

loc_00068621: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068630; /* jne: not equal / not zero */

loc_00068629: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006862Fu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_0006862F: ;
    esp += 4; return; /* ret */

loc_00068630: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006863F; /* jne: not equal / not zero */

loc_00068638: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006863Eu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_0006863E: ;
    esp += 4; return; /* ret */

loc_0006863F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006864E; /* jne: not equal / not zero */

loc_00068647: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006864Du); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_0006864D: ;
    esp += 4; return; /* ret */

loc_0006864E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006865D; /* jne: not equal / not zero */

loc_00068656: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006865Cu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0006865C: ;
    esp += 4; return; /* ret */

loc_0006865D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006866C; /* jne: not equal / not zero */

loc_00068665: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006866Bu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_0006866B: ;
    esp += 4; return; /* ret */

loc_0006866C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006867B; /* jne: not equal / not zero */

loc_00068674: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006867Au); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_0006867A: ;
    esp += 4; return; /* ret */

loc_0006867B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006868A; /* jne: not equal / not zero */

loc_00068683: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068689u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_00068689: ;
    esp += 4; return; /* ret */

loc_0006868A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068699; /* jne: not equal / not zero */

loc_00068692: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068698u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_00068698: ;
    esp += 4; return; /* ret */

loc_00068699: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000686A8; /* jne: not equal / not zero */

loc_000686A1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000686A7u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_000686A7: ;
    esp += 4; return; /* ret */

loc_000686A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000686B7; /* jne: not equal / not zero */

loc_000686B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000686B6u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_000686B6: ;
    esp += 4; return; /* ret */

loc_000686B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000686C6; /* jne: not equal / not zero */

loc_000686BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000686C5u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_000686C5: ;
    esp += 4; return; /* ret */

loc_000686C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000686D5; /* jne: not equal / not zero */

loc_000686CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000686D4u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_000686D4: ;
    esp += 4; return; /* ret */

loc_000686D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000686E4; /* jne: not equal / not zero */

loc_000686DD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000686E3u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_000686E3: ;
    esp += 4; return; /* ret */

loc_000686E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000686F3; /* jne: not equal / not zero */

loc_000686EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000686F2u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_000686F2: ;
    esp += 4; return; /* ret */

loc_000686F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068702; /* jne: not equal / not zero */

loc_000686FB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068701u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_00068701: ;
    esp += 4; return; /* ret */

loc_00068702: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068711; /* jne: not equal / not zero */

loc_0006870A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068710u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_00068710: ;
    esp += 4; return; /* ret */

loc_00068711: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068720; /* jne: not equal / not zero */

loc_00068719: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006871Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_0006871F: ;
    esp += 4; return; /* ret */

loc_00068720: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006872F; /* jne: not equal / not zero */

loc_00068728: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006872Eu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_0006872E: ;
    esp += 4; return; /* ret */

loc_0006872F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006873E; /* jne: not equal / not zero */

loc_00068737: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006873Du); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_0006873D: ;
    esp += 4; return; /* ret */

loc_0006873E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006874D; /* jne: not equal / not zero */

loc_00068746: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006874Cu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_0006874C: ;
    esp += 4; return; /* ret */

loc_0006874D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006875B; /* jne: not equal / not zero */

loc_00068755: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006875Bu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_0006875B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068760
 * Original: 0x00068760 - 0x000687D6 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0006878B; /* jge: greater or equal (signed >=) */

loc_00068767: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0006876E: ;
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

loc_0006878B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00068799; /* jge: greater or equal (signed >=) */

loc_00068790: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_0006876E;

loc_00068799: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000687A8; /* jne: not equal / not zero */

loc_0006879E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000687A5u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_000687A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000687A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000687B7; /* jne: not equal / not zero */

loc_000687AD: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000687B4u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_000687B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000687B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000687C6; /* jne: not equal / not zero */

loc_000687BC: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000687C3u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_000687C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000687C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000687D3; /* jg: greater (signed >) */

loc_000687CB: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000687D3u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_000687D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000687F0
 * Original: 0x000687F0 - 0x000687FC (12 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000687F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000687F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000687F7u); RECOMP_ABI_CALL(0x001699E0u, sub_001699E0); /* call 0x001699E0 */

loc_000687F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00068800
 * Original: 0x00068800 - 0x00068803 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068800: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068810
 * Original: 0x00068810 - 0x00068813 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068810: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068820
 * Original: 0x00068820 - 0x00068825 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068820: ;
    g_seh_ebp = ebp; sub_001630D0(); return; /* tail jmp 0x001630D0 */

}

/**
 * sub_00068830
 * Original: 0x00068830 - 0x000689BE (398 bytes, 99 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006883Au); RECOMP_ABI_CALL(0x00169CA0u, sub_00169CA0); /* call 0x00169CA0 */

loc_0006883A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8FE558) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00068850; /* jne: not equal / not zero */

loc_00068843: ;
    PUSH32(esp, 0x2362E0);
    PUSH32(esp, 0x0006884Du); RECOMP_ABI_CALL(0x000695C0u, sub_000695C0); /* call 0x000695C0 */

loc_0006884D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00068850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x100000);
    PUSH32(esp, 0x00068862u); RECOMP_ABI_CALL(0x00168C80u, sub_00168C80); /* call 0x00168C80 */

loc_00068862: ;
    PUSH32(esp, 0x00068867u); RECOMP_ABI_CALL(0x000ADC15u, sub_000ADC15); /* call 0x000ADC15 */

loc_00068867: ;
    esi = eax;
    PUSH32(esp, 0x0006886Eu); RECOMP_ABI_CALL(0x000ADBECu, sub_000ADBEC); /* call 0x000ADBEC */

loc_0006886E: ;
    ebx = eax;
    PUSH32(esp, 0x00068875u); RECOMP_ABI_CALL(0x000ADBA3u, sub_000ADBA3); /* call 0x000ADBA3 */

loc_00068875: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x11;
    edi = 0x8FE560;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = 0x2D0;
    eax = 0x1E0;
    MEM32(0x8FE5A4) = esi;
    MEM32(0x8FE5F8) = ebx;
    MEM32(0x8FE5A8) = edx;
    MEM32(0x8FE608) = ebp;
    MEM32(0x8FE588) = ebp;
    MEM32(0x8FE568) = 6;
    MEM32(0x8FE57C) = ebp;
    MEM32(0x8FE560) = ecx;
    MEM32(0x8FE564) = eax;
    MEM32(0x8FE56C) = edi;
    MEM32(0x8FE580) = edi;
    MEM32(0x8FE584) = 0x2A;
    MEM32(0x8FE570) = 0x11;
    MEM32(0x8FE574) = edi;
    MEM32(0x8FE58C) = 0x3C;
    MEM32(0x8FE590) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00068922; /* jne: not equal / not zero */

loc_00068907: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068922; /* je: equal / zero */

loc_0006890C: ;
    MEM32(0x8FE588) = 0x40;
    MEM32(0x8FE608) = 2;
    goto loc_00068940;

loc_00068922: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068940; /* jne: not equal / not zero */

loc_00068927: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068940; /* jne: not equal / not zero */

loc_0006892C: ;
    MEM32(0x8FE588) = 0x200;
    MEM32(0x8FE590) = 0x80000001u;

loc_00068940: ;
    MEM32(0x8FE55C) = ecx;
    MEM32(0x8FE5FC) = eax;
    PUSH32(esp, 0x00068950u); RECOMP_ABI_CALL(0x00038500u, sub_00038500); /* call 0x00038500 */

loc_00068950: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FE560);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00068964u); RECOMP_ABI_CALL(0x00168CA0u, sub_00168CA0); /* call 0x00168CA0 */

loc_00068964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00068978; /* jge: greater or equal (signed >=) */

loc_0006896B: ;
    PUSH32(esp, 0x2362CC);
    PUSH32(esp, 0x00068975u); RECOMP_ABI_CALL(0x000695C0u, sub_000695C0); /* call 0x000695C0 */

loc_00068975: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00068978: ;
    PUSH32(esp, 0x0006897Du); RECOMP_ABI_CALL(0x000384A0u, sub_000384A0); /* call 0x000384A0 */

loc_0006897D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    MEM32(0x8FE5F4) = ecx;
    PUSH32(esp, 0x0006898Du); RECOMP_ABI_CALL(0x00163E60u, sub_00163E60); /* call 0x00163E60 */

loc_0006898D: ;
    MEM32(0x8FE600) = eax;
    PUSH32(esp, 0x00068997u); RECOMP_ABI_CALL(0x001645A0u, sub_001645A0); /* call 0x001645A0 */

loc_00068997: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xF3);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(0x8FE604) = eax;
    PUSH32(esp, 0x000689AFu); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_000689AF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000689B5u); RECOMP_ABI_CALL(0x001699E0u, sub_001699E0); /* call 0x001699E0 */

loc_000689B5: ;
    MEM32(0x8FE60C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000689C0
 * Original: 0x000689C0 - 0x000689D4 (20 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000689C0(void)
{

loc_000689C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x8FE560);
    MEM32(0x8FE570) = eax;
    PUSH32(esp, 0x000689D3u); RECOMP_ABI_CALL(0x00163A10u, sub_00163A10); /* call 0x00163A10 */

loc_000689D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000689E0
 * Original: 0x000689E0 - 0x000689E8 (8 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000689E0_gen(void)   /* fighter-isolation: shadowed by recomp_manual.c (per-frame guest hook) */
{

loc_000689E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000689E7u); RECOMP_ABI_CALL(0x001699E0u, sub_001699E0); /* call 0x001699E0 */

loc_000689E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000689F0
 * Original: 0x000689F0 - 0x00068BF6 (518 bytes, 109 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000689F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000689F0: ;
    eax = MEM32(0x1809A8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 2;
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(0x1809E0) = 4;
    MEM32(0x1809E8) = ebp;
    MEM32(0x1809EC) = ebx;
    MEM32(0x1809F0) = 3;
    MEM32(0x1809F8) = ebp;
    MEM32(0x1809A8) = eax;
    MEM32(0x1809FC) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x1809BC;
    /* nop */

loc_00068A40: ;
    edx = MEM32(0x1809A8);
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, esi);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = edx;
    MEM32(edi) = ebp;
    PUSH32(esp, 0x00068A63u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00068A63: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00068A40; /* jb: below (unsigned <) */

loc_00068A6F: ;
    PUSH32(esp, 0x112);
    PUSH32(esp, 0x00068A79u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_00068A79: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00068A7Fu); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_00068A7F: ;
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00068A8Au); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00068A8A: ;
    edx = esi;
    ecx = 0x4035C;
    PUSH32(esp, 0x00068A96u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068A96: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 0x3200;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40300;
    MEM32(0x180CB0) = esi;
    MEM32(0x180D20) = ebx;
    MEM32(0x180D48) = esi;
    MEM32(0x180D7C) = 0xFF202020u;
    PUSH32(esp, 0x00068AC8u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068AC8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40340;
    MEM32(0x180CA0) = ebx;
    PUSH32(esp, 0x00068ADAu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068ADA: ;
    edx = 0x204;
    ecx = 0x4033C;
    MEM32(0x180CA4) = ebx;
    PUSH32(esp, 0x00068AEFu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068AEF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEM32(0x180C98) = 0x204;
    PUSH32(esp, 0x00068B05u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068B05: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = ebx;
    PUSH32(esp, 0x00068B1Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068B1A: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x00068B33u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068B33: ;
    PUSH32(esp, ebx);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x00068B43u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_00068B43: ;
    edx = esi;
    ecx = 0x40310;
    PUSH32(esp, 0x00068B4Fu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068B4F: ;
    PUSH32(esp, 0x1B02);
    MEM32(0x180CB4) = esi;
    PUSH32(esp, 0x00068B5Fu); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_00068B5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00068B65u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_00068B65: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00068B6Bu); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_00068B6B: ;
    edx = MEM32(0x1809A8);
    edx = edx | 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x1809A8) = edx;
    MEM32(0x180D50) = ebx;
    PUSH32(esp, 0x00068B89u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00068B89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x11;
    edi = 0x8FE5B0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x8FE5B0);
    MEM32(0x8FE5C0) = 0x3F800000;
    MEM32(0x8FE5B0) = 0x3F800000;
    MEM32(0x8FE5C4) = 0x3F800000;
    MEM32(0x8FE5B4) = 0x3F800000;
    MEM32(0x8FE5C8) = 0x3F800000;
    MEM32(0x8FE5B8) = 0x3F800000;
    MEM32(0x8FE5CC) = 0x3F800000;
    MEM32(0x8FE5BC) = 0x3F800000;
    PUSH32(esp, 0x00068BF1u); RECOMP_ABI_CALL(0x00162E10u, sub_00162E10); /* call 0x00162E10 */

loc_00068BF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00068C00
 * Original: 0x00068C00 - 0x00068C0C (12 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C00(void)
{

loc_00068C00: ;
    PUSH32(esp, 0x00068C05u); RECOMP_ABI_CALL(0x001633D0u, sub_001633D0); /* call 0x001633D0 */

loc_00068C05: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00068C10
 * Original: 0x00068C10 - 0x00068C1D (13 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C10(void)
{

loc_00068C10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00068C1Cu); RECOMP_ABI_CALL(0x00163000u, sub_00163000); /* call 0x00163000 */

loc_00068C1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068C20
 * Original: 0x00068C20 - 0x00068C25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068C20: ;
    g_seh_ebp = ebp; sub_001630D0(); return; /* tail jmp 0x001630D0 */

}

/**
 * sub_00068C30
 * Original: 0x00068C30 - 0x00068C5A (42 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068C30: ;
    eax = MEM32(0x8FE60C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00068C4Bu); RECOMP_ABI_CALL(0x00168890u, sub_00168890); /* call 0x00168890 */

loc_00068C4B: ;
    MEM32(0x8FE60C) = 0;
    g_seh_ebp = ebp; sub_000689F0(); return; /* tail jmp 0x000689F0 */

}

/**
 * sub_00068C60
 * Original: 0x00068C60 - 0x00068C6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C60(void)
{

loc_00068C60: ;
    MEM32(0x8FE610) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00068C70
 * Original: 0x00068C70 - 0x00068C9D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068C70: ;
    eax = MEM32(0x8FE610);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00068C8F; /* jl: less (signed <) */

loc_00068C83: ;
    eax = 0x8FE618;
    MEM32(0x8FE610) = edx;
    esp += 4; return; /* ret */

loc_00068C8F: ;
    eax = eax * 4 + 0x8FE618;
    MEM32(0x8FE610) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068CA0
 * Original: 0x00068CA0 - 0x00068CCD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068CA0: ;
    edx = eax + eax * 4;
    eax = MEM32(0x8FE610);
    ecx = eax + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00068CBF; /* jl: less (signed <) */

loc_00068CB3: ;
    eax = 0x8FE618;
    MEM32(0x8FE610) = edx;
    esp += 4; return; /* ret */

loc_00068CBF: ;
    eax = eax * 4 + 0x8FE618;
    MEM32(0x8FE610) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068CD0
 * Original: 0x00068CD0 - 0x00068ECC (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068CD0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00068CEB; /* jge: greater or equal (signed >=) */

loc_00068CD5: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x00068CE3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00068CE3: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_00068CEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00068D10; /* jge: greater or equal (signed >=) */

loc_00068CF3: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_00068D10: ;
    if (CMP_NE(_fa, _fb)) goto loc_00068D19; /* jne: not equal / not zero */

loc_00068D12: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D18u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_00068D18: ;
    esp += 4; return; /* ret */

loc_00068D19: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D28; /* jne: not equal / not zero */

loc_00068D21: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D27u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_00068D27: ;
    esp += 4; return; /* ret */

loc_00068D28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D37; /* jne: not equal / not zero */

loc_00068D30: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D36u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_00068D36: ;
    esp += 4; return; /* ret */

loc_00068D37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D46; /* jne: not equal / not zero */

loc_00068D3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D45u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_00068D45: ;
    esp += 4; return; /* ret */

loc_00068D46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D55; /* jne: not equal / not zero */

loc_00068D4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D54u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_00068D54: ;
    esp += 4; return; /* ret */

loc_00068D55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D64; /* jne: not equal / not zero */

loc_00068D5D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D63u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_00068D63: ;
    esp += 4; return; /* ret */

loc_00068D64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D73; /* jne: not equal / not zero */

loc_00068D6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D72u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_00068D72: ;
    esp += 4; return; /* ret */

loc_00068D73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D82; /* jne: not equal / not zero */

loc_00068D7B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D81u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00068D81: ;
    esp += 4; return; /* ret */

loc_00068D82: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D91; /* jne: not equal / not zero */

loc_00068D8A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D90u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_00068D90: ;
    esp += 4; return; /* ret */

loc_00068D91: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DA0; /* jne: not equal / not zero */

loc_00068D99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068D9Fu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_00068D9F: ;
    esp += 4; return; /* ret */

loc_00068DA0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DAF; /* jne: not equal / not zero */

loc_00068DA8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068DAEu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00068DAE: ;
    esp += 4; return; /* ret */

loc_00068DAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DBE; /* jne: not equal / not zero */

loc_00068DB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068DBDu); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_00068DBD: ;
    esp += 4; return; /* ret */

loc_00068DBE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DCD; /* jne: not equal / not zero */

loc_00068DC6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068DCCu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_00068DCC: ;
    esp += 4; return; /* ret */

loc_00068DCD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DDC; /* jne: not equal / not zero */

loc_00068DD5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068DDBu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_00068DDB: ;
    esp += 4; return; /* ret */

loc_00068DDC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DEB; /* jne: not equal / not zero */

loc_00068DE4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068DEAu); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_00068DEA: ;
    esp += 4; return; /* ret */

loc_00068DEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068DFA; /* jne: not equal / not zero */

loc_00068DF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068DF9u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_00068DF9: ;
    esp += 4; return; /* ret */

loc_00068DFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E09; /* jne: not equal / not zero */

loc_00068E02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E08u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_00068E08: ;
    esp += 4; return; /* ret */

loc_00068E09: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E18; /* jne: not equal / not zero */

loc_00068E11: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E17u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_00068E17: ;
    esp += 4; return; /* ret */

loc_00068E18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E27; /* jne: not equal / not zero */

loc_00068E20: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E26u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_00068E26: ;
    esp += 4; return; /* ret */

loc_00068E27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E36; /* jne: not equal / not zero */

loc_00068E2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E35u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_00068E35: ;
    esp += 4; return; /* ret */

loc_00068E36: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E45; /* jne: not equal / not zero */

loc_00068E3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E44u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_00068E44: ;
    esp += 4; return; /* ret */

loc_00068E45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E54; /* jne: not equal / not zero */

loc_00068E4D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E53u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_00068E53: ;
    esp += 4; return; /* ret */

loc_00068E54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E63; /* jne: not equal / not zero */

loc_00068E5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E62u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_00068E62: ;
    esp += 4; return; /* ret */

loc_00068E63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E72; /* jne: not equal / not zero */

loc_00068E6B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E71u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_00068E71: ;
    esp += 4; return; /* ret */

loc_00068E72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E81; /* jne: not equal / not zero */

loc_00068E7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E80u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_00068E80: ;
    esp += 4; return; /* ret */

loc_00068E81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E90; /* jne: not equal / not zero */

loc_00068E89: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E8Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_00068E8F: ;
    esp += 4; return; /* ret */

loc_00068E90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E9F; /* jne: not equal / not zero */

loc_00068E98: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068E9Eu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_00068E9E: ;
    esp += 4; return; /* ret */

loc_00068E9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068EAE; /* jne: not equal / not zero */

loc_00068EA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068EADu); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_00068EAD: ;
    esp += 4; return; /* ret */

loc_00068EAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068EBD; /* jne: not equal / not zero */

loc_00068EB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068EBCu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_00068EBC: ;
    esp += 4; return; /* ret */

loc_00068EBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068ECB; /* jne: not equal / not zero */

loc_00068EC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068ECBu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_00068ECB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068ED0
 * Original: 0x00068ED0 - 0x00068F63 (147 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00068EDDu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00068EDD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00068EE6u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00068EE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00068EEEu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00068EEE: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x3200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x42);
    MEM32(0x180D48) = esi;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180D20) = esi;
    PUSH32(esp, 0x00068F13u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_00068F13: ;
    PUSH32(esp, 0x00068F18u); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_00068F18: ;
    edx = 2;
    PUSH32(esp, 0x00068F22u); RECOMP_ABI_CALL(0x00068C70u, sub_00068C70); /* call 0x00068C70 */

loc_00068F22: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx);
    PUSH32(esp, 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 4);
    PUSH32(esp, eax);
    MEM32(eax + 0x14) = esi;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    PUSH32(esp, 0x00068F61u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_00068F61: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00068F70
 * Original: 0x00068F70 - 0x00068FE0 (112 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068F70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x902800);
    PUSH32(esp, 6);
    esi = ecx;
    PUSH32(esp, 0x00068F84u); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_00068F84: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068F8Du); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00068F8D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00068F95u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00068F95: ;
    ebx = MEM32(0x1809A8);
    ebx = ebx | 0x3200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x42);
    MEM32(0x180D48) = edi;
    MEM32(0x1809A8) = ebx;
    MEM32(0x180D20) = edi;
    PUSH32(esp, 0x00068FBAu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_00068FBA: ;
    PUSH32(esp, 0x00068FBFu); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_00068FBF: ;
    ebx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000690B0(); return; } /* jbe: below or equal (unsigned <=) */

loc_00068FD8: ;
    PUSH32(esp, ebp);
    /* nop */

    g_seh_ebp = ebp; sub_00068FE0(); return; /* fallthrough 0x00068FE0 */

}

/**
 * sub_00068FE0
 * Original: 0x00068FE0 - 0x00068FFA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068FE0: ;
    ebp = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3E7 (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_000690AF(); return; } /* jae: above or equal (unsigned >=) */

loc_00068FF6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00069000(); return; /* tail jmp 0x00069000 */

}

/**
 * sub_00069000
 * Original: 0x00069000 - 0x00069056 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069000: ;
    eax = MEM32(0x8FE610);
    ecx = 0x1000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0006901B; /* jae: above or equal (unsigned >=) */

loc_00069014: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1000;

loc_0006901B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00069023; /* jae: above or equal (unsigned >=) */

loc_0006901F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00069027;

loc_00069023: ;
    ecx = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00069027: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = eax * 4 + 0x8FE618;
    eax = eax + ecx * 4;
    MEM32(0x8FE610) = eax;
    eax = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00069056(); return; } /* je: equal / zero */

loc_0006903C: ;
    eax = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ebp;
    eax = edx + 0x10;

    g_seh_ebp = ebp; sub_00069056(); return; /* fallthrough 0x00069056 */

}

/**
 * sub_00069056
 * Original: 0x00069056 - 0x000690AF (89 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069056(void)
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

loc_00069056: ;
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esi + 4);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = ebp;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00069056; /* jne: not equal / not zero */

loc_0006908A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00069095u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_00069095: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = 1;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00069000(); return; } /* ja: above (unsigned >) */

loc_000690A2: ;
    ebx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00068FE0(); return; } /* ja: above (unsigned >) */

    g_seh_ebp = ebp; sub_000690AF(); return; /* fallthrough 0x000690AF */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000690AF
 * Original: 0x000690AF - 0x000690B0 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000690AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000690AF: ;
    POP32(esp, ebp);

    g_seh_ebp = ebp; sub_000690B0(); return; /* fallthrough 0x000690B0 */

}

/**
 * sub_000690B0
 * Original: 0x000690B0 - 0x000690B7 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000690B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000690B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000690C0
 * Original: 0x000690C0 - 0x00069146 (134 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000690C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000690C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000690CBu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000690CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000690D3u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000690D3: ;
    eax = MEM32(0x1809A8);
    eax = eax | 0x3200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x44);
    MEM32(0x180D48) = esi;
    MEM32(0x1809A8) = eax;
    MEM32(0x180D20) = esi;
    PUSH32(esp, 0x000690F5u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_000690F5: ;
    PUSH32(esp, 0x000690FAu); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_000690FA: ;
    eax = 2;
    PUSH32(esp, 0x00069104u); RECOMP_ABI_CALL(0x00068CA0u, sub_00068CA0); /* call 0x00068CA0 */

loc_00069104: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x14);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = ecx;
    edi = MEM32(edx);
    PUSH32(esp, eax);
    MEM32(eax + 0x14) = edi;
    edx = MEM32(edx + 4);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x24) = ecx;
    PUSH32(esp, 0x00069143u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_00069143: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069150
 * Original: 0x00069150 - 0x000692A8 (344 bytes, 110 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069150(void)
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

loc_00069150: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00069162u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00069162: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0006916Au); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0006916A: ;
    ebx = MEM32(0x1809A8);
    ebx = ebx | 0x3200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x44);
    MEM32(0x180D48) = edi;
    MEM32(0x1809A8) = ebx;
    MEM32(0x180D20) = edi;
    PUSH32(esp, 0x0006918Fu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0006918F: ;
    PUSH32(esp, 0x00069194u); RECOMP_ABI_CALL(0x00062500u, sub_00062500); /* call 0x00062500 */

loc_00069194: ;
    ebp = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000692A0; /* jbe: below or equal (unsigned <=) */

loc_000691AD: ;
    /* nop */

loc_000691B0: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3E7 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000692A0; /* jae: above or equal (unsigned >=) */

loc_000691C6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000691D0;

    /* nop */

loc_000691D0: ;
    ebx = MEM32(0x8FE610);
    ecx = 0x1000;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000691F3; /* jae: above or equal (unsigned >=) */

loc_000691EC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x1000;

loc_000691F3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000691FB; /* jae: above or equal (unsigned >=) */

loc_000691F7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000691FF;

loc_000691FB: ;
    edx = ebp;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000691FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edx + ebx;
    eax = eax + edx * 4;
    ecx = ebx * 4 + 0x8FE618;
    MEM32(0x8FE610) = eax;
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00069240; /* je: equal / zero */

loc_00069217: ;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = 0;
    eax = ecx + 0x14;
    /* nop */

loc_00069240: ;
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esi + 4);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = ebx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00069240; /* jne: not equal / not zero */

loc_0006927B: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00069286u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_00069286: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = 1;
    if (CMP_A(_fa, _fb)) goto loc_000691D0; /* ja: above (unsigned >) */

loc_00069293: ;
    ebp = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000691B0; /* ja: above (unsigned >) */

loc_000692A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_000692B0
 * Original: 0x000692B0 - 0x0006933C (140 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000692B0(void)
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

loc_000692B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E5AF0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000692BDu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_000692BD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000692C6u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000692C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000692CEu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000692CE: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x3200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x44);
    MEM32(0x180D48) = esi;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180D20) = esi;
    PUSH32(esp, 0x000692F3u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_000692F3: ;
    eax = 2;
    PUSH32(esp, 0x000692FDu); RECOMP_ABI_CALL(0x00068CA0u, sub_00068CA0); /* call 0x00068CA0 */

loc_000692FD: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    MEM32(eax + 8) = esi;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = esi;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ecx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006933Au); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_0006933A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069340
 * Original: 0x00069340 - 0x000693FF (191 bytes, 60 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00069340(void)
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

loc_00069340: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E5AF0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0006934Du); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_0006934D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00069356u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00069356: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0006935Eu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0006935E: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x3200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x44);
    MEM32(0x180D48) = esi;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180D20) = esi;
    PUSH32(esp, 0x00069383u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_00069383: ;
    eax = 5;
    PUSH32(esp, 0x0006938Du); RECOMP_ABI_CALL(0x00068CA0u, sub_00068CA0); /* call 0x00068CA0 */

loc_0006938D: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x14);
    MEMF(eax) = (float)fp_top(); /* fst */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    MEM32(eax + 8) = esi;
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 0xC) = esi;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x30) = esi;
    MEMF(eax + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 0x34) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x44) = esi;
    MEM32(eax + 0x48) = esi;
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    MEM32(eax + 0x4C) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x58) = esi;
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x5C) = esi;
    MEM32(eax + 0x60) = ecx;
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x40) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000693FDu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000693FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069400
 * Original: 0x00069400 - 0x000694C9 (201 bytes, 62 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069400(void)
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

loc_00069400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E5AF0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0006940Eu); RECOMP_ABI_CALL(0x00162C20u, sub_00162C20); /* call 0x00162C20 */

loc_0006940E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00069417u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00069417: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0006941Fu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0006941F: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 0x3200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x180D48) = esi;
    MEM32(0x1809A8) = ecx;
    MEM32(0x180D20) = esi;
    PUSH32(esp, 0x00069443u); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_00069443: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0006944Au); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_0006944A: ;
    eax = 4;
    PUSH32(esp, 0x00069454u); RECOMP_ABI_CALL(0x00068CA0u, sub_00068CA0); /* call 0x00068CA0 */

loc_00069454: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x14);
    MEMF(eax) = (float)fp_top(); /* fst */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    edx = 0x3F800000;
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = esi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEM32(eax + 0x30) = esi;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x34) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x44) = esi;
    MEM32(eax + 0x48) = edx;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEM32(eax + 0x4C) = ecx;
    edi = MEM32(esp + 0x1C);
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x3C) = edi;
    edi = MEM32(esp + 0x20);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x40) = edi;
    PUSH32(esp, 0x000694C6u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000694C6: ;
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
 * sub_000694D0
 * Original: 0x000694D0 - 0x000694D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000694D0(void)
{

loc_000694D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000694E0
 * Original: 0x000694E0 - 0x000694E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000694E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000694E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000694F0
 * Original: 0x000694F0 - 0x000694F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000694F0(void)
{

loc_000694F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069500
 * Original: 0x00069500 - 0x00069501 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069500(void)
{

loc_00069500: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069510
 * Original: 0x00069510 - 0x00069513 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00069510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069510: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069520
 * Original: 0x00069520 - 0x00069521 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069520(void)
{

loc_00069520: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069530
 * Original: 0x00069530 - 0x00069531 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069530(void)
{

loc_00069530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069540
 * Original: 0x00069540 - 0x00069541 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069540(void)
{

loc_00069540: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069550
 * Original: 0x00069550 - 0x00069551 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069550(void)
{

loc_00069550: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069560
 * Original: 0x00069560 - 0x00069563 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00069560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069560: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069570
 * Original: 0x00069570 - 0x00069573 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00069570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069570: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069580
 * Original: 0x00069580 - 0x00069581 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069580(void)
{

loc_00069580: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069590
 * Original: 0x00069590 - 0x00069591 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069590(void)
{

loc_00069590: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000695A0
 * Original: 0x000695A0 - 0x000695A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000695A0(void)
{

loc_000695A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000695B0
 * Original: 0x000695B0 - 0x000695B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000695B0(void)
{

loc_000695B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000695C0
 * Original: 0x000695C0 - 0x000695D3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000695C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000695C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000695CE; /* je: equal / zero */

loc_000695C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000695CEu); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_000695CE: ;
    g_seh_ebp = ebp; sub_000A9E11(); return; /* tail jmp 0x000A9E11 */

}

/**
 * sub_000695E0
 * Original: 0x000695E0 - 0x000695F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000695E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000695E0: ;
    PUSH32(esp, edi);
    ecx = 0x28;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x902618;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069600
 * Original: 0x00069600 - 0x0006961C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00069600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069600: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00069619; /* jl: less (signed <) */

loc_00069609: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00069619; /* jg: greater (signed >) */

loc_0006960E: ;
    eax = eax + eax * 4;
    eax = eax * 8 + 0x9025F0;
    esp += 4; return; /* ret */

loc_00069619: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069620
 * Original: 0x00069620 - 0x00069718 (248 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 8) = ecx;
    edi = 1;
    edi = edi;

loc_00069630: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00069636u); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_00069636: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006964E; /* je: equal / zero */

loc_00069641: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00069630; /* jle: less or equal (signed <=) */

loc_00069647: ;
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0006964E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0006965A; /* jle: less or equal (signed <=) */

loc_00069653: ;
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0006965A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0006966C; /* je: equal / zero */

loc_00069664: ;
    MEM32(esp + 0xC) = 0x80000000u;

loc_0006966C: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0006967B; /* je: equal / zero */

loc_00069673: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0xC) = MEM32(esp + 0xC) | 0x40000000;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0006967B: ;
    SET_LO8(edx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(3)) >> 32) & 1);
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0006969E; /* je: equal / zero */

loc_00069692: ;
    eax = 2;
    ecx = 0x80;
    goto loc_000696AA;

loc_0006969E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(3)) >> 32) & 1);
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;

loc_000696AA: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000696B5; /* je: equal / zero */

loc_000696AF: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x60000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000696B5: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000696C0; /* je: equal / zero */

loc_000696BA: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000696C0: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000696CB; /* je: equal / zero */

loc_000696C5: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000696CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000696E1u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000696E1: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000696F0; /* jne: not equal / not zero */

loc_000696E8: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000696F0: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x24) = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    POP32(esp, ebx);
    MEM32(esi + 0xC) = edx;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069720
 * Original: 0x00069720 - 0x00069772 (82 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069720: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006972Bu); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_0006972B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069758; /* je: equal / zero */

loc_00069734: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006973C; /* jne: not equal / not zero */

loc_0006973A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006973C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006975D; /* je: equal / zero */

loc_00069744: ;
    PUSH32(esp, 1);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069754u); RECOMP_ABI_CALL(0x000ADDE5u, sub_000ADDE5); /* call 0x000ADDE5 */

loc_00069754: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006975D; /* jne: not equal / not zero */

loc_00069758: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006975D: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069765u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00069765: ;
    MEM32(esi) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069780
 * Original: 0x00069780 - 0x000697B4 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;
    /* nop */

loc_00069790: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00069796u); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_00069796: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000697A9; /* jne: not equal / not zero */

loc_0006979F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000697A5u); RECOMP_ABI_CALL(0x00069720u, sub_00069720); /* call 0x00069720 */

loc_000697A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000697A9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00069790; /* jle: less or equal (signed <=) */

loc_000697AF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000697C0
 * Original: 0x000697C0 - 0x00069835 (117 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000697C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000697C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000697CBu); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_000697CB: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000697DA; /* je: equal / zero */

loc_000697D4: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000697DF; /* jne: not equal / not zero */

loc_000697DA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000697DF: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0006980E; /* je: equal / zero */

loc_000697E8: ;
    PUSH32(esp, 0);
    esi = edi + 0x24;
    PUSH32(esp, esi);
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000697F8u); RECOMP_ABI_CALL(0x000ADDE5u, sub_000ADDE5); /* call 0x000ADDE5 */

loc_000697F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006980E; /* jne: not equal / not zero */

loc_000697FC: ;
    PUSH32(esp, 0x00069801u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00069801: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006981E; /* je: equal / zero */

loc_00069808: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0006980E: ;
    edx = MEM32(edi + 0x24);
    esi = edi + 0x24;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00069826;

loc_0006981E: ;
    MEM32(esi) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00069826: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069832; /* je: equal / zero */

loc_0006982E: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;

loc_00069832: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069840
 * Original: 0x00069840 - 0x00069907 (199 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006984Au); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_0006984A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069855; /* jne: not equal / not zero */

loc_00069851: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00069855: ;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069861; /* jne: not equal / not zero */

loc_0006985C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00069861: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00069870; /* jne: not equal / not zero */

loc_0006986A: ;
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00069870: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069884; /* jne: not equal / not zero */

loc_00069878: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006986A; /* je: equal / zero */

loc_0006987F: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00069884: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000698DF; /* je: equal / zero */

loc_00069894: ;
    ebx = MEM32(eax + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    edx = eax + 0x24;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(edx) = 0;
    PUSH32(esp, 0x000698B6u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_000698B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000698FE; /* jne: not equal / not zero */

loc_000698BB: ;
    PUSH32(esp, 0x000698C0u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000698C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000698CE; /* jne: not equal / not zero */

loc_000698C5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000698CE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000698DF: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    PUSH32(esp, 0x000698F3u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_000698F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000698FE; /* jne: not equal / not zero */

loc_000698F7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000698FE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069910
 * Original: 0x00069910 - 0x000699D7 (199 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006991Au); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_0006991A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069925; /* jne: not equal / not zero */

loc_00069921: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00069925: ;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069931; /* jne: not equal / not zero */

loc_0006992C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00069931: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00069940; /* jne: not equal / not zero */

loc_0006993A: ;
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00069940: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069954; /* jne: not equal / not zero */

loc_00069948: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006993A; /* je: equal / zero */

loc_0006994F: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00069954: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000699AF; /* je: equal / zero */

loc_00069964: ;
    ebx = MEM32(eax + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    edx = eax + 0x24;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(edx) = 0;
    PUSH32(esp, 0x00069986u); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_00069986: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000699CE; /* jne: not equal / not zero */

loc_0006998B: ;
    PUSH32(esp, 0x00069990u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00069990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006999D; /* jne: not equal / not zero */

loc_00069997: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0006999D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    ecx = ecx + ecx + -1;
    eax = ecx;
    esp += 4; return; /* ret */

loc_000699AF: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    PUSH32(esp, 0x000699C3u); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_000699C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000699CE; /* jne: not equal / not zero */

loc_000699C7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000699CE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000699E0
 * Original: 0x000699E0 - 0x00069A08 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000699E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000699E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000699EAu); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_000699EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000699F5; /* jne: not equal / not zero */

loc_000699F1: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000699F5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000699F1; /* je: equal / zero */

loc_000699FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069A01u); RECOMP_ABI_CALL(0x000AAD42u, sub_000AAD42); /* call 0x000AAD42 */

loc_00069A01: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069A10
 * Original: 0x00069A10 - 0x00069A6F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069A10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069A1Bu); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_00069A1B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069A2A; /* je: equal / zero */

loc_00069A24: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069A2F; /* jne: not equal / not zero */

loc_00069A2A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00069A2F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069A51; /* je: equal / zero */

loc_00069A37: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 1 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00069A63; /* jne: not equal / not zero */

loc_00069A42: ;
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00069A51: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069A63u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_00069A63: ;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069A70
 * Original: 0x00069A70 - 0x00069A82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069A70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069A7Eu); RECOMP_ABI_CALL(0x00069A10u, sub_00069A10); /* call 0x00069A10 */

loc_00069A7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069A90
 * Original: 0x00069A90 - 0x00069AC5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069A90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069A9Bu); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_00069A9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069AC0; /* je: equal / zero */

loc_00069AA2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069AC0; /* je: equal / zero */

loc_00069AA8: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069AB2u); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_00069AB2: ;
    ecx = MEM32(esp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00069AC0; /* ja: above (unsigned >) */

loc_00069AB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00069AC3; /* jbe: below or equal (unsigned <=) */

loc_00069AC0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00069AC3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069AD0
 * Original: 0x00069AD0 - 0x00069B5A (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069AD0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069ADDu); RECOMP_ABI_CALL(0x00069600u, sub_00069600); /* call 0x00069600 */

loc_00069ADD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069B15; /* je: equal / zero */

loc_00069AE4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069B15; /* je: equal / zero */

loc_00069AEA: ;
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069AFEu); RECOMP_ABI_CALL(0x000AAC6Au, sub_000AAC6A); /* call 0x000AAC6A */

loc_00069AFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069B15; /* je: equal / zero */

loc_00069B02: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069B11u); RECOMP_ABI_CALL(0x000A969Cu, sub_000A969C); /* call 0x000A969C */

loc_00069B11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069B1C; /* jne: not equal / not zero */

loc_00069B15: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00069B1C: ;
    eax = ZX16(MEM16(esp + 0x1A));
    ecx = ZX16(MEM16(esp + 0x1E));
    edx = ZX16(MEM16(esp + 0x1C));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX16(MEM16(esp + 0x20));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX16(MEM16(esp + 0x18));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX16(MEM16(esp + 0x22));
    _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 0x17;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069B60
 * Original: 0x00069B60 - 0x00069C3E (222 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00069B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    MEM32(esp + 0x15C) = eax;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    ecx = 0x50;
    edi = esp + 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069BA4u); RECOMP_ABI_CALL(0x000ADEB6u, sub_000ADEB6); /* call 0x000ADEB6 */

loc_00069BA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00069C29; /* je: equal / zero */

loc_00069BAD: ;
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);

loc_00069BB3: ;
    eax = esp + 0x4C;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(esp + 0x20));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00069BD8; /* je: equal / zero */

loc_00069BD0: ;
    MEM32(esp + 0x18) = 1;

loc_00069BD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069BE1; /* je: equal / zero */

loc_00069BDC: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) | 2;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00069BE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069BEA; /* je: equal / zero */

loc_00069BE5: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) | 4;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00069BEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069BF3; /* je: equal / zero */

loc_00069BEE: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) | 0x10;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00069BF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069C08; /* je: equal / zero */

loc_00069BF7: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00069BFFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00069BFDu); } /* indirect call */
    }

loc_00069BFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069C1F; /* je: equal / zero */

loc_00069C06: ;
    if (CMP_L(_fas, _fbs)) goto loc_00069C1D; /* jl: less (signed <) */

loc_00069C08: ;
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069C17u); RECOMP_ABI_CALL(0x000ADFC3u, sub_000ADFC3); /* call 0x000ADFC3 */

loc_00069C17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069BB3; /* jne: not equal / not zero */

loc_00069C1B: ;
    goto loc_00069C1F;

loc_00069C1D: ;
    esi = eax;

loc_00069C1F: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069C29u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00069C29: ;
    ecx = MEM32(esp + 0x164);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069C37u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00069C37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00069C40
 * Original: 0x00069C40 - 0x00069C6F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069C40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00069C50u); RECOMP_ABI_CALL(0x000AE014u, sub_000AE014); /* call 0x000AE014 */

loc_00069C50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069C5B; /* je: equal / zero */

loc_00069C54: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00069C5B: ;
    PUSH32(esp, 0x00069C60u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00069C60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069C6B; /* jne: not equal / not zero */

loc_00069C67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00069C6B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069C70
 * Original: 0x00069C70 - 0x00069C9B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00069C7Eu); RECOMP_ABI_CALL(0x000AE080u, sub_000AE080); /* call 0x000AE080 */

loc_00069C7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069C89; /* je: equal / zero */

loc_00069C82: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00069C89: ;
    PUSH32(esp, 0x00069C8Eu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00069C8E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00069C97; /* jne: not equal / not zero */

loc_00069C93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00069C97: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00069CA0
 * Original: 0x00069CA0 - 0x00069CB3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069CA0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069CB0; /* je: equal / zero */

loc_00069CA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00069CB2; /* jne: not equal / not zero */

loc_00069CB0: ;
    eax = MEM32(ecx);

loc_00069CB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069CC0
 * Original: 0x00069CC0 - 0x00069D82 (194 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069CC0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x9026DC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00069CD4; /* jne: not equal / not zero */

loc_00069CCE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00069CD4: ;
    _fa = (uint32_t)(MEM32(0x9026D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9026D8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069D11; /* jne: not equal / not zero */

loc_00069CDD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069D10; /* je: equal / zero */

loc_00069CE6: ;
    PUSH32(esp, 0);
    ecx = 0x9026C0;
    PUSH32(esp, 0x00069CF2u); RECOMP_ABI_CALL(0x00069CA0u, sub_00069CA0); /* call 0x00069CA0 */

loc_00069CF2: ;
    PUSH32(esp, 0);
    ecx = 0x9026C8;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00069D00u); RECOMP_ABI_CALL(0x00069CA0u, sub_00069CA0); /* call 0x00069CA0 */

loc_00069D00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(0x9026D8) = 0;

loc_00069D10: ;
    POP32(esp, esi);

loc_00069D11: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00069D19u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_00069D19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00069D33; /* jne: not equal / not zero */

loc_00069D22: ;
    PUSH32(esp, 0x235AFC);
    PUSH32(esp, 0x00069D2Cu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00069D2C: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00069D33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069D4B; /* jne: not equal / not zero */

loc_00069D3A: ;
    PUSH32(esp, 0x235AE8);
    PUSH32(esp, 0x00069D44u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00069D44: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00069D4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069D7D; /* jne: not equal / not zero */

loc_00069D4F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00069D5Au); RECOMP_ABI_CALL(0x000AD1A5u, sub_000AD1A5); /* call 0x000AD1A5 */

loc_00069D5A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00069D60u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00069D60: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x9026DC) = 0;
    POP32(esp, edi);
    eax = eax + eax + -1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00069D7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069D90
 * Original: 0x00069D90 - 0x00069DCE (62 bytes, 14 insns)
 * CC: cdecl, 13 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00069D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069D90: ;
    eax = MEM32(0x9026D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069DC9; /* jne: not equal / not zero */

loc_00069D99: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(0x9026C0) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x9026C4) = ecx;
    MEM32(0x9026C8) = edx;
    MEM32(0x9026CC) = eax;
    MEM32(0x9026D8) = 1;

loc_00069DC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 56; return; /* ret 52 */

}

/**
 * sub_00069F10
 * Original: 0x00069F10 - 0x00069F3D (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069F10: ;
    PUSH32(esp, 0x00069F15u); RECOMP_ABI_CALL(0x000695A0u, sub_000695A0); /* call 0x000695A0 */

loc_00069F15: ;
    PUSH32(esp, 0x00069F1Au); RECOMP_ABI_CALL(0x00069F90u, sub_00069F90); /* call 0x00069F90 */

loc_00069F1A: ;
    PUSH32(esp, 0x00069F1Fu); RECOMP_ABI_CALL(0x000695E0u, sub_000695E0); /* call 0x000695E0 */

loc_00069F1F: ;
    PUSH32(esp, 0x00069F24u); RECOMP_ABI_CALL(0x00069FA0u, sub_00069FA0); /* call 0x00069FA0 */

loc_00069F24: ;
    PUSH32(esp, 0x00069F29u); RECOMP_ABI_CALL(0x0006ADD0u, sub_0006ADD0); /* call 0x0006ADD0 */

loc_00069F29: ;
    PUSH32(esp, 0x00069F2Eu); RECOMP_ABI_CALL(0x00068830u, sub_00068830); /* call 0x00068830 */

loc_00069F2E: ;
    PUSH32(esp, 0x00069F33u); RECOMP_ABI_CALL(0x000682F0u, sub_000682F0); /* call 0x000682F0 */

loc_00069F33: ;
    PUSH32(esp, 0x00069F38u); RECOMP_ABI_CALL(0x000694D0u, sub_000694D0); /* call 0x000694D0 */

loc_00069F38: ;
    g_seh_ebp = ebp; sub_00068C60(); return; /* tail jmp 0x00068C60 */

}

/**
 * sub_00069F40
 * Original: 0x00069F40 - 0x00069F60 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069F40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00069F56; /* jge: greater or equal (signed >=) */

loc_00069F44: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00069F4Bu); RECOMP_ABI_CALL(0x00151529u, sub_00151529); /* call 0x00151529 */

loc_00069F4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069F54u); RECOMP_ABI_CALL(0x00150383u, sub_00150383); /* call 0x00150383 */

loc_00069F54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00069F56: ;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069F5Eu); RECOMP_ABI_CALL(0x00150383u, sub_00150383); /* call 0x00150383 */

loc_00069F5E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069F60
 * Original: 0x00069F60 - 0x00069F65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069F60: ;
    g_seh_ebp = ebp; sub_00150390(); return; /* tail jmp 0x00150390 */

}

/**
 * sub_00069F70
 * Original: 0x00069F70 - 0x00069F84 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00069F70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069F76u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00069F76: ;
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236340)); /* fmul dword ptr [0x236340] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069F90
 * Original: 0x00069F90 - 0x00069F98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069F90: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00069F40(); return; /* tail jmp 0x00069F40 */

}

/**
 * sub_00069FA0
 * Original: 0x00069FA0 - 0x00069FA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069FA0(void)
{

loc_00069FA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069FB0
 * Original: 0x00069FB0 - 0x00069FC8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069FB0(void)
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

loc_00069FB0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069FC7; /* je: equal / zero */

loc_00069FC5: ;
    fp_top() = -fp_top(); /* fchs */

loc_00069FC7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069FD0
 * Original: 0x00069FD0 - 0x00069FDA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069FD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00069FD0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x00069FD9u); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_00069FD9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069FE0
 * Original: 0x00069FE0 - 0x00069FEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069FE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00069FE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x00069FE9u); RECOMP_ABI_CALL(0x00151630u, sub_00151630); /* call 0x00151630 */

loc_00069FE9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069FF0
 * Original: 0x00069FF0 - 0x00069FF9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069FF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00069FF0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A000
 * Original: 0x0006A000 - 0x0006A00B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A000: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A010
 * Original: 0x0006A010 - 0x0006A017 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A010(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A010: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A020
 * Original: 0x0006A020 - 0x0006A027 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A020: ;
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
 * sub_0006A030
 * Original: 0x0006A030 - 0x0006A039 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006A030(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A030: ;
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
 * sub_0006A040
 * Original: 0x0006A040 - 0x0006A04A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A040(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A040: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0006A049u); RECOMP_ABI_CALL(0x00151564u, sub_00151564); /* call 0x00151564 */

loc_0006A049: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A050
 * Original: 0x0006A050 - 0x0006A05A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A050: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0006A059u); RECOMP_ABI_CALL(0x00151630u, sub_00151630); /* call 0x00151630 */

loc_0006A059: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A060
 * Original: 0x0006A060 - 0x0006A069 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A060: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A070
 * Original: 0x0006A070 - 0x0006A07B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A070: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006A080
 * Original: 0x0006A080 - 0x0006A087 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006A080: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
