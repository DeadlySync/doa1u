/**
 * DOAU1 - Recompiled code chunk 18
 * Functions: 250 (0x000A7210 - 0x000AC60A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A7210
 * Original: 0x000A7210 - 0x000A7252 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A721Bu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A721B: ;
    PUSH32(esp, 1);
    esi = esi + eax * 2 + -2;
    PUSH32(esp, 0x239E14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A722Cu); RECOMP_ABI_CALL(0x0015238Cu, sub_0015238C); /* call 0x0015238C */

loc_000A722C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A724B; /* je: equal / zero */

loc_000A7233: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2811B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7240u); RECOMP_ABI_CALL(0x0015238Cu, sub_0015238C); /* call 0x0015238C */

loc_000A7240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A724B; /* je: equal / zero */

loc_000A7247: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A724B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7260
 * Original: 0x000A7260 - 0x000A7286 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A7260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A726Bu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A726B: ;
    PUSH32(esp, 1);
    eax = esi + eax * 2 + -2;
    PUSH32(esp, 0x2811B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A727Cu); RECOMP_ABI_CALL(0x0015238Cu, sub_0015238C); /* call 0x0015238C */

loc_000A727C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7265
 * Original: 0x000A7265 - 0x000A7286 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7265(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A7265: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A726Bu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A726B: ;
    PUSH32(esp, 1);
    eax = esi + eax * 2 + -2;
    PUSH32(esp, 0x2811B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A727Cu); RECOMP_ABI_CALL(0x0015238Cu, sub_0015238C); /* call 0x0015238C */

loc_000A727C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7290
 * Original: 0x000A7290 - 0x000A729B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7290: ;
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000A72A0
 * Original: 0x000A72A0 - 0x000A72A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A72A0(void)
{

loc_000A72A0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A72B0
 * Original: 0x000A72B0 - 0x000A72BE (14 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A72B0(void)
{

loc_000A72B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A72BAu); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A72BA: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A72C0
 * Original: 0x000A72C0 - 0x000A72CE (14 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A72C0(void)
{

loc_000A72C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A72CAu); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A72CA: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A72D0
 * Original: 0x000A72D0 - 0x000A72D5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A72D0(void)
{

loc_000A72D0: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A72E0
 * Original: 0x000A72E0 - 0x000A72FE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A72E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A72E0: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A72F3; /* ja: above (unsigned >) */

loc_000A72F1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000A72F3: ;
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7300
 * Original: 0x000A7300 - 0x000A7306 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7300(void)
{

loc_000A7300: ;
    eax = 0x2E8BA2E;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7310
 * Original: 0x000A7310 - 0x000A7322 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7310(void)
{

loc_000A7310: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A7330
 * Original: 0x000A7330 - 0x000A7349 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7330: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    esi = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000A7346; /* jae: above or equal (unsigned >=) */

loc_000A7343: ;
    eax = ecx + 1;

loc_000A7346: ;
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7350
 * Original: 0x000A7350 - 0x000A735F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A735E; /* jb: below (unsigned <) */

loc_000A735C: ;
    eax = ecx;

loc_000A735E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7360
 * Original: 0x000A7360 - 0x000A7377 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7360: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A7376; /* ja: above (unsigned >) */

loc_000A736C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A7376; /* ja: above (unsigned >) */

loc_000A7374: ;
    eax = ecx;

loc_000A7376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7374
 * Original: 0x000A7374 - 0x000A7377 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7374(void)
{

loc_000A7374: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7380
 * Original: 0x000A7380 - 0x000A738F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A738E; /* jb: below (unsigned <) */

loc_000A738C: ;
    eax = ecx;

loc_000A738E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7390
 * Original: 0x000A7390 - 0x000A73A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7390: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A739Du); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A739D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A73B0
 * Original: 0x000A73B0 - 0x000A73B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73B0(void)
{

loc_000A73B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A73C0
 * Original: 0x000A73C0 - 0x000A73C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73C0(void)
{

loc_000A73C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A73D0
 * Original: 0x000A73D0 - 0x000A73D5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73D0(void)
{

loc_000A73D0: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A73E0
 * Original: 0x000A73E0 - 0x000A73F5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A73E0: ;
    eax = MEM32(esp + 4);
    ecx = eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A73F1u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A73F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7400
 * Original: 0x000A7400 - 0x000A7407 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7400(void)
{

loc_000A7400: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 3));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7410
 * Original: 0x000A7410 - 0x000A7438 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7410: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax * 4;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7431u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A7431: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7440
 * Original: 0x000A7440 - 0x000A7441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7440(void)
{

loc_000A7440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7450
 * Original: 0x000A7450 - 0x000A746D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7450: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A746C; /* jbe: below or equal (unsigned <=) */

loc_000A7458: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);

loc_000A7461: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A7461; /* jne: not equal / not zero */

loc_000A746B: ;
    POP32(esp, esi);

loc_000A746C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7470
 * Original: 0x000A7470 - 0x000A747C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7470(void)
{

loc_000A7470: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A7478u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_000A7478: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7480
 * Original: 0x000A7480 - 0x000A748C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7480(void)
{

loc_000A7480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A7488u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_000A7488: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7490
 * Original: 0x000A7490 - 0x000A749C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7490(void)
{

loc_000A7490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A7498u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_000A7498: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A74A0
 * Original: 0x000A74A0 - 0x000A74AF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A74A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A74A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM16(ecx + 0xC) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A74B0
 * Original: 0x000A74B0 - 0x000A74D6 (38 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A74B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A74B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_000A74CA; /* je: equal / zero */

loc_000A74C5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A74CA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A74E0
 * Original: 0x000A74E0 - 0x000A7505 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A74E0(void)
{

loc_000A74E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    SET_LO16(ecx, MEM16(ecx + 0xC));
    MEM16(edx + 0xC) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A7510
 * Original: 0x000A7510 - 0x000A752C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7510(void)
{

loc_000A7510: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A7518u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_000A7518: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000A7520u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_000A7520: ;
    ecx = esi + 9;
    PUSH32(esp, 0x000A7528u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_000A7528: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7530
 * Original: 0x000A7530 - 0x000A7605 (213 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7530: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000A7547u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A75F2; /* jae: above or equal (unsigned >=) */

loc_000A7550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A7556u); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7556: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A75F2; /* je: equal / zero */

loc_000A7561: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = esi + 0x12118;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7578u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7578: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A757Fu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A757F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A7586u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7586: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A75D5; /* jne: not equal / not zero */

loc_000A758F: ;
    SET_LO8(eax, 1);
    MEM8(esi + 0x1213D) = LO8(eax);
    MEM8(esi + 0x1213C) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A75E0; /* je: equal / zero */

loc_000A75A5: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fb = (uint32_t)(0xF200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF200;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x935B50) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A75E0; /* je: equal / zero */

loc_000A75B9: ;
    PUSH32(esp, 0x000A75BEu); RECOMP_ABI_CALL(0x000A48D0u, sub_000A48D0); /* call 0x000A48D0 */

loc_000A75BE: ;
    PUSH32(esp, 0x000A75C3u); RECOMP_ABI_CALL(0x000A4930u, sub_000A4930); /* call 0x000A4930 */

loc_000A75C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A75D1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A75D1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A75D5: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A75E0u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A75E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A75EEu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A75EE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A75F2: ;
    ecx = MEM32(esp + 0x24);
    eax = 0xFFFFFFF8u;
    POP32(esp, ebx);
    PUSH32(esp, 0x000A7601u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7601: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7610
 * Original: 0x000A7610 - 0x000A7638 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A7610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7610: ;
    SET_LO8(eax, MEM8(0x948694));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7635; /* je: equal / zero */

loc_000A7619: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x936558;
    PUSH32(esp, 0x000A762Du); RECOMP_ABI_CALL(0x000A6CC0u, sub_000A6CC0); /* call 0x000A6CC0 */

loc_000A762D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7635; /* je: equal / zero */

loc_000A7631: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7635: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7640
 * Original: 0x000A7640 - 0x000A766F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7640: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x348;
    edx = 0xF;
    edi = edi;

loc_000A7650: ;
    PUSH32(esp, 0x000A7655u); RECOMP_ABI_CALL(0x000A6B70u, sub_000A6B70); /* call 0x000A6B70 */

loc_000A7655: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A7650; /* jne: not equal / not zero */

loc_000A765B: ;
    ecx = esi;
    eax = 0x69;
    POP32(esp, esi);

loc_000A7663: ;
    PUSH32(esp, 0x000A7668u); RECOMP_ABI_CALL(0x000A6BA0u, sub_000A6BA0); /* call 0x000A6BA0 */

loc_000A7668: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A7663; /* jne: not equal / not zero */

loc_000A766E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7670
 * Original: 0x000A7670 - 0x000A76EC (124 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7670: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A767B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF423F (32-bit) */
    esi = edx;
    if (CMP_B(_fa, _fb)) goto loc_000A768A; /* jb: below (unsigned <) */

loc_000A7685: ;
    esi = 0xF423F;

loc_000A768A: ;
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A7691: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF423F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A769F; /* jb: below (unsigned <) */

loc_000A769A: ;
    eax = 0xF423F;

loc_000A769F: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76A6: ;
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76AD: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76B4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A76BC; /* je: equal / zero */

loc_000A76B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A76E7; /* jne: not equal / not zero */

loc_000A76BC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0xF423F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76C5: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), 0xF423F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76CE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 0xF423F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76D7: ;
    _fa = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x24), 0x7530 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A76E7; /* ja: above (unsigned >) */

loc_000A76DF: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A76E7: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A76F0
 * Original: 0x000A76F0 - 0x000A7797 (167 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A76F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A76F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x236518);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x000A7712u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7712: ;
    PUSH32(esp, 0x236550);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7720u); RECOMP_ABI_CALL(0x000AEB2Au, sub_000AEB2A); /* call 0x000AEB2A */

loc_000A7720: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x44;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(esi + 0x52) = LO16(ebx);
    MEM8(esi + 0x55) = LO8(ebx);
    PUSH32(esp, 0x000A773Du); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_000A773D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A7791; /* ja: above (unsigned >) */

loc_000A7743: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA7798); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000A774Au) goto loc_000A774A;
    if (_jt == 0x000A7751u) goto loc_000A7751;
    if (_jt == 0x000A7758u) goto loc_000A7758;
    if (_jt == 0x000A775Fu) goto loc_000A775F;
    if (_jt == 0x000A7766u) goto loc_000A7766;
    if (_jt == 0x000A776Du) goto loc_000A776D;
    if (_jt == 0x000A7774u) goto loc_000A7774;
    if (_jt == 0x000A777Bu) goto loc_000A777B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A774A: ;
    MEM8(esi + 0x54) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A7751: ;
    MEM8(esi + 0x54) = 5;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A7758: ;
    MEM8(esi + 0x54) = 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A775F: ;
    MEM8(esi + 0x54) = 0xA;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A7766: ;
    MEM8(esi + 0x54) = 7;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A776D: ;
    MEM8(esi + 0x54) = 0x11;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A7774: ;
    MEM8(esi + 0x54) = 0x14;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A777B: ;
    PUSH32(esp, 0x000A7780u); RECOMP_ABI_CALL(0x000AEC65u, sub_000AEC65); /* call 0x000AEC65 */

loc_000A7780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x54) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A7791: ;
    MEM8(esi + 0x54) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A77C0
 * Original: 0x000A77C0 - 0x000A77EA (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A77C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A77C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    edi = 0x1F4;
    /* nop */

loc_000A77D0: ;
    ecx = esi;
    PUSH32(esp, 0x000A77D7u); RECOMP_ABI_CALL(0x000A76F0u, sub_000A76F0); /* call 0x000A76F0 */

loc_000A77D7: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A77D0; /* jne: not equal / not zero */

loc_000A77DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebx + 0xABE0) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A77F0
 * Original: 0x000A77F0 - 0x000A780E (30 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A77F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A77F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A77FFu); RECOMP_ABI_CALL(0x000A6C70u, sub_000A6C70); /* call 0x000A6C70 */

loc_000A77FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7809; /* je: equal / zero */

loc_000A7803: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000A7809: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A7810
 * Original: 0x000A7810 - 0x000A786D (93 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(ecx + 0xABE0));
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000A7852; /* jbe: below or equal (unsigned <=) */

loc_000A7826: ;
    ebx = ecx + 0x44;
    /* nop */

loc_000A7830: ;
    esi = MEM32(esp + 0x18);
    ecx = 0xE;
    edi = ebx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000A7846; /* je: equal / zero */

loc_000A7841: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A7846: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A785C; /* je: equal / zero */

loc_000A784A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x58)) >> 32) & 1);
    ebx = ebx + 0x58;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A7830; /* jb: below (unsigned <) */

loc_000A7852: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A785C: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A7870
 * Original: 0x000A7870 - 0x000A78CD (93 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(ecx + 0xABE0));
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000A78B2; /* jbe: below or equal (unsigned <=) */

loc_000A7886: ;
    ebx = ecx + 0x44;
    /* nop */

loc_000A7890: ;
    esi = MEM32(esp + 0x18);
    ecx = 0xE;
    edi = ebx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000A78A6; /* je: equal / zero */

loc_000A78A1: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A78A6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A78BC; /* je: equal / zero */

loc_000A78AA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x58)) >> 32) & 1);
    ebx = ebx + 0x58;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A7890; /* jb: below (unsigned <) */

loc_000A78B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A78BC: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A78D0
 * Original: 0x000A78D0 - 0x000A7A18 (328 bytes, 123 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A78D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A78D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x000A78DBu); RECOMP_ABI_CALL(0x0007D800u, sub_0007D800); /* call 0x0007D800 */

loc_000A78DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_000A7939; /* je: equal / zero */

loc_000A78E3: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A78EFu); RECOMP_ABI_CALL(0x0007DC10u, sub_0007DC10); /* call 0x0007DC10 */

loc_000A78EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x55) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000A7939; /* je: equal / zero */

loc_000A78FE: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0xABE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xABE0), LO16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000A7939; /* jbe: below or equal (unsigned <=) */

loc_000A7909: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A7910;

    /* nop */

loc_000A7910: ;
    edi = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    edx = MEM32(eax + ebp);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A792A; /* jne: not equal / not zero */

loc_000A791E: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A792A; /* jne: not equal / not zero */

loc_000A7926: ;
    MEM8(eax + 0x55) = 0;

loc_000A792A: ;
    edx = ZX16(MEM16(ebp + 0xABE0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = SX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A7910; /* jl: less (signed <) */

loc_000A7939: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0xABE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xABE0), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000A79A0; /* jbe: below or equal (unsigned <=) */

loc_000A7944: ;
    edx = esi + 0x44;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000A7950: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    esi = eax + ebp + 0x44;
    ecx = 0xE;
    edi = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000A7969; /* je: equal / zero */

loc_000A7964: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A7969: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A797C; /* je: equal / zero */

loc_000A796D: ;
    ecx = ZX16(MEM16(ebp + 0xABE0));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = SX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A7950; /* jl: less (signed <) */

loc_000A797C: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x1F4 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000A79CB; /* jge: greater or equal (signed >=) */

loc_000A7983: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000A799C; /* jle: less or equal (signed <=) */

loc_000A7988: ;
    edx = SX16(LO16(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    PUSH32(esp, edx);
    eax = ebp + 0x58;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7999u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A7999: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A799C: ;
    esi = MEM32(esp + 0x14);

loc_000A79A0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebp + 0xABE0));
    ecx = 0x16;
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
    ecx = ZX16(LO16(eax));
    edx = SX16(LO16(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A7A03; /* jne: not equal / not zero */

loc_000A79BC: ;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM16(ebp + 0xABE0) = LO16(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000A79CB: ;
    eax = 0x1F3;

loc_000A79D0: ;
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(edx, MEM8(ecx + ebp + 0x55));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7A0A; /* je: equal / zero */

loc_000A79DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000A79D0; /* jge: greater or equal (signed >=) */

loc_000A79E4: ;
    PUSH32(esp, 0xAB88);
    PUSH32(esp, ebp);
    ecx = ebp + 0x58;
    PUSH32(esp, ecx);

loc_000A79EE: ;
    PUSH32(esp, 0x000A79F3u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A79F3: ;
    esi = MEM32(esp + 0x20);
    edi = ebp;
    ecx = 0x16;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_000A7A03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000A7A0A: ;
    edx = SX16(LO16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    goto loc_000A79EE;

}

/**
 * sub_000A7A20
 * Original: 0x000A7A20 - 0x000A7A52 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7A20(void)
{

loc_000A7A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A7A28u); RECOMP_ABI_CALL(0x000A77C0u, sub_000A77C0); /* call 0x000A77C0 */

loc_000A7A28: ;
    ecx = esi + 0xABE8;
    PUSH32(esp, 0x000A7A33u); RECOMP_ABI_CALL(0x000A6DD0u, sub_000A6DD0); /* call 0x000A6DD0 */

loc_000A7A33: ;
    ecx = esi + 0xAC08;
    PUSH32(esp, 0x000A7A3Eu); RECOMP_ABI_CALL(0x000A7640u, sub_000A7640); /* call 0x000A7640 */

loc_000A7A3E: ;
    ecx = esi + 0xB1A8;
    PUSH32(esp, 0x000A7A49u); RECOMP_ABI_CALL(0x000A6D40u, sub_000A6D40); /* call 0x000A6D40 */

loc_000A7A49: ;
    MEM8(esi + 0xB1F8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7A60
 * Original: 0x000A7A60 - 0x000A7A76 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7A60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xF200;
    PUSH32(esp, 0x000A7A6Eu); RECOMP_ABI_CALL(0x000A5DD0u, sub_000A5DD0); /* call 0x000A5DD0 */

loc_000A7A6E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7A20(); return; /* tail jmp 0x000A7A20 */

}

/**
 * sub_000A7A80
 * Original: 0x000A7A80 - 0x000A7A96 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x12118;
    PUSH32(esp, 0x000A7A8Eu); RECOMP_ABI_CALL(0x000A6EA0u, sub_000A6EA0); /* call 0x000A6EA0 */

loc_000A7A8E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7A60(); return; /* tail jmp 0x000A7A60 */

}

/**
 * sub_000A7AA0
 * Original: 0x000A7AA0 - 0x000A7AB5 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7AA0(void)
{

loc_000A7AA0: ;
    ecx = 0x936558;
    PUSH32(esp, 0x000A7AAAu); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A7AAA: ;
    MEM32(0x935B50) = 0x945758;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7AC0
 * Original: 0x000A7AC0 - 0x000A7AD7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A7AC0: ;
    PUSH32(esp, 0x000A7AC5u); RECOMP_ABI_CALL(0x000A6F20u, sub_000A6F20); /* call 0x000A6F20 */

loc_000A7AC5: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7AD0u); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A7AD0: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7AE0
 * Original: 0x000A7AE0 - 0x000A7B9C (188 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7AE0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0x000A7AF7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7AF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A7B8C; /* jae: above or equal (unsigned >=) */

loc_000A7B00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7B06u); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7B06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7B8C; /* je: equal / zero */

loc_000A7B0D: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7B18u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7B18: ;
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7B23u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7B23: ;
    PUSH32(esp, 0x239E14);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A7B32u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A7B32: ;
    PUSH32(esp, 0x2811B0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7B41u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A7B41: ;
    esi = MEM32(esp + 0x58);
    ecx = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7B50u); RECOMP_ABI_CALL(0x000A46C0u, sub_000A46C0); /* call 0x000A46C0 */

loc_000A7B50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7B79; /* jne: not equal / not zero */

loc_000A7B57: ;
    edx = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A7B62u); RECOMP_ABI_CALL(0x000A46C0u, sub_000A46C0); /* call 0x000A46C0 */

loc_000A7B62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7B79; /* jne: not equal / not zero */

loc_000A7B69: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000A7B75u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7B75: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7B79: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000A7B88u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7B88: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7B8C: ;
    ecx = MEM32(esp + 0x4C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A7B98u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7B98: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7BA0
 * Original: 0x000A7BA0 - 0x000A7C27 (135 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7BA0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000A7BB7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7BB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A7C17; /* jae: above or equal (unsigned >=) */

loc_000A7BBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7BC2u); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7BC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7C17; /* je: equal / zero */

loc_000A7BC9: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7BD4u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7BD4: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7BE8; /* je: equal / zero */

loc_000A7BDC: ;
    PUSH32(esp, 0x2811B0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    goto loc_000A7BF2;

loc_000A7BE8: ;
    PUSH32(esp, 0x239E14);
    edx = esp + 8;
    PUSH32(esp, edx);

loc_000A7BF2: ;
    PUSH32(esp, 0x000A7BF7u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A7BF7: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7C06u); RECOMP_ABI_CALL(0x000A46C0u, sub_000A46C0); /* call 0x000A46C0 */

loc_000A7C06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000A7C13u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7C13: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7C17: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A7C23u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7C23: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7C30
 * Original: 0x000A7C30 - 0x000A7CAF (127 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7C30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7C4F; /* jne: not equal / not zero */

loc_000A7C39: ;
    PUSH32(esp, 0x000A7C3Eu); RECOMP_ABI_CALL(0x000A6EC0u, sub_000A6EC0); /* call 0x000A6EC0 */

loc_000A7C3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7CAB; /* je: equal / zero */

loc_000A7C42: ;
    PUSH32(esp, 0x000A7C47u); RECOMP_ABI_CALL(0x000A6F00u, sub_000A6F00); /* call 0x000A6F00 */

loc_000A7C47: ;
    SET_LO8(eax, MEM8(eax + 0xABF6));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7C4F: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A7C59u); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A7C59: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7C63u); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A7C63: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7C77; /* je: equal / zero */

loc_000A7C6A: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7C75u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7C75: ;
    goto loc_000A7C93;

loc_000A7C77: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7C81u); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A7C81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7CA1; /* je: equal / zero */

loc_000A7C88: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7C93u); RECOMP_ABI_CALL(0x000A5610u, sub_000A5610); /* call 0x000A5610 */

loc_000A7C93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7CA1; /* jne: not equal / not zero */

loc_000A7C9A: ;
    SET_LO8(eax, MEM8(0x95328E));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7CA1: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A7CABu); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A7CAB: ;
    SET_LO8(eax, 0x19);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7CB0
 * Original: 0x000A7CB0 - 0x000A7D2B (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A7CB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7CBBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7CBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000A7D27; /* jae: above or equal (unsigned >=) */

loc_000A7CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7CC6u); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7CC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7D27; /* je: equal / zero */

loc_000A7CCD: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A7CD7u); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A7CD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x95A7B0);
    PUSH32(esp, 0x000A7CE2u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7CE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x953840);
    PUSH32(esp, 0x000A7CEDu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7CED: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7D15; /* je: equal / zero */

loc_000A7CF5: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7D00u); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A7D00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x95A7D5) = LO8(eax);
    MEM8(0x95A7D4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7D15: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(0x95A7D5) = LO8(eax);
    MEM8(0x95A7D4) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7D27: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7D30
 * Original: 0x000A7D30 - 0x000A7DB7 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A7D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7D3Bu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7D3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000A7DB3; /* jae: above or equal (unsigned >=) */

loc_000A7D40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7D46u); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7D46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7DB3; /* je: equal / zero */

loc_000A7D4D: ;
    ecx = 0x936558;
    PUSH32(esp, 0x000A7D57u); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A7D57: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x948670);
    MEM32(0x935B50) = 0x945758;
    PUSH32(esp, 0x000A7D6Cu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7D6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x941700);
    PUSH32(esp, 0x000A7D77u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7D77: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7DA1; /* je: equal / zero */

loc_000A7D7F: ;
    PUSH32(esp, 0x936558);
    PUSH32(esp, esi);
    MEM8(0x948694) = 1;
    PUSH32(esp, 0x000A7D91u); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A7D91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x948695) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7DA1: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(0x948695) = LO8(eax);
    MEM8(0x948694) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7DB3: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7DC0
 * Original: 0x000A7DC0 - 0x000A7DF2 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7DC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7DCFu); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A7DCF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000A7DE5; /* je: equal / zero */

loc_000A7DD8: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7DE0u); RECOMP_ABI_CALL(0x000A7040u, sub_000A7040); /* call 0x000A7040 */

loc_000A7DE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7DE5: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7DEDu); RECOMP_ABI_CALL(0x000A7040u, sub_000A7040); /* call 0x000A7040 */

loc_000A7DED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7E00
 * Original: 0x000A7E00 - 0x000A7E1A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7E00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x936558);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7E16u); RECOMP_ABI_CALL(0x000A7530u, sub_000A7530); /* call 0x000A7530 */

loc_000A7E16: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7E20
 * Original: 0x000A7E20 - 0x000A7ECE (174 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7E20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A7E31; /* jb: below (unsigned <) */

loc_000A7E2A: ;
    eax = 0xFFFFFFF6u;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000A7E31: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7E42; /* jne: not equal / not zero */

loc_000A7E3A: ;
    POP32(esp, ebx);
    eax = 0xFFFFFFF8u;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000A7E42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = MEM32(eax * 4 + 0x936534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7E76; /* je: equal / zero */

loc_000A7E54: ;
    SET_LO8(ecx, MEM8(eax + 0x1213C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7E76; /* je: equal / zero */

loc_000A7E5E: ;
    _fb = (uint32_t)(0x12118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x12118;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A7E6Au); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A7E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7E76; /* jne: not equal / not zero */

loc_000A7E6E: ;
    POP32(esp, ebx);
    eax = 0xFFFFFFF7u;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000A7E76: ;
    SET_LO8(eax, MEM8(0x948694));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7E9C; /* je: equal / zero */

loc_000A7E7F: ;
    PUSH32(esp, 0x948670);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A7E8Au); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A7E8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7E9C; /* jne: not equal / not zero */

loc_000A7E8E: ;
    POP32(esp, ebx);
    MEM32(edi * 4 + 0x936534) = 0x936558;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000A7E9C: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x12140);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx + 0x948698;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A7EB6u); RECOMP_ABI_CALL(0x000A7530u, sub_000A7530); /* call 0x000A7530 */

loc_000A7EB6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edi * 4 + 0x936534) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7ED0
 * Original: 0x000A7ED0 - 0x000A7FAA (218 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7ED0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000A7EE7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7EE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A7F9A; /* jae: above or equal (unsigned >=) */

loc_000A7EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7EF6u); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7EF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7F9A; /* je: equal / zero */

loc_000A7F01: ;
    PUSH32(esp, 0x948670);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7F10u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7F10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x948670);
    PUSH32(esp, 0x000A7F1Bu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7F1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x941700);
    PUSH32(esp, 0x000A7F26u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7F26: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7F41; /* jne: not equal / not zero */

loc_000A7F2E: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A7F3Du); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7F3D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7F41: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x936558);
    PUSH32(esp, 0x948670);
    PUSH32(esp, 0x000A7F51u); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A7F51: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7F84; /* jne: not equal / not zero */

loc_000A7F5A: ;
    SET_LO8(eax, 1);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(0x948695) = LO8(eax);
    MEM8(0x948694) = LO8(eax);
    PUSH32(esp, 0x000A7F71u); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A7F71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7F84; /* je: equal / zero */

loc_000A7F75: ;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A7F81u); RECOMP_ABI_CALL(0x000A7040u, sub_000A7040); /* call 0x000A7040 */

loc_000A7F81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A7F84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A7F96u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7F96: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7F9A: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A7FA6u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A7FA6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7FB0
 * Original: 0x000A7FB0 - 0x000A808F (223 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7FB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A7FBEu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7FBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A8087; /* jae: above or equal (unsigned >=) */

loc_000A7FC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7FCDu); RECOMP_ABI_CALL(0x000A7110u, sub_000A7110); /* call 0x000A7110 */

loc_000A7FCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8087; /* je: equal / zero */

loc_000A7FD8: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A7FE2u); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A7FE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x95A7B0);
    PUSH32(esp, 0x000A7FEDu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7FED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x953840);
    PUSH32(esp, 0x000A7FF8u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A7FF8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8001u); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A8001: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8033; /* je: equal / zero */

loc_000A8008: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8013u); RECOMP_ABI_CALL(0x000A5610u, sub_000A5610); /* call 0x000A5610 */

loc_000A8013: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x95A7D4) = LO8(eax);
    goto loc_000A805F;

loc_000A8024: ;
    eax = 1;
    MEM8(0x95A7D5) = LO8(eax);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8033: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A803Du); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A803D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8074; /* je: equal / zero */

loc_000A8044: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A804Fu); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A804F: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x95A7D4) = LO8(ecx);

loc_000A805F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8024; /* je: equal / zero */

loc_000A8063: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8024; /* je: equal / zero */

loc_000A8068: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x95A7D5) = LO8(eax);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8074: ;
    eax = edi;
    POP32(esp, edi);
    MEM8(0x95A7D4) = 0;
    MEM8(0x95A7D5) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8087: ;
    POP32(esp, edi);
    eax = 0xFFFFFFF8u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8090
 * Original: 0x000A8090 - 0x000A8177 (231 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8090: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(0x95A7D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A80D5; /* je: equal / zero */

loc_000A80A5: ;
    SET_LO8(eax, MEM8(0x95A7D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A80D5; /* je: equal / zero */

loc_000A80AE: ;
    eax = MEM32(0x953880);
    ecx = MEM32(0x953884);
    edx = MEM32(0x953888);
    MEM32(esp) = eax;
    SET_LO16(eax, MEM16(0x95388C));
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM16(esp + 0xC) = LO16(eax);

loc_000A80D5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x948698);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A80EBu); RECOMP_ABI_CALL(0x000A56C0u, sub_000A56C0); /* call 0x000A56C0 */

loc_000A80EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8168; /* jne: not equal / not zero */

loc_000A80F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A80FBu); RECOMP_ABI_CALL(0x000A3F80u, sub_000A3F80); /* call 0x000A3F80 */

loc_000A80FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A810E; /* jne: not equal / not zero */

loc_000A8102: ;
    PUSH32(esp, 0x000A8107u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A8107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8122; /* jne: not equal / not zero */

loc_000A810E: ;
    POP32(esp, edi);
    eax = 0xFFFFFFF4u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x000A811Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A811E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A8122: ;
    SET_LO8(eax, MEM8(0x95A7D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A814A; /* je: equal / zero */

loc_000A812B: ;
    SET_LO8(eax, MEM8(0x95A7D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A814A; /* je: equal / zero */

loc_000A8134: ;
    PUSH32(esp, 0x953880);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A8142u); RECOMP_ABI_CALL(0x000A74B0u, sub_000A74B0); /* call 0x000A74B0 */

loc_000A8142: ;
    ecx = MEM32(esp + 0x28);
    MEM8(ecx) = LO8(eax);
    goto loc_000A8151;

loc_000A814A: ;
    edx = MEM32(esp + 0x28);
    MEM8(edx) = 1;

loc_000A8151: ;
    MEM8(0x95A7D5) = 1;
    MEM8(0x95A7D4) = 1;
    MEM8(0x953890) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A8168: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000A8173u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8173: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8180
 * Original: 0x000A8180 - 0x000A8203 (131 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8180: ;
    SET_LO8(eax, MEM8(0x95A7D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A81FF; /* je: equal / zero */

loc_000A8189: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8198u); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A8198: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A81AC; /* je: equal / zero */

loc_000A819F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A81A9u); RECOMP_ABI_CALL(0x000A7040u, sub_000A7040); /* call 0x000A7040 */

loc_000A81A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A81AC: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x95A7B0);
    PUSH32(esp, 0x000A81BBu); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A81BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000A81D3; /* jne: not equal / not zero */

loc_000A81C3: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A81CDu); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A81CD: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A81D3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x95A7B0);
    MEM8(0x953890) = 1;
    MEM8(0x95A7D5) = 1;
    MEM8(0x95A7D4) = 1;
    PUSH32(esp, 0x000A81FCu); RECOMP_ABI_CALL(0x000A5740u, sub_000A5740); /* call 0x000A5740 */

loc_000A81FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A81FF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8210
 * Original: 0x000A8210 - 0x000A821D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A8210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8210: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A821Au); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A821A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8220
 * Original: 0x000A8220 - 0x000A823D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8220: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A822Au); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A822A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x948698);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8239u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A8239: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8240
 * Original: 0x000A8240 - 0x000A824D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A8240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8240: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A824Au); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A824A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8250
 * Original: 0x000A8250 - 0x000A82BE (110 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x948698);
    PUSH32(esp, esi);
    MEM8(0x953890) = 0;
    PUSH32(esp, 0x000A8268u); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A8268: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A82AF; /* jne: not equal / not zero */

loc_000A8271: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A827Au); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A827A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A828D; /* je: equal / zero */

loc_000A8281: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A828Au); RECOMP_ABI_CALL(0x000A7040u, sub_000A7040); /* call 0x000A7040 */

loc_000A828A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A828D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A829Bu); RECOMP_ABI_CALL(0x000A7BA0u, sub_000A7BA0); /* call 0x000A7BA0 */

loc_000A829B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A82AE; /* je: equal / zero */

loc_000A82A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A82ABu); RECOMP_ABI_CALL(0x000A7040u, sub_000A7040); /* call 0x000A7040 */

loc_000A82AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A82AE: ;
    POP32(esp, edi);

loc_000A82AF: ;
    ecx = 0x948698;
    PUSH32(esp, 0x000A82B9u); RECOMP_ABI_CALL(0x000A7A80u, sub_000A7A80); /* call 0x000A7A80 */

loc_000A82B9: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A82C0
 * Original: 0x000A82C0 - 0x000A83DA (282 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A82C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A82C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000A82D5u); RECOMP_ABI_CALL(0x000A6F00u, sub_000A6F00); /* call 0x000A6F00 */

loc_000A82D5: ;
    edi = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, 0x000A82E6u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_000A82E6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8315; /* je: equal / zero */

loc_000A82EF: ;
    _fb = (uint32_t)(0x47) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    SET_LO16(edx, MEM16(eax + 0xC));
    MEM32(esp + 0x18) = ecx;
    MEM16(esp + 0x1C) = LO16(edx);
    eax = esp + 0x10;
    goto loc_000A8326;

loc_000A8315: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000A831Eu); RECOMP_ABI_CALL(0x000A77F0u, sub_000A77F0); /* call 0x000A77F0 */

loc_000A831E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A83A5; /* je: equal / zero */

loc_000A8326: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A832Eu); RECOMP_ABI_CALL(0x000A7810u, sub_000A7810); /* call 0x000A7810 */

loc_000A832E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A83A5; /* je: equal / zero */

loc_000A8334: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF423F (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A834A; /* jbe: below or equal (unsigned <=) */

loc_000A833F: ;
    esi = 0xF423F;
    MEM32(esp + 0x10) = esi;
    goto loc_000A8350;

loc_000A834A: ;
    MEM32(esp + 0x10) = ecx;
    esi = ecx;

loc_000A8350: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF423F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A835D; /* jb: below (unsigned <) */

loc_000A8358: ;
    ecx = 0xF423F;

loc_000A835D: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    edi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000A8368; /* ja: above (unsigned >) */

loc_000A8366: ;
    edi = edx;

loc_000A8368: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A8372; /* jb: below (unsigned <) */

loc_000A836D: ;
    esi = 0xA;

loc_000A8372: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    if (CMP_BE(_fa, _fb)) goto loc_000A83B3; /* jbe: below or equal (unsigned <=) */

loc_000A8380: ;
    edx = ZX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A839A; /* jae: above or equal (unsigned >=) */

loc_000A8387: ;
    eax = ZX16(MEM16(ebp + 0x52));
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A839A; /* je: equal / zero */

loc_000A8396: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A839E;

loc_000A839A: ;
    MEM8(esp + 0x19) = MEM8(esp + 0x19) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x19)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000A839E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A8380; /* jb: below (unsigned <) */

loc_000A83A3: ;
    goto loc_000A83AF;

loc_000A83A5: ;
    MEM32(esp + 0x10) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x19) = LO8(ebx);

loc_000A83AF: ;
    MEM8(esp + 0x18) = LO8(ebx);

loc_000A83B3: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A83D6u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A83D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A83E0
 * Original: 0x000A83E0 - 0x000A843F (95 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A83E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A83E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A83E7u); RECOMP_ABI_CALL(0x00070A40u, sub_00070A40); /* call 0x00070A40 */

loc_000A83E7: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000A83FE; /* jne: not equal / not zero */

loc_000A83F3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A83FE; /* jne: not equal / not zero */

loc_000A83F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00070A20(); return; /* tail jmp 0x00070A20 */

loc_000A83FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8405u); RECOMP_ABI_CALL(0x00071540u, sub_00071540); /* call 0x00071540 */

loc_000A8405: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A8418; /* jl: less (signed <) */

loc_000A840C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8412u); RECOMP_ABI_CALL(0x00070950u, sub_00070950); /* call 0x00070950 */

loc_000A8412: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8418: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A841Fu); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_000A841F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A8432; /* jl: less (signed <) */

loc_000A8426: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A842Cu); RECOMP_ABI_CALL(0x0007D850u, sub_0007D850); /* call 0x0007D850 */

loc_000A842C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8432: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8439u); RECOMP_ABI_CALL(0x000A7610u, sub_000A7610); /* call 0x000A7610 */

loc_000A8439: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8440
 * Original: 0x000A8440 - 0x000A844B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8440: ;
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8450
 * Original: 0x000A8450 - 0x000A8463 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8450: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A845Du); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A845D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8470
 * Original: 0x000A8470 - 0x000A8473 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8470(void)
{

loc_000A8470: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8480
 * Original: 0x000A8480 - 0x000A8483 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8480(void)
{

loc_000A8480: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8490
 * Original: 0x000A8490 - 0x000A84AE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8490: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A84A3; /* ja: above (unsigned >) */

loc_000A84A1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000A84A3: ;
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A84B0
 * Original: 0x000A84B0 - 0x000A84B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A84B0(void)
{

loc_000A84B0: ;
    eax = 0x2E8BA2E;
    esp += 4; return; /* ret */

}

/**
 * sub_000A84C0
 * Original: 0x000A84C0 - 0x000A84C5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A84C0(void)
{

loc_000A84C0: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A84D0
 * Original: 0x000A84D0 - 0x000A84E7 (23 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A84D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A84D0: ;
    eax = MEM32(esp + 4);
    ecx = eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A84E1u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A84E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A84F0
 * Original: 0x000A84F0 - 0x000A8502 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A84F0(void)
{

loc_000A84F0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A8510
 * Original: 0x000A8510 - 0x000A8538 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8510: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax * 4;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8531u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A8531: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8540
 * Original: 0x000A8540 - 0x000A8541 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8540(void)
{

loc_000A8540: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8550
 * Original: 0x000A8550 - 0x000A8568 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8550: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8566; /* je: equal / zero */

loc_000A8559: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0x16;
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

loc_000A8566: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8570
 * Original: 0x000A8570 - 0x000A858D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8570: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_BE(_fa, _fb)) goto loc_000A858C; /* jbe: below or equal (unsigned <=) */

loc_000A857C: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_000A8581: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A8581; /* jne: not equal / not zero */

loc_000A858B: ;
    POP32(esp, esi);

loc_000A858C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8590
 * Original: 0x000A8590 - 0x000A85AC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8590(void)
{

loc_000A8590: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A8598u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_000A8598: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000A85A0u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_000A85A0: ;
    ecx = esi + 9;
    PUSH32(esp, 0x000A85A8u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_000A85A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A85B0
 * Original: 0x000A85B0 - 0x000A869F (239 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A85B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A85B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A85B8u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000A85B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A85BEu); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_000A85BE: ;
    edi = edx;
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM8(0x95A7D4) = 1;
    PUSH32(esp, 0x000A85D0u); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_000A85D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    MEM32(0x953280) = esi;
    MEM32(0x953284) = edi;
    PUSH32(esp, 0x000A85E9u); RECOMP_ABI_CALL(0x0007D850u, sub_0007D850); /* call 0x0007D850 */

loc_000A85E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x953840);
    PUSH32(esp, 0x000A85F7u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A85F7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A85FFu); RECOMP_ABI_CALL(0x0007D830u, sub_0007D830); /* call 0x0007D830 */

loc_000A85FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x95328F);
    PUSH32(esp, 0x000A860Du); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000A860D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8614u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_000A8614: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8650; /* je: equal / zero */

loc_000A861B: ;
    ecx = eax + 0x47;
    edx = MEM32(ecx);
    MEM32(0x953880) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x953884) = edx;
    edx = MEM32(ecx + 8);
    MEM32(0x953888) = edx;
    SET_LO16(ecx, MEM16(ecx + 0xC));
    POP32(esp, edi);
    MEM16(0x95388C) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x26));
    POP32(esp, esi);
    MEM8(0x95328E) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A8650: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = 0x948698;
    PUSH32(esp, 0x000A865Cu); RECOMP_ABI_CALL(0x000A77F0u, sub_000A77F0); /* call 0x000A77F0 */

loc_000A865C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A869B; /* je: equal / zero */

loc_000A8660: ;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(0x953880) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x953884) = edx;
    edx = MEM32(ecx + 8);
    MEM32(0x953888) = edx;
    SET_LO16(ecx, MEM16(ecx + 0xC));
    MEM16(0x95388C) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = 0x948698;
    PUSH32(esp, 0x000A8692u); RECOMP_ABI_CALL(0x000A7810u, sub_000A7810); /* call 0x000A7810 */

loc_000A8692: ;
    SET_LO8(edx, MEM8(eax + 0x54));
    MEM8(0x95328E) = LO8(edx);

loc_000A869B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A86A0
 * Original: 0x000A86A0 - 0x000A87C4 (292 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A86A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A86A0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A87B6; /* je: equal / zero */

loc_000A86B9: ;
    SET_LO8(eax, MEM8(ebp + 0x1213C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A87B6; /* je: equal / zero */

loc_000A86C7: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A87B6; /* jne: not equal / not zero */

loc_000A86D4: ;
    ecx = ZX16(MEM16(0x30DAB8));
    SET_LO8(eax, MEM8(0x30EBF0));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(0x936530) = LO8(eax);
    MEM32(0x93652C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A87B5; /* je: equal / zero */

loc_000A86F8: ;
    SET_LO8(eax, MEM8(ebx + 0x1213C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A87B5; /* je: equal / zero */

loc_000A8706: ;
    PUSH32(esp, edi);
    edi = ebx + 0xB1E8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000A8715u); RECOMP_ABI_CALL(0x000A7870u, sub_000A7870); /* call 0x000A7870 */

loc_000A8715: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8741; /* jne: not equal / not zero */

loc_000A8719: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A8722u); RECOMP_ABI_CALL(0x000A76F0u, sub_000A76F0); /* call 0x000A76F0 */

loc_000A8722: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x50) = edx;
    SET_LO16(edx, MEM16(edi + 0xC));
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = ecx;
    MEM16(esp + 0x5C) = LO16(edx);
    goto loc_000A8750;

loc_000A8741: ;
    PUSH32(esp, esi);
    ecx = 0x16;
    esi = eax;
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
    POP32(esp, esi);

loc_000A8750: ;
    eax = MEM32(ebx + 0xABE8);
    ecx = MEM32(ebx + 0xABEC);
    PUSH32(esp, 0x10);
    edx = ebx + 0xB1A8;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x000A8777u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A8777: ;
    PUSH32(esp, 0x10);
    ecx = ebx + 0xABF7;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A878Au); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000A878A: ;
    SET_LO8(eax, MEM8(ebx + 0xABF6));
    ecx = esp + 0x14;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    MEM8(esp + 0x68) = LO8(eax);
    PUSH32(esp, 0x000A87A0u); RECOMP_ABI_CALL(0x000A7330u, sub_000A7330); /* call 0x000A7330 */

loc_000A87A0: ;
    MEM16(esp + 0x66) = MEM16(esp + 0x66) << 1;
    _fa = (uint32_t)(MEM16(esp + 0x66)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000A87B4u); RECOMP_ABI_CALL(0x000A78D0u, sub_000A78D0); /* call 0x000A78D0 */

loc_000A87B4: ;
    POP32(esp, edi);

loc_000A87B5: ;
    POP32(esp, ebx);

loc_000A87B6: ;
    ecx = MEM32(esp + 0x5C);
    POP32(esp, ebp);
    PUSH32(esp, 0x000A87C0u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A87C0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A87D0
 * Original: 0x000A87D0 - 0x000A8926 (342 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A87D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A87D0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A8918; /* je: equal / zero */

loc_000A87E9: ;
    SET_LO8(eax, MEM8(ebp + 0x1213C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8918; /* je: equal / zero */

loc_000A87F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8917; /* je: equal / zero */

loc_000A8804: ;
    SET_LO8(eax, MEM8(esi + 0x1213C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8917; /* je: equal / zero */

loc_000A8812: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0xB1E8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000A8822u); RECOMP_ABI_CALL(0x000A7870u, sub_000A7870); /* call 0x000A7870 */

loc_000A8822: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A887A; /* je: equal / zero */

loc_000A8828: ;
    eax = ebx + 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8833u); RECOMP_ABI_CALL(0x000A7330u, sub_000A7330); /* call 0x000A7330 */

loc_000A8833: ;
    SET_LO8(eax, MEM8(esp + 0x84));
    MEM8(ebx + 0x52) = MEM8(ebx + 0x52) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x52)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8915; /* je: equal / zero */

loc_000A8849: ;
    SET_LO8(eax, MEM8(esp + 0x80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8915; /* je: equal / zero */

loc_000A8858: ;
    PUSH32(esp, 0xF423F);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A8866u); RECOMP_ABI_CALL(0x000A7330u, sub_000A7330); /* call 0x000A7330 */

loc_000A8866: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x000A8876u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8876: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A887A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A8883u); RECOMP_ABI_CALL(0x000A76F0u, sub_000A76F0); /* call 0x000A76F0 */

loc_000A8883: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x54) = ecx;
    SET_LO16(ecx, MEM16(edi + 0xC));
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi + 0xABE8);
    MEM16(esp + 0x60) = LO16(ecx);
    PUSH32(esp, 0x10);
    ecx = esi + 0xB1A8;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi + 0xABEC);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000A88C7u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A88C7: ;
    PUSH32(esp, 0x10);
    eax = esi + 0xABF7;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A88DAu); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000A88DA: ;
    SET_LO8(ecx, MEM8(esp + 0x7C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, MEM8(esi + 0xABF6));
    eax = 1;
    MEM8(esp + 0x64) = LO8(edx);
    MEM32(esp + 0x18) = eax;
    MEM16(esp + 0x62) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000A8909; /* je: equal / zero */

loc_000A88FA: ;
    SET_LO8(ecx, MEM8(esp + 0x80));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8909; /* je: equal / zero */

loc_000A8905: ;
    MEM32(esp + 0x20) = eax;

loc_000A8909: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000A8915u); RECOMP_ABI_CALL(0x000A78D0u, sub_000A78D0); /* call 0x000A78D0 */

loc_000A8915: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000A8917: ;
    POP32(esp, esi);

loc_000A8918: ;
    ecx = MEM32(esp + 0x5C);
    POP32(esp, ebp);
    PUSH32(esp, 0x000A8922u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8922: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8930
 * Original: 0x000A8930 - 0x000A8A13 (227 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8930: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A05; /* je: equal / zero */

loc_000A8949: ;
    SET_LO8(eax, MEM8(ebx + 0x1213C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A05; /* je: equal / zero */

loc_000A8957: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A04; /* je: equal / zero */

loc_000A8964: ;
    SET_LO8(eax, MEM8(esi + 0x1213C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A04; /* je: equal / zero */

loc_000A8972: ;
    PUSH32(esp, edi);
    edi = esi + 0xB1E8;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000A8981u); RECOMP_ABI_CALL(0x000A7870u, sub_000A7870); /* call 0x000A7870 */

loc_000A8981: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8A03; /* jne: not equal / not zero */

loc_000A8985: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A898Eu); RECOMP_ABI_CALL(0x000A76F0u, sub_000A76F0); /* call 0x000A76F0 */

loc_000A898E: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x50) = eax;
    SET_LO16(eax, MEM16(edi + 0xC));
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esi + 0xABE8);
    MEM16(esp + 0x5C) = LO16(eax);
    PUSH32(esp, 0x10);
    eax = esi + 0xB1A8;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esi + 0xABEC);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000A89D2u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A89D2: ;
    PUSH32(esp, 0x10);
    edx = esi + 0xABF7;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A89E5u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000A89E5: ;
    SET_LO8(ecx, MEM8(esi + 0xABF6));
    edx = esp + 0xC;
    MEM8(esp + 0x60) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x000A8A03u); RECOMP_ABI_CALL(0x000A78D0u, sub_000A78D0); /* call 0x000A78D0 */

loc_000A8A03: ;
    POP32(esp, edi);

loc_000A8A04: ;
    POP32(esp, esi);

loc_000A8A05: ;
    ecx = MEM32(esp + 0x5C);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A8A0Fu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8A0F: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8A20
 * Original: 0x000A8A20 - 0x000A8A62 (66 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x348;
    /* nop */

loc_000A8A30: ;
    PUSH32(esp, 0x000A8A35u); RECOMP_ABI_CALL(0x000A7670u, sub_000A7670); /* call 0x000A7670 */

loc_000A8A35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A5D; /* je: equal / zero */

loc_000A8A39: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A8A30; /* jb: below (unsigned <) */

loc_000A8A42: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;

loc_000A8A46: ;
    PUSH32(esp, 0x000A8A4Bu); RECOMP_ABI_CALL(0x000A6BB0u, sub_000A6BB0); /* call 0x000A6BB0 */

loc_000A8A4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A5D; /* je: equal / zero */

loc_000A8A4F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x69 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A8A46; /* jb: below (unsigned <) */

loc_000A8A58: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8A5D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8A70
 * Original: 0x000A8A70 - 0x000A8A89 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A8A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8A70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8A7Au); RECOMP_ABI_CALL(0x000A7810u, sub_000A7810); /* call 0x000A7810 */

loc_000A8A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A84; /* je: equal / zero */

loc_000A8A7E: ;
    eax = MEM32(eax + 0xC);
    esp += 8; return; /* ret 4 */

loc_000A8A84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8A90
 * Original: 0x000A8A90 - 0x000A8AAE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A8A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8A90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8A9Au); RECOMP_ABI_CALL(0x000A7810u, sub_000A7810); /* call 0x000A7810 */

loc_000A8A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8AA9; /* je: equal / zero */

loc_000A8A9E: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_000A8AA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8AB0
 * Original: 0x000A8AB0 - 0x000A8AFD (77 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A8AB8u); RECOMP_ABI_CALL(0x000A6C10u, sub_000A6C10); /* call 0x000A6C10 */

loc_000A8AB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8AF7; /* je: equal / zero */

loc_000A8ABC: ;
    ecx = esi + 0xABE8;
    PUSH32(esp, 0x000A8AC7u); RECOMP_ABI_CALL(0x000A6E70u, sub_000A6E70); /* call 0x000A6E70 */

loc_000A8AC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8AF7; /* je: equal / zero */

loc_000A8ACB: ;
    ecx = esi + 0xAC08;
    PUSH32(esp, 0x000A8AD6u); RECOMP_ABI_CALL(0x000A8A20u, sub_000A8A20); /* call 0x000A8A20 */

loc_000A8AD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8AF7; /* je: equal / zero */

loc_000A8ADA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi + 0xB1A8;
    PUSH32(esp, 0x000A8AEAu); RECOMP_ABI_CALL(0x000A6D90u, sub_000A6D90); /* call 0x000A6D90 */

loc_000A8AEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8AF7; /* je: equal / zero */

loc_000A8AEE: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A8AF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8B00
 * Original: 0x000A8B00 - 0x000A8B31 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xF200;
    PUSH32(esp, 0x000A8B0Eu); RECOMP_ABI_CALL(0x000A5D20u, sub_000A5D20); /* call 0x000A5D20 */

loc_000A8B0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8B2B; /* je: equal / zero */

loc_000A8B12: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A8B1Eu); RECOMP_ABI_CALL(0x000A8AB0u, sub_000A8AB0); /* call 0x000A8AB0 */

loc_000A8B1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8B2B; /* je: equal / zero */

loc_000A8B22: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A8B2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8B40
 * Original: 0x000A8B40 - 0x000A8BA4 (100 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8B40: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8BA3; /* je: equal / zero */

loc_000A8B48: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8B4Eu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000A8B4E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8B98; /* je: equal / zero */

loc_000A8B55: ;
    PUSH32(esp, 0x000A8B5Au); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_000A8B5A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x936528) = eax;
    PUSH32(esp, 0x000A8B6Eu); RECOMP_ABI_CALL(0x000A85B0u, sub_000A85B0); /* call 0x000A85B0 */

loc_000A8B6E: ;
    edx = MEM32(0x936528);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x936558);
    PUSH32(esp, 0x000A8B86u); RECOMP_ABI_CALL(0x000A86A0u, sub_000A86A0); /* call 0x000A86A0 */

loc_000A8B86: ;
    SET_LO8(eax, MEM8(0x948694));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8BA2; /* je: equal / zero */

loc_000A8B92: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7080(); return; /* tail jmp 0x000A7080 */

loc_000A8B98: ;
    MEM32(0x936528) = 2;

loc_000A8BA2: ;
    POP32(esp, esi);

loc_000A8BA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8BB0
 * Original: 0x000A8BB0 - 0x000A8C1B (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8BB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8C1A; /* jne: not equal / not zero */

loc_000A8BB7: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8C1A; /* je: equal / zero */

loc_000A8BBF: ;
    eax = MEM32(0x936528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A8C13; /* jae: above or equal (unsigned >=) */

loc_000A8BC9: ;
    ecx = ZX8(MEM8(0x30EBF0));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8BF0; /* jne: not equal / not zero */

loc_000A8BD4: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x936558);
    PUSH32(esp, 0x000A8BEBu); RECOMP_ABI_CALL(0x000A87D0u, sub_000A87D0); /* call 0x000A87D0 */

loc_000A8BEB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A8C05;

loc_000A8BF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x936558);
    PUSH32(esp, 0x000A8C02u); RECOMP_ABI_CALL(0x000A8930u, sub_000A8930); /* call 0x000A8930 */

loc_000A8C02: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A8C05: ;
    SET_LO8(eax, MEM8(0x948694));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8C13; /* je: equal / zero */

loc_000A8C0E: ;
    PUSH32(esp, 0x000A8C13u); RECOMP_ABI_CALL(0x000A7080u, sub_000A7080); /* call 0x000A7080 */

loc_000A8C13: ;
    MEM8(0x95A7D4) = 0;

loc_000A8C1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8C20
 * Original: 0x000A8C20 - 0x000A8CA5 (133 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8C20: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(0x2FCC80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12118) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12118 (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A8C94; /* je: equal / zero */

loc_000A8C3E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8C49u); RECOMP_ABI_CALL(0x000A7210u, sub_000A7210); /* call 0x000A7210 */

loc_000A8C49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8C82; /* je: equal / zero */

loc_000A8C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8C56u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A8C56: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8C62u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A8C62: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x000A8C70u); RECOMP_ABI_CALL(0x000A8B00u, sub_000A8B00); /* call 0x000A8B00 */

loc_000A8C70: ;
    POP32(esp, esi);
    eax = ZX8(LO8(eax));
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A8C7Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8C7E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A8C82: ;
    POP32(esp, esi);
    eax = ZX8(LO8(ebx));
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A8C90u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8C90: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A8C94: ;
    ecx = MEM32(esp + 0x24);
    eax = ZX8(LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x000A8CA1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8CA1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8CB0
 * Original: 0x000A8CB0 - 0x000A8D35 (133 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8CB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(0x2FCC80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF200 (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A8D24; /* je: equal / zero */

loc_000A8CCE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8CD9u); RECOMP_ABI_CALL(0x000A7210u, sub_000A7210); /* call 0x000A7210 */

loc_000A8CD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8D12; /* je: equal / zero */

loc_000A8CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8CE6u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A8CE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8CF2u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A8CF2: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x000A8D00u); RECOMP_ABI_CALL(0x000A8AB0u, sub_000A8AB0); /* call 0x000A8AB0 */

loc_000A8D00: ;
    POP32(esp, esi);
    eax = ZX8(LO8(eax));
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A8D0Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8D0E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A8D12: ;
    POP32(esp, esi);
    eax = ZX8(LO8(ebx));
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A8D20u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8D20: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A8D24: ;
    ecx = MEM32(esp + 0x24);
    eax = ZX8(LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x000A8D31u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A8D31: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8D40
 * Original: 0x000A8D40 - 0x000A8D6C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8D40: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8D6B; /* je: equal / zero */

loc_000A8D47: ;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ecx + 0xC) = edx;
    POP32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000A8D5E; /* ja: above (unsigned >) */

loc_000A8D57: ;
    MEM32(ecx + 0xC) = 0;

loc_000A8D5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;
    if ((_fa != 0)) goto loc_000A8D6B; /* jne: not equal / not zero */

loc_000A8D64: ;
    MEM32(ecx + 0xC) = 0;

loc_000A8D6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8D70
 * Original: 0x000A8D70 - 0x000A8D7F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8D70(void)
{

loc_000A8D70: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8D80
 * Original: 0x000A8D80 - 0x000A8D95 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8D80: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8D94; /* je: equal / zero */

loc_000A8D87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;
    if ((_fa != 0)) goto loc_000A8D94; /* jne: not equal / not zero */

loc_000A8D8D: ;
    MEM32(ecx + 0xC) = 0;

loc_000A8D94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8DA0
 * Original: 0x000A8DA0 - 0x000A8DA5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8DA0(void)
{

loc_000A8DA0: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8DB0
 * Original: 0x000A8DB0 - 0x000A8DCA (26 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8DB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8DC6; /* je: equal / zero */

loc_000A8DB9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0x16;
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

loc_000A8DC6: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A8DD0
 * Original: 0x000A8DD0 - 0x000A8DED (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8DD0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_BE(_fa, _fb)) goto loc_000A8DEC; /* jbe: below or equal (unsigned <=) */

loc_000A8DDC: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_000A8DE1: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A8DE1; /* jne: not equal / not zero */

loc_000A8DEB: ;
    POP32(esp, esi);

loc_000A8DEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8DF0
 * Original: 0x000A8DF0 - 0x000A8E16 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8DF0(void)
{

loc_000A8DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0xF200;
    ecx = esi;
    PUSH32(esp, 0x000A8E01u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_000A8E01: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000A8E09u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_000A8E09: ;
    ecx = esi + 9;
    PUSH32(esp, 0x000A8E11u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_000A8E11: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8E20
 * Original: 0x000A8E20 - 0x000A8E4C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8E20: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8E4B; /* je: equal / zero */

loc_000A8E27: ;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ecx + 0xC) = edx;
    POP32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000A8E3E; /* ja: above (unsigned >) */

loc_000A8E37: ;
    MEM32(ecx + 0xC) = 0;

loc_000A8E3E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;
    if ((_fa != 0)) goto loc_000A8E4B; /* jne: not equal / not zero */

loc_000A8E44: ;
    MEM32(ecx + 0xC) = 0;

loc_000A8E4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8E50
 * Original: 0x000A8E50 - 0x000A8E61 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8E50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8E70
 * Original: 0x000A8E70 - 0x000A8E8A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8E70: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A8E83; /* ja: above (unsigned >) */

loc_000A8E7A: ;
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

loc_000A8E83: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8E90
 * Original: 0x000A8E90 - 0x000A8EF3 (99 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8EB7; /* je: equal / zero */

loc_000A8E9D: ;
    /* nop */

loc_000A8EA0: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8EB2; /* je: equal / zero */

loc_000A8EA7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A8EB2; /* jne: not equal / not zero */

loc_000A8EAF: ;
    MEM32(esi + 0xC) = ebx;

loc_000A8EB2: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8EA0; /* jne: not equal / not zero */

loc_000A8EB7: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A8ED9; /* jbe: below or equal (unsigned <=) */

loc_000A8EBF: ;
    /* nop */

loc_000A8EC0: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + edi * 4 + -4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8ED5; /* je: equal / zero */

loc_000A8ECC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8ED2u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A8ED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A8ED5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A8EC0; /* ja: above (unsigned >) */

loc_000A8ED9: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A8EEA; /* je: equal / zero */

loc_000A8EE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8EE7u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A8EE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A8EEA: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8F00
 * Original: 0x000A8F00 - 0x000A8F26 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F00(void)
{

loc_000A8F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0xF200;
    ecx = esi;
    PUSH32(esp, 0x000A8F11u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_000A8F11: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000A8F19u); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_000A8F19: ;
    ecx = esi + 9;
    PUSH32(esp, 0x000A8F21u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_000A8F21: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8F30
 * Original: 0x000A8F30 - 0x000A8F4A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8F30: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A8F43; /* ja: above (unsigned >) */

loc_000A8F3A: ;
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

loc_000A8F43: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8F50
 * Original: 0x000A8F50 - 0x000A8F55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8F50: ;
    g_seh_ebp = ebp; sub_000A8E90(); return; /* tail jmp 0x000A8E90 */

}

/**
 * sub_000A8F60
 * Original: 0x000A8F60 - 0x000A8F65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8F60: ;
    g_seh_ebp = ebp; sub_000A8E90(); return; /* tail jmp 0x000A8E90 */

}

/**
 * sub_000A8F70
 * Original: 0x000A8F70 - 0x000A8F81 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8F70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8F90
 * Original: 0x000A8F90 - 0x000A9000 (112 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8F90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15FF28);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x28145C);
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xF;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0x000A8FCDu); RECOMP_ABI_CALL(0x00061240u, sub_00061240); /* call 0x00061240 */

loc_000A8FCD: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x000A8FE2u); RECOMP_ABI_CALL(0x000619A0u, sub_000619A0); /* call 0x000619A0 */

loc_000A8FE2: ;
    PUSH32(esp, 0x2B1FA4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x236248;
    PUSH32(esp, 0x000A8FF9u); RECOMP_ABI_CALL(0x00150A5Au, sub_00150A5A); /* call 0x00150A5A */

loc_000A8FF9: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000A9000
 * Original: 0x000A9000 - 0x000A914A (330 bytes, 127 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9000: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    ecx = 0x2E8BA2E;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A9020; /* jae: above or equal (unsigned >=) */

loc_000A9019: ;
    ecx = ebx;
    PUSH32(esp, 0x000A9020u); RECOMP_ABI_CALL(0x000A8F90u, sub_000A8F90); /* call 0x000A8F90 */

loc_000A9020: ;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A902E; /* jae: above or equal (unsigned >=) */

loc_000A9029: ;
    ecx = 8;

loc_000A902E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A903F; /* jae: above or equal (unsigned >=) */

loc_000A9032: ;
    edx = 0x2E8BA2E;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A903F; /* ja: above (unsigned >) */

loc_000A903D: ;
    ebp = ecx;

loc_000A903F: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x000A9053u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A9053: ;
    ecx = MEM32(ebx + 4);
    edx = eax;
    esi = edi * 4;
    eax = esi + ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000A908Eu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A908E: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A90DD; /* ja: above (unsigned >) */

loc_000A909E: ;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = esi;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi = ebp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x000A90B6u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A90B6: ;
    ecx = MEM32(esp + 0x20);
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A90D1; /* jbe: below or equal (unsigned <=) */

loc_000A90C5: ;
    ecx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x18);

loc_000A90D1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A9121; /* jbe: below or equal (unsigned <=) */

loc_000A90D5: ;
    ecx = edi;
    edi = MEM32(esp + 0x20);
    goto loc_000A911D;

loc_000A90DD: ;
    edi = ebp * 4;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A90F4u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A90F4: ;
    eax = MEM32(ebx + 4);
    ecx = edi + eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x2C);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9110u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A9110: ;
    edi = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A9121; /* jbe: below or equal (unsigned <=) */

loc_000A911B: ;
    ecx = ebp;

loc_000A911D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000A9121: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A9133; /* je: equal / zero */

loc_000A912A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9130u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A9130: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A9133: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9150
 * Original: 0x000A9150 - 0x000A91B5 (101 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9150: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000A9169; /* ja: above (unsigned >) */

loc_000A9160: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x000A9169u); RECOMP_ABI_CALL(0x000A9000u, sub_000A9000); /* call 0x000A9000 */

loc_000A9169: ;
    esi = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A917A; /* ja: above (unsigned >) */

loc_000A9178: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000A917A: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9193; /* jne: not equal / not zero */

loc_000A9183: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x000A918Au); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A918A: ;
    edx = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + esi * 4) = eax;

loc_000A9193: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(eax + esi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A91A8; /* je: equal / zero */

loc_000A919D: ;
    esi = MEM32(esp + 0x10);
    ecx = 0x16;
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

loc_000A91A8: ;
    eax = MEM32(ebx + 0x10);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 0x10) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A91C0
 * Original: 0x000A91C0 - 0x000A91C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A91C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A91C0: ;
    g_seh_ebp = ebp; sub_000A9150(); return; /* tail jmp 0x000A9150 */

}

/**
 * sub_000A91D0
 * Original: 0x000A91D0 - 0x000A9255 (133 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A91D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A91D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15FF4B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    MEM32(esp + 0xB4) = eax;
    SET_LO8(eax, MEM8(0x948694));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A94E0(); return; } /* je: equal / zero */

loc_000A920D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9212u); RECOMP_ABI_CALL(0x00074490u, sub_00074490); /* call 0x00074490 */

loc_000A9212: ;
    esi = eax;
    eax = MEM32(esi + 0x24);
    MEM32(esp + 0x48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9220u); RECOMP_ABI_CALL(0x0007D3A0u, sub_0007D3A0); /* call 0x0007D3A0 */

loc_000A9220: ;
    edi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0xCC) = esi;
    MEM32(esp + 0x20) = esi;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A92A0(); return; } /* jle: less or equal (signed <=) */

    g_seh_ebp = ebp; sub_000A9255(); return; /* fallthrough 0x000A9255 */

}

/**
 * sub_000A9255
 * Original: 0x000A9255 - 0x000A9287 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9255: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A925Fu); RECOMP_ABI_CALL(0x0007DBE0u, sub_0007DBE0); /* call 0x0007DBE0 */

loc_000A925F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A9287(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A9272: ;
    eax = MEM32(esp + 0x48);

loc_000A9276: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A927F; /* jne: not equal / not zero */

loc_000A927A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A92BB(); return; } /* je: equal / zero */

loc_000A927F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A9276; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_000A9287(); return; /* fallthrough 0x000A9287 */

}

/**
 * sub_000A9287
 * Original: 0x000A9287 - 0x000A928B (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9287(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9287: ;
    ebx = MEM32(esp + 0x18);

    g_seh_ebp = ebp; sub_000A928B(); return; /* fallthrough 0x000A928B */

}

/**
 * sub_000A928B
 * Original: 0x000A928B - 0x000A92A0 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A928B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A928B: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A9255(); return; } /* jl: less (signed <) */

loc_000A929C: ;
    esi = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_000A92A0(); return; /* fallthrough 0x000A92A0 */

}

/**
 * sub_000A92A0
 * Original: 0x000A92A0 - 0x000A92BB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A92A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A92A0: ;
    ecx = 0x936558;
    PUSH32(esp, 0x000A92AAu); RECOMP_ABI_CALL(0x000A6D10u, sub_000A6D10); /* call 0x000A6D10 */

loc_000A92AA: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A94D7(); return; } /* je: equal / zero */

loc_000A92B6: ;
    g_seh_ebp = ebp; sub_000A9492(); return; /* tail jmp 0x000A9492 */

}

/**
 * sub_000A92BB
 * Original: 0x000A92BB - 0x000A948E (467 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A92BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A92BB: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A93D8; /* jne: not equal / not zero */

loc_000A92C6: ;
    ebx = MEM32(eax + 0x14);
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x2C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A93D8; /* je: equal / zero */

loc_000A92D8: ;
    edi = esp + 0x50;
    ecx = 0xE;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = 0;
    edx = ebx + 0x48;

loc_000A92F4: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A935C; /* jae: above or equal (unsigned >=) */

loc_000A92FB: ;
    eax = MEM32(edx + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A9316; /* je: equal / zero */

loc_000A9301: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A9308; /* je: equal / zero */

loc_000A9304: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A9338;

loc_000A9308: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    eax = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000A9322; /* jb: below (unsigned <) */

loc_000A930F: ;
    eax = 8;
    goto loc_000A9322;

loc_000A9316: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000A9322; /* jb: below (unsigned <) */

loc_000A931D: ;
    eax = 4;

loc_000A9322: ;
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = MEM32(esp + 0x28);

loc_000A9338: ;
    edi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x28) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000A92F4; /* ja: above (unsigned >) */

loc_000A935C: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = 0x936558;
    PUSH32(esp, 0x000A936Bu); RECOMP_ABI_CALL(0x000A7870u, sub_000A7870); /* call 0x000A7870 */

loc_000A936B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A937E; /* je: equal / zero */

loc_000A936F: ;
    ecx = 0x16;
    esi = eax;
    edi = esp + 0x60;
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
    goto loc_000A93B5;

loc_000A937E: ;
    ecx = esp + 0x60;
    PUSH32(esp, 0x000A9387u); RECOMP_ABI_CALL(0x000A76F0u, sub_000A76F0); /* call 0x000A76F0 */

loc_000A9387: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0xA4) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x5C));
    MEM32(esp + 0xA8) = edx;
    MEM32(esp + 0xAC) = eax;
    MEM16(esp + 0xB0) = LO16(ecx);

loc_000A93B5: ;
    SET_LO8(edx, MEM8(ebx + 8));
    MEM8(esp + 0xB4) = LO8(edx);
    eax = MEM32(ebx + 0x98);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    esi = esp + 0x6C;
    PUSH32(esp, 0x000A93D6u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A93D6: ;
    goto loc_000A93EE;

loc_000A93D8: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = 0x936558;
    PUSH32(esp, 0x000A93E4u); RECOMP_ABI_CALL(0x000A6CC0u, sub_000A6CC0); /* call 0x000A6CC0 */

loc_000A93E4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A9287(); return; } /* je: equal / zero */

loc_000A93EE: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000A9407u); RECOMP_ABI_CALL(0x0007D3B0u, sub_0007D3B0); /* call 0x0007D3B0 */

loc_000A9407: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A9414u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000A9414: ;
    MEM8(esi + 0x55) = 1;
    eax = MEM32(esp + 0x1C);
    ecx = eax + 1;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A9436; /* ja: above (unsigned >) */

loc_000A9427: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A9432u); RECOMP_ABI_CALL(0x000A9000u, sub_000A9000); /* call 0x000A9000 */

loc_000A9432: ;
    eax = MEM32(esp + 0x14);

loc_000A9436: ;
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    edi = edx + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A9447; /* ja: above (unsigned >) */

loc_000A9445: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000A9447: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9466; /* jne: not equal / not zero */

loc_000A9451: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x000A9458u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000A9458: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + edi * 4) = eax;
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A9466: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A947C; /* je: equal / zero */

loc_000A9471: ;
    ecx = 0x16;
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
    ebx = MEM32(esp + 0x18);

loc_000A947C: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    g_seh_ebp = ebp; sub_000A928B(); return; /* tail jmp 0x000A928B */

}

/**
 * sub_000A948E
 * Original: 0x000A948E - 0x000A9492 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A948E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A948E: ;
    esi = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_000A9492(); return; /* fallthrough 0x000A9492 */

}

/**
 * sub_000A9492
 * Original: 0x000A9492 - 0x000A94E0 (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9492(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9492: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A9498; /* ja: above (unsigned >) */

loc_000A9496: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000A9498: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, ecx);
    ecx = 0x936558;
    PUSH32(esp, 0x000A94AAu); RECOMP_ABI_CALL(0x000A78D0u, sub_000A78D0); /* call 0x000A78D0 */

loc_000A94AA: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A94D7; /* je: equal / zero */

loc_000A94B2: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_A(_fa, _fb)) goto loc_000A94C9; /* ja: above (unsigned >) */

loc_000A94C3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;

loc_000A94C9: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_000A948E(); return; } /* jne: not equal / not zero */

loc_000A94CF: ;
    MEM32(esp + 0x18) = 0;

loc_000A94D7: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A94E0u); RECOMP_ABI_CALL(0x000A8E90u, sub_000A8E90); /* call 0x000A8E90 */

    g_seh_ebp = ebp; sub_000A94E0(); return; /* fallthrough 0x000A94E0 */

}

/**
 * sub_000A94D7
 * Original: 0x000A94D7 - 0x000A94E0 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A94D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A94D7: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A94E0u); RECOMP_ABI_CALL(0x000A8E90u, sub_000A8E90); /* call 0x000A8E90 */

    g_seh_ebp = ebp; sub_000A94E0(); return; /* fallthrough 0x000A94E0 */

}

/**
 * sub_000A94E0
 * Original: 0x000A94E0 - 0x000A9501 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A94E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A94E0: ;
    ecx = MEM32(esp + 0xC4);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0xBC);
    PUSH32(esp, 0x000A94FAu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A94FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9501
 * Original: 0x000A9501 - 0x000A9522 (33 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9501(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9501: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 4);
    POP32(esp, edx);
    PUSH32(esp, esi);

loc_000A950D: ;
    SET_LO16(esi, ZX8(MEM8(ecx)));
    MEM16(eax) = LO16(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A950D; /* jne: not equal / not zero */

loc_000A951A: ;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9522
 * Original: 0x000A9522 - 0x000A955A (56 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9522(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9522: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esp + 8);
    SET_LO16(edx, ZX8(MEM8(eax)));
    MEM16(ecx + 2) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    MEM16(ecx + 6) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(eax + 2)));
    MEM16(ecx + 4) = LO16(edx);
    SET_LO16(eax, ZX8(MEM8(eax + 3)));
    MEM16(ecx + 8) = LO16(eax);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A955A
 * Original: 0x000A955A - 0x000A9604 (170 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A955A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A955A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A957Fu); RECOMP_ABI_CALL(0x000AEE7Eu, sub_000AEE7E); /* call 0x000AEE7E */

loc_000A957F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9600; /* jne: not equal / not zero */

loc_000A9583: ;
    eax = MEM32(ebp + -256);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ebp + -252;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A959Fu); RECOMP_ABI_CALL(0x000A9501u, sub_000A9501); /* call 0x000A9501 */

loc_000A959F: ;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    eax = ebp + -248;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95AFu); RECOMP_ABI_CALL(0x000A9501u, sub_000A9501); /* call 0x000A9501 */

loc_000A95AF: ;
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = ebp + -236;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95BFu); RECOMP_ABI_CALL(0x000A9522u, sub_000A9522); /* call 0x000A9522 */

loc_000A95BF: ;
    eax = esi + 0x98;
    PUSH32(esp, eax);
    eax = ebp + -232;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95D2u); RECOMP_ABI_CALL(0x000A9522u, sub_000A9522); /* call 0x000A9522 */

loc_000A95D2: ;
    eax = MEM32(ebp + -220);
    MEM32(esi + 0x54) = eax;
    eax = MEM32(ebp + -216);
    MEM32(esi + 0xA8) = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A95FE; /* je: equal / zero */

loc_000A95EF: ;
    ecx = MEM32(ebp + -172);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;

loc_000A95FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A9600: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9604
 * Original: 0x000A9604 - 0x000A9630 (44 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9604(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9604: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A961Fu); RECOMP_ABI_CALL(0x000AEE7Eu, sub_000AEE7E); /* call 0x000AEE7E */

loc_000A961F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A962B; /* jne: not equal / not zero */

loc_000A9623: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A962B; /* je: equal / zero */

loc_000A9629: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_000A962B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000A9630
 * Original: 0x000A9630 - 0x000A9694 (100 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x000A9640u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A963Au); } /* indirect call */
    }

loc_000A9640: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE0); PUSH32(esp, 0x000A964Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9648u); } /* indirect call */
    }

loc_000A964E: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebp + -24));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -22));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -10));
    MEM16(eax + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -18));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -14));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -12));
    MEM16(eax + 0xE) = LO16(ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9694
 * Original: 0x000A9694 - 0x000A969C (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9694(void)
{

loc_000A9694: ;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A969C
 * Original: 0x000A969C - 0x000A9707 (107 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A969C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A969C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = MEM32(0x22BAE0); PUSH32(esp, 0x000A96BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A96B8u); } /* indirect call */
    }

loc_000A96BE: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(ebp + -24));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -22));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -10));
    MEM16(eax + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -18));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -14));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -12));
    MEM16(eax + 0xE) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9707
 * Original: 0x000A9707 - 0x000A977C (117 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9707(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9707: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax));
    MEM16(ebp + -24) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(ebp + -22) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 6));
    MEM16(ebp + -20) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(ebp + -18) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEM16(ebp + -16) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 0xE));
    MEM16(ebp + -12) = LO16(eax);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEM16(ebp + -14) = LO16(ecx);
    { uint32_t _icall_target = MEM32(0x22BAEC); PUSH32(esp, 0x000A9755u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A974Fu); } /* indirect call */
    }

loc_000A9755: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9767; /* jne: not equal / not zero */

loc_000A9759: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9763u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000A9763: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A9778;

loc_000A9767: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A9778: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A977C
 * Original: 0x000A977C - 0x000A97B3 (55 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A977C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A977C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A97A8; /* ja: above (unsigned >) */

loc_000A9793: ;
    if (CMP_B(_fa, _fb)) goto loc_000A9799; /* jb: below (unsigned <) */

loc_000A9795: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A979E; /* jae: above or equal (unsigned >=) */

loc_000A9799: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000A97AF;

loc_000A979E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A97AD; /* jb: below (unsigned <) */

loc_000A97A2: ;
    if (CMP_A(_fa, _fb)) goto loc_000A97A8; /* ja: above (unsigned >) */

loc_000A97A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A97AD; /* jbe: below or equal (unsigned <=) */

loc_000A97A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A97AF;

loc_000A97AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A97AF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A97B3
 * Original: 0x000A97B3 - 0x000A97FC (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A97B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A97B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A97C9u); RECOMP_ABI_CALL(0x000A969Cu, sub_000A969C); /* call 0x000A969C */

loc_000A97C9: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A9803(); return; } /* je: equal / zero */

loc_000A97D2: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A97DCu); RECOMP_ABI_CALL(0x000A9707u, sub_000A9707); /* call 0x000A9707 */

loc_000A97DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A98A8(); return; } /* je: equal / zero */

loc_000A97E4: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A97FC(); return; } /* jg: greater (signed >) */

loc_000A97EC: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A98A8(); return; } /* jl: less (signed <) */

loc_000A97F2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000A98A8(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_000A97FC(); return; /* fallthrough 0x000A97FC */

}

/**
 * sub_000A97FC
 * Original: 0x000A97FC - 0x000A9803 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A97FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A97FC: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_000A98AA(); return; /* tail jmp 0x000A98AA */

}

/**
 * sub_000A9803
 * Original: 0x000A9803 - 0x000A98A8 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9803(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9803: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 5 (16-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A98A8(); return; } /* jg: greater (signed >) */

loc_000A9816: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A98A8(); return; } /* je: equal / zero */

loc_000A981F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(esi + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    SET_LO16(eax, MEM16(esi + 2));
    MEM8(ebp + 0xB) = 0;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A9857; /* jne: not equal / not zero */

loc_000A983B: ;
    ecx = ZX16(MEM16(ebp + -54));
    edx = SX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    ecx = MEM32(ebp + -56);
    if (CMP_GE(_fas, _fbs)) goto loc_000A984C; /* jge: greater or equal (signed >=) */

loc_000A9849: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A985A;

loc_000A984C: ;
    MEM32(ebp + 0x14) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_000A985D; /* jg: greater (signed >) */

loc_000A9851: ;
    MEM8(ebp + 0xB) = 1;
    goto loc_000A985D;

loc_000A9857: ;
    ecx = MEM32(ebp + -56);

loc_000A985A: ;
    MEM32(ebp + 0x14) = ecx;

loc_000A985D: ;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    ebx = MEM32(0x22BAEC);
    MEM16(ebp + -26) = MEM16(ebp + -26) & 0;
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -38) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + -34) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ebp + -32) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(ebp + -30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(ebp + -28) = LO16(eax);
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM16(ebp + -40) = LO16(ecx);
    MEM16(ebp + -36) = 1;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000A98A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A98A2u); } /* indirect call */
    }

loc_000A98A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A98B4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000A98A8(); return; /* fallthrough 0x000A98A8 */

}

/**
 * sub_000A98A8
 * Original: 0x000A98A8 - 0x000A98B1 (9 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A98A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A98A8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A98AA
 * Original: 0x000A98AA - 0x000A98B1 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A98AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A98AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A98B1
 * Original: 0x000A98B1 - 0x000A98B4 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A98B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A98B1: ;
    edi = MEM32(ebp + -12);

    g_seh_ebp = ebp; sub_000A98B4(); return; /* fallthrough 0x000A98B4 */

}

/**
 * sub_000A98B4
 * Original: 0x000A98B4 - 0x000A99BD (265 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A98B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A98B4: ;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE0); PUSH32(esp, 0x000A98C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A98BCu); } /* indirect call */
    }

loc_000A98C2: ;
    eax = MEM32(ebp + -62);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A98D1; /* jle: less or equal (signed <=) */

loc_000A98CA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A98D5;

loc_000A98D1: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000A98D9; /* jge: greater or equal (signed >=) */

loc_000A98D3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000A98D5: ;
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebp + -36) = MEM16(ebp + -36) + LO16(edi);
    _fa = (uint32_t)(MEM16(ebp + -36)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000A98D9: ;
    edi = MEM32(ebp + -36);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -8), LO16(eax) (16-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000A9919; /* jle: less or equal (signed <=) */

loc_000A98E8: ;
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebp + -36) = MEM16(ebp + -36) + 7;
    _fa = (uint32_t)(MEM16(ebp + -36)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000A98F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A98F5u); } /* indirect call */
    }

loc_000A98F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9919; /* je: equal / zero */

loc_000A98FB: ;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE0); PUSH32(esp, 0x000A9909u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9903u); } /* indirect call */
    }

loc_000A9909: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -8) (16-bit) */
    edi = MEM32(ebp + -72);
    if (CMP_L(_fas, _fbs)) goto loc_000A98E8; /* jl: less (signed <) */

loc_000A9919: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM16(ebp + -36) = LO16(edi);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000A9927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9925u); } /* indirect call */
    }

loc_000A9927: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A98A8(); return; } /* je: equal / zero */

loc_000A992F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    edx = MEM32(ebp + -20);
    edi = MEM32(ebp + -24);
    if (CMP_EQ(_fa, _fb)) goto loc_000A99B0; /* je: equal / zero */

loc_000A993B: ;
    eax = ZX16(MEM16(ebp + -50));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -36);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9957; /* jl: less (signed <) */

loc_000A9947: ;
    if (CMP_NE(_fa, _fb)) goto loc_000A99B0; /* jne: not equal / not zero */

loc_000A9949: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A99B0; /* jg: greater (signed >) */

loc_000A9951: ;
    if (CMP_L(_fas, _fbs)) goto loc_000A9957; /* jl: less (signed <) */

loc_000A9953: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A99B0; /* jae: above or equal (unsigned >=) */

loc_000A9957: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + 0x14));
    MEM16(ebp + -26) = MEM16(ebp + -26) & 0;
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -40) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(ebp + -38) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + -34) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ebp + -32) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(ebp + -30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(ebp + -28) = LO16(eax);
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM8(ebp + 0xB) = 0;
    MEM16(ebp + -36) = 1;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000A99A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A99A1u); } /* indirect call */
    }

loc_000A99A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A98B1(); return; } /* jne: not equal / not zero */

loc_000A99AB: ;
    g_seh_ebp = ebp; sub_000A98A8(); return; /* tail jmp 0x000A98A8 */

loc_000A99B0: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    g_seh_ebp = ebp; sub_000A97FC(); return; /* tail jmp 0x000A97FC */

}

/**
 * sub_000A99BD
 * Original: 0x000A99BD - 0x000A9B19 (348 bytes, 141 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A99BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A99BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A99D4u); RECOMP_ABI_CALL(0x000A955Au, sub_000A955A); /* call 0x000A955A */

loc_000A99D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A99E6; /* je: equal / zero */

loc_000A99D8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A99DEu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000A99DE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000A9B13;

loc_000A99E6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000A9A14; /* jne: not equal / not zero */

loc_000A99EC: ;
    MEM32(esi + 0x54) = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x44;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(esi + 0xA8) = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x98;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000A9A14: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x000A9A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9A18u); } /* indirect call */
    }

loc_000A9A1E: ;
    _fa = (uint32_t)(MEM16(esi + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x46), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B10; /* je: equal / zero */

loc_000A9A28: ;
    _fa = (uint32_t)(MEM16(esi + 0x9A)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x9A), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B10; /* je: equal / zero */

loc_000A9A35: ;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9A48u); RECOMP_ABI_CALL(0x000A97B3u, sub_000A97B3); /* call 0x000A97B3 */

loc_000A9A48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B10; /* je: equal / zero */

loc_000A9A50: ;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9A66u); RECOMP_ABI_CALL(0x000A97B3u, sub_000A97B3); /* call 0x000A97B3 */

loc_000A9A66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B10; /* je: equal / zero */

loc_000A9A6E: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x989680;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9A82u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000A9A82: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x54);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9A98u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000A9A98: ;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    eax = eax + MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(MEM32(ebp + -12)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -32))) >> 32) & 1);
    eax = eax + MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(MEM32(ebp + -28)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(ebp + -24) = eax;
    eax = MEM32(esi + 0xA8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9ABDu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000A9ABD: ;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    eax = eax + MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + -12)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -40))) >> 32) & 1);
    eax = eax + MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + -36)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000A9AF3; /* jg: greater (signed >) */

loc_000A9ACD: ;
    if (CMP_L(_fas, _fbs)) goto loc_000A9AD4; /* jl: less (signed <) */

loc_000A9ACF: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000A9AF3; /* jae: above or equal (unsigned >=) */

loc_000A9AD4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A9AEE; /* jl: less (signed <) */

loc_000A9AD9: ;
    ecx = MEM32(ebp + -8);
    if (CMP_G(_fas, _fbs)) goto loc_000A9AE3; /* jg: greater (signed >) */

loc_000A9ADE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A9AEE; /* jb: below (unsigned <) */

loc_000A9AE3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000A9AEE; /* jg: greater (signed >) */

loc_000A9AE8: ;
    if (CMP_L(_fas, _fbs)) goto loc_000A9B0D; /* jl: less (signed <) */

loc_000A9AEA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A9B0D; /* jb: below (unsigned <) */

loc_000A9AEE: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A9B10;

loc_000A9AF3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A9B0D; /* jl: less (signed <) */

loc_000A9AF8: ;
    ecx = MEM32(ebp + -8);
    if (CMP_G(_fas, _fbs)) goto loc_000A9B01; /* jg: greater (signed >) */

loc_000A9AFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A9B0D; /* jb: below (unsigned <) */

loc_000A9B01: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000A9B0D; /* jg: greater (signed >) */

loc_000A9B06: ;
    if (CMP_L(_fas, _fbs)) goto loc_000A9AEE; /* jl: less (signed <) */

loc_000A9B08: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A9AEE; /* jb: below (unsigned <) */

loc_000A9B0D: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);

loc_000A9B10: ;
    eax = ebx;
    POP32(esp, edi);

loc_000A9B13: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9B19
 * Original: 0x000A9B19 - 0x000A9B6F (86 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9B19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9B19: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9B2Du); RECOMP_ABI_CALL(0x000A99BDu, sub_000A99BD); /* call 0x000A99BD */

loc_000A9B2D: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A9B4B; /* je: equal / zero */

loc_000A9B32: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A9B46; /* je: equal / zero */

loc_000A9B35: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A9B3C; /* je: equal / zero */

loc_000A9B38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A9B4E;

loc_000A9B3C: ;
    ecx = MEM32(ebp + 0x70);

loc_000A9B3F: ;
    eax = MEM32(ebp + -56);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A9B4E;

loc_000A9B46: ;
    ecx = MEM32(ebp + 0x1C);
    goto loc_000A9B3F;

loc_000A9B4B: ;
    eax = MEM32(ebp + -56);

loc_000A9B4E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x989680);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9B60u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000A9B60: ;
    ecx = MEM32(ebp + 0x7C);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9B6F
 * Original: 0x000A9B6F - 0x000A9BEE (127 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9B6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A9B6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x000A9B7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9B79u); } /* indirect call */
    }

loc_000A9B7F: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9B88u); RECOMP_ABI_CALL(0x000A9B19u, sub_000A9B19); /* call 0x000A9B19 */

loc_000A9B88: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -16)));
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(ebp + -12)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(ebp + -24) = eax;
    eax = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = ecx;
    { uint32_t _icall_target = MEM32(0x22BAE0); PUSH32(esp, 0x000A9BA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9BA2u); } /* indirect call */
    }

loc_000A9BA8: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebp + -40));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -38));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -26));
    MEM16(eax + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -36));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -34));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -32));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -30));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -28));
    MEM16(eax + 0xE) = LO16(ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9BEE
 * Original: 0x000A9BEE - 0x000A9C19 (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9BEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A9BEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9BFCu); RECOMP_ABI_CALL(0x000A9B19u, sub_000A9B19); /* call 0x000A9B19 */

loc_000A9BFC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -8)));
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 0xC);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(ebp + -4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(edx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9C19
 * Original: 0x000A9C19 - 0x000A9C44 (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9C19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A9C19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9C27u); RECOMP_ABI_CALL(0x000A9B19u, sub_000A9B19); /* call 0x000A9B19 */

loc_000A9C27: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -8))) >> 32) & 1);
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 0xC);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(edx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9C44
 * Original: 0x000A9C44 - 0x000A9C71 (45 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9C44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9C44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9C5Cu); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_000A9C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9C6D; /* jl: less (signed <) */

loc_000A9C60: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A9C6F; /* jbe: below or equal (unsigned <=) */

loc_000A9C68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_000A9C6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A9C6F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000A9C71
 * Original: 0x000A9C71 - 0x000A9CB6 (69 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9C71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A9C71: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A9C86u); RECOMP_ABI_CALL(0x000AEEA0u, sub_000AEEA0); /* call 0x000AEEA0 */

loc_000A9C86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A9CAF; /* jne: not equal / not zero */

loc_000A9C8A: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A9CA7; /* je: equal / zero */

loc_000A9C90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9CA2; /* je: equal / zero */

loc_000A9C94: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000A9C9Eu); RECOMP_ABI_CALL(0x001524B3u, sub_001524B3); /* call 0x001524B3 */

loc_000A9C9E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_000A9CB2;

loc_000A9CA2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A9CB2;

loc_000A9CA7: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    goto loc_000A9CB2;

loc_000A9CAF: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A9CB2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9CB6
 * Original: 0x000A9CB6 - 0x000A9CFB (69 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9CB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A9CB6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A9CCBu); RECOMP_ABI_CALL(0x000AEEA0u, sub_000AEEA0); /* call 0x000AEEA0 */

loc_000A9CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A9CF4; /* jne: not equal / not zero */

loc_000A9CCF: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A9CEC; /* je: equal / zero */

loc_000A9CD5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9CE7; /* je: equal / zero */

loc_000A9CD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000A9CE3u); RECOMP_ABI_CALL(0x001524E5u, sub_001524E5); /* call 0x001524E5 */

loc_000A9CE3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_000A9CF7;

loc_000A9CE7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A9CF7;

loc_000A9CEC: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    goto loc_000A9CF7;

loc_000A9CF4: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A9CF7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9CFB
 * Original: 0x000A9CFB - 0x000A9D33 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9CFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9CFB: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x281470);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9D07u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9D07: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9D16u); RECOMP_ABI_CALL(0x00152597u, sub_00152597); /* call 0x00152597 */

loc_000A9D16: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000A9D2B;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000A9D2B: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9D30u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9D30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9D1E
 * Original: 0x000A9D1E - 0x000A9D33 (21 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9D22
 * Original: 0x000A9D22 - 0x000A9D33 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D22: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000A9D30u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9D30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9D33
 * Original: 0x000A9D33 - 0x000A9D9F (108 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D33: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x281480);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9D3Fu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9D3F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = esi;
    edx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = edx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9D81; /* je: equal / zero */

loc_000A9D55: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9D79; /* je: equal / zero */

loc_000A9D5A: ;
    SET_LO16(ecx, MEM16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9D74; /* je: equal / zero */

loc_000A9D62: ;
    MEM16(eax) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = edx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000A9D55;

loc_000A9D74: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9D7E; /* jne: not equal / not zero */

loc_000A9D79: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;

loc_000A9D7E: ;
    MEM16(eax) = LO16(esi);

loc_000A9D81: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    goto loc_000A9D97;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000A9D97: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9D9Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9D9C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9D8A
 * Original: 0x000A9D8A - 0x000A9D9F (21 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9D8E
 * Original: 0x000A9D8E - 0x000A9D9F (17 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D8E: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000A9D9Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9D9C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9D9F
 * Original: 0x000A9D9F - 0x000A9DD7 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D9F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x281490);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9DABu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9DAB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9DBAu); RECOMP_ABI_CALL(0x0015256Du, sub_0015256D); /* call 0x0015256D */

loc_000A9DBA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000A9DCF;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000A9DCF: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9DD4u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9DD4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9DC2
 * Original: 0x000A9DC2 - 0x000A9DD7 (21 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9DC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9DC6
 * Original: 0x000A9DC6 - 0x000A9DD7 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9DC6: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000A9DD4u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9DD4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9DD7
 * Original: 0x000A9DD7 - 0x000A9DFC (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9DD7: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2814A0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9DE3u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9DE3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A9E07(); return; } /* je: equal / zero */

loc_000A9DE9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9DF5u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_000A9DF5: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_000A9E09(); return; /* tail jmp 0x000A9E09 */

}

/**
 * sub_000A9DFC
 * Original: 0x000A9DFC - 0x000A9E00 (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DFC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9DFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A9E00
 * Original: 0x000A9E00 - 0x000A9E07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9E00: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_000A9E07(); return; /* fallthrough 0x000A9E07 */

}

/**
 * sub_000A9E07
 * Original: 0x000A9E07 - 0x000A9E11 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9E07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000A9E0Eu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9E0E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9E09
 * Original: 0x000A9E09 - 0x000A9E11 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9E09: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000A9E0Eu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000A9E0E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9E11
 * Original: 0x000A9E11 - 0x000A9E16 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9E11: ;
    g_seh_ebp = ebp; sub_0010569A(); return; /* tail jmp 0x0010569A */

}

/**
 * sub_000A9E16
 * Original: 0x000A9E16 - 0x000A9E1C (6 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9E16: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BAE4)); return; /* indirect tail jmp */

}

/**
 * sub_000A9E1C
 * Original: 0x000A9E1C - 0x000A9E33 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E1C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9E1C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000A9E2Du); RECOMP_ABI_CALL(0x0015270Bu, sub_0015270B); /* call 0x0015270B */

loc_000A9E2D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9E33
 * Original: 0x000A9E33 - 0x000A9E4A (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E33(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9E33: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000A9E44u); RECOMP_ABI_CALL(0x001527A9u, sub_001527A9); /* call 0x001527A9 */

loc_000A9E44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9E4A
 * Original: 0x000A9E4A - 0x000A9E82 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9E4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9E4A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -260;
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9E6Cu); RECOMP_ABI_CALL(0x0015173Eu, sub_0015173E); /* call 0x0015173E */

loc_000A9E6C: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9E7Du); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_000A9E7D: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000A9E82
 * Original: 0x000A9E82 - 0x000A9E95 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E82(void)
{

loc_000A9E82: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000A9E94u); RECOMP_ABI_CALL(0x000A9E1Cu, sub_000A9E1C); /* call 0x000A9E1C */

loc_000A9E94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9E95
 * Original: 0x000A9E95 - 0x000A9EA8 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E95(void)
{

loc_000A9E95: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x000A9EA7u); RECOMP_ABI_CALL(0x000A9E33u, sub_000A9E33); /* call 0x000A9E33 */

loc_000A9EA7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9EA8
 * Original: 0x000A9EA8 - 0x000A9EEB (67 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9EA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9EA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000A9EC2; /* je: equal / zero */

loc_000A9EB6: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    eax = ecx + eax + -1;
    goto loc_000A9EC7;

loc_000A9EC2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000A9EC7: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x22BAF8); PUSH32(esp, 0x000A9ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9ED1u); } /* indirect call */
    }

loc_000A9ED7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9EE4; /* jne: not equal / not zero */

loc_000A9EDD: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9EE4u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000A9EE4: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A9EEB
 * Original: 0x000A9EEB - 0x000A9F18 (45 bytes, 18 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9EEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9EEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BAF8); PUSH32(esp, 0x000A9F04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9EFEu); } /* indirect call */
    }

loc_000A9F04: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9F11; /* jne: not equal / not zero */

loc_000A9F0A: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9F11u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000A9F11: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A9F18
 * Original: 0x000A9F18 - 0x000A9F1E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9F18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9F18: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BAFC)); return; /* indirect tail jmp */

}

/**
 * sub_000A9F2E
 * Original: 0x000A9F2E - 0x000A9F34 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9F2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9F2E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB04)); return; /* indirect tail jmp */

}

/**
 * sub_000A9F3A
 * Original: 0x000A9F3A - 0x000A9F68 (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9F3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9F3A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB0C); PUSH32(esp, 0x000A9F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9F4Du); } /* indirect call */
    }

loc_000A9F53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9F5C; /* jl: less (signed <) */

loc_000A9F57: ;
    eax = MEM32(ebp + 8);
    goto loc_000A9F64;

loc_000A9F5C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9F62u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000A9F62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A9F64: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A9F68
 * Original: 0x000A9F68 - 0x000A9FA4 (60 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A9F68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9F68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x11), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9F7E; /* je: equal / zero */

loc_000A9F71: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9F7E; /* je: equal / zero */

loc_000A9F77: ;
    PUSH32(esp, 0xC000000Du);
    goto loc_000A9F99;

loc_000A9F7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB10); PUSH32(esp, 0x000A9F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9F89u); } /* indirect call */
    }

loc_000A9F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9F98; /* jl: less (signed <) */

loc_000A9F93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A9FA0;

loc_000A9F98: ;
    PUSH32(esp, eax);

loc_000A9F99: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9F9Eu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000A9F9E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A9FA0: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9FA4
 * Original: 0x000A9FA4 - 0x000A9FD0 (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A9FA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9FA4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esp + 0xC;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB14); PUSH32(esp, 0x000A9FBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9FB6u); } /* indirect call */
    }

loc_000A9FBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9FC5; /* jl: less (signed <) */

loc_000A9FC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A9FCD;

loc_000A9FC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9FCBu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000A9FCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A9FCD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A9FD0
 * Original: 0x000A9FD0 - 0x000A9FF2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A9FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9FD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x22BB18); PUSH32(esp, 0x000A9FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9FD8u); } /* indirect call */
    }

loc_000A9FDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9FE7; /* jl: less (signed <) */

loc_000A9FE2: ;
    PUSH32(esp, 0x1C);
    POP32(esp, eax);
    goto loc_000A9FEF;

loc_000A9FE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9FEDu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000A9FED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A9FEF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A9FF2
 * Original: 0x000A9FF2 - 0x000AA00A (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9FF2(void)
{

loc_000A9FF2: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x000AA007u); RECOMP_ABI_CALL(0x000A9F3Au, sub_000A9F3A); /* call 0x000A9F3A */

loc_000AA007: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AA00A
 * Original: 0x000AA00A - 0x000AA01E (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA00A(void)
{

loc_000AA00A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x000AA01Bu); RECOMP_ABI_CALL(0x000A9F68u, sub_000A9F68); /* call 0x000A9F68 */

loc_000AA01B: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AA01E
 * Original: 0x000AA01E - 0x000AA036 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA01E(void)
{

loc_000AA01E: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x000AA033u); RECOMP_ABI_CALL(0x000A9FA4u, sub_000A9FA4); /* call 0x000A9FA4 */

loc_000AA033: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AA036
 * Original: 0x000AA036 - 0x000AA04A (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA036(void)
{

loc_000AA036: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x000AA047u); RECOMP_ABI_CALL(0x000A9FD0u, sub_000A9FD0); /* call 0x000A9FD0 */

loc_000AA047: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AA04A
 * Original: 0x000AA04A - 0x000AA099 (79 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA04A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA04A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = 0x24;
    { uint32_t _icall_target = MEM32(0x22BB1C); PUSH32(esp, 0x000AA061u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA05Bu); } /* indirect call */
    }

loc_000AA061: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -32);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -28);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0xC) = ecx;
    ecx = 0x7FFE0000;
    MEM32(eax + 0x18) = ecx;
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = 0x20;
    MEM32(eax + 0x1C) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA099
 * Original: 0x000AA099 - 0x000AA0DB (66 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA099(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA099: ;
    eax = 0x2B2308;
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    eax = 0x2B2310;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000AA0BA; /* jae: above or equal (unsigned >=) */

loc_000AA0AF: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA0CC; /* jne: not equal / not zero */

loc_000AA0B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000AA0AF; /* jb: below (unsigned <) */

loc_000AA0BA: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x000AA0C9u); RECOMP_ABI_CALL(0x000AF616u, sub_000AF616); /* call 0x000AF616 */

loc_000AA0C9: ;
    esp += 12; return; /* ret 8 */

loc_000AA0CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x000AA0D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA0D7u); } /* indirect call */
    }

loc_000AA0D9: ;
    goto loc_000AA0C9;

}

/**
 * sub_000AA0DB
 * Original: 0x000AA0DB - 0x000AA1BC (225 bytes, 83 insns)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA0DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA0DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x22BB28);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x1000;
    if (CMP_NE(_fa, _fb)) goto loc_000AA0FD; /* jne: not equal / not zero */

loc_000AA0EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BB24); PUSH32(esp, 0x000AA0F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA0EFu); } /* indirect call */
    }

loc_000AA0F5: ;
    ecx = MEM32(0x22BB28);
    MEM32(ecx) = eax;

loc_000AA0FD: ;
    eax = MEM32(0x22BB28);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA112; /* jne: not equal / not zero */

loc_000AA108: ;
    eax = 0xC0000017u;
    goto loc_000AA1B7;

loc_000AA112: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB20); PUSH32(esp, 0x000AA11Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA116u); } /* indirect call */
    }

loc_000AA11C: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA128; /* jne: not equal / not zero */

loc_000AA123: ;
    edx = 0x2814B4;

loc_000AA128: ;
    eax = MEM32(0x22BB28);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x400;
    ebx = edi + 8;
    ecx = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x22BB28);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    ecx = MEM32(0x22BB28);
    ecx = MEM32(ecx);
    MEM32(ecx + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000AA171; /* je: equal / zero */

loc_000AA15E: ;
    eax = MEM32(0x22BB28);
    edi = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 0x1C);
    ecx = 0x300;
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

loc_000AA171: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1B3; /* je: equal / zero */

loc_000AA178: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1A0; /* je: equal / zero */

loc_000AA17C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1A0; /* je: equal / zero */

loc_000AA181: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA18Du); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000AA18D: ;
    eax = ebx;
    esi = eax + 1;

loc_000AA192: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA192; /* jne: not equal / not zero */

loc_000AA199: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + ebx) = 0x3B;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AA1A0: ;
    ecx = 0x208;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA1B3u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000AA1B3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_000AA1B7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000AA1BC
 * Original: 0x000AA1BC - 0x000AA220 (100 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA1BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA1BC: ;
    eax = MEM32(0x22BB28);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA218; /* je: equal / zero */

loc_000AA1C7: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1E1; /* je: equal / zero */

loc_000AA1CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1E1; /* je: equal / zero */

loc_000AA1D3: ;
    edx = MEM32(0x10118);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA218; /* jne: not equal / not zero */

loc_000AA1E1: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(0x22BB28);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x400;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x300;
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
    eax = MEM32(0x22BB28);
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x22BB04); PUSH32(esp, 0x000AA212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA20Cu); } /* indirect call */
    }

loc_000AA212: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    goto loc_000AA21D;

loc_000AA218: ;
    eax = 0x490;

loc_000AA21D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AA23F
 * Original: 0x000AA23F - 0x000AA286 (71 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA23F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA23F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA258u); RECOMP_ABI_CALL(0x000AA0DBu, sub_000AA0DB); /* call 0x000AA0DB */

loc_000AA258: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA27B; /* jl: less (signed <) */

loc_000AA25C: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA273; /* je: equal / zero */

loc_000AA26C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000AA273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA270u); } /* indirect call */
    }

loc_000AA273: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x22BB30); PUSH32(esp, 0x000AA27Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA275u); } /* indirect call */
    }

loc_000AA27B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x000AA282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA27Cu); } /* indirect call */
    }

loc_000AA282: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AA286
 * Original: 0x000AA286 - 0x000AA2B8 (50 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA286(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA286: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = eax + 1;

loc_000AA294: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA294; /* jne: not equal / not zero */

loc_000AA29B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -8) = LO16(eax);
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -6) = LO16(eax);
    ecx = ebp + -8;
    eax = 1;
    recomp_debug_service(eax, ecx); /* int 0x2d */
    /* int3: debug-trap slide byte, stepped over */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA2B8
 * Original: 0x000AA2B8 - 0x000AA2D6 (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000AA2B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA2B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AA2C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA2BCu); } /* indirect call */
    }

loc_000AA2C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA2CB; /* jl: less (signed <) */

loc_000AA2C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AA2D3;

loc_000AA2CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AA2D1u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA2D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AA2D3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA2D6
 * Original: 0x000AA2D6 - 0x000AA2FC (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000AA2D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA2D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x22BB38); PUSH32(esp, 0x000AA2E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA2E2u); } /* indirect call */
    }

loc_000AA2E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA2F1; /* jl: less (signed <) */

loc_000AA2EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AA2F9;

loc_000AA2F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AA2F7u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA2F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AA2F9: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000AA2FC
 * Original: 0x000AA2FC - 0x000AA487 (395 bytes, 136 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA2FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA2FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    POP32(esp, ebx);
    if ((_fa == 0)) goto loc_000AA351; /* je: equal / zero */

loc_000AA310: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AA348; /* je: equal / zero */

loc_000AA313: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AA343; /* je: equal / zero */

loc_000AA316: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AA33A; /* je: equal / zero */

loc_000AA319: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AA32B; /* jne: not equal / not zero */

loc_000AA31C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x40000000 (32-bit) */
    MEM32(ebp + 0xC) = 4;
    if (TEST_NZ(_fa, _fb)) goto loc_000AA358; /* jne: not equal / not zero */

loc_000AA32B: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA335u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA335: ;
    goto loc_000AA454;

loc_000AA33A: ;
    MEM32(ebp + 0xC) = 3;
    goto loc_000AA358;

loc_000AA343: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_000AA358;

loc_000AA348: ;
    MEM32(ebp + 0xC) = 5;
    goto loc_000AA358;

loc_000AA351: ;
    MEM32(ebp + 0xC) = 2;

loc_000AA358: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x000AA367u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA361u); } /* indirect call */
    }

loc_000AA367: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000AA37D; /* jbe: below or equal (unsigned <=) */

loc_000AA36D: ;
    eax = ZX16(MEM16(ebp + -12));
    _fa = (uint32_t)(MEM8(eax + edi + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi + -1), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA37D; /* jne: not equal / not zero */

loc_000AA378: ;
    MEM32(ebp + 8) = ebx;
    goto loc_000AA381;

loc_000AA37D: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000AA381: ;
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x8000000;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    ebx = ebx & 0x20000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edx = edx & 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    edx = ecx;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x2000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ~edx;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    if (TEST_Z(_fa, _fb)) goto loc_000AA3F2; /* je: equal / zero */

loc_000AA3E7: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000AA3F2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000AA3FC; /* jne: not equal / not zero */

loc_000AA3F9: ;
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000AA3FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx & 0x7FA7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    esi = esi | 0x100080;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB3C); PUSH32(esp, 0x000AA424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA41Eu); } /* indirect call */
    }

loc_000AA424: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AA459; /* jge: greater or equal (signed >=) */

loc_000AA42A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA430u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA430: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA43C; /* jne: not equal / not zero */

loc_000AA438: ;
    PUSH32(esp, 0x50);
    goto loc_000AA44F;

loc_000AA43C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC00000BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC00000BAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA454; /* jne: not equal / not zero */

loc_000AA444: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA44D; /* je: equal / zero */

loc_000AA449: ;
    PUSH32(esp, 3);
    goto loc_000AA44F;

loc_000AA44D: ;
    PUSH32(esp, 5);

loc_000AA44F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA454u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AA454: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000AA481;

loc_000AA459: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA465; /* jne: not equal / not zero */

loc_000AA45F: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA471; /* je: equal / zero */

loc_000AA465: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA478; /* jne: not equal / not zero */

loc_000AA46B: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA478; /* jne: not equal / not zero */

loc_000AA471: ;
    PUSH32(esp, 0xB7);
    goto loc_000AA479;

loc_000AA478: ;
    PUSH32(esp, ebx);

loc_000AA479: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA47Eu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AA47E: ;
    eax = MEM32(ebp + -4);

loc_000AA481: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000AA487
 * Original: 0x000AA487 - 0x000AA769 (738 bytes, 264 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA487(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AA487: ;
    PUSH32(esp, ebp);
    ebp = esp + -96;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x9C));
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = ebp + -20;
    ebx = 0x10000;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = 0xFFFFFFFDu;
    MEM32(ebp + 4) = 0x40;
    MEM32(ebp) = eax;
    { uint32_t _icall_target = MEM32(0x22BB5C); PUSH32(esp, 0x000AA4B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA4B0u); } /* indirect call */
    }

loc_000AA4B6: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000AA4CD; /* jne: not equal / not zero */

loc_000AA4BF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000AA4C6u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AA4C6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AA760;

loc_000AA4CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    esi = MEM32(0x22BB40);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x000AA4DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA4DBu); } /* indirect call */
    }

loc_000AA4DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x60);
    PUSH32(esp, 1);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x000AA4F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA4F2u); } /* indirect call */
    }

loc_000AA4F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x68) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000AA518; /* jge: greater or equal (signed >=) */

loc_000AA4FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x22BB54); PUSH32(esp, 0x000AA509u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA503u); } /* indirect call */
    }

loc_000AA509: ;
    PUSH32(esp, MEM32(ebp + 0x68));

loc_000AA50C: ;
    PUSH32(esp, 0x000AA511u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA511: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AA75F;

loc_000AA518: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AA52Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA527u); } /* indirect call */
    }

loc_000AA52D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x68) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000AA53F; /* jge: greater or equal (signed >=) */

loc_000AA534: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AA53Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA537u); } /* indirect call */
    }

loc_000AA53D: ;
    goto loc_000AA4FF;

loc_000AA53F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x000AA548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA546u); } /* indirect call */
    }

loc_000AA548: ;
    eax = MEM32(ebp + 0x7C);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB3C); PUSH32(esp, 0x000AA57Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA575u); } /* indirect call */
    }

loc_000AA57B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000AA59A; /* jge: greater or equal (signed >=) */

loc_000AA581: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AA58Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA584u); } /* indirect call */
    }

loc_000AA58A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x22BB54); PUSH32(esp, 0x000AA594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA58Eu); } /* indirect call */
    }

loc_000AA594: ;
    PUSH32(esp, esi);
    goto loc_000AA50C;

loc_000AA59A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x58) = edi;
    MEM32(ebp + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000AA5D1; /* je: equal / zero */

loc_000AA5A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    { uint32_t _icall_target = MEM32(ebp + 0x70); PUSH32(esp, 0x000AA5C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA5C2u); } /* indirect call */
    }

loc_000AA5C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA696; /* jne: not equal / not zero */

loc_000AA5CE: ;
    MEM32(ebp + 0x70) = edi;

loc_000AA5D1: ;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AA5F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA5ECu); } /* indirect call */
    }

loc_000AA5F2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA71B; /* jl: less (signed <) */

loc_000AA5FC: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000AA6CA; /* jg: greater (signed >) */

loc_000AA608: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000AA6B7; /* jge: greater or equal (signed >=) */

loc_000AA60E: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x000AA626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA620u); } /* indirect call */
    }

loc_000AA626: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA71B; /* jl: less (signed <) */

loc_000AA630: ;
    eax = MEM32(ebp + 0x44);
    ecx = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x48));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x000AA64Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA648u); } /* indirect call */
    }

loc_000AA64E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA71B; /* jl: less (signed <) */

loc_000AA658: ;
    eax = MEM32(ebp + 0x58);
    _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x68))) >> 32) & 1);
    eax = eax + MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + 0x5C)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + 0x5C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000AA6A9; /* je: equal / zero */

loc_000AA669: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    { uint32_t _icall_target = MEM32(ebp + 0x70); PUSH32(esp, 0x000AA68Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA689u); } /* indirect call */
    }

loc_000AA68C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA6A5; /* jne: not equal / not zero */

loc_000AA691: ;
    MEM32(ebp + 0x70) = edi;
    goto loc_000AA6A9;

loc_000AA696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA5D1; /* je: equal / zero */

loc_000AA69E: ;
    esi = 0xC0000240u;
    goto loc_000AA71B;

loc_000AA6A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA6C5; /* jne: not equal / not zero */

loc_000AA6A9: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA60E; /* jl: less (signed <) */

loc_000AA6B5: ;
    if (CMP_G(_fas, _fbs)) goto loc_000AA6CA; /* jg: greater (signed >) */

loc_000AA6B7: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000AA60E; /* jb: below (unsigned <) */

loc_000AA6C3: ;
    goto loc_000AA6CA;

loc_000AA6C5: ;
    esi = 0xC0000240u;

loc_000AA6CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA71B; /* jl: less (signed <) */

loc_000AA6CE: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AA719u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA713u); } /* indirect call */
    }

loc_000AA719: ;
    esi = eax;

loc_000AA71B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x22BB54); PUSH32(esp, 0x000AA725u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA71Fu); } /* indirect call */
    }

loc_000AA725: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    ebx = MEM32(0x22BB34);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000AA730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA72Eu); } /* indirect call */
    }

loc_000AA730: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000AA755; /* jge: greater or equal (signed >=) */

loc_000AA734: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0x4F;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    MEM8(ebp + 0x4F) = 1;
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AA74Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA747u); } /* indirect call */
    }

loc_000AA74D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AA753u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA753: ;
    goto loc_000AA758;

loc_000AA755: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AA758: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000AA75Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA75Bu); } /* indirect call */
    }

loc_000AA75D: ;
    eax = edi;

loc_000AA75F: ;
    POP32(esp, esi);

loc_000AA760: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x60)) >> 32) & 1);
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000AA769
 * Original: 0x000AA769 - 0x000AA788 (31 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA769(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA769: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x000AA785u); RECOMP_ABI_CALL(0x000AA487u, sub_000AA487); /* call 0x000AA487 */

loc_000AA785: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AA788
 * Original: 0x000AA788 - 0x000AA875 (237 bytes, 100 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA788(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AA788: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA79C; /* je: equal / zero */

loc_000AA79A: ;
    MEM32(edi) = ebx;

loc_000AA79C: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA80B; /* je: equal / zero */

loc_000AA7A3: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x000AA7DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA7D7u); } /* indirect call */
    }

loc_000AA7DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA7F6; /* jl: less (signed <) */

loc_000AA7E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA7F6; /* je: equal / zero */

loc_000AA7E5: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA7F1; /* je: equal / zero */

loc_000AA7EC: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_000AA7F1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AA86E;

loc_000AA7F6: ;
    ecx = 0xC0000011u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA866; /* jne: not equal / not zero */

loc_000AA7FF: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA808; /* je: equal / zero */

loc_000AA806: ;
    MEM32(eax) = ebx;

loc_000AA808: ;
    PUSH32(esp, ecx);
    goto loc_000AA867;

loc_000AA80B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x000AA822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA81Cu); } /* indirect call */
    }

loc_000AA822: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA83B; /* jne: not equal / not zero */

loc_000AA829: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB60); PUSH32(esp, 0x000AA834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA82Eu); } /* indirect call */
    }

loc_000AA834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA846; /* jl: less (signed <) */

loc_000AA838: ;
    eax = MEM32(ebp + -8);

loc_000AA83B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA846; /* jl: less (signed <) */

loc_000AA83F: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_000AA7F1;

loc_000AA846: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000011u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000011u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA851; /* jne: not equal / not zero */

loc_000AA84D: ;
    MEM32(edi) = ebx;
    goto loc_000AA7F1;

loc_000AA851: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA866; /* jne: not equal / not zero */

loc_000AA861: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_000AA866: ;
    PUSH32(esp, eax);

loc_000AA867: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA86Cu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA86C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AA86E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AA875
 * Original: 0x000AA875 - 0x000AA94B (214 bytes, 90 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA875(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AA875: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA889; /* je: equal / zero */

loc_000AA887: ;
    MEM32(edi) = ebx;

loc_000AA889: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA8EC; /* je: equal / zero */

loc_000AA890: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x000AA8CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA8C4u); } /* indirect call */
    }

loc_000AA8CA: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA93C; /* je: equal / zero */

loc_000AA8D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA93C; /* je: equal / zero */

loc_000AA8DB: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA8E7; /* je: equal / zero */

loc_000AA8E2: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_000AA8E7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AA944;

loc_000AA8EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x000AA903u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA8FDu); } /* indirect call */
    }

loc_000AA903: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA91C; /* jne: not equal / not zero */

loc_000AA90A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB60); PUSH32(esp, 0x000AA915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA90Fu); } /* indirect call */
    }

loc_000AA915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA927; /* jl: less (signed <) */

loc_000AA919: ;
    eax = MEM32(ebp + -8);

loc_000AA91C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AA927; /* jl: less (signed <) */

loc_000AA920: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_000AA8E7;

loc_000AA927: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AA93C; /* jne: not equal / not zero */

loc_000AA937: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_000AA93C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA942u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA942: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AA944: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AA94B
 * Original: 0x000AA94B - 0x000AA9CF (132 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA94B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA94B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AA966u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA960u); } /* indirect call */
    }

loc_000AA966: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AA974; /* jge: greater or equal (signed >=) */

loc_000AA96A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA970u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA970: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AA9CB;

loc_000AA974: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, esi);
    esi = MEM32(0x22BB4C);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x000AA998u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA996u); } /* indirect call */
    }

loc_000AA998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA9C2; /* jl: less (signed <) */

loc_000AA99C: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x000AA9B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA9B7u); } /* indirect call */
    }

loc_000AA9B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA9C2; /* jl: less (signed <) */

loc_000AA9BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AA9CA;

loc_000AA9C2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA9C8u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AA9C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AA9CA: ;
    POP32(esp, esi);

loc_000AA9CB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA9CF
 * Original: 0x000AA9CF - 0x000AAAC9 (250 bytes, 104 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AA9CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AA9CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AA9E6; /* je: equal / zero */

loc_000AA9DF: ;
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    goto loc_000AA9EE;

loc_000AA9E6: ;
    eax = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = eax;
    edi = edx;

loc_000AA9EE: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000AAA50; /* je: equal / zero */

loc_000AA9F6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AAA22; /* je: equal / zero */

loc_000AA9F9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AAA22; /* jne: not equal / not zero */

loc_000AA9FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AAA11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAA0Bu); } /* indirect call */
    }

loc_000AAA11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000AAA3B; /* jl: less (signed <) */

loc_000AAA15: ;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -28);
    goto loc_000AAA4C;

loc_000AAA22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AAA37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAA31u); } /* indirect call */
    }

loc_000AAA37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000AAA46; /* jge: greater or equal (signed >=) */

loc_000AAA3B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAA41u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAA41: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000AAAC2;

loc_000AAA46: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);

loc_000AAA4C: ;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_000AAA55;

loc_000AAA50: ;
    MEM32(ebp + -8) = esi;
    eax = edi;

loc_000AAA55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000AAA6B; /* jg: greater (signed >) */

loc_000AAA5C: ;
    if (CMP_L(_fas, _fbs)) goto loc_000AAA64; /* jl: less (signed <) */

loc_000AAA5E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_000AAA6B; /* jae: above or equal (unsigned >=) */

loc_000AAA64: ;
    PUSH32(esp, 0x83);
    goto loc_000AAA78;

loc_000AAA6B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000AAA7F; /* jne: not equal / not zero */

loc_000AAA6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000AAA7F; /* je: equal / zero */

loc_000AAA76: ;
    PUSH32(esp, 0x57);

loc_000AAA78: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAA7Du); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AAA7D: ;
    goto loc_000AAA41;

loc_000AAA7F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AAA94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAA8Eu); } /* indirect call */
    }

loc_000AAA94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000AAAB3; /* jl: less (signed <) */

loc_000AAA98: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAAA1; /* je: equal / zero */

loc_000AAA9C: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx) = eax;

loc_000AAAA1: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AAAAE; /* jne: not equal / not zero */

loc_000AAAA7: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAAAEu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AAAAE: ;
    eax = MEM32(ebp + -8);
    goto loc_000AAAC2;

loc_000AAAB3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAAB9u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAAB9: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAAC2; /* je: equal / zero */

loc_000AAAC0: ;
    MEM32(ebx) = eax;

loc_000AAAC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AAAC9
 * Original: 0x000AAAC9 - 0x000AAB91 (200 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAAC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AAAC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000AAB33; /* je: equal / zero */

loc_000AAAD7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AAB08; /* je: equal / zero */

loc_000AAADA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AAB08; /* jne: not equal / not zero */

loc_000AAADD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AAAF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAAECu); } /* indirect call */
    }

loc_000AAAF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000AAB85; /* jl: less (signed <) */

loc_000AAAFA: ;
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -28);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_000AAB39;

loc_000AAB08: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AAB1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAB17u); } /* indirect call */
    }

loc_000AAB1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000AAB85; /* jl: less (signed <) */

loc_000AAB21: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_000AAB39;

loc_000AAB33: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);

loc_000AAB39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000AAB55; /* jg: greater (signed >) */

loc_000AAB43: ;
    if (CMP_L(_fas, _fbs)) goto loc_000AAB49; /* jl: less (signed <) */

loc_000AAB45: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_000AAB55; /* jae: above or equal (unsigned >=) */

loc_000AAB49: ;
    PUSH32(esp, 0x83);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAB53u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AAB53: ;
    goto loc_000AAB8B;

loc_000AAB55: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AAB6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAB64u); } /* indirect call */
    }

loc_000AAB6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000AAB85; /* jl: less (signed <) */

loc_000AAB6E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAB80; /* je: equal / zero */

loc_000AAB75: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_000AAB80: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AAB8D;

loc_000AAB85: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAB8Bu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAB8B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AAB8D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AAB91
 * Original: 0x000AAB91 - 0x000AAC6A (217 bytes, 83 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAB91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AAB91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    eax = ebp + -148;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB64); PUSH32(esp, 0x000AABB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AABAEu); } /* indirect call */
    }

loc_000AABB4: ;
    esi = 0xC0000000u;
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAC5C; /* je: equal / zero */

loc_000AABC5: ;
    eax = MEM32(ebp + -140);
    edi = MEM32(0x22BB50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    MEM32(ebp + -40) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x000AABE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AABE3u); } /* indirect call */
    }

loc_000AABE5: ;
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAC5C; /* je: equal / zero */

loc_000AABED: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -16);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0x38);
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x000AAC0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAC08u); } /* indirect call */
    }

loc_000AAC0A: ;
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAC5C; /* je: equal / zero */

loc_000AAC12: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -124);
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -120);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -116);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -112);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -108);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -104);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -80);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    esi = ebp + -68;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AAC64;

loc_000AAC5C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAC62u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAC62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AAC64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AAC6A
 * Original: 0x000AAC6A - 0x000AACD0 (102 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAC6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AAC6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AAC85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAC7Fu); } /* indirect call */
    }

loc_000AAC85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AACC4; /* jl: less (signed <) */

loc_000AAC89: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAC9B; /* je: equal / zero */

loc_000AAC90: ;
    ecx = MEM32(ebp + -64);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 4) = ecx;

loc_000AAC9B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AACAD; /* je: equal / zero */

loc_000AACA2: ;
    ecx = MEM32(ebp + -56);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -52);
    MEM32(eax + 4) = ecx;

loc_000AACAD: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AACBF; /* je: equal / zero */

loc_000AACB4: ;
    ecx = MEM32(ebp + -48);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 4) = ecx;

loc_000AACBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AACCC;

loc_000AACC4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AACCAu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AACCA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AACCC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AACD0
 * Original: 0x000AACD0 - 0x000AAD42 (114 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AACD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AACD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AACF4; /* je: equal / zero */

loc_000AACE9: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -48) = ecx;
    MEM32(ebp + -44) = eax;

loc_000AACF4: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAD06; /* je: equal / zero */

loc_000AACFB: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = eax;

loc_000AAD06: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAD18; /* je: equal / zero */

loc_000AAD0D: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;

loc_000AAD18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AAD2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAD27u); } /* indirect call */
    }

loc_000AAD2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AAD36; /* jl: less (signed <) */

loc_000AAD31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AAD3E;

loc_000AAD36: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAD3Cu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAD3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AAD3E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AAD42
 * Original: 0x000AAD42 - 0x000AAD69 (39 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAD42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AAD42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB68); PUSH32(esp, 0x000AAD54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAD4Eu); } /* indirect call */
    }

loc_000AAD54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AAD5D; /* jl: less (signed <) */

loc_000AAD58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AAD65;

loc_000AAD5D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAD63u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAD63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AAD65: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AAD69
 * Original: 0x000AAD69 - 0x000AADA7 (62 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAD69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AAD69: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB50); PUSH32(esp, 0x000AAD84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAD7Eu); } /* indirect call */
    }

loc_000AAD84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AAD92; /* jge: greater or equal (signed >=) */

loc_000AAD88: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAD8Eu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAD8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AADA3;

loc_000AAD92: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AADA3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AADA7
 * Original: 0x000AADA7 - 0x000AADF8 (81 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AADA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AADA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(0x22BB6C));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x000AADDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AADD4u); } /* indirect call */
    }

loc_000AADDA: ;
    ecx = 0xC0000000u;
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AADF1; /* jne: not equal / not zero */

loc_000AADE7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AADEDu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AADED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AADF4;

loc_000AADF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AADF4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AADF8
 * Original: 0x000AADF8 - 0x000AAE49 (81 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AADF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AADF8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(0x22BB6C));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x000AAE2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAE25u); } /* indirect call */
    }

loc_000AAE2B: ;
    ecx = 0xC0000000u;
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AAE42; /* jne: not equal / not zero */

loc_000AAE38: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAE3Eu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAE3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AAE45;

loc_000AAE42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AAE45: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AAE49
 * Original: 0x000AAE49 - 0x000AAF47 (254 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAE49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AAE49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = MEM32(ebp + 0x24);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ecx;
    PUSH32(esp, MEM32(ebp + 0x14));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90000 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAEE1; /* je: equal / zero */

loc_000AAE78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esi + 0x10);
    MEM32(esi) = 0x103;
    PUSH32(esp, esi);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000AAEA1; /* je: equal / zero */

loc_000AAE88: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB74); PUSH32(esp, 0x000AAE9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAE99u); } /* indirect call */
    }

loc_000AAE9F: ;
    goto loc_000AAEB8;

loc_000AAEA1: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB70); PUSH32(esp, 0x000AAEB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAEB2u); } /* indirect call */
    }

loc_000AAEB8: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAED1; /* je: equal / zero */

loc_000AAEC5: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAED1; /* je: equal / zero */

loc_000AAECC: ;
    edx = MEM32(esi + 4);
    MEM32(ecx) = edx;

loc_000AAED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AAF39; /* jl: less (signed <) */

loc_000AAED5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAF39; /* je: equal / zero */

loc_000AAEDC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AAF41;

loc_000AAEE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_000AAEF7; /* je: equal / zero */

loc_000AAEEF: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB74); PUSH32(esp, 0x000AAEF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAEEFu); } /* indirect call */
    }

loc_000AAEF5: ;
    goto loc_000AAEFD;

loc_000AAEF7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB70); PUSH32(esp, 0x000AAEFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAEF7u); } /* indirect call */
    }

loc_000AAEFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AAF16; /* jne: not equal / not zero */

loc_000AAF04: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB60); PUSH32(esp, 0x000AAF0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAF09u); } /* indirect call */
    }

loc_000AAF0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AAF24; /* jl: less (signed <) */

loc_000AAF13: ;
    eax = MEM32(ebp + -8);

loc_000AAF16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AAF24; /* jl: less (signed <) */

loc_000AAF1A: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    goto loc_000AAEDC;

loc_000AAF24: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAF39; /* je: equal / zero */

loc_000AAF31: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + -4);
    MEM32(ecx) = edx;

loc_000AAF39: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAF3Fu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AAF3F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AAF41: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000AAF47
 * Original: 0x000AAF47 - 0x000AB034 (237 bytes, 100 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AAF47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AAF47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAF5B; /* je: equal / zero */

loc_000AAF59: ;
    MEM32(edi) = ebx;

loc_000AAF5B: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAFCA; /* je: equal / zero */

loc_000AAF62: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB78); PUSH32(esp, 0x000AAF9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAF96u); } /* indirect call */
    }

loc_000AAF9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AAFB5; /* jl: less (signed <) */

loc_000AAFA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAFB5; /* je: equal / zero */

loc_000AAFA4: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAFB0; /* je: equal / zero */

loc_000AAFAB: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_000AAFB0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AB02D;

loc_000AAFB5: ;
    ecx = 0xC0000011u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB025; /* jne: not equal / not zero */

loc_000AAFBE: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AAFC7; /* je: equal / zero */

loc_000AAFC5: ;
    MEM32(eax) = ebx;

loc_000AAFC7: ;
    PUSH32(esp, ecx);
    goto loc_000AB026;

loc_000AAFCA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB78); PUSH32(esp, 0x000AAFE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAFDBu); } /* indirect call */
    }

loc_000AAFE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AAFFA; /* jne: not equal / not zero */

loc_000AAFE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB60); PUSH32(esp, 0x000AAFF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AAFEDu); } /* indirect call */
    }

loc_000AAFF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AB005; /* jl: less (signed <) */

loc_000AAFF7: ;
    eax = MEM32(ebp + -8);

loc_000AAFFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AB005; /* jl: less (signed <) */

loc_000AAFFE: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_000AAFB0;

loc_000AB005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000011u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000011u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB010; /* jne: not equal / not zero */

loc_000AB00C: ;
    MEM32(edi) = ebx;
    goto loc_000AAFB0;

loc_000AB010: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB025; /* jne: not equal / not zero */

loc_000AB020: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_000AB025: ;
    PUSH32(esp, eax);

loc_000AB026: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB02Bu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AB02B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AB02D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AB034
 * Original: 0x000AB034 - 0x000AB10A (214 bytes, 90 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB034(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AB034: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB048; /* je: equal / zero */

loc_000AB046: ;
    MEM32(edi) = ebx;

loc_000AB048: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB0AB; /* je: equal / zero */

loc_000AB04F: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB7C); PUSH32(esp, 0x000AB089u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB083u); } /* indirect call */
    }

loc_000AB089: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB0FB; /* je: equal / zero */

loc_000AB096: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB0FB; /* je: equal / zero */

loc_000AB09A: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB0A6; /* je: equal / zero */

loc_000AB0A1: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_000AB0A6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AB103;

loc_000AB0AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB7C); PUSH32(esp, 0x000AB0C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB0BCu); } /* indirect call */
    }

loc_000AB0C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB0DB; /* jne: not equal / not zero */

loc_000AB0C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB60); PUSH32(esp, 0x000AB0D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB0CEu); } /* indirect call */
    }

loc_000AB0D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AB0E6; /* jl: less (signed <) */

loc_000AB0D8: ;
    eax = MEM32(ebp + -8);

loc_000AB0DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AB0E6; /* jl: less (signed <) */

loc_000AB0DF: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_000AB0A6;

loc_000AB0E6: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB0FB; /* jne: not equal / not zero */

loc_000AB0F6: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_000AB0FB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB101u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AB101: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AB103: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AB10A
 * Original: 0x000AB10A - 0x000AB1B1 (167 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB10A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB10A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BB8C));
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x000AB127u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB121u); } /* indirect call */
    }

loc_000AB127: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AB133; /* jge: greater or equal (signed >=) */

loc_000AB12B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB131u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AB131: ;
    goto loc_000AB1AA;

loc_000AB133: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB84); PUSH32(esp, 0x000AB149u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB143u); } /* indirect call */
    }

loc_000AB149: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AB160; /* jge: greater or equal (signed >=) */

loc_000AB14F: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x000AB158u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB152u); } /* indirect call */
    }

loc_000AB158: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB15Eu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AB15E: ;
    goto loc_000AB1A9;

loc_000AB160: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB196; /* jne: not equal / not zero */

loc_000AB166: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58544146) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x58544146 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB183; /* jne: not equal / not zero */

loc_000AB16F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB17F; /* jne: not equal / not zero */

loc_000AB17A: ;
    esi = MEM32(eax + 0x1C);
    goto loc_000AB1A0;

loc_000AB17F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AB1A0;

loc_000AB183: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58464447) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x58464447 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB196; /* jne: not equal / not zero */

loc_000AB18C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    esi = MEM32(eax);
    goto loc_000AB1A0;

loc_000AB196: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB1A0u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AB1A0: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x000AB1A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB1A3u); } /* indirect call */
    }

loc_000AB1A9: ;
    POP32(esp, edi);

loc_000AB1AA: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AB1B1
 * Original: 0x000AB1B1 - 0x000AB1EC (59 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB1B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB1B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB1C2u); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_000AB1C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB1E1; /* je: equal / zero */

loc_000AB1C6: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB1D2; /* je: equal / zero */

loc_000AB1CD: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_000AB1D2: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB1E5; /* jne: not equal / not zero */

loc_000AB1D8: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB1DFu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AB1DF: ;
    goto loc_000AB1E5;

loc_000AB1E1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000AB1E5: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AB1EC
 * Original: 0x000AB1EC - 0x000AB200 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB1EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB1EC: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AB1FA; /* jg: greater (signed >) */

loc_000AB1F5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000AB1FD;

loc_000AB1FA: ;
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x37;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AB1FD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AB200
 * Original: 0x000AB200 - 0x000AB292 (146 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AB200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB25D; /* je: equal / zero */

loc_000AB21D: ;
    edi = eax;

loc_000AB21F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB231u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000AB231: ;
    ecx = eax;
    eax = ZX16(LO16(edi));
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFF);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFC5u);
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB24Bu); RECOMP_ABI_CALL(0x00152850u, sub_00152850); /* call 0x00152850 */

loc_000AB24B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(esi));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000AB21F; /* jne: not equal / not zero */

loc_000AB25D: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xB);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AB265: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB272u); RECOMP_ABI_CALL(0x00152830u, sub_00152830); /* call 0x00152830 */

loc_000AB272: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB27Bu); RECOMP_ABI_CALL(0x000AB1ECu, sub_000AB1EC); /* call 0x000AB1EC */

loc_000AB27B: ;
    MEM8(esi + edi) = LO8(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000AB265; /* jle: less or equal (signed <=) */

loc_000AB287: ;
    MEM8(edi + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AB292
 * Original: 0x000AB292 - 0x000AB2DA (72 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB292(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB292: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB2A9; /* je: equal / zero */

loc_000AB29E: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB2A9u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_000AB2A9: ;
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    eax = ebp + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB2BCu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_000AB2BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB2C6; /* je: equal / zero */

loc_000AB2C0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB2D2; /* je: equal / zero */

loc_000AB2C6: ;
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0xFEFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xE), 0xFEFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB2D2; /* je: equal / zero */

loc_000AB2CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AB2D5;

loc_000AB2D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AB2D5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AB2DA
 * Original: 0x000AB2DA - 0x000AB45D (387 bytes, 135 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB2DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB2DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = esi;
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB303u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_000AB303: ;
    POP32(esp, ecx);
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -24) = LO16(esi);

loc_000AB30B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB337; /* jne: not equal / not zero */

loc_000AB312: ;
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB326u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_000AB326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB453; /* je: equal / zero */

loc_000AB32E: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB453; /* je: equal / zero */

loc_000AB337: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -304;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx + eax * 2;
    eax = ebp + -304;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB3B2; /* je: equal / zero */

loc_000AB357: ;
    PUSH32(esp, 0x281588);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB362u); RECOMP_ABI_CALL(0x00152902u, sub_00152902); /* call 0x00152902 */

loc_000AB362: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB30B; /* je: equal / zero */

loc_000AB375: ;
    ecx = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000AB3AB; /* jae: above or equal (unsigned >=) */

loc_000AB380: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx;
    eax = ebp + eax + -304;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB395u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000AB395: ;
    edi = ebp + esi + -304;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x8C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = eax;

loc_000AB3AB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AB30B;

loc_000AB3B2: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB3BBu); RECOMP_ABI_CALL(0x00152902u, sub_00152902); /* call 0x00152902 */

loc_000AB3BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB3FA; /* je: equal / zero */

loc_000AB3C1: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ecx + eax)) & 0xFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax), 0x3D (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB3FA; /* jne: not equal / not zero */

loc_000AB3CD: ;
    edi = eax + ecx + 2;
    PUSH32(esp, 0x281588);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB3DFu); RECOMP_ABI_CALL(0x00152902u, sub_00152902); /* call 0x00152902 */

loc_000AB3DF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000AB407; /* jne: not equal / not zero */

loc_000AB3E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    goto loc_000AB30B;

loc_000AB3FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;
    MEM32(ebp + -8) = eax;
    goto loc_000AB30B;

loc_000AB407: ;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AB417; /* jl: less (signed <) */

loc_000AB415: ;
    edi = eax;

loc_000AB417: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB423u); RECOMP_ABI_CALL(0x001528C5u, sub_001528C5); /* call 0x001528C5 */

loc_000AB423: ;
    eax = MEM32(ebp + 0x10);
    MEM16(eax + edi * 2) = MEM16(eax + edi * 2) & 0;
    _fa = (uint32_t)(MEM16(eax + edi * 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = ebp + -304;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000AB44C; /* jae: above or equal (unsigned >=) */

loc_000AB43D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB44Cu); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_000AB44C: ;
    MEM32(ebp + -16) = 1;

loc_000AB453: ;
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AB45D
 * Original: 0x000AB45D - 0x000AB55E (257 bytes, 90 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB45D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB45D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x10 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB478; /* jne: not equal / not zero */

loc_000AB471: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AB559;

loc_000AB478: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    eax = edi;
    ecx = eax + 1;

loc_000AB482: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB482; /* jne: not equal / not zero */

loc_000AB489: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    edx = esi + 0x140;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB496: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(edx + ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB496; /* jne: not equal / not zero */

loc_000AB4A0: ;
    edx = MEM32(ebp + 0x10);
    ecx = esi + edx + 0x140;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB4AC: ;
    SET_LO8(ebx, MEM8(edi));
    MEM8(ecx + edi) = LO8(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB4AC; /* jne: not equal / not zero */

loc_000AB4B6: ;
    edi = eax + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x103 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000AB4D3; /* jae: above or equal (unsigned >=) */

loc_000AB4C1: ;
    ecx = eax + esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x140) = 0x5C;
    MEM8(ecx + 0x141) = LO8(ebx);

loc_000AB4D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AB554; /* jge: greater or equal (signed >=) */

loc_000AB4DB: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax + edx;
    ecx = 0x2814D0;
    eax = ebx + 0x140;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB4ED: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB4ED; /* jne: not equal / not zero */

loc_000AB4F7: ;
    PUSH32(esp, 0);
    edi = 0x80;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB516u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000AB516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB54D; /* je: equal / zero */

loc_000AB51E: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB526u); RECOMP_ABI_CALL(0x000AB292u, sub_000AB292); /* call 0x000AB292 */

loc_000AB526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB545; /* je: equal / zero */

loc_000AB52D: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x244;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x281538);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB542u); RECOMP_ABI_CALL(0x000AB2DAu, sub_000AB2DA); /* call 0x000AB2DA */

loc_000AB542: ;
    MEM32(ebp + -4) = eax;

loc_000AB545: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB54Du); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000AB54D: ;
    MEM8(ebx + 0x141) = 0;

loc_000AB554: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000AB559: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AB55E
 * Original: 0x000AB55E - 0x000AB5DE (128 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB55E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB55E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80100000u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB57Fu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000AB57F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5CF; /* je: equal / zero */

loc_000AB586: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB58Eu); RECOMP_ABI_CALL(0x000AB292u, sub_000AB292); /* call 0x000AB292 */

loc_000AB58E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5C2; /* je: equal / zero */

loc_000AB592: ;
    PUSH32(esp, 0x80);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0x281538);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB5A9u); RECOMP_ABI_CALL(0x000AB2DAu, sub_000AB2DA); /* call 0x000AB2DA */

loc_000AB5A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5C2; /* je: equal / zero */

loc_000AB5AD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -256;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB5BCu); RECOMP_ABI_CALL(0x001524B3u, sub_001524B3); /* call 0x001524B3 */

loc_000AB5BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5C7; /* je: equal / zero */

loc_000AB5C2: ;
    esi = 0x491;

loc_000AB5C7: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB5CDu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000AB5CD: ;
    goto loc_000AB5D6;

loc_000AB5CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB5D4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000AB5D4: ;
    esi = eax;

loc_000AB5D6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AB5DE
 * Original: 0x000AB5DE - 0x000AB63A (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB5DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB5DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB5FFu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000AB5FF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB635; /* je: equal / zero */

loc_000AB606: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x000AB61Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB615u); } /* indirect call */
    }

loc_000AB61B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x000AB62Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB628u); } /* indirect call */
    }

loc_000AB62E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB634u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000AB634: ;
    POP32(esp, edi);

loc_000AB635: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AB63A
 * Original: 0x000AB63A - 0x000AB74A (272 bytes, 91 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB63A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB63A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x258) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x258;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = ebp + -296;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB64E: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB64E; /* jne: not equal / not zero */

loc_000AB658: ;
    eax = ebp + -296;
    edx = eax + 1;

loc_000AB661: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB661; /* jne: not equal / not zero */

loc_000AB668: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0xF7;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax = ebp + eax + -296;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB682u); RECOMP_ABI_CALL(0x000AB200u, sub_000AB200); /* call 0x000AB200 */

loc_000AB682: ;
    eax = ebp + -296;
    ecx = eax + 1;

loc_000AB68B: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB68B; /* jne: not equal / not zero */

loc_000AB692: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 3 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000AB6D5; /* jne: not equal / not zero */

loc_000AB69F: ;
    esi = ebp + edi + -296;
    eax = 0x2814D0;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB6AF: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB6AF; /* jne: not equal / not zero */

loc_000AB6B9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB6C8u); RECOMP_ABI_CALL(0x000AB55Eu, sub_000AB55E); /* call 0x000AB55E */

loc_000AB6C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi) = 0;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000AB84D(); return; } /* je: equal / zero */

loc_000AB6D3: ;
    g_seh_ebp = ebp; sub_000AB74A(); return; /* tail jmp 0x000AB74A */

loc_000AB6D5: ;
    PUSH32(esp, 0);
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB6E3u); RECOMP_ABI_CALL(0x000AE014u, sub_000AE014); /* call 0x000AE014 */

loc_000AB6E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000AB756(); return; } /* jne: not equal / not zero */

loc_000AB6E7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB6ECu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000AB6EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    ebx = 0x491;
    if (CMP_NE(_fa, _fb)) goto loc_000AB739; /* jne: not equal / not zero */

loc_000AB6FB: ;
    esi = ebp + edi + -296;
    eax = 0x2814D0;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB70B: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB70B; /* jne: not equal / not zero */

loc_000AB715: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB724u); RECOMP_ABI_CALL(0x000AB55Eu, sub_000AB55E); /* call 0x000AB55E */

loc_000AB724: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esi) = 0;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000AB751(); return; } /* jne: not equal / not zero */

loc_000AB72D: ;
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB739u); RECOMP_ABI_CALL(0x000AB5DEu, sub_000AB5DE); /* call 0x000AB5DE */

loc_000AB739: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB747; /* je: equal / zero */

loc_000AB73F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000AB84D(); return; } /* je: equal / zero */

loc_000AB747: ;
    eax = MEM32(ebp + 0x14);

    g_seh_ebp = ebp; sub_000AB74A(); return; /* fallthrough 0x000AB74A */

}

/**
 * sub_000AB74A
 * Original: 0x000AB74A - 0x000AB751 (7 bytes, 5 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB74A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB74A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000AB751
 * Original: 0x000AB751 - 0x000AB756 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB751(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB751: ;
    PUSH32(esp, 0x52);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_000AB74A(); return; /* tail jmp 0x000AB74A */

}

/**
 * sub_000AB756
 * Original: 0x000AB756 - 0x000AB89D (327 bytes, 105 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB756(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB756: ;
    esi = ebp + edi + -296;
    eax = 0x2814D0;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB766: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB766; /* jne: not equal / not zero */

loc_000AB770: ;
    eax = ebp + -296;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x000AB781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB77Bu); } /* indirect call */
    }

loc_000AB781: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -28;
    MEM32(ebp + -16) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC0100000u);
    eax = ebp + 8;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -8) = ebx;
    { uint32_t _icall_target = MEM32(0x22BB3C); PUSH32(esp, 0x000AB7C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB7BCu); } /* indirect call */
    }

loc_000AB7C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_000AB7D7; /* jge: greater or equal (signed >=) */

loc_000AB7C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x000AB7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB7CAu); } /* indirect call */
    }

loc_000AB7D0: ;
    esi = eax;
    goto loc_000AB88A;

loc_000AB7D7: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    eax = 0x2815D0;
    if (TEST_NZ(_fa, _fb)) goto loc_000AB7E6; /* jne: not equal / not zero */

loc_000AB7E1: ;
    eax = 0x2815B0;

loc_000AB7E6: ;
    PUSH32(esp, 0x281590);
    PUSH32(esp, 0x281588);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x281538);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, eax);
    eax = ebp + -600;
    PUSH32(esp, 0x98);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB811u); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_000AB811: ;
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB81Du); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_000AB81D: ;
    esi = eax;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa == 0)) goto loc_000AB845; /* je: equal / zero */

loc_000AB826: ;
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000AB83Cu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_000AB83C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB87B; /* je: equal / zero */

loc_000AB840: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000AB826; /* jne: not equal / not zero */

loc_000AB845: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x000AB84Du); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000AB84D: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB874; /* je: equal / zero */

loc_000AB854: ;
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB865u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000AB865: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000AB874; /* jae: above or equal (unsigned >=) */

loc_000AB86A: ;
    eax = edi + esi;
    MEM8(eax) = 0x5C;
    MEM8(eax + 1) = 0;

loc_000AB874: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000AB74A(); return; /* tail jmp 0x000AB74A */

loc_000AB87B: ;
    PUSH32(esp, 0x000AB880u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000AB880: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0x000AB88Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000AB88A: ;
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB896u); RECOMP_ABI_CALL(0x000AE080u, sub_000AE080); /* call 0x000AE080 */

loc_000AB896: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000AB74A(); return; /* tail jmp 0x000AB74A */

}

/**
 * sub_000AB84D
 * Original: 0x000AB84D - 0x000AB89D (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB84D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB84D: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB874; /* je: equal / zero */

loc_000AB854: ;
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB865u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000AB865: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000AB874; /* jae: above or equal (unsigned >=) */

loc_000AB86A: ;
    eax = edi + esi;
    MEM8(eax) = 0x5C;
    MEM8(eax + 1) = 0;

loc_000AB874: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000AB74A(); return; /* tail jmp 0x000AB74A */

    PUSH32(esp, 0x000AB880u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000AB880: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0x000AB88Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000AB88A: ;
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB896u); RECOMP_ABI_CALL(0x000AE080u, sub_000AE080); /* call 0x000AE080 */

loc_000AB896: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000AB74A(); return; /* tail jmp 0x000AB74A */

}

/**
 * sub_000AB89D
 * Original: 0x000AB89D - 0x000AB96D (208 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB89D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB89D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x2815F8;
    edi = ebp + -324;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -324;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edx = eax + 1;

loc_000AB8BE: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB8BE; /* jne: not equal / not zero */

loc_000AB8C5: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ebp + eax + -324;
    edx = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB8D6: ;
    SET_LO8(eax, MEM8(ecx));
    MEM8(edx + ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB8D6; /* jne: not equal / not zero */

loc_000AB8E0: ;
    eax = ebp + -324;
    edx = eax + 1;

loc_000AB8E9: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB8E9; /* jne: not equal / not zero */

loc_000AB8F0: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x137;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax = ebp + eax + -324;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB90Au); RECOMP_ABI_CALL(0x000AB200u, sub_000AB200); /* call 0x000AB200 */

loc_000AB90A: ;
    eax = ebp + -324;
    ecx = eax + 1;

loc_000AB913: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB913; /* jne: not equal / not zero */

loc_000AB91A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    esi = ebp + edi + -324;
    eax = 0x2814D0;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB92E: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB92E; /* jne: not equal / not zero */

loc_000AB938: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB941u); RECOMP_ABI_CALL(0x000AB55Eu, sub_000AB55E); /* call 0x000AB55E */

loc_000AB941: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi) = 0;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000AB967; /* jne: not equal / not zero */

loc_000AB949: ;
    PUSH32(esp, eax);
    MEM8(ebp + edi + -323) = LO8(eax);
    eax = ebp + -324;
    PUSH32(esp, eax);
    MEM8(esi) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB960u); RECOMP_ABI_CALL(0x000AFA79u, sub_000AFA79); /* call 0x000AFA79 */

loc_000AB960: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x000AB967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AB961u); } /* indirect call */
    }

loc_000AB967: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AB96D
 * Original: 0x000AB96D - 0x000ABA77 (266 bytes, 98 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AB96D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB96D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = ebp + -260;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB981: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB981; /* jne: not equal / not zero */

loc_000AB98B: ;
    eax = ebp + -260;
    edx = eax + 1;

loc_000AB994: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB994; /* jne: not equal / not zero */

loc_000AB99B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = 0x281558;
    ecx = ebp + ebx + -260;
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000AB9B0: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB9B0; /* jne: not equal / not zero */

loc_000AB9BA: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB9CAu); RECOMP_ABI_CALL(0x000ADEB6u, sub_000ADEB6); /* call 0x000ADEB6 */

loc_000AB9CA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABA6E; /* je: equal / zero */

loc_000AB9D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB9DFu); RECOMP_ABI_CALL(0x000AB45Du, sub_000AB45D); /* call 0x000AB45D */

loc_000AB9DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABA23; /* jne: not equal / not zero */

loc_000AB9E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB9EAu); RECOMP_ABI_CALL(0x000ADFC3u, sub_000ADFC3); /* call 0x000ADFC3 */

loc_000AB9EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000ABA13; /* je: equal / zero */

loc_000AB9F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB9FBu); RECOMP_ABI_CALL(0x000AB45Du, sub_000AB45D); /* call 0x000AB45D */

loc_000AB9FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABA0D; /* jne: not equal / not zero */

loc_000AB9FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA06u); RECOMP_ABI_CALL(0x000ADFC3u, sub_000ADFC3); /* call 0x000ADFC3 */

loc_000ABA06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000AB9F1; /* jne: not equal / not zero */

loc_000ABA0D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABA23; /* jne: not equal / not zero */

loc_000ABA13: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA19u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000ABA19: ;
    PUSH32(esp, 0x12);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA23u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000ABA23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABA6E; /* je: equal / zero */

loc_000ABA28: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x110);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA37u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_000ABA37: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABA5E; /* je: equal / zero */

loc_000ABA3D: ;
    PUSH32(esp, 0x104);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0xC;
    PUSH32(esp, eax);
    MEM32(esi) = 0x53425645;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA5Au); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000ABA5A: ;
    edi = esi;
    goto loc_000ABA6E;

loc_000ABA5E: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA64u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000ABA64: ;
    PUSH32(esp, 8);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABA6Eu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000ABA6E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABA77
 * Original: 0x000ABA77 - 0x000ABABE (71 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABA77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABA77: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x000ABA89u); RECOMP_ABI_CALL(0x000ADFC3u, sub_000ADFC3); /* call 0x000ADFC3 */

loc_000ABA89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABAB7; /* je: equal / zero */

loc_000ABA8F: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xC;

loc_000ABA93: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x000ABAA0u); RECOMP_ABI_CALL(0x000AB45Du, sub_000AB45D); /* call 0x000AB45D */

loc_000ABAA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABAB6; /* jne: not equal / not zero */

loc_000ABAA4: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x000ABAB0u); RECOMP_ABI_CALL(0x000ADFC3u, sub_000ADFC3); /* call 0x000ADFC3 */

loc_000ABAB0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABA93; /* jne: not equal / not zero */

loc_000ABAB6: ;
    POP32(esp, ebx);

loc_000ABAB7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABABE
 * Original: 0x000ABABE - 0x000ABB14 (86 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABABE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABABE: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x434F4E54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x434F4E54 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000ABAFC; /* je: equal / zero */

loc_000ABACF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E49434B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4E49434B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABAEC; /* je: equal / zero */

loc_000ABAD7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53425645) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x53425645 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABAFC; /* je: equal / zero */

loc_000ABADF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE4BEA00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xBE4BEA00u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABB10; /* jne: not equal / not zero */

loc_000ABAE7: ;
    esi = MEM32(ecx + 0xC);
    goto loc_000ABAFF;

loc_000ABAEC: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ABAF7u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000ABAF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000ABB10;

loc_000ABAFC: ;
    esi = MEM32(ecx + 4);

loc_000ABAFF: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ABB0Au); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000ABB0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ABB10u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000ABB10: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ABB14
 * Original: 0x000ABB14 - 0x000ABB76 (98 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ABB14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABB14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x40 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ABB27; /* jbe: below or equal (unsigned <=) */

loc_000ABB20: ;
    MEM32(ebp + 0xC) = 0x40;

loc_000ABB27: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp + -64;
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
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_000ABB4E: ;
    MEM32(ebp + eax * 4 + -64) = MEM32(ebp + eax * 4 + -64) ^ 0x36363636;
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000ABB4E; /* jb: below (unsigned <) */

loc_000ABB5C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABB64u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_000ABB64: ;
    PUSH32(esp, 0x40);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABB72u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_000ABB72: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ABB76
 * Original: 0x000ABB76 - 0x000ABB7B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABB76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABB76: ;
    g_seh_ebp = ebp; sub_00105778(); return; /* tail jmp 0x00105778 */

}

/**
 * sub_000ABB7B
 * Original: 0x000ABB7B - 0x000ABBED (114 bytes, 48 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ABB7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABB7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ABB8C; /* jbe: below or equal (unsigned <=) */

loc_000ABB89: ;
    MEM32(ebp + 0x10) = eax;

loc_000ABB8C: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -84;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp + -84;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000ABBB1: ;
    MEM32(ebp + eax * 4 + -84) = MEM32(ebp + eax * 4 + -84) ^ 0x5C5C5C5C;
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000ABBB1; /* jb: below (unsigned <) */

loc_000ABBBF: ;
    esi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABBCCu); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_000ABBCC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABBD2u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_000ABBD2: ;
    PUSH32(esp, 0x54);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABBDEu); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_000ABBDE: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABBE7u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_000ABBE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000ABBED
 * Original: 0x000ABBED - 0x000ABC62 (117 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ABBED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABBED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x22BB9C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000ABC02: ;
    SET_LO8(eax, LO8(eax) | MEM8(ecx + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ABC02; /* jl: less (signed <) */

loc_000ABC0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABC33; /* jne: not equal / not zero */

loc_000ABC0F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    eax = ebp + -264;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABC2Du); RECOMP_ABI_CALL(0x000AEE7Eu, sub_000AEE7E); /* call 0x000AEE7E */

loc_000ABC2D: ;
    esi = ebp + -210;

loc_000ABC33: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABC42u); RECOMP_ABI_CALL(0x000ABB14u, sub_000ABB14); /* call 0x000ABB14 */

loc_000ABC42: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABC4Du); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_000ABC4D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABC59u); RECOMP_ABI_CALL(0x000ABB7Bu, sub_000ABB7B); /* call 0x000ABB7B */

loc_000ABC59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ABC62
 * Original: 0x000ABC62 - 0x000ABCE2 (128 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABC62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABC62: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x10118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x000ABC77u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_000ABC77: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABC81; /* jne: not equal / not zero */

loc_000ABC7D: ;
    PUSH32(esp, 8);
    goto loc_000ABCAF;

loc_000ABC81: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABCC4; /* je: equal / zero */

loc_000ABC90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x5C;

loc_000ABC95: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABCAD; /* je: equal / zero */

loc_000ABC9B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABCA8; /* je: equal / zero */

loc_000ABC9F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000ABC95; /* jb: below (unsigned <) */

loc_000ABCA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000ABCB9; /* jb: below (unsigned <) */

loc_000ABCAD: ;
    PUSH32(esp, 5);

loc_000ABCAF: ;
    PUSH32(esp, 0x000ABCB4u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000ABCB4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000ABCDC;

loc_000ABCB9: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x22BBA4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x22BBA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000ABCC9;

loc_000ABCC4: ;
    eax = MEM32(0x22BBA0);

loc_000ABCC9: ;
    MEM32(edi + 4) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0x000ABCDAu); RECOMP_ABI_CALL(0x000ABB14u, sub_000ABB14); /* call 0x000ABB14 */

loc_000ABCDA: ;
    eax = edi;

loc_000ABCDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABCE2
 * Original: 0x000ABCE2 - 0x000ABCFC (26 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000ABCE2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABCE2: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABCF7u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_000ABCF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ABCFC
 * Original: 0x000ABCFC - 0x000ABD5E (98 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ABCFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABCFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABD3F; /* je: equal / zero */

loc_000ABD16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABD1D; /* je: equal / zero */

loc_000ABD1A: ;
    eax = ebp + -20;

loc_000ABD1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    eax = edi + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABD2Cu); RECOMP_ABI_CALL(0x000ABB7Bu, sub_000ABB7B); /* call 0x000ABB7B */

loc_000ABD2C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABD3F; /* je: equal / zero */

loc_000ABD30: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABD3Du); RECOMP_ABI_CALL(0x000ABBEDu, sub_000ABBED); /* call 0x000ABBED */

loc_000ABD3D: ;
    ebx = eax;

loc_000ABD3F: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABD4Au); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000ABD4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000ABD55; /* je: equal / zero */

loc_000ABD51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000ABD5A;

loc_000ABD55: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABD5Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000ABD5A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABD5E
 * Original: 0x000ABD5E - 0x000ABD94 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABD5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABD5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x000ABD6Bu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_000ABD6B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABD7D; /* jne: not equal / not zero */

loc_000ABD71: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000ABD78u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000ABD78: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ABD7D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 8;
    PUSH32(esp, eax);
    MEM32(esi) = 2;
    PUSH32(esp, 0x000ABD90u); RECOMP_ABI_CALL(0x0010577Eu, sub_0010577E); /* call 0x0010577E */

loc_000ABD90: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABD94
 * Original: 0x000ABD94 - 0x000ABDAE (26 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000ABD94(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABD94: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABDA9u); RECOMP_ABI_CALL(0x00105778u, sub_00105778); /* call 0x00105778 */

loc_000ABDA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ABDAE
 * Original: 0x000ABDAE - 0x000ABDD8 (42 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABDAE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABDAE: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000ABDC7; /* je: equal / zero */

loc_000ABDBA: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABDC7u); RECOMP_ABI_CALL(0x00105784u, sub_00105784); /* call 0x00105784 */

loc_000ABDC7: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ABDD2u); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000ABDD2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABDD8
 * Original: 0x000ABDD8 - 0x000ABDF9 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000ABDD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABDD8: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ABDF0; /* jbe: below or equal (unsigned <=) */

loc_000ABDE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABDF0; /* je: equal / zero */

loc_000ABDE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABDF4; /* jne: not equal / not zero */

loc_000ABDEB: ;
    PUSH32(esp, 0x64);

loc_000ABDED: ;
    POP32(esp, eax);
    goto loc_000ABDF6;

loc_000ABDF0: ;
    PUSH32(esp, 0x14);
    goto loc_000ABDED;

loc_000ABDF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000ABDF6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ABDF9
 * Original: 0x000ABDF9 - 0x000ABE3A (65 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABDF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABDF9: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ABE21; /* jbe: below or equal (unsigned <=) */

loc_000ABE02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABE1A; /* je: equal / zero */

loc_000ABE07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABE1A; /* je: equal / zero */

loc_000ABE0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABE2D; /* jne: not equal / not zero */

loc_000ABE11: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x96C918); PUSH32(esp, 0x000ABE18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABE12u); } /* indirect call */
    }

loc_000ABE18: ;
    goto loc_000ABE37;

loc_000ABE1A: ;
    PUSH32(esp, 0x000ABE1Fu); RECOMP_ABI_CALL(0x000ABD5Eu, sub_000ABD5E); /* call 0x000ABD5E */

loc_000ABE1F: ;
    goto loc_000ABE37;

loc_000ABE21: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABE2Bu); RECOMP_ABI_CALL(0x000ABC62u, sub_000ABC62); /* call 0x000ABC62 */

loc_000ABE2B: ;
    goto loc_000ABE37;

loc_000ABE2D: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x000ABE34u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000ABE34: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000ABE37: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABE3A
 * Original: 0x000ABE3A - 0x000ABE4E (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABE3A(void)
{

loc_000ABE3A: ;
    eax = MEM32(0x10118);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x000ABE4Bu); RECOMP_ABI_CALL(0x000ABDF9u, sub_000ABDF9); /* call 0x000ABDF9 */

loc_000ABE4B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ABE4E
 * Original: 0x000ABE4E - 0x000ABE9C (78 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ABE4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABE4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ABE87; /* jbe: below or equal (unsigned <=) */

loc_000ABE5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABE79; /* je: equal / zero */

loc_000ABE60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABE79; /* je: equal / zero */

loc_000ABE65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABE95; /* jne: not equal / not zero */

loc_000ABE6A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x96C91C); PUSH32(esp, 0x000ABE77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABE71u); } /* indirect call */
    }

loc_000ABE77: ;
    goto loc_000ABE98;

loc_000ABE79: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABE85u); RECOMP_ABI_CALL(0x000ABD94u, sub_000ABD94); /* call 0x000ABD94 */

loc_000ABE85: ;
    goto loc_000ABE98;

loc_000ABE87: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABE93u); RECOMP_ABI_CALL(0x000ABCE2u, sub_000ABCE2); /* call 0x000ABCE2 */

loc_000ABE93: ;
    goto loc_000ABE98;

loc_000ABE95: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_000ABE98: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ABE9C
 * Original: 0x000ABE9C - 0x000ABEE1 (69 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABE9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABE9C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ABECF; /* jbe: below or equal (unsigned <=) */

loc_000ABEA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABEC3; /* je: equal / zero */

loc_000ABEAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABEC3; /* je: equal / zero */

loc_000ABEB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABEDB; /* jne: not equal / not zero */

loc_000ABEB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x96C920); PUSH32(esp, 0x000ABEC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABEBBu); } /* indirect call */
    }

loc_000ABEC1: ;
    goto loc_000ABEDE;

loc_000ABEC3: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ABECDu); RECOMP_ABI_CALL(0x000ABDAEu, sub_000ABDAE); /* call 0x000ABDAE */

loc_000ABECD: ;
    goto loc_000ABEDE;

loc_000ABECF: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ABED9u); RECOMP_ABI_CALL(0x000ABCFCu, sub_000ABCFC); /* call 0x000ABCFC */

loc_000ABED9: ;
    goto loc_000ABEDE;

loc_000ABEDB: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_000ABEDE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABEE1
 * Original: 0x000ABEE1 - 0x000ABFD5 (244 bytes, 91 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ABEE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABEE1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x000ABEF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABEEEu); } /* indirect call */
    }

loc_000ABEF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x000ABF26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABF20u); } /* indirect call */
    }

loc_000ABF26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ABF48; /* jge: greater or equal (signed >=) */

loc_000ABF2A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF30u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000ABF30: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF35u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000ABF35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABF41; /* jne: not equal / not zero */

loc_000ABF3A: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF41u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000ABF41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000ABFD1;

loc_000ABF48: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BB64); PUSH32(esp, 0x000ABF5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABF58u); } /* indirect call */
    }

loc_000ABF5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000ABF69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABF63u); } /* indirect call */
    }

loc_000ABF69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ABF77; /* jge: greater or equal (signed >=) */

loc_000ABF6D: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF73u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000ABF73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000ABFD0;

loc_000ABF77: ;
    esi = MEM32(ebp + -36);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF8Fu); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000ABF8F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + -52));
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABFA1u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_000ABFA1: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABFB0; /* je: equal / zero */

loc_000ABFA8: ;
    esi = MEM32(ebp + -4);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = esi;

loc_000ABFB0: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABFBC; /* je: equal / zero */

loc_000ABFB7: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;

loc_000ABFBC: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABFCB; /* je: equal / zero */

loc_000ABFC3: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_000ABFCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);

loc_000ABFD0: ;
    POP32(esp, esi);

loc_000ABFD1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000ABFD5
 * Original: 0x000ABFD5 - 0x000AC044 (111 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABFD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABFD5: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x281758);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABFE1u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000ABFE1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = ebx;
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = esi;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -68;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x000AC003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ABFFDu); } /* indirect call */
    }

loc_000AC003: ;
    MEM32(ebp + -80) = 0xFFFFFFFDu;
    MEM32(ebp + -72) = 0x40;
    eax = ebp + -68;
    MEM32(ebp + -76) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -44) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + -32;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x000AC03Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC037u); } /* indirect call */
    }

loc_000AC03D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000AC04E(); return; } /* jge: greater or equal (signed >=) */

loc_000AC043: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_000AC044(); return; /* fallthrough 0x000AC044 */

}

/**
 * sub_000AC044
 * Original: 0x000AC044 - 0x000AC04E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC044: ;
    PUSH32(esp, 0x000AC049u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC049: ;
    g_seh_ebp = ebp; sub_000AC1FA(); return; /* tail jmp 0x000AC1FA */

}

/**
 * sub_000AC04E
 * Original: 0x000AC04E - 0x000AC1D4 (390 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC04E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC04E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC05D; /* jne: not equal / not zero */

loc_000AC053: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC08F; /* je: equal / zero */

loc_000AC058: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC065; /* je: equal / zero */

loc_000AC05D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = esi;
    goto loc_000AC06C;

loc_000AC065: ;
    MEM32(ebp + -36) = 0x11C;

loc_000AC06C: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, 0x000AC079u); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_000AC079: ;
    ebx = eax;
    MEM32(ebp + -44) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC08D; /* jne: not equal / not zero */

loc_000AC082: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -32));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AC08Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC085u); } /* indirect call */
    }

loc_000AC08B: ;
    goto loc_000AC0DC;

loc_000AC08D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AC08F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC0A3; /* jne: not equal / not zero */

loc_000AC094: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC09E; /* jne: not equal / not zero */

loc_000AC099: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC0E6; /* je: equal / zero */

loc_000AC09E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC0AB; /* je: equal / zero */

loc_000AC0A3: ;
    esi = MEM32(ebp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000AC0B0;

loc_000AC0AB: ;
    esi = 0x114;

loc_000AC0B0: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AC0BBu); RECOMP_ABI_CALL(0x000AFAE8u, sub_000AFAE8); /* call 0x000AFAE8 */

loc_000AC0BB: ;
    edi = eax;
    MEM32(ebp + -40) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC0E9; /* jne: not equal / not zero */

loc_000AC0C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -32));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AC0CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC0C7u); } /* indirect call */
    }

loc_000AC0CD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC0DC; /* je: equal / zero */

loc_000AC0D1: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000AC0DCu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000AC0DC: ;
    PUSH32(esp, 0xC0000017u);
    g_seh_ebp = ebp; sub_000AC044(); return; /* tail jmp 0x000AC044 */

loc_000AC0E6: ;
    esi = MEM32(ebp + -52);

loc_000AC0E9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC10B; /* je: equal / zero */

loc_000AC0F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, ebx);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -32));
    { uint32_t _icall_target = MEM32(0x22BB64); PUSH32(esp, 0x000AC104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC0FEu); } /* indirect call */
    }

loc_000AC104: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC127; /* jl: less (signed <) */

loc_000AC10B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC136; /* je: equal / zero */

loc_000AC10F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -32));
    { uint32_t _icall_target = MEM32(0x22BB64); PUSH32(esp, 0x000AC120u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC11Au); } /* indirect call */
    }

loc_000AC120: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC136; /* jge: greater or equal (signed >=) */

loc_000AC127: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AC12Du); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC12D: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000AC1C8;

loc_000AC136: ;
    MEM32(ebp + -4) = 1;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC161; /* je: equal / zero */

loc_000AC144: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000AC17B; /* jae: above or equal (unsigned >=) */

loc_000AC14C: ;
    PUSH32(esp, eax);
    eax = ebx + 0x11;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AC157u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000AC157: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0xC);
    MEM8(esi + eax) = 0;

loc_000AC161: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC16D; /* je: equal / zero */

loc_000AC168: ;
    ecx = MEM32(ebx + 8);
    MEM32(eax) = ecx;

loc_000AC16D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC1A6; /* je: equal / zero */

loc_000AC173: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000AC18C; /* jb: below (unsigned <) */

loc_000AC17B: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000AC182u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_000AC182: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000AC1C8;

loc_000AC18C: ;
    PUSH32(esp, eax);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x000AC199u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000AC199: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp + 0x20);
    MEM8(ecx + eax) = 0;

loc_000AC1A6: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC1B2; /* je: equal / zero */

loc_000AC1AD: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = ecx;

loc_000AC1B2: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC1BD; /* je: equal / zero */

loc_000AC1B9: ;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;

loc_000AC1BD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = 1;

loc_000AC1C8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000AC1D1u); RECOMP_ABI_CALL(0x000AC204u, sub_000AC204); /* call 0x000AC204 */

loc_000AC1D1: ;
    eax = MEM32(ebp + -28);

    g_seh_ebp = ebp; sub_000AC1D4(); return; /* fallthrough 0x000AC1D4 */

}

/**
 * sub_000AC1D4
 * Original: 0x000AC1D4 - 0x000AC1DC (8 bytes, 2 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC1D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC1D4: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x000AC1D9u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_000AC1D9: ;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000AC1DC
 * Original: 0x000AC1DC - 0x000AC1FA (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC1DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC1DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AC1F8u); RECOMP_ABI_CALL(0x00150EDAu, sub_00150EDA); /* call 0x00150EDA */

loc_000AC1F8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_000AC1FA(); return; /* fallthrough 0x000AC1FA */

}

/**
 * sub_000AC1FA
 * Original: 0x000AC1FA - 0x000AC1FE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC1FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC1FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000AC1D4(); return; /* tail jmp 0x000AC1D4 */

}

/**
 * sub_000AC204
 * Original: 0x000AC204 - 0x000AC22C (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC204(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC204: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -32));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AC20Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC207u); } /* indirect call */
    }

loc_000AC20D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC21C; /* je: equal / zero */

loc_000AC211: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000AC21Cu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000AC21C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC22B; /* je: equal / zero */

loc_000AC220: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AC22Bu); RECOMP_ABI_CALL(0x000AFB88u, sub_000AFB88); /* call 0x000AFB88 */

loc_000AC22B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AC22C
 * Original: 0x000AC22C - 0x000AC477 (587 bytes, 189 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AC22C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000AC22C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x22C));
    esp = esp - 0x22C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -8;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -36) = 0x40;
    MEM32(ebp + -40) = 0x281710;
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x000AC26Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC269u); } /* indirect call */
    }

loc_000AC26F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000AC46F; /* jl: less (signed <) */

loc_000AC27A: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -24) = 0x800;
    MEM32(ebp + -20) = esi;
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x000AC2A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC29Eu); } /* indirect call */
    }

loc_000AC2A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000AC466; /* jl: less (signed <) */

loc_000AC2AF: ;
    eax = MEM32(0x22BBA8);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    esi = 0x97315286u;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -556)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -556), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    ebx = 0xAA550000u;
    if (CMP_NE(_fa, _fb)) goto loc_000AC2D9; /* jne: not equal / not zero */

loc_000AC2CB: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AC2D9; /* jne: not equal / not zero */

loc_000AC2D0: ;
    _fa = (uint32_t)(MEM32(ebp + -552)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -552), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC2FB; /* je: equal / zero */

loc_000AC2D9: ;
    ecx = 0x80;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -556;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -556) = esi;
    MEM32(ebp + -552) = 2;
    MEM32(ebp + -52) = ebx;

loc_000AC2FB: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(0x22BBA8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000AC313; /* jbe: below or equal (unsigned <=) */

loc_000AC310: ;
    PUSH32(esp, 0x29);
    POP32(esp, ecx);

loc_000AC313: ;
    edi = ecx + -1;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000AC35B; /* jbe: below or equal (unsigned <=) */

loc_000AC321: ;
    edi = ebp + -548;

loc_000AC327: ;
    ebx = MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AC334; /* jne: not equal / not zero */

loc_000AC32E: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000AC33E; /* jne: not equal / not zero */

loc_000AC334: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000AC327; /* jb: below (unsigned <) */

loc_000AC33C: ;
    goto loc_000AC358;

loc_000AC33E: ;
    edx = eax + eax * 2;
    esi = MEM32(ebp + edx * 4 + -544);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    if ((_fa != 0)) goto loc_000AC3AB; /* jne: not equal / not zero */

loc_000AC358: ;
    edi = MEM32(ebp + -4);

loc_000AC35B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000AC39C; /* jbe: below or equal (unsigned <=) */

loc_000AC363: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -544;

loc_000AC36D: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC37A; /* je: equal / zero */

loc_000AC373: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC385; /* je: equal / zero */

loc_000AC37A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000AC36D; /* jb: below (unsigned <) */

loc_000AC385: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AC390; /* jne: not equal / not zero */

loc_000AC38A: ;
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AC390: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000AC363; /* jb: below (unsigned <) */

loc_000AC398: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000AC3AE; /* jne: not equal / not zero */

loc_000AC39C: ;
    eax = edi + edi * 2;
    esi = MEM32(ebp + eax * 4 + -544);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000AC3AE;

loc_000AC3AB: ;
    edi = MEM32(ebp + -4);

loc_000AC3AE: ;
    eax = ecx + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000AC3B8; /* jb: below (unsigned <) */

loc_000AC3B5: ;
    esi = ecx + 2;

loc_000AC3B8: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = esi;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x2F3848) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000AC3E5; /* jae: above or equal (unsigned >=) */

loc_000AC3CF: ;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = ebp + -536;
    goto loc_000AC3FE;

loc_000AC3E5: ;
    if (CMP_BE(_fa, _fb)) goto loc_000AC40C; /* jbe: below or equal (unsigned <=) */

loc_000AC3E7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + edi * 2;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + eax * 4 + -548;
    PUSH32(esp, ecx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);

loc_000AC3FE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC404u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000AC404: ;
    eax = MEM32(0x2F3848);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AC40C: ;
    ecx = MEM32(ebp + -16);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -548) = ecx;
    eax = MEM32(0x2F3848);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    esi = esi + 0xFFFFFFFDu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -544) = esi;
    eax = MEM32(0x2F3848);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -540) = edx;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x000AC464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC45Eu); } /* indirect call */
    }

loc_000AC464: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000AC466: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AC46Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC469u); } /* indirect call */
    }

loc_000AC46F: ;
    eax = MEM32(ebp + -12);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AC477
 * Original: 0x000AC477 - 0x000AC57C (261 bytes, 97 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AC477(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC477: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC493u); RECOMP_ABI_CALL(0x000AC22Cu, sub_000AC22C); /* call 0x000AC22C */

loc_000AC493: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC56B; /* jl: less (signed <) */

loc_000AC49D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC4AA; /* jne: not equal / not zero */

loc_000AC4A2: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000AC4B1; /* je: equal / zero */

loc_000AC4AA: ;
    MEM32(ebp + 8) = 1;

loc_000AC4B1: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(0x10124);
    PUSH32(esp, 0x2816F0);
    eax = ebp + -276;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x104);
    esi = 0x4000;
    PUSH32(esp, eax);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC4DAu); RECOMP_ABI_CALL(0x001529D0u, sub_001529D0); /* call 0x001529D0 */

loc_000AC4DA: ;
    edi = MEM32(0x22BB40);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x000AC4F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC4EEu); } /* indirect call */
    }

loc_000AC4F0: ;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x000AC4FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC4FBu); } /* indirect call */
    }

loc_000AC4FD: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC516; /* je: equal / zero */

loc_000AC506: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC510u); RECOMP_ABI_CALL(0x000B0289u, sub_000B0289); /* call 0x000B0289 */

loc_000AC510: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC573; /* je: equal / zero */

loc_000AC516: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC520u); RECOMP_ABI_CALL(0x000AFBBCu, sub_000AFBBC); /* call 0x000AFBBC */

loc_000AC520: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC54A; /* jge: greater or equal (signed >=) */

loc_000AC526: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC546; /* jne: not equal / not zero */

loc_000AC52C: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC536u); RECOMP_ABI_CALL(0x000B0289u, sub_000B0289); /* call 0x000B0289 */

loc_000AC536: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC546; /* je: equal / zero */

loc_000AC53A: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC544u); RECOMP_ABI_CALL(0x000AFBBCu, sub_000AFBBC); /* call 0x000AFBBC */

loc_000AC544: ;
    ebx = eax;

loc_000AC546: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC55B; /* jl: less (signed <) */

loc_000AC54A: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2816E0);
    { uint32_t _icall_target = MEM32(0x22BBAC); PUSH32(esp, 0x000AC559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC553u); } /* indirect call */
    }

loc_000AC559: ;
    ebx = eax;

loc_000AC55B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC573; /* jne: not equal / not zero */

loc_000AC568: ;
    PUSH32(esp, ebx);
    goto loc_000AC56E;

loc_000AC56B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);

loc_000AC56E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC573u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC573: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AC57C
 * Original: 0x000AC57C - 0x000AC60A (142 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AC57C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC57C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = 0x40;
    MEM32(ebp + -20) = 0x2816E0;
    { uint32_t _icall_target = MEM32(0x22BBB4); PUSH32(esp, 0x000AC5A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC59Fu); } /* indirect call */
    }

loc_000AC5A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC5B3; /* jge: greater or equal (signed >=) */

loc_000AC5A9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC5AFu); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC5AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_000AC5B3: ;
    eax = ebp + -288;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebp + -8) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM16(ebp + -10) = 0x104;
    { uint32_t _icall_target = MEM32(0x22BBB0); PUSH32(esp, 0x000AC5D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC5CEu); } /* indirect call */
    }

loc_000AC5D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AC5DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC5D9u); } /* indirect call */
    }

loc_000AC5DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC5ED; /* jge: greater or equal (signed >=) */

loc_000AC5E3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC5E9u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC5E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AC607;

loc_000AC5ED: ;
    ecx = MEM32(0x10124);
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x4000;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC607u); RECOMP_ABI_CALL(0x000B0289u, sub_000B0289); /* call 0x000B0289 */

loc_000AC607: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_000AC60A
 * Original: 0x000AC60A - 0x000AC865 (603 bytes, 189 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000AC60A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC60A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x2F3848)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2F3848), 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000AC63E; /* jne: not equal / not zero */

loc_000AC62D: ;
    PUSH32(esp, 0xC0000001u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC637u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC637: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AC861;

loc_000AC63E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 3);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -52) = edi;
    MEM32(ebp + -44) = 0x40;
    MEM32(ebp + -48) = 0x281710;
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x000AC66Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC665u); } /* indirect call */
    }

loc_000AC66B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000AC833; /* jl: less (signed <) */

loc_000AC676: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -564;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -24) = 0x800;
    MEM32(ebp + -20) = edi;
    { uint32_t _icall_target = MEM32(0x22BB48); PUSH32(esp, 0x000AC6A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC69Au); } /* indirect call */
    }

loc_000AC6A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000AC7A7; /* jl: less (signed <) */

loc_000AC6AB: ;
    eax = MEM32(0x22BBA8);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x29 (32-bit) */
    eax = esi + -1;
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000AC6C0; /* jbe: below or equal (unsigned <=) */

loc_000AC6BD: ;
    PUSH32(esp, 0x29);
    POP32(esp, esi);

loc_000AC6C0: ;
    _fa = (uint32_t)(MEM32(ebp + -564)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97315286u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -564), 0x97315286u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC7A0; /* jne: not equal / not zero */

loc_000AC6D0: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA550000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0xAA550000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC7A0; /* jne: not equal / not zero */

loc_000AC6DD: ;
    _fa = (uint32_t)(MEM32(ebp + -560)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -560), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC7A0; /* jne: not equal / not zero */

loc_000AC6EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(0x2F3848);
    edx = ecx + ecx * 2;
    edx = MEM32(ebp + edx * 4 + -552);
    MEM32(ebp + -28) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_000AC72F; /* jbe: below or equal (unsigned <=) */

loc_000AC701: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC727; /* je: equal / zero */

loc_000AC706: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -552;

loc_000AC70E: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC718; /* je: equal / zero */

loc_000AC714: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC720; /* je: equal / zero */

loc_000AC718: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000AC70E; /* jb: below (unsigned <) */

loc_000AC720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC727; /* jne: not equal / not zero */

loc_000AC724: ;
    ebx = edi + 3;

loc_000AC727: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000AC701; /* jb: below (unsigned <) */

loc_000AC72C: ;
    eax = MEM32(ebp + -32);

loc_000AC72F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC734; /* jne: not equal / not zero */

loc_000AC733: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000AC734: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(0x2F384C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000AC74E; /* jne: not equal / not zero */

loc_000AC73F: ;
    edx = eax + eax * 2;
    ebx = MEM32(ebp + edx * 4 + -552);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000AC760;

loc_000AC74E: ;
    eax = eax + eax * 2;
    edx = ebx + -3;
    MEM32(ebp + eax * 4 + -552) = edx;
    eax = MEM32(0x2F384C);

loc_000AC760: ;
    edx = MEM32(ebp + -12);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -548) = ecx;
    eax = MEM32(0x2F384C);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -556) = edx;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -564;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x22BB44); PUSH32(esp, 0x000AC79Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC796u); } /* indirect call */
    }

loc_000AC79C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AC7A7;

loc_000AC7A0: ;
    MEM32(ebp + -4) = 0xC00000E4u;

loc_000AC7A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x000AC7B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC7AAu); } /* indirect call */
    }

loc_000AC7B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC833; /* je: equal / zero */

loc_000AC7B4: ;
    ecx = MEM32(0x10124);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2816F0);
    eax = ebp + -312;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x104);
    esi = 0x4000;
    PUSH32(esp, eax);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC7DBu); RECOMP_ABI_CALL(0x001529D0u, sub_001529D0); /* call 0x001529D0 */

loc_000AC7DB: ;
    edi = MEM32(0x22BB40);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -312;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x000AC7F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC7EFu); } /* indirect call */
    }

loc_000AC7F1: ;
    eax = ebp + -312;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x000AC7FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC7FCu); } /* indirect call */
    }

loc_000AC7FE: ;
    MEM16(ebp + -16) = MEM16(ebp + -16) - 1;
    _fa = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC80Cu); RECOMP_ABI_CALL(0x000B0289u, sub_000B0289); /* call 0x000B0289 */

loc_000AC80C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC852; /* je: equal / zero */

loc_000AC810: ;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC81Au); RECOMP_ABI_CALL(0x000AFBBCu, sub_000AFBBC); /* call 0x000AFBBC */

loc_000AC81A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000AC833; /* jl: less (signed <) */

loc_000AC821: ;
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2816E8);
    { uint32_t _icall_target = MEM32(0x22BBAC); PUSH32(esp, 0x000AC830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AC82Au); } /* indirect call */
    }

loc_000AC830: ;
    MEM32(ebp + -4) = eax;

loc_000AC833: ;
    ecx = MEM32(ebp + -4);
    eax = 0xC0000000u;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC85D; /* jne: not equal / not zero */

loc_000AC841: ;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(0x2F384C) = MEM32(0x2F384C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x2F384C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC850u); RECOMP_ABI_CALL(0x000ADCA2u, sub_000ADCA2); /* call 0x000ADCA2 */

loc_000AC850: ;
    goto loc_000AC859;

loc_000AC852: ;
    MEM32(0x2F384C) = MEM32(0x2F384C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x2F384C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000AC859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AC860;

loc_000AC85D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AC860: ;
    POP32(esp, esi);

loc_000AC861: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
