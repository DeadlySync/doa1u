/**
 * DOAU1 - Recompiled code chunk 12
 * Functions: 250 (0x00075010 - 0x0007D3A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00075010
 * Original: 0x00075010 - 0x00075020 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075010(void)
{

loc_00075010: ;
    PUSH32(esp, 0x00075015u); RECOMP_ABI_CALL(0x00074F00u, sub_00074F00); /* call 0x00074F00 */

loc_00075015: ;
    MEM32(0x912BA0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00075020
 * Original: 0x00075020 - 0x00075044 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00075020: ;
    PUSH32(esp, 0x00075025u); RECOMP_ABI_CALL(0x00074F00u, sub_00074F00); /* call 0x00074F00 */

loc_00075025: ;
    PUSH32(esp, 0x0007502Au); RECOMP_ABI_CALL(0x0007DAF0u, sub_0007DAF0); /* call 0x0007DAF0 */

loc_0007502A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912BA0) = eax;
    MEM8(0x9131B8) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00075050
 * Original: 0x00075050 - 0x000750B2 (98 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00075060: ;
    esi = MEM32(edi + 0x2E6628);
    eax = ebp;

loc_00075068: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00075090; /* jne: not equal / not zero */

loc_00075072: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007508C; /* je: equal / zero */

loc_00075076: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00075090; /* jne: not equal / not zero */

loc_00075082: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00075068; /* jne: not equal / not zero */

loc_0007508C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00075095;

loc_00075090: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00075095: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000750A8; /* je: equal / zero */

loc_00075099: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00075060; /* jb: below (unsigned <) */

loc_000750A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000750A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000750C0
 * Original: 0x000750C0 - 0x000750C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000750C0(void)
{

loc_000750C0: ;
    eax = 0x9131A8;
    esp += 4; return; /* ret */

}

/**
 * sub_000750D0
 * Original: 0x000750D0 - 0x000750E6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000750D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000750D0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000750E0; /* jne: not equal / not zero */

loc_000750DA: ;
    MEM32(0x912D88) = eax;
    esp += 4; return; /* ret */

loc_000750E0: ;
    MEM32(0x9036A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000750F0
 * Original: 0x000750F0 - 0x0007510E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000750F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000750F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075103; /* jne: not equal / not zero */

loc_000750F8: ;
    MEM32(0x912D88) = 4;
    esp += 4; return; /* ret */

loc_00075103: ;
    MEM32(0x9036A0) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00075110
 * Original: 0x00075110 - 0x00075176 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075110: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075146; /* jne: not equal / not zero */

loc_0007511A: ;
    eax = 0x912C98;
    /* nop */

loc_00075120: ;
    MEM32(eax + -240) = ecx;
    MEM32(eax + -236) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x912D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x912D88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075120; /* jl: less (signed <) */

loc_0007513B: ;
    MEM32(0x912D88) = 2;
    esp += 4; return; /* ret */

loc_00075146: ;
    eax = 0x9035B0;
    goto loc_00075150;

    /* nop */

loc_00075150: ;
    MEM32(eax + -240) = ecx;
    MEM32(eax + -236) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9036A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9036A0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075150; /* jl: less (signed <) */

loc_0007516B: ;
    MEM32(0x9036A0) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00075180
 * Original: 0x00075180 - 0x0007521A (154 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075180: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000751DA; /* jne: not equal / not zero */

loc_00075192: ;
    eax = 0x912C98;
    goto loc_000751A0;

    /* nop */

loc_000751A0: ;
    edx = MEM32(ecx + -480);
    MEM32(eax + -240) = edx;
    edx = MEM32(ecx + -476);
    MEM32(eax + -236) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x912D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x912D88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000751A0; /* jl: less (signed <) */

loc_000751CF: ;
    MEM32(0x912D88) = 3;
    esp += 4; return; /* ret */

loc_000751DA: ;
    eax = 0x9035B0;
    /* nop */

loc_000751E0: ;
    edx = MEM32(ecx + -480);
    MEM32(eax + -240) = edx;
    edx = MEM32(ecx + -476);
    MEM32(eax + -236) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9036A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9036A0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000751E0; /* jl: less (signed <) */

loc_0007520F: ;
    MEM32(0x9036A0) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00075220
 * Original: 0x00075220 - 0x000752B9 (153 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0007523A; /* jl: less (signed <) */

loc_0007522B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x1D;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00075256;

loc_0007523A: ;
    ecx = MEM32(eax * 8 + 0x912BA8);
    edx = MEM32(eax * 8 + 0x912BAC);
    esi = MEM32(eax * 8 + 0x912C98);
    edi = MEM32(eax * 8 + 0x912C9C);

loc_00075256: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007529E; /* jle: less or equal (signed <=) */

loc_0007525A: ;
    PUSH32(esp, ebx);
    goto loc_00075260;

    /* nop */

loc_00075260: ;
    ebx = MEM32(eax * 8 + 0x912BA0);
    MEM32(eax * 8 + 0x912BA8) = ebx;
    ebx = MEM32(eax * 8 + 0x912BA4);
    MEM32(eax * 8 + 0x912BAC) = ebx;
    ebx = MEM32(eax * 8 + 0x912C90);
    MEM32(eax * 8 + 0x912C98) = ebx;
    ebx = MEM32(eax * 8 + 0x912C94);
    MEM32(eax * 8 + 0x912C9C) = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00075260; /* jg: greater (signed >) */

loc_0007529D: ;
    POP32(esp, ebx);

loc_0007529E: ;
    MEM32(0x912C9C) = edi;
    POP32(esp, edi);
    MEM32(0x912C98) = esi;
    MEM32(0x912BA8) = ecx;
    MEM32(0x912BAC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000752C0
 * Original: 0x000752C0 - 0x000752FC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000752C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000752C0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000752D0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax * 8 + 0x912BA8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000752E2; /* jne: not equal / not zero */

loc_000752D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x912BAC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000752EB; /* je: equal / zero */

loc_000752E2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000752D0; /* jl: less (signed <) */

loc_000752E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000752EB: ;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x912C9E)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x912C9E), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000752E8; /* je: equal / zero */

loc_000752F6: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00075300
 * Original: 0x00075300 - 0x00075351 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075300: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075350; /* je: equal / zero */

loc_0007530B: ;
    eax = ZX16(MEM16(ecx + 4));
    MEM16(ecx + 6) = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x912B94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x912B94) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075324; /* jl: less (signed <) */

loc_0007531D: ;
    MEM16(ecx + 6) = 1;
    esp += 4; return; /* ret */

loc_00075324: ;
    eax = MEM32(0x912B8C);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007534F; /* jl: less (signed <) */

loc_00075331: ;
    eax = ZX16(MEM16(ecx + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x912B90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x912B90) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007534F; /* jl: less (signed <) */

loc_00075349: ;
    MEM16(ecx + 6) = 1;

loc_0007534F: ;
    POP32(esp, esi);

loc_00075350: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075360
 * Original: 0x00075360 - 0x00075418 (184 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075360: ;
    PUSH32(esp, esi);
    esi = 0x912C98;

loc_00075366: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007536Cu); RECOMP_ABI_CALL(0x00075300u, sub_00075300); /* call 0x00075300 */

loc_0007536C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x912D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x912D88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075366; /* jl: less (signed <) */

loc_0007537A: ;
    eax = MEM32(0x912D88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007538D; /* je: equal / zero */

loc_00075384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075416; /* jne: not equal / not zero */

loc_0007538D: ;
    eax = MEM32(0x2E628C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = eax + -1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00075405; /* jle: less or equal (signed <=) */

loc_0007539D: ;
    PUSH32(esp, ebx);
    ebx = 0x912BA8;
    esi = 0x912D98;
    goto loc_000753B0;

    /* nop */

loc_000753B0: ;
    eax = MEM32(0x2E624C);
    SET_LO16(ecx, MEM16(eax + edi * 2));
    edx = MEM32(0x2E626C);
    MEM16(esi) = LO16(ecx);
    eax = MEM32(edx + edi * 4);
    MEM32(esi + 4) = eax;
    SET_LO16(eax, LO16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x1E (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000753DB; /* jae: above or equal (unsigned >=) */

loc_000753D1: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    MEM32(esi + 8) = ecx;
    goto loc_000753F6;

loc_000753DB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x3C (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000753EE; /* jae: above or equal (unsigned >=) */

loc_000753E1: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    goto loc_000753F9;

loc_000753EE: ;
    PUSH32(esp, 0x000753F3u); RECOMP_ABI_CALL(0x00074400u, sub_00074400); /* call 0x00074400 */

loc_000753F3: ;
    MEM32(esi + 8) = eax;

loc_000753F6: ;
    MEM32(esi + 0xC) = edx;

loc_000753F9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000753B0; /* jl: less (signed <) */

loc_00075404: ;
    POP32(esp, ebx);

loc_00075405: ;
    edx = MEM32(0x2E65D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00075411u); RECOMP_ABI_CALL(0x00074690u, sub_00074690); /* call 0x00074690 */

loc_00075411: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00075416: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075420
 * Original: 0x00075420 - 0x00075426 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075420(void)
{

loc_00075420: ;
    eax = MEM32(0x912A68);
    esp += 4; return; /* ret */

}

/**
 * sub_00075430
 * Original: 0x00075430 - 0x00075436 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075430(void)
{

loc_00075430: ;
    eax = MEM32(0x912B20);
    esp += 4; return; /* ret */

}

/**
 * sub_00075440
 * Original: 0x00075440 - 0x00075446 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075440(void)
{

loc_00075440: ;
    eax = MEM32(0x912B24);
    esp += 4; return; /* ret */

}

/**
 * sub_00075450
 * Original: 0x00075450 - 0x00075456 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075450(void)
{

loc_00075450: ;
    eax = MEM32(0x912B28);
    esp += 4; return; /* ret */

}

/**
 * sub_00075460
 * Original: 0x00075460 - 0x00075466 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075460(void)
{

loc_00075460: ;
    eax = MEM32(0x912B3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00075470
 * Original: 0x00075470 - 0x00075502 (146 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075470: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007547F; /* jl: less (signed <) */

loc_00075478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00075482; /* jge: greater or equal (signed >=) */

loc_0007547F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00075482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2904) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2904 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000754A3; /* jge: greater or equal (signed >=) */

loc_00075489: ;
    ecx = eax + -500;
    eax = 0x10624DD3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + 1;
    esp += 4; return; /* ret */

loc_000754A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4074) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4074 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000754C4; /* jge: greater or equal (signed >=) */

loc_000754AA: ;
    ecx = eax + -10500;
    eax = 0x10624DD3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + ecx + 0xB;
    esp += 4; return; /* ret */

loc_000754C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x639C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x639C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000754E5; /* jge: greater or equal (signed >=) */

loc_000754CB: ;
    ecx = eax + -16500;
    eax = 0x57619F1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + 0xE;
    esp += 4; return; /* ret */

loc_000754E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7724) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7724 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000754F2; /* jge: greater or equal (signed >=) */

loc_000754EC: ;
    eax = 0x11;
    esp += 4; return; /* ret */

loc_000754F2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9E34 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00075510
 * Original: 0x00075510 - 0x0007551F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075510: ;
    PUSH32(esp, 0x00075515u); RECOMP_ABI_CALL(0x00075420u, sub_00075420); /* call 0x00075420 */

loc_00075515: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007551Bu); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_0007551B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075520
 * Original: 0x00075520 - 0x00075526 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075520(void)
{

loc_00075520: ;
    eax = 0x912B48;
    esp += 4; return; /* ret */

}

/**
 * sub_00075530
 * Original: 0x00075530 - 0x00075536 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075530(void)
{

loc_00075530: ;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

}

/**
 * sub_00075540
 * Original: 0x00075540 - 0x0007554A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075540(void)
{

loc_00075540: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x9131B9) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00075550
 * Original: 0x00075550 - 0x000755E9 (153 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075550: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x9131B9) = LO8(eax);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x9131B8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0007558B; /* je: equal / zero */

loc_00075568: ;
    ecx = MEM32(eax);
    MEM32(0x913198) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x91319C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x9131A0) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x9131A4) = edx;

loc_0007558B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00075592u); RECOMP_ABI_CALL(0x000746C0u, sub_000746C0); /* call 0x000746C0 */

loc_00075592: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007559Bu); RECOMP_ABI_CALL(0x00074890u, sub_00074890); /* call 0x00074890 */

loc_0007559B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000755A4u); RECOMP_ABI_CALL(0x00074890u, sub_00074890); /* call 0x00074890 */

loc_000755A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000755ADu); RECOMP_ABI_CALL(0x00074890u, sub_00074890); /* call 0x00074890 */

loc_000755AD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000755B6u); RECOMP_ABI_CALL(0x00074890u, sub_00074890); /* call 0x00074890 */

loc_000755B6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000755BFu); RECOMP_ABI_CALL(0x00074890u, sub_00074890); /* call 0x00074890 */

loc_000755BF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000755C8u); RECOMP_ABI_CALL(0x00074890u, sub_00074890); /* call 0x00074890 */

loc_000755C8: ;
    PUSH32(esp, 0x000755CDu); RECOMP_ABI_CALL(0x00074B60u, sub_00074B60); /* call 0x00074B60 */

loc_000755CD: ;
    PUSH32(esp, 0x000755D2u); RECOMP_ABI_CALL(0x00074D10u, sub_00074D10); /* call 0x00074D10 */

loc_000755D2: ;
    PUSH32(esp, 0x000755D7u); RECOMP_ABI_CALL(0x00075010u, sub_00075010); /* call 0x00075010 */

loc_000755D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000755DEu); RECOMP_ABI_CALL(0x000750D0u, sub_000750D0); /* call 0x000750D0 */

loc_000755DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000755E5u); RECOMP_ABI_CALL(0x000750D0u, sub_000750D0); /* call 0x000750D0 */

loc_000755E5: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000755F0
 * Original: 0x000755F0 - 0x000755FD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000755F0(void)
{

loc_000755F0: ;
    PUSH32(esp, 0x000755F5u); RECOMP_ABI_CALL(0x00074D20u, sub_00074D20); /* call 0x00074D20 */

loc_000755F5: ;
    MEM8(0x9131B8) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00075600
 * Original: 0x00075600 - 0x00075639 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075600: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00075607u); RECOMP_ABI_CALL(0x000746E0u, sub_000746E0); /* call 0x000746E0 */

loc_00075607: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00075610u); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00075610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00075619u); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00075619: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00075622u); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00075622: ;
    PUSH32(esp, 0x00075627u); RECOMP_ABI_CALL(0x00074B70u, sub_00074B70); /* call 0x00074B70 */

loc_00075627: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007562Eu); RECOMP_ABI_CALL(0x000750F0u, sub_000750F0); /* call 0x000750F0 */

loc_0007562E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x9131B8) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_00075640
 * Original: 0x00075640 - 0x0007564C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075640: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x5C));
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075650
 * Original: 0x00075650 - 0x0007565C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075650: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x5C));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075660
 * Original: 0x00075660 - 0x00075668 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075660: ;
    eax = ZX8(MEM8(ecx + 0x5C));
    eax = eax >> 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075670
 * Original: 0x00075670 - 0x0007567C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075670: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x5C));
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075680
 * Original: 0x00075680 - 0x00075684 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075680(void)
{

loc_00075680: ;
    SET_LO8(eax, MEM8(ecx + 0x5D));
    esp += 4; return; /* ret */

}

/**
 * sub_00075690
 * Original: 0x00075690 - 0x0007569C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x5C));
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000756A0
 * Original: 0x000756A0 - 0x000756AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756A0(void)
{

loc_000756A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x5D) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000756B0
 * Original: 0x000756B0 - 0x000756B9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756B0(void)
{

loc_000756B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000756C0
 * Original: 0x000756C0 - 0x000756C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756C0(void)
{

loc_000756C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000756D0
 * Original: 0x000756D0 - 0x000756D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756D0(void)
{

loc_000756D0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000756E0
 * Original: 0x000756E0 - 0x000756E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756E0(void)
{

loc_000756E0: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_000756F0
 * Original: 0x000756F0 - 0x000756F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756F0(void)
{

loc_000756F0: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00075700
 * Original: 0x00075700 - 0x00075704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075700(void)
{

loc_00075700: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00075710
 * Original: 0x00075710 - 0x000757A7 (151 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075710: ;
    eax = MEM32(0x912A90);
    ecx = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00075737; /* jne: not equal / not zero */

loc_00075723: ;
    _fa = (uint32_t)(MEM32(0x9033A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9033A8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075749; /* jne: not equal / not zero */

loc_0007572B: ;
    MEM32(0x912A90) = 4;
    goto loc_00075749;

loc_00075737: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075749; /* jne: not equal / not zero */

loc_0007573B: ;
    _fa = (uint32_t)(MEM32(0x9033A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9033A8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075749; /* jne: not equal / not zero */

loc_00075743: ;
    MEM32(0x912A90) = ecx;

loc_00075749: ;
    eax = MEM32(0x912AA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075766; /* jne: not equal / not zero */

loc_00075752: ;
    _fa = (uint32_t)(MEM32(0x9033B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9033B8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075778; /* jne: not equal / not zero */

loc_0007575A: ;
    MEM32(0x912AA0) = 4;
    goto loc_00075778;

loc_00075766: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075778; /* jne: not equal / not zero */

loc_0007576A: ;
    _fa = (uint32_t)(MEM32(0x9033B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9033B8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075778; /* jne: not equal / not zero */

loc_00075772: ;
    MEM32(0x912AA0) = ecx;

loc_00075778: ;
    eax = MEM32(0x912D88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075794; /* jne: not equal / not zero */

loc_00075781: ;
    _fa = (uint32_t)(MEM32(0x9036A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9036A0), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000757A6; /* jne: not equal / not zero */

loc_00075789: ;
    MEM32(0x912D88) = 4;
    esp += 4; return; /* ret */

loc_00075794: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000757A6; /* jne: not equal / not zero */

loc_00075798: ;
    _fa = (uint32_t)(MEM32(0x9036A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9036A0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000757A6; /* jne: not equal / not zero */

loc_000757A0: ;
    MEM32(0x912D88) = ecx;

loc_000757A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000757B0
 * Original: 0x000757B0 - 0x000757B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000757B0(void)
{

loc_000757B0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_000757C0
 * Original: 0x000757C0 - 0x000757C7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000757C0(void)
{

loc_000757C0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000757D0
 * Original: 0x000757D0 - 0x000757D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000757D0(void)
{

loc_000757D0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000757E0
 * Original: 0x000757E0 - 0x000757E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000757E0(void)
{

loc_000757E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000757F0
 * Original: 0x000757F0 - 0x000757F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000757F0(void)
{

loc_000757F0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00075800
 * Original: 0x00075800 - 0x00075809 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075800(void)
{

loc_00075800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075810
 * Original: 0x00075810 - 0x0007581D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075810(void)
{

loc_00075810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00075818u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00075818: ;
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075820
 * Original: 0x00075820 - 0x00075828 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075820(void)
{

loc_00075820: ;
    MEM32(ecx + 0x54) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00075830
 * Original: 0x00075830 - 0x00075838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075830(void)
{

loc_00075830: ;
    MEM32(ecx + 0x54) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00075840
 * Original: 0x00075840 - 0x000758D9 (153 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075840: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 1) = eax;
    MEM32(esp + 5) = eax;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    eax = MEM32(0x903CC8);
    MEM32(esp + 9) = eax;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp) = 0x15;
    MEM32(esp + 1) = ecx;
    MEM32(esp + 5) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00075898; /* je: equal / zero */

loc_00075886: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00075891u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_00075891: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00075898: ;
    eax = MEM32(0x90315C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000758CA; /* jbe: below or equal (unsigned <=) */

loc_000758A4: ;
    edx = MEM32(esi * 4 + 0x912A40);
    SET_LO8(eax, MEM8(edx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000758C0; /* jne: not equal / not zero */

loc_000758B2: ;
    eax = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000758BDu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_000758BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000758C0: ;
    eax = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000758A4; /* jb: below (unsigned <) */

loc_000758CA: ;
    PUSH32(esp, 0x000758CFu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000758CF: ;
    MEM32(0x902DC4) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000758E0
 * Original: 0x000758E0 - 0x00075919 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000758E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000758E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x903CC8) = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000758F6u); RECOMP_ABI_CALL(0x00070C40u, sub_00070C40); /* call 0x00070C40 */

loc_000758F6: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    _fb = (uint32_t)(0x902E68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x902E68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00075906u); RECOMP_ABI_CALL(0x0007C520u, sub_0007C520); /* call 0x0007C520 */

loc_00075906: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00075918; /* je: equal / zero */

loc_0007590B: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00075840(); return; /* tail jmp 0x00075840 */

loc_00075918: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075920
 * Original: 0x00075920 - 0x00075A43 (291 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075920: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 5) = eax;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    eax = MEM32(0x903CC8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 8) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00075A3C; /* js: sign (negative) */

loc_00075952: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007595Au); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007595A: ;
    _fb = (uint32_t)(MEM32(0x902DC4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x902DC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F4 (32-bit) */
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00075993; /* je: equal / zero */

loc_00075970: ;
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    MEM32(esp + 0x15) = ecx;
    ecx = MEM32(0x903CC8);
    MEM8(esp + 0x14) = 0x16;
    MEM32(esp + 0x19) = edx;
    MEM32(esp + 0x1D) = ecx;

loc_00075993: ;
    ecx = MEM32(0x90315C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00075A0A; /* jbe: below or equal (unsigned <=) */

loc_000759A1: ;
    esi = 0x902EC4;

loc_000759A6: ;
    PUSH32(esp, 0x000759ABu); RECOMP_ABI_CALL(0x00070C40u, sub_00070C40); /* call 0x00070C40 */

loc_000759AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000759D6; /* jne: not equal / not zero */

loc_000759AF: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000759D2; /* jne: not equal / not zero */

loc_000759B4: ;
    ecx = MEM32(0x903CC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi + -92;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000759C8u); RECOMP_ABI_CALL(0x0007C520u, sub_0007C520); /* call 0x0007C520 */

loc_000759C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000759CFu); RECOMP_ABI_CALL(0x00075840u, sub_00075840); /* call 0x00075840 */

loc_000759CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000759D2: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_000759F9;

loc_000759D6: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000759F9; /* jne: not equal / not zero */

loc_000759E3: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000759F9; /* je: equal / zero */

loc_000759EB: ;
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000759F6u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_000759F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000759F9: ;
    eax = MEM32(0x90315C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000759A6; /* jb: below (unsigned <) */

loc_00075A06: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_00075A0A: ;
    edx = MEM32(0x90315C);
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00075A32; /* je: equal / zero */

loc_00075A1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075A28; /* je: equal / zero */

loc_00075A1E: ;
    PUSH32(esp, 0x00075A23u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00075A23: ;
    MEM32(0x902DC4) = eax;

loc_00075A28: ;
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00075A32: ;
    MEM32(0x903CC8) = MEM32(0x903CC8) | 0x80000000u;
    _fa = (uint32_t)(MEM32(0x903CC8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00075A3C: ;
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075A50
 * Original: 0x00075A50 - 0x00075AE4 (148 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075A50: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075A5Au); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00075A5A: ;
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    SET_LO8(ebx, LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    eax = ZX8(LO8(ebx));
    MEM32(esp + 0x11) = eax;
    eax = MEM32(0x90315C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 8) = 0x19;
    MEM32(esp + 9) = ecx;
    MEM32(esp + 0xD) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00075ADE; /* jbe: below or equal (unsigned <=) */

loc_00075AA1: ;
    PUSH32(esp, edi);
    edi = 0x902EC5;
    goto loc_00075AB0;

    /* nop */

loc_00075AB0: ;
    ecx = MEM32(esi * 4 + 0x912A40);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075AC2; /* je: equal / zero */

loc_00075ABE: ;
    MEM8(edi) = LO8(ebx);
    goto loc_00075AD0;

loc_00075AC2: ;
    edx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00075ACDu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00075ACD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075AD0: ;
    eax = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00075AB0; /* jb: below (unsigned <) */

loc_00075ADD: ;
    POP32(esp, edi);

loc_00075ADE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075AF0
 * Original: 0x00075AF0 - 0x00075B67 (119 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075AF0: ;
    eax = MEM32(0x912A74);
    ecx = MEM32(0x912A78);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 1) = ecx;
    edx = MEM32(0x912A74);
    MEM32(esi + 5) = edx;
    eax = MEM32(0x912A7C);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esi + 9) = eax;
    eax = MEM32(0x912A78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00075B24u); RECOMP_ABI_CALL(0x00074940u, sub_00074940); /* call 0x00074940 */

loc_00075B24: ;
    MEM32(esi + 0xD) = eax;
    eax = MEM32(0x912B3C);
    MEM32(esi + 0x11) = eax;
    ecx = MEM32(0x912B20);
    MEM32(esi + 0x15) = ecx;
    edx = MEM32(0x912B24);
    MEM32(esi + 0x19) = edx;
    eax = MEM32(0x912B28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1D) = eax;
    PUSH32(esp, 0x00075B51u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_00075B51: ;
    MEM8(esi + 0x25) = LO8(eax);
    SET_LO8(ecx, MEM8(0x9131B9));
    MEM8(esi + 0x26) = LO8(ecx);
    PUSH32(esp, 0x00075B62u); RECOMP_ABI_CALL(0x00075420u, sub_00075420); /* call 0x00075420 */

loc_00075B62: ;
    MEM32(esi + 0x21) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075B70
 * Original: 0x00075B70 - 0x00075BA2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075B70: ;
    SET_LO8(ecx, MEM8(0x9131EE));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075BA1; /* je: equal / zero */

loc_00075B7C: ;
    PUSH32(esp, 0x00075B81u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00075B81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B92; /* je: equal / zero */

loc_00075B85: ;
    MEM8(0x9131EE) = 0;
    eax = 1;
    esp += 4; return; /* ret */

loc_00075B92: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00075B99u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_00075B99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;

loc_00075BA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075BB0
 * Original: 0x00075BB0 - 0x00075BE6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00075BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075BB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x90315C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x90315C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00075BE3; /* jae: above or equal (unsigned >=) */

loc_00075BBC: ;
    ecx = MEM32(eax * 4 + 0x912A40);
    SET_LO8(edx, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075BE3; /* jne: not equal / not zero */

loc_00075BCA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    edx = MEM32(eax + 0x902E90);
    eax = MEM32(eax + 0x902E8C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075BE0u); RECOMP_ABI_CALL(0x0007EC30u, sub_0007EC30); /* call 0x0007EC30 */

loc_00075BE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075BE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075BF0
 * Original: 0x00075BF0 - 0x00075BFE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075BF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x902EC4));
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075C00
 * Original: 0x00075C00 - 0x00075C06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075C00(void)
{

loc_00075C00: ;
    eax = MEM32(0x91E230);
    esp += 4; return; /* ret */

}

/**
 * sub_00075C10
 * Original: 0x00075C10 - 0x00075C16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075C10(void)
{

loc_00075C10: ;
    eax = MEM32(0x91DFF8);
    esp += 4; return; /* ret */

}

/**
 * sub_00075C20
 * Original: 0x00075C20 - 0x00075C69 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075C20: ;
    edx = MEM32(0x90315C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00075C51; /* jbe: below or equal (unsigned <=) */

loc_00075C2E: ;
    esi = MEM32(0x912990);
    edi = MEM32(0x91298C);
    ecx = 0x902E8C;
    /* nop */

loc_00075C40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075C49; /* jne: not equal / not zero */

loc_00075C44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075C56; /* je: equal / zero */

loc_00075C49: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00075C40; /* jb: below (unsigned <) */

loc_00075C51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00075C56: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    eax = ZX8(MEM8(eax + 0x902EC4));
    POP32(esp, edi);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075C70
 * Original: 0x00075C70 - 0x00075C93 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00075C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075C70: ;
    ecx = 0x913218;
    PUSH32(esp, 0x00075C7Au); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_00075C7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91298C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x91298C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075C90; /* jne: not equal / not zero */

loc_00075C82: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x912990)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x912990) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075C90; /* jne: not equal / not zero */

loc_00075C8A: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00075C90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075CA0
 * Original: 0x00075CA0 - 0x00075CE9 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075CA0: ;
    edx = MEM32(0x914398);
    ecx = MEM32(0x912B88);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075CE8; /* je: equal / zero */

loc_00075CB2: ;
    edx = MEM32(0x914390);
    PUSH32(esp, esi);
    esi = MEM32(0x914394);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00075CD5; /* jae: above or equal (unsigned >=) */

loc_00075CC3: ;
    eax = MEM32(0x91438C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x914388));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x914388)); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00075CD5: ;
    if (CMP_BE(_fa, _fb)) goto loc_00075CE7; /* jbe: below or equal (unsigned <=) */

loc_00075CD7: ;
    eax = MEM32(0x914388);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x91438C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x91438C)); }

loc_00075CE7: ;
    POP32(esp, esi);

loc_00075CE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075CF0
 * Original: 0x00075CF0 - 0x00075D14 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075CF0: ;
    ecx = MEM32(0x913224);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075D13; /* je: equal / zero */

loc_00075CFC: ;
    PUSH32(esp, 0x00075D01u); RECOMP_ABI_CALL(0x000738D0u, sub_000738D0); /* call 0x000738D0 */

loc_00075D01: ;
    ecx = ZX8(MEM8(0x9131EA));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x912B68));

loc_00075D13: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075D20
 * Original: 0x00075D20 - 0x00075D70 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075D20: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esp + 0x70);
    ecx = 0x17;
    esi = eax;
    edi = esp + 8;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
    esi = esp + 8;
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
    ecx = MEM32(esp + 0x68);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00075D6Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00075D6C: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075D80
 * Original: 0x00075D80 - 0x00075D83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00075D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075D80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075D90
 * Original: 0x00075D90 - 0x00075D93 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00075D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075D90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075DA0
 * Original: 0x00075DA0 - 0x00075F04 (356 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075DA0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x7C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x74) = eax;
    eax = 0xAE4C415Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x84);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebp >> 0x1F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xAE4C415Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00075DFD; /* je: equal / zero */

loc_00075DF0: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00075DF0; /* jne: not equal / not zero */

loc_00075DFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00075EF4; /* jge: greater or equal (signed >=) */

loc_00075E05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00075EF4; /* jle: less or equal (signed <=) */

loc_00075E0D: ;
    eax = MEM32(esp + 0x80);
    PUSH32(esp, ebx);
    edx = esi;
    ebx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5E);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x88) = edx;
    MEM32(esp + 0x14) = esi;
    goto loc_00075E40;

loc_00075E32: ;
    ebx = MEM32(esp + 0x18);
    goto loc_00075E40;

    /* nop */
    /* nop */

loc_00075E40: ;
    ecx = 0x17;
    esi = edx;
    edi = esp + 0x1C;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(esp + 0x8C);
    ecx = edx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    ebx = MEM32(esp + 0x84);
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00075E68; /* je: equal / zero */

loc_00075E66: ;
    ebx = ecx;

loc_00075E68: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075ECB; /* je: equal / zero */

loc_00075E6C: ;
    /* nop */

loc_00075E70: ;
    edi = eax;
    ecx = 0x17;
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
    ecx = MEM32(esp + 0x8C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xAE4C415Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(esp + 0x10) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00075EA7; /* jge: greater or equal (signed >=) */

loc_00075EA1: ;
    eax = MEM32(esp + 0x18);
    goto loc_00075EB5;

loc_00075EA7: ;
    ebx = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x84);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);

loc_00075EB5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x88) (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00075E70; /* jne: not equal / not zero */

loc_00075EC4: ;
    edx = MEM32(esp + 0x88);

loc_00075ECB: ;
    edi = eax;
    eax = MEM32(esp + 0x14);
    ecx = 0x17;
    esi = esp + 0x1C;
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
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x5E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(esp + 0x88) = edx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00075E32; /* jne: not equal / not zero */

loc_00075EF3: ;
    POP32(esp, ebx);

loc_00075EF4: ;
    ecx = MEM32(esp + 0x78);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x00075F00u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00075F00: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075F10
 * Original: 0x00075F10 - 0x00075FAD (157 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075F10: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x90315C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00075FA8; /* jbe: below or equal (unsigned <=) */

loc_00075F24: ;
    ecx = MEM32(eax * 4 + 0x912A40);
    SET_LO8(edx, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075F3C; /* jne: not equal / not zero */

loc_00075F32: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00075F24; /* jb: below (unsigned <) */

loc_00075F37: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00075F3C: ;
    ecx = MEM32(eax * 4 + 0x912A40);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00075FA8; /* je: equal / zero */

loc_00075F48: ;
    PUSH32(esp, 0x00075F4Du); RECOMP_ABI_CALL(0x00073180u, sub_00073180); /* call 0x00073180 */

loc_00075F4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075FA8; /* je: equal / zero */

loc_00075F51: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00075F5Bu); RECOMP_ABI_CALL(0x00073150u, sub_00073150); /* call 0x00073150 */

loc_00075F5B: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00075F77; /* jae: above or equal (unsigned >=) */

loc_00075F64: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075F6Fu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00075F6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00075F77: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00075F80: ;
    ecx = MEM32(esi * 4 + 0x912A40);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075FA2; /* jne: not equal / not zero */

loc_00075F8E: ;
    edx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00075F99u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00075F99: ;
    edi = MEM32(0x90315C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075FA2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00075F80; /* jb: below (unsigned <) */

loc_00075FA7: ;
    POP32(esp, esi);

loc_00075FA8: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00075FB0
 * Original: 0x00075FB0 - 0x00075FE9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075FB0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x17;
    edi = 0x912968;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xBC;
    edi = 0x902E68;
    MEM32(0x90315C) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00075FDEu); RECOMP_ABI_CALL(0x00070460u, sub_00070460); /* call 0x00070460 */

loc_00075FDE: ;
    PUSH32(esp, 0x00075FE3u); RECOMP_ABI_CALL(0x00072FC0u, sub_00072FC0); /* call 0x00072FC0 */

loc_00075FE3: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000719B0(); return; /* tail jmp 0x000719B0 */

}

/**
 * sub_00075FF0
 * Original: 0x00075FF0 - 0x00076399 (937 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00075FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x912960);
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, edi);
    MEM32(0x903CCC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00076389; /* je: equal / zero */

loc_0007601B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076020u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00076020: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000001u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00076032; /* je: equal / zero */

loc_00076027: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007602Cu); RECOMP_ABI_CALL(0x00070460u, sub_00070460); /* call 0x00070460 */

loc_0007602C: ;
    edx = MEM32(0x912960);

loc_00076032: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076389; /* je: equal / zero */

loc_0007603A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076389; /* je: equal / zero */

loc_00076043: ;
    ebx = MEM32(0x912A3C);
    _fa = (uint32_t)(MEM32(0x902DA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x902DA0), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007616A; /* jb: below (unsigned <) */

loc_00076055: ;
    eax = MEM32(0x903CF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ecx * 4 + 0x903170);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ecx = ecx * 4 + 0x903170;
    if (CMP_NE(_fa, _fb)) goto loc_0007614B; /* jne: not equal / not zero */

loc_00076076: ;
    ecx = MEM32(0x903D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x903CCC) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00076097; /* je: equal / zero */

loc_0007608A: ;
    eax = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x903D14) = eax;
    goto loc_00076358;

loc_00076097: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076108; /* jne: not equal / not zero */

loc_0007609C: ;
    edx = MEM32(0x903300);
    eax = MEM32(0x903304);
    MEM32(esp + 0x10) = edx;
    ecx = ebx + ebx * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(0x913290));
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    esi = 0x913968;
    edi = esp + 0x1C;
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
    edx = MEM32(0x914798);
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
    ecx = MEM32(0x91479C);
    PUSH32(esp, ecx);
    MEM8(esp + 0x25) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM8(esp + 0x2C) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000760F9u); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_000760F9: ;
    MEM32(0x903D14) = 4;
    goto loc_00076355;

loc_00076108: ;
    ecx = MEM32(0x903300);
    edx = MEM32(0x903304);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x91479C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x914798);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007613Cu); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_0007613C: ;
    MEM32(0x903D14) = 4;
    goto loc_00076355;

loc_0007614B: ;
    MEM32(ecx) = esi;
    MEM32(0x903CF0) = eax;
    MEM32(0x902DA0) = esi;
    MEM32(0x91320C) = esi;
    MEM32(0x903D14) = 4;
    goto loc_00076170;

loc_0007616A: ;
    esi = MEM32(0x91320C);

loc_00076170: ;
    eax = MEM32(0x913290);
    ecx = MEM32(0x903CF0);
    edx = MEM32(0x903D28);
    ebx = eax + ecx;
    ecx = MEM32(ebp + 8);
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx + eax;
    eax = esi + edi * 4;
    edx = eax + eax * 4;
    PUSH32(esp, ecx);
    eax = edx * 4 + 0x913968;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000761A9u); RECOMP_ABI_CALL(0x00070520u, sub_00070520); /* call 0x00070520 */

loc_000761A9: ;
    eax = MEM32(0x912A3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(0x91320C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0007621D; /* jne: not equal / not zero */

loc_000761BC: ;
    ecx = MEM32(0x902DE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007621D; /* jne: not equal / not zero */

loc_000761C6: ;
    ecx = MEM32(0x903300);
    edx = MEM32(0x903304);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    esi = edi + edi * 4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x914798);
    MEM32(esp + 0x18) = ebx;
    _fb = (uint32_t)(0x913968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x913968;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x1C;
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
    ecx = MEM32(0x91479C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007621Au); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_0007621A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007621D: ;
    PUSH32(esp, 8);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076226u); RECOMP_ABI_CALL(0x00070620u, sub_00070620); /* call 0x00070620 */

loc_00076226: ;
    eax = MEM32(0x902DE0);
    edx = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076358; /* jne: not equal / not zero */

loc_0007623B: ;
    ecx = MEM32(0x9131C0);
    eax = MEM32(0x903CF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076262; /* jb: below (unsigned <) */

loc_0007624A: ;
    if (CMP_NE(_fa, _fb)) goto loc_00076358; /* jne: not equal / not zero */

loc_00076250: ;
    ecx = MEM32(0x903CD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902DA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x902DA0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076358; /* jb: below (unsigned <) */

loc_00076262: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x912960) = esi;
    MEM32(0x903CF0) = esi;
    MEM32(0x902DA0) = esi;
    MEM32(0x91320C) = esi;
    MEM32(0x903D28) = edx;
    MEM32(0x903CCC) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007628Du); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_0007628D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x903170) = edx;
    MEM32(0x903174) = edx;
    MEM32(0x903178) = edx;
    MEM32(0x90317C) = edx;
    eax = MEM32(0x903300);
    MEM32(0x903180) = edx;
    ecx = MEM32(0x903304);
    MEM32(0x903184) = edx;
    MEM32(0x903188) = edx;
    MEM32(0x90318C) = edx;
    MEM32(0x903190) = edx;
    MEM32(0x903194) = edx;
    MEM32(0x903198) = edx;
    MEM32(0x90319C) = edx;
    MEM32(0x9031A0) = edx;
    MEM32(0x9031A4) = edx;
    MEM32(0x9031A8) = edx;
    MEM32(0x9031AC) = edx;
    edx = MEM32(0x91479C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x914798);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0xFFFFFFFCu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076321u); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_00076321: ;
    edx = MEM32(0x903300);
    eax = MEM32(0x903304);
    MEM32(0x903160) = edx;
    MEM32(0x903164) = eax;
    MEM32(0x9131FC) = esi;
    MEM32(0x914798) = esi;
    MEM32(0x91479C) = esi;
    MEM32(0x903CC0) = esi;
    MEM32(0x903CF8) = esi;

loc_00076355: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00076358: ;
    _fa = (uint32_t)(MEM32(0x903CF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x903CF0), 0xA (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00076389; /* jbe: below or equal (unsigned <=) */

loc_00076361: ;
    eax = MEM32(0x903168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4650) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4650 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00076374; /* jbe: below or equal (unsigned <=) */

loc_0007636D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x903D18) = eax;

loc_00076374: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x903168) = eax;
    eax = MEM32(0x903CCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076389; /* je: equal / zero */

loc_00076383: ;
    MEM32(0x903D18) = MEM32(0x903D18) + 1;
    _fa = (uint32_t)(MEM32(0x903D18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00076389: ;
    ecx = MEM32(esp + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076392u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00076392: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000763A0
 * Original: 0x000763A0 - 0x000763AE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000763A0(void)
{

loc_000763A0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    SET_LO8(eax, MEM8(eax + 0x902EC5));
    esp += 4; return; /* ret */

}

/**
 * sub_000763B0
 * Original: 0x000763B0 - 0x000763C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000763B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000763B0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    eax = ZX8(MEM8(eax + 0x902EC4));
    eax = eax >> 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_000763D0
 * Original: 0x000763D0 - 0x000763EE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000763D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000763D0: ;
    edx = MEM32(0x90315C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000763ED; /* jbe: below or equal (unsigned <=) */

loc_000763DC: ;
    ecx = 0x902EC4;

loc_000763E1: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000763E7; /* je: equal / zero */

loc_000763E6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000763E7: ;
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000763E1; /* jne: not equal / not zero */

loc_000763ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000763F0
 * Original: 0x000763F0 - 0x00076448 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000763F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000763F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x912964);
    eax = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    MEM32(esp + 9) = edx;
    edx = MEM32(0x90315C);
    MEM32(esp + 1) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(esp) = 7;
    MEM32(esp + 5) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00076444; /* jbe: below or equal (unsigned <=) */

loc_00076420: ;
    ecx = 0x902EC4;

loc_00076425: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00076436; /* js: sign (negative) */

loc_0007642A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076425; /* jb: below (unsigned <) */

loc_00076432: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00076436: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076441u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00076441: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00076444: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00076450
 * Original: 0x00076450 - 0x00076621 (465 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00076456u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00076456: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076501; /* je: equal / zero */

loc_0007645E: ;
    PUSH32(esp, 0x00076463u); RECOMP_ABI_CALL(0x0007CEB0u, sub_0007CEB0); /* call 0x0007CEB0 */

loc_00076463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076501; /* jne: not equal / not zero */

loc_0007646B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, 0x00076477u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00076477: ;
    ebx = eax;
    eax = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000764F6; /* jbe: below or equal (unsigned <=) */

loc_00076486: ;
    PUSH32(esp, ebp);
    ebp = 0x902EC4;
    /* nop */

loc_00076490: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_000764DF; /* js: sign (negative) */

loc_00076496: ;
    edx = MEM32(0x912964);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi * 4 + 0x913944)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi * 4 + 0x913944) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000764DF; /* je: equal / zero */

loc_000764A5: ;
    edx = ebx;
    _fb = (uint32_t)(MEM32(0x913208)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(0x913208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000764DF; /* jbe: below or equal (unsigned <=) */

loc_000764B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000764CA; /* jne: not equal / not zero */

loc_000764BC: ;
    eax = MEM32(0x903CC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000764CA; /* je: equal / zero */

loc_000764C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    goto loc_000764CD;

loc_000764CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);

loc_000764CD: ;
    PUSH32(esp, 0x000764D2u); RECOMP_ABI_CALL(0x0007D1B0u, sub_0007D1B0); /* call 0x0007D1B0 */

loc_000764D2: ;
    eax = MEM32(0x90315C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;

loc_000764DF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x5E;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076490; /* jb: below (unsigned <) */

loc_000764E7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000764F6; /* je: equal / zero */

loc_000764EC: ;
    PUSH32(esp, 0x000764F1u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000764F1: ;
    MEM32(0x913208) = eax;

loc_000764F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000764FCu); RECOMP_ABI_CALL(0x0007CEA0u, sub_0007CEA0); /* call 0x0007CEA0 */

loc_000764FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00076501: ;
    PUSH32(esp, 0x00076506u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00076506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000765E6; /* jne: not equal / not zero */

loc_0007650E: ;
    eax = MEM32(0x903CD8);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00076597; /* je: equal / zero */

loc_00076519: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007661B; /* jne: not equal / not zero */

loc_00076520: ;
    eax = MEM32(0x913938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9131EF)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9131EF) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007658A; /* jne: not equal / not zero */

loc_0007652D: ;
    PUSH32(esp, 0x00076532u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00076532: ;
    _fb = (uint32_t)(MEM32(0x9147AC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x9147AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007661B; /* jbe: below or equal (unsigned <=) */

loc_00076543: ;
    edx = MEM32(0x90315C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007657A; /* jbe: below or equal (unsigned <=) */

loc_0007654F: ;
    ecx = 0x902EC4;

loc_00076554: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00076571; /* js: sign (negative) */

loc_00076559: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076554; /* jb: below (unsigned <) */

loc_00076561: ;
    PUSH32(esp, 0x00076566u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00076566: ;
    MEM32(0x9147AC) = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

loc_00076571: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076577u); RECOMP_ABI_CALL(0x0007E1C0u, sub_0007E1C0); /* call 0x0007E1C0 */

loc_00076577: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007657A: ;
    PUSH32(esp, 0x0007657Fu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007657F: ;
    MEM32(0x9147AC) = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

loc_0007658A: ;
    MEM32(0x903CD8) = MEM32(0x903CD8) & 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(0x903CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

loc_00076597: ;
    PUSH32(esp, 0x0007659Cu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007659C: ;
    ecx = MEM32(0x903CD8);
    edx = MEM32(0x90315C);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x9147AC) = eax;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x903CD8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0007661B; /* jbe: below or equal (unsigned <=) */

loc_000765BF: ;
    ecx = 0x902EC4;

loc_000765C4: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_000765D7; /* js: sign (negative) */

loc_000765C9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000765C4; /* jb: below (unsigned <) */

loc_000765D1: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

loc_000765D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000765DDu); RECOMP_ABI_CALL(0x0007E1C0u, sub_0007E1C0); /* call 0x0007E1C0 */

loc_000765DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

loc_000765E6: ;
    eax = MEM32(0x903CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000765FF; /* je: equal / zero */

loc_000765EF: ;
    MEM32(0x903CD8) = 0;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

loc_000765FF: ;
    eax = MEM32(0x913224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007660D; /* je: equal / zero */

loc_00076608: ;
    PUSH32(esp, 0x0007660Du); RECOMP_ABI_CALL(0x00073770u, sub_00073770); /* call 0x00073770 */

loc_0007660D: ;
    eax = MEM32(0x914398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007661B; /* je: equal / zero */

loc_00076616: ;
    PUSH32(esp, 0x0007661Bu); RECOMP_ABI_CALL(0x00073D60u, sub_00073D60); /* call 0x00073D60 */

loc_0007661B: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00073000(); return; /* tail jmp 0x00073000 */

}

/**
 * sub_00076630
 * Original: 0x00076630 - 0x000766AC (124 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076630: ;
    PUSH32(esp, ebx);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00076639u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00076639: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007667E; /* je: equal / zero */

loc_0007663D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00076646u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00076646: ;
    esi = MEM32(0x91298C);
    edi = MEM32(0x912990);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076666; /* jne: not equal / not zero */

loc_00076659: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076666; /* jne: not equal / not zero */

loc_0007665D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00076666: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007666Du); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007666D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000766A6; /* jne: not equal / not zero */

loc_00076674: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000766A6; /* jne: not equal / not zero */

loc_00076678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007667E: ;
    eax = MEM32(0x912A40);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076691; /* je: equal / zero */

loc_0007668A: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00076691: ;
    ecx = MEM32(0x912A44);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000766A2; /* je: equal / zero */

loc_0007669E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000766A2: ;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000766A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000766B0
 * Original: 0x000766B0 - 0x000767F2 (322 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000766B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000766B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(0x90315C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00076716; /* jbe: below or equal (unsigned <=) */

loc_000766D4: ;
    esi = 0x902E8C;
    /* nop */

loc_000766E0: ;
    ecx = 0x913218;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000766EAu); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_000766EA: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000766F7; /* jne: not equal / not zero */

loc_000766F0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007670D; /* je: equal / zero */

loc_000766F7: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x90315C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000766E0; /* jb: below (unsigned <) */

loc_0007670D: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(0x90315C);

loc_00076716: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076756; /* je: equal / zero */

loc_0007671A: ;
    ecx = 0x17;
    esi = 0x902E68;
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
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ebx = ecx + 0x902E68;
    ecx = 0x17;
    esi = ebx;
    edi = 0x902E68;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
    esi = esp + 0x10;
    edi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_00076756: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007678E; /* jbe: below or equal (unsigned <=) */

loc_0007675C: ;
    esi = 0x902E8C;

loc_00076761: ;
    ecx = 0x913218;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007676Bu); RECOMP_ABI_CALL(0x000736B0u, sub_000736B0); /* call 0x000736B0 */

loc_0007676B: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076778; /* jne: not equal / not zero */

loc_00076771: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076785; /* je: equal / zero */

loc_00076778: ;
    eax = MEM32(0x90315C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076761; /* jb: below (unsigned <) */

loc_00076785: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(0x90315C);

loc_0007678E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000767D8; /* je: equal / zero */

loc_00076792: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = esp + 0x10;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    eax = eax + 0x902E68;
    ecx = 0x17;
    esi = eax;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ebx = ebx + 0x902E68;
    ecx = 0x17;
    esi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
    esi = esp + 0x10;
    edi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_000767D8: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000767DFu); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_000767DF: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000767EBu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000767EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00076800
 * Original: 0x00076800 - 0x0007693F (319 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00076800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90315C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00076853; /* jbe: below or equal (unsigned <=) */

loc_00076825: ;
    esi = 0x902E8C;
    /* nop */

loc_00076830: ;
    ecx = 0x914380;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007683Au); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007683A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076847; /* jne: not equal / not zero */

loc_00076840: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007684F; /* je: equal / zero */

loc_00076847: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076830; /* jb: below (unsigned <) */

loc_0007684F: ;
    MEM32(esp + 0xC) = ebx;

loc_00076853: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007689D; /* je: equal / zero */

loc_00076857: ;
    ecx = 0x17;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    esi = 0x902E68;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = ebx + 0x902E68;
    esi = eax;
    ecx = 0x17;
    edi = 0x902E68;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edi = eax;
    ecx = 0x17;
    esi = esp + 0x10;
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
    PUSH32(esp, 1);
    ecx = 0x902E68;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007689Du); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007689D: ;
    esi = MEM32(0x914384);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = 0x902E68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000768B3u); RECOMP_ABI_CALL(0x0007C500u, sub_0007C500); /* call 0x0007C500 */

loc_000768B3: ;
    edi = MEM32(0x90315C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000768E3; /* jbe: below or equal (unsigned <=) */

loc_000768BF: ;
    esi = 0x902E8C;

loc_000768C4: ;
    ecx = 0x914380;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000768CEu); RECOMP_ABI_CALL(0x00073A80u, sub_00073A80); /* call 0x00073A80 */

loc_000768CE: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000768DB; /* jne: not equal / not zero */

loc_000768D4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000768E3; /* je: equal / zero */

loc_000768DB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000768C4; /* jb: below (unsigned <) */

loc_000768E3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007692F; /* je: equal / zero */

loc_000768E7: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 0x17;
    edi = esp + 0x10;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    eax = eax + 0x902E68;
    esi = eax;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ebx = ebx + 0x902E68;
    ecx = 0x17;
    esi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
    esi = esp + 0x10;
    edi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_0007692F: ;
    ecx = MEM32(esp + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076938u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00076938: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00076940
 * Original: 0x00076940 - 0x000769E2 (162 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00076940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x74) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007695Au); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007695A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000769D2; /* je: equal / zero */

loc_0007695E: ;
    ecx = MEM32(0x90315C);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000769D2; /* jbe: below or equal (unsigned <=) */

loc_00076971: ;
    ebx = 0x902EC6;

loc_00076976: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000769BC; /* jne: not equal / not zero */

loc_0007697E: ;
    ecx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000769BC; /* jne: not equal / not zero */

loc_00076986: ;
    ecx = 0x17;
    esi = 0x902E68;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
    esi = ebx;
    edi = 0x902E68;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = 0x17;
    esi = esp + 0x10;
    edi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000769BCu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_000769BC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x90315C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00076976; /* jb: below (unsigned <) */

loc_000769D2: ;
    ecx = MEM32(esp + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000769DBu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000769DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000769F0
 * Original: 0x000769F0 - 0x00076A7F (143 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000769F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000769F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000769FBu); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_000769FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000001u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00076A15; /* jne: not equal / not zero */

loc_00076A02: ;
    PUSH32(esp, 0x00076A07u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00076A07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A1F; /* jne: not equal / not zero */

loc_00076A0C: ;
    eax = MEM32(0x903CC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076A78; /* je: equal / zero */

loc_00076A15: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00076A1F: ;
    PUSH32(esp, 0x00076A24u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00076A24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A15; /* jne: not equal / not zero */

loc_00076A28: ;
    eax = MEM32(0x912960);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A15; /* jne: not equal / not zero */

loc_00076A31: ;
    eax = MEM32(0x903CF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A72; /* jne: not equal / not zero */

loc_00076A3A: ;
    eax = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    edx = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(esp + 0xC) = 1;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = ecx;
    PUSH32(esp, 0x00076A5Eu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00076A5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    MEM32(0x903CF8) = 0x3C;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00076A72: ;
    MEM32(0x903CF8) = MEM32(0x903CF8) - 1;
    _fa = (uint32_t)(MEM32(0x903CF8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00076A78: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00076A80
 * Original: 0x00076A80 - 0x00076ACF (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076A80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A8D; /* jne: not equal / not zero */

loc_00076A89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00076A8D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00076A94u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_00076A94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076AAC; /* je: equal / zero */

loc_00076A9B: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00076AA8u); RECOMP_ABI_CALL(0x00070E40u, sub_00070E40); /* call 0x00070E40 */

loc_00076AA8: ;
    esi = eax;
    goto loc_00076AAE;

loc_00076AAC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00076AAE: ;
    ecx = esi;
    MEM32(esi) = 0;
    PUSH32(esp, 0x00076ABBu); RECOMP_ABI_CALL(0x00070F60u, sub_00070F60); /* call 0x00070F60 */

loc_00076ABB: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00076AC8u); RECOMP_ABI_CALL(0x000809A0u, sub_000809A0); /* call 0x000809A0 */

loc_00076AC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076AD0
 * Original: 0x00076AD0 - 0x00076B1F (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076AD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076ADD; /* jne: not equal / not zero */

loc_00076AD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00076ADD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00076AE4u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_00076AE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076AFC; /* je: equal / zero */

loc_00076AEB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00076AF8u); RECOMP_ABI_CALL(0x00070E40u, sub_00070E40); /* call 0x00070E40 */

loc_00076AF8: ;
    esi = eax;
    goto loc_00076AFE;

loc_00076AFC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00076AFE: ;
    ecx = esi;
    MEM32(esi) = 0;
    PUSH32(esp, 0x00076B0Bu); RECOMP_ABI_CALL(0x00070F60u, sub_00070F60); /* call 0x00070F60 */

loc_00076B0B: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00076B18u); RECOMP_ABI_CALL(0x000809A0u, sub_000809A0); /* call 0x000809A0 */

loc_00076B18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076B20
 * Original: 0x00076B20 - 0x00076B79 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076B20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076B2D; /* jne: not equal / not zero */

loc_00076B29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00076B2D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00076B34u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_00076B34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076B4C; /* je: equal / zero */

loc_00076B3B: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00076B48u); RECOMP_ABI_CALL(0x00070E40u, sub_00070E40); /* call 0x00070E40 */

loc_00076B48: ;
    esi = eax;
    goto loc_00076B4E;

loc_00076B4C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00076B4E: ;
    ecx = esi;
    MEM32(esi) = 2;
    PUSH32(esp, 0x00076B5Bu); RECOMP_ABI_CALL(0x00070F60u, sub_00070F60); /* call 0x00070F60 */

loc_00076B5B: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00076B6Cu); RECOMP_ABI_CALL(0x000711C0u, sub_000711C0); /* call 0x000711C0 */

loc_00076B6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00076B72u); RECOMP_ABI_CALL(0x00080B20u, sub_00080B20); /* call 0x00080B20 */

loc_00076B72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076B80
 * Original: 0x00076B80 - 0x00076BD7 (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076B80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076B8D; /* jne: not equal / not zero */

loc_00076B89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00076B8D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00076B94u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_00076B94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076BA9; /* je: equal / zero */

loc_00076B9B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00076BA5u); RECOMP_ABI_CALL(0x00070E40u, sub_00070E40); /* call 0x00070E40 */

loc_00076BA5: ;
    esi = eax;
    goto loc_00076BAB;

loc_00076BA9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00076BAB: ;
    ecx = esi;
    MEM32(esi) = 2;
    PUSH32(esp, 0x00076BB8u); RECOMP_ABI_CALL(0x00070F60u, sub_00070F60); /* call 0x00070F60 */

loc_00076BB8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076BC2u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00076BC2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00076BCAu); RECOMP_ABI_CALL(0x000711C0u, sub_000711C0); /* call 0x000711C0 */

loc_00076BCA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00076BD0u); RECOMP_ABI_CALL(0x00080B20u, sub_00080B20); /* call 0x00080B20 */

loc_00076BD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076BE0
 * Original: 0x00076BE0 - 0x00076BF7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076BF5; /* je: equal / zero */

loc_00076BE7: ;
    PUSH32(esp, 0x00076BECu); RECOMP_ABI_CALL(0x00070EE0u, sub_00070EE0); /* call 0x00070EE0 */

loc_00076BEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00076BF2u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_00076BF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00076BF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076C00
 * Original: 0x00076C00 - 0x00076CC6 (198 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076CC2; /* jne: not equal / not zero */

loc_00076C0C: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076CC2; /* je: equal / zero */

loc_00076C17: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076CC2; /* je: equal / zero */

loc_00076C22: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00076CC1; /* jbe: below or equal (unsigned <=) */

loc_00076C30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00076C38: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00076C56; /* jae: above or equal (unsigned >=) */

loc_00076C3D: ;
    eax = MEM32(esi + 0x24);
    ecx = ebp;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    goto loc_00076C70;

loc_00076C56: ;
    PUSH32(esp, 0x00076C5Bu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00076C5B: ;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;

loc_00076C70: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 8);
    MEM32(ecx + edi + 0xC) = edx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x18);
    MEM32(eax + edi + 0x10) = ecx;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x28);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    eax = MEM32(esi + 0x24);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi + 0x14) = edx;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + edi + 0x14);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076CAAu); RECOMP_ABI_CALL(0x000714E0u, sub_000714E0); /* call 0x000714E0 */

loc_00076CAA: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x56;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076C38; /* jb: below (unsigned <) */

loc_00076CBF: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00076CC1: ;
    POP32(esp, ebx);

loc_00076CC2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076CD0
 * Original: 0x00076CD0 - 0x00076D54 (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076CD0: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x11C) = eax;
    if ((_fa == 0)) goto loc_00076CFB; /* je: equal / zero */

loc_00076CF2: ;
    PUSH32(esp, 0x00076CF7u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00076CF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076D09; /* je: equal / zero */

loc_00076CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076D3F; /* jne: not equal / not zero */

loc_00076CFF: ;
    PUSH32(esp, 0x00076D04u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00076D04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076D3F; /* jne: not equal / not zero */

loc_00076D09: ;
    eax = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x2E6424); PUSH32(esp, 0x00076D2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076D25u); } /* indirect call */
    }

loc_00076D2C: ;
    esi = ~esi;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076D3Cu); RECOMP_ABI_CALL(0x0007E0C0u, sub_0007E0C0); /* call 0x0007E0C0 */

loc_00076D3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00076D3F: ;
    ecx = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00076D4Du); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00076D4D: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00076D60
 * Original: 0x00076D60 - 0x00076D6C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076D60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076D6B; /* je: equal / zero */

loc_00076D64: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00076D6Au); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_00076D6A: ;
    POP32(esp, ecx);

loc_00076D6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00076D70
 * Original: 0x00076D70 - 0x000770B6 (838 bytes, 246 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00076D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x903D20);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076DA8; /* jne: not equal / not zero */

loc_00076D9C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903D24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903D24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076E73; /* je: equal / zero */

loc_00076DA8: ;
    _fa = (uint32_t)(MEM32(0x9031BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031BC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076E60; /* jne: not equal / not zero */

loc_00076DB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    ecx = 0x66;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    if (CMP_B(_fa, _fb)) goto loc_000770AF; /* jb: below (unsigned <) */

loc_00076DD4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000770AF; /* ja: above (unsigned >) */

loc_00076DDD: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076E0Au); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_00076E0A: ;
    ecx = MEM32(0x9131EF);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x90315C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000770AF; /* jbe: below or equal (unsigned <=) */

loc_00076E2A: ;
    ebx = 0x902E8C;
    /* nop */

loc_00076E30: ;
    edx = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076E4C; /* jne: not equal / not zero */

loc_00076E36: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076E4C; /* jne: not equal / not zero */

loc_00076E3E: ;
    ecx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076E49u); RECOMP_ABI_CALL(0x0007E140u, sub_0007E140); /* call 0x0007E140 */

loc_00076E49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00076E4C: ;
    eax = MEM32(0x90315C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076E30; /* jb: below (unsigned <) */

loc_00076E59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00076E60: ;
    MEM32(0x903D20) = eax;
    MEM32(0x903D24) = ecx;
    eax = MEM32(esi + 0xC);
    MEM32(0x91393C) = eax;

loc_00076E73: ;
    eax = MEM32(0x914374);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007706F; /* je: equal / zero */

loc_00076E81: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00076FB0; /* je: equal / zero */

loc_00076E8A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000770AF; /* jne: not equal / not zero */

loc_00076E91: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    eax = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_00076EA3; /* je: equal / zero */

loc_00076E9B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076F80; /* jne: not equal / not zero */

loc_00076EA3: ;
    ecx = MEM32(0x91393C);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076F80; /* jne: not equal / not zero */

loc_00076EB2: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(0x914710);
    edx = ecx;
    edi = eax + 3;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00076F20; /* jbe: below or equal (unsigned <=) */

loc_00076EC6: ;
    edi = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00076F00; /* jne: not equal / not zero */

loc_00076ECE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x914710) = eax;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 4;
    MEM32(0x913940) = ebx;
    MEM32(0x903D10) = edx;
    MEM32(eax * 4 + 0x903CFC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076EF6u); RECOMP_ABI_CALL(0x00071C20u, sub_00071C20); /* call 0x00071C20 */

loc_00076EF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00076F00: ;
    MEM32(0x903CFC) = ebx;
    MEM32(0x903D00) = ebx;
    MEM32(0x903D04) = ebx;
    MEM32(0x903D08) = ebx;
    MEM32(0x914710) = ecx;
    goto loc_00076F66;

loc_00076F20: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00076F33; /* jb: below (unsigned <) */

loc_00076F24: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x903CFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x903CFC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000770AF; /* jne: not equal / not zero */

loc_00076F31: ;
    goto loc_00076F65;

loc_00076F33: ;
    edi = eax;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edi * 4 + 0x903CFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x903CFC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000770AF; /* je: equal / zero */

loc_00076F46: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000770AF; /* jge: greater or equal (signed >=) */

loc_00076F51: ;
    eax = edx + edx * 4;
    MEM32(0x914710) = ecx;
    MEM32(0x913940) = ebx;
    MEM32(0x903D10) = eax;

loc_00076F65: ;
    PUSH32(esp, esi);

loc_00076F66: ;
    MEM32(edx * 4 + 0x903CFC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00076F76u); RECOMP_ABI_CALL(0x00071C20u, sub_00071C20); /* call 0x00071C20 */

loc_00076F76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00076F80: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000770AF; /* jb: below (unsigned <) */

loc_00076F89: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00076F97; /* jbe: below or equal (unsigned <=) */

loc_00076F8E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000770AF; /* jne: not equal / not zero */

loc_00076F97: ;
    _fa = (uint32_t)(MEM32(0x9031B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000770AF; /* jne: not equal / not zero */

loc_00076FA3: ;
    MEM32(0x914374) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00076FB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    eax = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_00076FD4; /* je: equal / zero */

loc_00076FBA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FD4; /* je: equal / zero */

loc_00076FBE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000770AF; /* jne: not equal / not zero */

loc_00076FC7: ;
    MEM32(0x903EB4) = MEM32(0x903EB4) + 1;
    _fa = (uint32_t)(MEM32(0x903EB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00076FD4: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000770AF; /* jns: not sign (positive) */

loc_00076FDF: ;
    MEM32(0x914374) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x91393C) = ecx;
    MEM32(0x903CFC) = ebx;
    MEM32(0x903D00) = ebx;
    MEM32(0x903D04) = ebx;
    MEM32(0x903D08) = ebx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(0x913940) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00077021; /* jae: above or equal (unsigned >=) */

loc_00077013: ;
    MEM32(0x914710) = ebx;
    MEM32(0x903D10) = ebx;
    goto loc_00077034;

loc_00077021: ;
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx + ecx * 4;
    MEM32(0x914710) = eax;
    MEM32(0x903D10) = edx;

loc_00077034: ;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax * 4 + 0x903CFC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077048u); RECOMP_ABI_CALL(0x00071C20u, sub_00071C20); /* call 0x00071C20 */

loc_00077048: ;
    eax = MEM32(0x912A60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007705A; /* je: equal / zero */

loc_00077054: ;
    MEM32(0x912A60) = ebx;

loc_0007705A: ;
    _fa = (uint32_t)(MEM32(0x9147A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9147A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000770AF; /* je: equal / zero */

loc_00077062: ;
    MEM32(0x9147A8) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007706F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077094; /* jne: not equal / not zero */

loc_00077077: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077080u); RECOMP_ABI_CALL(0x00072600u, sub_00072600); /* call 0x00072600 */

loc_00077080: ;
    MEM32(0x914374) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00077094: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000770AF; /* jne: not equal / not zero */

loc_00077099: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000770A2u); RECOMP_ABI_CALL(0x00072620u, sub_00072620); /* call 0x00072620 */

loc_000770A2: ;
    MEM32(0x914374) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000770AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000770C0
 * Original: 0x000770C0 - 0x0007763B (1403 bytes, 428 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000770C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000770C0: ;
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1A8));
    esp = esp - 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1B4);
    PUSH32(esp, esi);
    esi = MEM32(0x9131EF);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    ecx = 0x66;
    edi = esp + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077630; /* jne: not equal / not zero */

loc_000770F9: ;
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00077630; /* ja: above (unsigned >) */

loc_0007710A: ;
    eax = ZX8(MEM8(eax + 0x77650));
    { uint32_t _jt = MEM32(eax * 4 + 0x7763C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00077118u) goto loc_00077118;
    if (_jt == 0x000771F9u) goto loc_000771F9;
    if (_jt == 0x0007744Bu) goto loc_0007744B;
    if (_jt == 0x000775BEu) goto loc_000775BE;
    if (_jt == 0x00077627u) goto loc_00077627;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00077118: ;
    PUSH32(esp, 0x0007711Du); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007711D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00077630; /* je: equal / zero */

loc_00077126: ;
    SET_LO8(eax, MEM8(0x9131E8));
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0007716F; /* jne: not equal / not zero */

loc_0007714C: ;
    MEM32(esp + 0x28) = 2;
    PUSH32(esp, 0x00077159u); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_00077159: ;
    SET_LO8(edx, MEM8(0x902D9C));
    ecx = MEM32(0x902D98);
    MEM32(esp + 0x2C) = eax;
    MEM8(esp + 0x34) = LO8(edx);
    goto loc_00077199;

loc_0007716F: ;
    MEM32(esp + 0x28) = 3;
    PUSH32(esp, 0x0007717Cu); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_0007717C: ;
    edx = MEM32(0x91436C);
    ecx = MEM32(0x914368);
    MEM32(esp + 0x2C) = eax;
    SET_LO8(eax, MEM8(0x914370));
    MEM32(esp + 0x34) = edx;
    MEM8(esp + 0x38) = LO8(eax);

loc_00077199: ;
    edx = MEM32(0x90315C);
    MEM32(esp + 0x30) = ecx;
    ecx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_000771B3: ;
    esi = MEM32(ebp);
    edi = MEM32(ebp + 4);
    eax = 0x902F48;
    edi = edi;

loc_000771C0: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000771CD; /* jne: not equal / not zero */

loc_000771C6: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000771E0; /* je: equal / zero */

loc_000771CD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5E)) >> 32) & 1);
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000771C0; /* jb: below (unsigned <) */

loc_000771D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000771E0: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000771EBu); RECOMP_ABI_CALL(0x0007E140u, sub_0007E140); /* call 0x0007E140 */

loc_000771EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000771F9: ;
    _fa = (uint32_t)(MEM32(0x914374)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914374), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000773D9; /* jne: not equal / not zero */

loc_00077206: ;
    ebx = MEM32(0x9129D0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0007734F; /* jae: above or equal (unsigned >=) */

loc_00077215: ;
    _fa = (uint32_t)(MEM32(0x90315C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90315C), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = 2;
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_0007722A: ;
    esi = 0x902F48;
    /* nop */

loc_00077230: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ebp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00077278; /* jne: not equal / not zero */

loc_0007723C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077278; /* jne: not equal / not zero */

loc_00077243: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00077274; /* jbe: below or equal (unsigned <=) */

loc_00077249: ;
    /* nop */

loc_00077250: ;
    edi = MEM32(eax * 8 + 0x913298);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077266; /* jne: not equal / not zero */

loc_0007725B: ;
    edi = MEM32(eax * 8 + 0x91329C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0007726D; /* je: equal / zero */

loc_00077266: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00077250; /* jb: below (unsigned <) */

loc_0007726B: ;
    goto loc_00077274;

loc_0007726D: ;
    MEM8(eax + 0x914448) = 1;

loc_00077274: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00077299; /* je: equal / zero */

loc_00077278: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x90315C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x5E)) >> 32) & 1);
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00077230; /* jb: below (unsigned <) */

loc_0007728E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00077299: ;
    edi = MEM32(0x914710);
    esi = edi + -3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000772A8; /* jge: greater or equal (signed >=) */

loc_000772A6: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000772A8: ;
    eax = MEM32(0x91393C);
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000772CAu); RECOMP_ABI_CALL(0x00071C10u, sub_00071C10); /* call 0x00071C10 */

loc_000772CA: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esp + 0x14;
    _fb = (uint32_t)(0x80000004u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000004u)) >> 32) & 1);
    eax = eax + 0x80000004u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000772E3u); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_000772E3: ;
    edx = MEM32(0x9131EF);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00077329; /* jge: greater or equal (signed >=) */

loc_000772F8: ;
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = esi;
    PUSH32(esp, 0x00077307u); RECOMP_ABI_CALL(0x00071C70u, sub_00071C70); /* call 0x00071C70 */

loc_00077307: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00077316u); RECOMP_ABI_CALL(0x0007E140u, sub_0007E140); /* call 0x0007E140 */

loc_00077316: ;
    eax = MEM32(0x914710);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000772F8; /* jl: less (signed <) */

loc_00077323: ;
    ebx = MEM32(0x9129D0);

loc_00077329: ;
    eax = MEM32(ebp);
    MEM32(ebx * 8 + 0x913298) = eax;
    ecx = MEM32(ebp + 4);
    POP32(esp, edi);
    MEM32(ebx * 8 + 0x91329C) = ecx;
    POP32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x9129D0) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007734F: ;
    edx = MEM32(0x91298C);
    eax = MEM32(0x912990);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = 7;
    PUSH32(esp, 0x00077374u); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_00077374: ;
    edx = MEM32(0x90315C);
    ecx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_00077392: ;
    esi = MEM32(ebp);
    edi = MEM32(ebp + 4);
    eax = 0x902F48;
    /* nop */

loc_000773A0: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000773AD; /* jne: not equal / not zero */

loc_000773A6: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000773C0; /* je: equal / zero */

loc_000773AD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5E)) >> 32) & 1);
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000773A0; /* jb: below (unsigned <) */

loc_000773B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000773C0: ;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000773CBu); RECOMP_ABI_CALL(0x0007E140u, sub_0007E140); /* call 0x0007E140 */

loc_000773CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000773D9: ;
    eax = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x28) = 6;
    PUSH32(esp, 0x000773FEu); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_000773FE: ;
    edx = MEM32(0x90315C);
    ecx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_0007741C: ;
    esi = MEM32(ebp);
    edi = MEM32(ebp + 4);
    eax = 0x902F48;

loc_00077427: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077438; /* jne: not equal / not zero */

loc_0007742D: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000775A5; /* je: equal / zero */

loc_00077438: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5E)) >> 32) & 1);
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00077427; /* jb: below (unsigned <) */

loc_00077440: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007744B: ;
    _fa = (uint32_t)(MEM32(0x914374)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914374), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0007753A; /* jne: not equal / not zero */

loc_00077458: ;
    eax = MEM32(0x90315C);
    esi = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_0007746A: ;
    edi = MEM32(0x9129D0);
    eax = 0x902F48;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_00077480: ;
    ecx = MEM32(ebp);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ebp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00077515; /* jne: not equal / not zero */

loc_00077490: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077515; /* jne: not equal / not zero */

loc_0007749B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00077515; /* jbe: below or equal (unsigned <=) */

loc_000774A1: ;
    ebx = MEM32(eax * 8 + 0x913298);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000774B7; /* jne: not equal / not zero */

loc_000774AC: ;
    ebx = MEM32(eax * 8 + 0x91329C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00077515; /* je: equal / zero */

loc_000774B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000774C6; /* jne: not equal / not zero */

loc_000774BB: ;
    ebx = MEM32(0x91393C);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000774CD; /* jne: not equal / not zero */

loc_000774C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000774A1; /* jb: below (unsigned <) */

loc_000774CB: ;
    goto loc_00077515;

loc_000774CD: ;
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = 0xA;
    PUSH32(esp, 0x000774F3u); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_000774F3: ;
    ecx = MEM32(0x9131EF);
    edx = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x0007750Cu); RECOMP_ABI_CALL(0x0007E140u, sub_0007E140); /* call 0x0007E140 */

loc_0007750C: ;
    edi = MEM32(0x9129D0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077515: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5E)) >> 32) & 1);
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00077480; /* jb: below (unsigned <) */

loc_0007752F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007753A: ;
    eax = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x28) = 6;
    PUSH32(esp, 0x0007755Fu); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_0007755F: ;
    edx = MEM32(0x90315C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_0007757A: ;
    esi = MEM32(ebp);
    edi = MEM32(ebp + 4);
    eax = 0x902E8C;

loc_00077585: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077592; /* jne: not equal / not zero */

loc_0007758B: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000775A5; /* je: equal / zero */

loc_00077592: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5E)) >> 32) & 1);
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00077585; /* jb: below (unsigned <) */

loc_0007759A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000775A5: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000775B0u); RECOMP_ABI_CALL(0x0007E140u, sub_0007E140); /* call 0x0007E140 */

loc_000775B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000775BE: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91393C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x91393C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077630; /* jne: not equal / not zero */

loc_000775C9: ;
    _fa = (uint32_t)(MEM32(0x914374)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x914374), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077630; /* jne: not equal / not zero */

loc_000775D2: ;
    ecx = MEM32(0x9129D0);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00077630; /* jbe: below or equal (unsigned <=) */

loc_000775DE: ;
    eax = 0x913298;

loc_000775E3: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077614; /* jne: not equal / not zero */

loc_000775EA: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077614; /* jne: not equal / not zero */

loc_000775F2: ;
    ebx = ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0007760C; /* jae: above or equal (unsigned >=) */

loc_000775F9: ;
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (1) _cf = (int)(((ecx) >> (32 - (1))) & 1);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3FFFFFFE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + 8;
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

loc_0007760C: ;
    ecx = ebx;
    MEM32(0x9129D0) = ecx;

loc_00077614: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000775E3; /* jb: below (unsigned <) */

loc_0007761C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00077627: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007762Du); RECOMP_ABI_CALL(0x00076D70u, sub_00076D70); /* call 0x00076D70 */

loc_0007762D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077630: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00077660
 * Original: 0x00077660 - 0x0007767C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077660: ;
    PUSH32(esp, 0x00077665u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00077665: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007766E; /* je: equal / zero */

loc_00077669: ;
    g_seh_ebp = ebp; sub_00073400(); return; /* tail jmp 0x00073400 */

loc_0007766E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x902EC4));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00077680
 * Original: 0x00077680 - 0x00077701 (129 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00077680: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x903D0C) = eax;
    MEM32(0x9031C8) = eax;
    MEM32(0x9031B8) = eax;
    PUSH32(esp, 0x00077696u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00077696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000776A2; /* jne: not equal / not zero */

loc_0007769B: ;
    MEM32(0x9147A0) = eax;
    goto loc_000776B3;

loc_000776A2: ;
    PUSH32(esp, 0x000776A7u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_000776A7: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x9147A0) = eax;

loc_000776B3: ;
    eax = MEM32(0x9131EF);
    MEM32(0x913938) = eax;
    PUSH32(esp, 0x000776C2u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_000776C2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    ecx = MEM32(eax + 0x902E8C);
    edx = MEM32(eax + 0x902E90);
    MEM32(0x903CE0) = ecx;
    MEM32(0x903CE4) = edx;
    PUSH32(esp, 0x000776E2u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_000776E2: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    ecx = MEM32(eax + 0x902E8C);
    edx = MEM32(eax + 0x902E90);
    MEM32(0x903CE8) = ecx;
    MEM32(0x903CEC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00077710
 * Original: 0x00077710 - 0x000777DD (205 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00077710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077710: ;
    PUSH32(esp, 0x00077715u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00077715: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000777DA; /* je: equal / zero */

loc_0007771D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00077724u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00077724: ;
    ecx = MEM32(0x902E8C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077749; /* jne: not equal / not zero */

loc_00077731: ;
    eax = MEM32(0x902E90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077749; /* jne: not equal / not zero */

loc_0007773A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00077741u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_00077741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777DA; /* je: equal / zero */

loc_00077749: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00077750u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00077750: ;
    ecx = MEM32(0x902EEA);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077774; /* jne: not equal / not zero */

loc_0007775D: ;
    eax = MEM32(0x902EEE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077774; /* jne: not equal / not zero */

loc_00077766: ;
    ecx = 1;
    PUSH32(esp, 0x00077770u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_00077770: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777DA; /* je: equal / zero */

loc_00077774: ;
    eax = MEM32(0x90315C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000777C9; /* jbe: below or equal (unsigned <=) */

loc_00077783: ;
    edi = 0x902E8C;

loc_00077788: ;
    esi = MEM32(edi);
    ebx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00077794u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00077794: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007779F; /* jne: not equal / not zero */

loc_0007779B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777B1; /* je: equal / zero */

loc_0007779F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000777A6u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_000777A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000777BC; /* jne: not equal / not zero */

loc_000777AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000777BC; /* jne: not equal / not zero */

loc_000777B1: ;
    ecx = ebp;
    PUSH32(esp, 0x000777B8u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_000777B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777D3; /* je: equal / zero */

loc_000777BC: ;
    eax = MEM32(0x90315C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077788; /* jb: below (unsigned <) */

loc_000777C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000777D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000777DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000777E0
 * Original: 0x000777E0 - 0x000778B9 (217 bytes, 68 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000777E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000777E0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 1) = eax;
    MEM32(esp + 5) = eax;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    eax = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM8(esp) = 0;
    if (CMP_A(_fa, _fb)) goto loc_000778B5; /* ja: above (unsigned >) */

loc_0007780F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x778BC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00077819u) goto loc_00077819;
    if (_jt == 0x00077823u) goto loc_00077823;
    if (_jt == 0x00077843u) goto loc_00077843;
    if (_jt == 0x00077877u) goto loc_00077877;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00077819: ;
    ecx = MEM32(0x903EC8);
    MEM32(esp + 0x19) = ecx;

loc_00077823: ;
    edx = MEM32(0x90315C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00077879; /* jbe: below or equal (unsigned <=) */

loc_0007782F: ;
    ecx = 0x902EC4;

loc_00077834: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00077879; /* jne: not equal / not zero */

loc_00077839: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077834; /* jb: below (unsigned <) */

loc_00077841: ;
    goto loc_00077879;

loc_00077843: ;
    edx = MEM32(0x90315C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00077879; /* jbe: below or equal (unsigned <=) */

loc_0007784F: ;
    esi = MEM32(0x9129CC);
    edi = MEM32(0x9129C8);
    ecx = 0x902E8C;

loc_00077860: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007786D; /* jne: not equal / not zero */

loc_00077866: ;
    ebp = MEM32(ecx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077879; /* je: equal / zero */

loc_0007786D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077860; /* jb: below (unsigned <) */

loc_00077875: ;
    goto loc_00077879;

loc_00077877: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00077879: ;
    edx = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    PUSH32(esp, eax);
    MEM32(esp + 0x11) = edx;
    edx = MEM32(esp + 0x30);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 0xA;
    MEM32(esp + 0x19) = ecx;
    MEM32(esp + 0x1D) = edx;
    PUSH32(esp, 0x000778A5u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_000778A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x913214) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000778B5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000778D0
 * Original: 0x000778D0 - 0x00077A02 (306 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000778D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000778D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91298C);
    edx = MEM32(0x912990);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 1) = eax;
    MEM32(esp + 5) = eax;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    eax = MEM32(0x9031D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    MEM8(esp + 4) = 0xE;
    MEM32(esp + 5) = ecx;
    MEM32(esp + 9) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00077924; /* je: equal / zero */

loc_00077914: ;
    if (CMP_BE(_fa, _fb)) goto loc_000779FD; /* jbe: below or equal (unsigned <=) */

loc_0007791A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00077937; /* jbe: below or equal (unsigned <=) */

loc_0007791F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00077924: ;
    eax = ZX16(MEM16(esi + 0xB));
    ecx = MEM32(esi + 0xD);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x9031D0;
    PUSH32(esp, 0x00077937u); RECOMP_ABI_CALL(0x00072970u, sub_00072970); /* call 0x00072970 */

loc_00077937: ;
    eax = MEM32(esi + 9);
    edx = MEM32(0x9031D8);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000779FC; /* jne: not equal / not zero */

loc_00077954: ;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007797F; /* je: equal / zero */

loc_00077960: ;
    ecx = MEM32(esi + 5);
    edx = MEM32(esi + 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 9));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x9031D0;
    PUSH32(esp, 0x0007797Du); RECOMP_ABI_CALL(0x000729F0u, sub_000729F0); /* call 0x000729F0 */

loc_0007797D: ;
    goto loc_000779D9;

loc_0007797F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00077985u); RECOMP_ABI_CALL(0x000730E0u, sub_000730E0); /* call 0x000730E0 */

loc_00077985: ;
    ebx = eax;
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0007798Fu); RECOMP_ABI_CALL(0x00073090u, sub_00073090); /* call 0x00073090 */

loc_0007798F: ;
    edx = MEM32(0x90315C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x15) = eax;
    eax = MEM32(0x9031D4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x19) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000779D8; /* jbe: below or equal (unsigned <=) */

loc_000779AC: ;
    edi = MEM32(esi + 1);
    ebx = MEM32(esi + 5);
    eax = 0x902E8C;

loc_000779B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000779C0; /* jne: not equal / not zero */

loc_000779BB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000779CA; /* je: equal / zero */

loc_000779C0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000779B7; /* jb: below (unsigned <) */

loc_000779C8: ;
    goto loc_000779D8;

loc_000779CA: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000779D5u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_000779D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000779D8: ;
    POP32(esp, ebx);

loc_000779D9: ;
    edx = MEM32(esi + 9);
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000779FC; /* jne: not equal / not zero */

loc_000779EA: ;
    eax = MEM32(esi + 5);
    ecx = MEM32(esi + 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x9031D0;
    PUSH32(esp, 0x000779FCu); RECOMP_ABI_CALL(0x00072A80u, sub_00072A80); /* call 0x00072A80 */

loc_000779FC: ;
    POP32(esp, edi);

loc_000779FD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00077A10
 * Original: 0x00077A10 - 0x00077A16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077A10(void)
{

loc_00077A10: ;
    eax = MEM32(0x9031D0);
    esp += 4; return; /* ret */

}

/**
 * sub_00077A20
 * Original: 0x00077A20 - 0x00077AF0 (208 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077A20: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x91298C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x912990);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = 0x9031D0;
    PUSH32(esp, 0x00077A3Eu); RECOMP_ABI_CALL(0x00072E60u, sub_00072E60); /* call 0x00072E60 */

loc_00077A3E: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 3 (8-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00077AE9; /* je: equal / zero */

loc_00077A4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x29) = eax;
    MEM8(esp + 0x14) = 0xE;
    MEM32(esp + 0x15) = ebx;
    MEM32(esp + 0x19) = ebp;
    PUSH32(esp, 0x00077A7Bu); RECOMP_ABI_CALL(0x00073090u, sub_00073090); /* call 0x00073090 */

loc_00077A7B: ;
    ecx = MEM32(0x9031D8);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x300;
    eax = MEM32(0x9031D4);
    MEM32(esp + 0x21) = eax;
    eax = MEM32(0x90315C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1D) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00077ADC; /* jbe: below or equal (unsigned <=) */

loc_00077AA3: ;
    edi = 0x902E8C;

loc_00077AA8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077AB1; /* jne: not equal / not zero */

loc_00077AAC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077ACB; /* je: equal / zero */

loc_00077AB1: ;
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00077ABCu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00077ABC: ;
    ebp = MEM32(0x912990);
    ebx = MEM32(0x91298C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077ACB: ;
    eax = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077AA8; /* jb: below (unsigned <) */

loc_00077AD8: ;
    edi = MEM32(esp + 0x10);

loc_00077ADC: ;
    PUSH32(esp, 0x00077AE1u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077AE1: ;
    MEM32(edi + 0x10) = eax;
    MEM8(edi + 1) = 3;
    POP32(esp, esi);

loc_00077AE9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00077AF0
 * Original: 0x00077AF0 - 0x00077BC8 (216 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077AF0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x912990);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91298C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0x9031D0;
    PUSH32(esp, 0x00077B0Eu); RECOMP_ABI_CALL(0x00072E60u, sub_00072E60); /* call 0x00072E60 */

loc_00077B0E: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 1 (8-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00077BC1; /* jne: not equal / not zero */

loc_00077B1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x29) = eax;
    MEM8(esp + 0x14) = 0xE;
    MEM32(esp + 0x15) = ebp;
    MEM32(esp + 0x19) = ebx;
    PUSH32(esp, 0x00077B4Bu); RECOMP_ABI_CALL(0x000730E0u, sub_000730E0); /* call 0x000730E0 */

loc_00077B4B: ;
    ecx = MEM32(0x9031D8);
    esi = eax;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00077B60u); RECOMP_ABI_CALL(0x00073090u, sub_00073090); /* call 0x00073090 */

loc_00077B60: ;
    edx = MEM32(0x9031D4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x90315C);
    MEM32(esp + 0x1D) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x21) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00077BB4; /* jbe: below or equal (unsigned <=) */

loc_00077B7B: ;
    edi = 0x902E8C;

loc_00077B80: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077B89; /* jne: not equal / not zero */

loc_00077B84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077BA3; /* je: equal / zero */

loc_00077B89: ;
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00077B94u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00077B94: ;
    ebx = MEM32(0x912990);
    ebp = MEM32(0x91298C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077BA3: ;
    eax = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077B80; /* jb: below (unsigned <) */

loc_00077BB0: ;
    edi = MEM32(esp + 0x10);

loc_00077BB4: ;
    PUSH32(esp, 0x00077BB9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077BB9: ;
    MEM32(edi + 0x10) = eax;
    MEM8(edi + 1) = 2;
    POP32(esp, esi);

loc_00077BC1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00077BD0
 * Original: 0x00077BD0 - 0x00077BEC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077BD0(void)
{

loc_00077BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00077BD8u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077BD8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    ecx = esi;
    PUSH32(esp, 0x00077BEAu); RECOMP_ABI_CALL(0x00073110u, sub_00073110); /* call 0x00073110 */

loc_00077BEA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077BF0
 * Original: 0x00077BF0 - 0x00077C4A (90 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077BF0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00077BFBu); RECOMP_ABI_CALL(0x00073180u, sub_00073180); /* call 0x00073180 */

loc_00077BFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077C43; /* jne: not equal / not zero */

loc_00077BFF: ;
    PUSH32(esp, 0x00077C04u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077C04: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00077C0Cu); RECOMP_ABI_CALL(0x000731A0u, sub_000731A0); /* call 0x000731A0 */

loc_00077C0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077C43; /* jb: below (unsigned <) */

loc_00077C12: ;
    eax = MEM32(0x91298C);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(0x912990);
    MEM32(esp + 5) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0xC) = 0x10;
    MEM32(esp + 0x11) = ecx;
    PUSH32(esp, 0x00077C39u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_00077C39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00077C41u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077C41: ;
    MEM32(esi) = eax;

loc_00077C43: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00077C50
 * Original: 0x00077C50 - 0x00077C70 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x903D54;
    edi = 8;
    /* nop */

loc_00077C60: ;
    ecx = esi;
    PUSH32(esp, 0x00077C67u); RECOMP_ABI_CALL(0x00077BD0u, sub_00077BD0); /* call 0x00077BD0 */

loc_00077C67: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00077C60; /* jne: not equal / not zero */

loc_00077C6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077C90
 * Original: 0x00077C90 - 0x00077CDD (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00077C90: ;
    ecx = MEM32(0x90315C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00077CDB; /* jb: below (unsigned <) */

loc_00077CA1: ;
    ecx = MEM32(edi * 4 + 0x912A40);
    SET_LO8(edx, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00077CDB; /* jne: not equal / not zero */

loc_00077CAF: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x24)) >> 32) & 1);
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00077CB8u); RECOMP_ABI_CALL(0x00073180u, sub_00073180); /* call 0x00073180 */

loc_00077CB8: ;
    esi = ZX8(LO8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00077CD8; /* jne: not equal / not zero */

loc_00077CBF: ;
    eax = MEM32(esp + 0xC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF060u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1388)) >> 32) & 1);
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00077CD8u); RECOMP_ABI_CALL(0x00077BF0u, sub_00077BF0); /* call 0x00077BF0 */

loc_00077CD8: ;
    eax = esi;
    POP32(esp, esi);

loc_00077CDB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077CE0
 * Original: 0x00077CE0 - 0x00077D1F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077CE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00077D04; /* je: equal / zero */

loc_00077CEC: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    PUSH32(esp, 0x00077CF5u); RECOMP_ABI_CALL(0x00073270u, sub_00073270); /* call 0x00073270 */

loc_00077CF5: ;
    edx = MEM32(0x9031B0);
    MEM32(ecx) = edx;
    MEM32(0x9031B0) = ecx;
    esp += 4; return; /* ret */

loc_00077D04: ;
    eax = MEM32(ecx);
    MEM32(0x903EB0) = eax;
    PUSH32(esp, 0x00077D10u); RECOMP_ABI_CALL(0x00073270u, sub_00073270); /* call 0x00073270 */

loc_00077D10: ;
    edx = MEM32(0x9031B0);
    MEM32(ecx) = edx;
    MEM32(0x9031B0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00077D20
 * Original: 0x00077D20 - 0x00077D5B (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077D20: ;
    eax = MEM32(0x903EB0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077D5A; /* je: equal / zero */

loc_00077D2B: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_00077D35: ;
    edi = MEM32(eax + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077D43; /* jne: not equal / not zero */

loc_00077D3C: ;
    edi = MEM32(eax + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077D4E; /* je: equal / zero */

loc_00077D43: ;
    ecx = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077D35; /* jne: not equal / not zero */

loc_00077D4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00077D4E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00077D55u); RECOMP_ABI_CALL(0x00077CE0u, sub_00077CE0); /* call 0x00077CE0 */

loc_00077D55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00077D5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00077D60
 * Original: 0x00077D60 - 0x00077DA0 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077D60: ;
    ecx = 0x914450;
    MEM32(0x903EB0) = 0;
    MEM32(0x9031B0) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00077D77: ;
    PUSH32(esp, 0x00077D7Cu); RECOMP_ABI_CALL(0x00073270u, sub_00073270); /* call 0x00073270 */

loc_00077D7C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x268) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x268 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00077D89; /* jae: above or equal (unsigned >=) */

loc_00077D84: ;
    eax = ecx + 0x58;
    MEM32(ecx) = eax;

loc_00077D89: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2C0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077D77; /* jb: below (unsigned <) */

loc_00077D97: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00077D9Eu); RECOMP_ABI_CALL(0x00073360u, sub_00073360); /* call 0x00073360 */

loc_00077D9E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00077DA0
 * Original: 0x00077DA0 - 0x00077E0B (107 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077DA0: ;
    eax = MEM32(0x9031C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077E0A; /* je: equal / zero */

loc_00077DA9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5E);
    eax = MEM32(esi + 0x902E90);
    ecx = MEM32(esi + 0x902E8C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00077DC5u); RECOMP_ABI_CALL(0x00077D20u, sub_00077D20); /* call 0x00077D20 */

loc_00077DC5: ;
    eax = MEM32(0x9031B0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077DE2; /* jne: not equal / not zero */

loc_00077DD1: ;
    edx = MEM32(0x903EB0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00077DDFu); RECOMP_ABI_CALL(0x00077CE0u, sub_00077CE0); /* call 0x00077CE0 */

loc_00077DDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077DE2: ;
    edi = MEM32(0x9031B0);
    eax = MEM32(edi);
    PUSH32(esp, 1);
    ecx = esi + 0x902E68;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(0x9031B0) = eax;
    PUSH32(esp, 0x00077DFFu); RECOMP_ABI_CALL(0x00073290u, sub_00073290); /* call 0x00073290 */

loc_00077DFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00077E05u); RECOMP_ABI_CALL(0x00073330u, sub_00073330); /* call 0x00073330 */

loc_00077E05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00077E0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00077E10
 * Original: 0x00077E10 - 0x00077E8C (124 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077E10: ;
    eax = MEM32(0x9031C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077E8B; /* je: equal / zero */

loc_00077E19: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00077E2Cu); RECOMP_ABI_CALL(0x00077D20u, sub_00077D20); /* call 0x00077D20 */

loc_00077E2C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00077E33u); RECOMP_ABI_CALL(0x0007D8A0u, sub_0007D8A0); /* call 0x0007D8A0 */

loc_00077E33: ;
    ebp = eax;
    eax = MEM32(0x9031B0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077E51; /* jne: not equal / not zero */

loc_00077E41: ;
    eax = MEM32(0x903EB0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00077E4Eu); RECOMP_ABI_CALL(0x00077CE0u, sub_00077CE0); /* call 0x00077CE0 */

loc_00077E4E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077E51: ;
    esi = MEM32(0x9031B0);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(0x9031B0) = ecx;
    PUSH32(esp, 0x00077E67u); RECOMP_ABI_CALL(0x0007D830u, sub_0007D830); /* call 0x0007D830 */

loc_00077E67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00077E71u); RECOMP_ABI_CALL(0x0007D850u, sub_0007D850); /* call 0x0007D850 */

loc_00077E71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00077E7Eu); RECOMP_ABI_CALL(0x000732E0u, sub_000732E0); /* call 0x000732E0 */

loc_00077E7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00077E84u); RECOMP_ABI_CALL(0x00073330u, sub_00073330); /* call 0x00073330 */

loc_00077E84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00077E8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00077E90
 * Original: 0x00077E90 - 0x00077EED (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077E90: ;
    eax = MEM32(0x903EB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077EEC; /* je: equal / zero */

loc_00077E99: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077EEB; /* je: equal / zero */

loc_00077EA0: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077ED7; /* je: equal / zero */

loc_00077EA7: ;
    MEM32(esi + 0x54) = 0;
    PUSH32(esp, 0x00077EB3u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077EB3: ;
    _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00077EE6; /* jbe: below or equal (unsigned <=) */

loc_00077EBD: ;
    eax = esi;
    esi = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00077EC9u); RECOMP_ABI_CALL(0x00077CE0u, sub_00077CE0); /* call 0x00077CE0 */

loc_00077EC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077EA0; /* jne: not equal / not zero */

loc_00077ED0: ;
    eax = MEM32(0x903EB0);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00077ED7: ;
    PUSH32(esp, 0x00077EDCu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00077EDC: ;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = 1;

loc_00077EE6: ;
    eax = MEM32(0x903EB0);

loc_00077EEB: ;
    POP32(esp, esi);

loc_00077EEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00077EF0
 * Original: 0x00077EF0 - 0x00077F23 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077EF0: ;
    SET_LO8(eax, MEM8(0x9131E7));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F1F; /* jne: not equal / not zero */

loc_00077EFC: ;
    _fa = (uint32_t)(MEM32(0x9031B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F1F; /* jne: not equal / not zero */

loc_00077F05: ;
    PUSH32(esp, 0x00077F0Au); RECOMP_ABI_CALL(0x000733B0u, sub_000733B0); /* call 0x000733B0 */

loc_00077F0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F1F; /* jne: not equal / not zero */

loc_00077F0E: ;
    eax = MEM32(0x912A40);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00077F21; /* jne: not equal / not zero */

loc_00077F1F: ;
    eax = esi;

loc_00077F21: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077F30
 * Original: 0x00077F30 - 0x00077FAF (127 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077F30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x90315C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = 3;
    if (CMP_BE(_fa, _fb)) goto loc_00077F72; /* jbe: below or equal (unsigned <=) */

loc_00077F45: ;
    esi = 0x902E8C;
    /* nop */

loc_00077F50: ;
    ecx = 0x913218;
    PUSH32(esp, 0x00077F5Au); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_00077F5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F63; /* jne: not equal / not zero */

loc_00077F5E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077F6D; /* je: equal / zero */

loc_00077F63: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077F50; /* jb: below (unsigned <) */

loc_00077F6B: ;
    goto loc_00077F72;

loc_00077F6D: ;
    ebp = 2;

loc_00077F72: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00077FA8; /* jbe: below or equal (unsigned <=) */

loc_00077F78: ;
    esi = 0x902E8C;
    /* nop */

loc_00077F80: ;
    ecx = 0x913218;
    PUSH32(esp, 0x00077F8Au); RECOMP_ABI_CALL(0x000736B0u, sub_000736B0); /* call 0x000736B0 */

loc_00077F8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F93; /* jne: not equal / not zero */

loc_00077F8E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077FA2; /* je: equal / zero */

loc_00077F93: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00077F80; /* jb: below (unsigned <) */

loc_00077F9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00077FA2: ;
    ebp = ebp & 0xFD;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00077FA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00077FB0
 * Original: 0x00077FB0 - 0x00078004 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077FB0: ;
    eax = MEM32(0x913224);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078000; /* je: equal / zero */

loc_00077FBC: ;
    PUSH32(esp, 0x00077FC1u); RECOMP_ABI_CALL(0x000738B0u, sub_000738B0); /* call 0x000738B0 */

loc_00077FC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077FF9; /* jne: not equal / not zero */

loc_00077FC5: ;
    ecx = 0x913218;
    PUSH32(esp, 0x00077FCFu); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_00077FCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078000; /* jne: not equal / not zero */

loc_00077FD7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902E90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078000; /* jne: not equal / not zero */

loc_00077FDF: ;
    ecx = 0x913218;
    PUSH32(esp, 0x00077FE9u); RECOMP_ABI_CALL(0x000736B0u, sub_000736B0); /* call 0x000736B0 */

loc_00077FE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902EEA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902EEA) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078000; /* jne: not equal / not zero */

loc_00077FF1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902EEE)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902EEE) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078000; /* jne: not equal / not zero */

loc_00077FF9: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00078000: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078010
 * Original: 0x00078010 - 0x00078154 (324 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078010: ;
    edx = MEM32(0x913220);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = edx + edx * 2;
    MEM8(esi + 0x91327A) = LO8(eax);
    ecx = ZX8(MEM8(esi + eax + 0x913278));
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ZX8(MEM8(eax + esi + 0x913278));
    eax = esi + esi * 4;
    MEM8(eax * 2 + 0x913230) = LO8(ecx);
    eax = ecx + ecx * 4;
    MEM8(eax * 2 + 0x913231) = MEM8(eax * 2 + 0x913231) + 1;
    _fa = (uint32_t)(MEM8(eax * 2 + 0x913231)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(0x91321C);
    eax = edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00078088; /* jae: above or equal (unsigned >=) */

loc_0007805D: ;
    edx = eax + eax * 2 + 0x913279;

loc_00078064: ;
    edi = ZX8(MEM8(edx + -1));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078071; /* jne: not equal / not zero */

loc_0007806C: ;
    MEM8(edx + -1) = LO8(ecx);
    goto loc_0007807A;

loc_00078071: ;
    edi = ZX8(MEM8(edx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007807A; /* jne: not equal / not zero */

loc_00078078: ;
    MEM8(edx) = LO8(ecx);

loc_0007807A: ;
    ebx = MEM32(0x91321C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078064; /* jb: below (unsigned <) */

loc_00078088: ;
    esi = MEM32(0x913220);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00078150; /* jae: above or equal (unsigned >=) */

loc_00078096: ;
    edx = MEM32(0x913224);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x913220) = esi;
    MEM32(0x913224) = edx;
    PUSH32(esp, 0x000780AFu); RECOMP_ABI_CALL(0x00077F30u, sub_00077F30); /* call 0x00077F30 */

loc_000780AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078146; /* je: equal / zero */

loc_000780B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078146; /* je: equal / zero */

loc_000780BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000780CE; /* jne: not equal / not zero */

loc_000780C4: ;
    PUSH32(esp, 0x000780C9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000780C9: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000780D2;

loc_000780CE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000780D2: ;
    edx = esi + esi * 2;
    ecx = ZX8(MEM8(edx + eax + 0x913278));
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ZX8(MEM8(eax + edx + 0x913278));
    edx = edi + edi * 4;
    MEM8(edx * 2 + 0x913230) = LO8(ecx);
    eax = ecx + ecx * 4;
    MEM8(eax * 2 + 0x913231) = MEM8(eax * 2 + 0x913231) + 1;
    _fa = (uint32_t)(MEM8(eax * 2 + 0x913231)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(0x91321C);
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00078134; /* jae: above or equal (unsigned >=) */

loc_00078109: ;
    eax = edx + edx * 2 + 0x913279;

loc_00078110: ;
    esi = ZX8(MEM8(eax + -1));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007811D; /* jne: not equal / not zero */

loc_00078118: ;
    MEM8(eax + -1) = LO8(ecx);
    goto loc_00078126;

loc_0007811D: ;
    esi = ZX8(MEM8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078126; /* jne: not equal / not zero */

loc_00078124: ;
    MEM8(eax) = LO8(ecx);

loc_00078126: ;
    ebx = MEM32(0x91321C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078110; /* jb: below (unsigned <) */

loc_00078134: ;
    esi = MEM32(0x913220);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078096; /* jb: below (unsigned <) */

loc_00078142: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00078146: ;
    PUSH32(esp, 0x2363E0);
    PUSH32(esp, 0x00078150u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_00078150: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078160
 * Original: 0x00078160 - 0x00078213 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078160: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00078168u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00078168: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007817A; /* je: equal / zero */

loc_0007816C: ;
    PUSH32(esp, 0x236410);
    PUSH32(esp, 0x00078176u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_00078176: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007817A: ;
    eax = MEM32(0x913224);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000781A2; /* jae: above or equal (unsigned >=) */

loc_00078189: ;
    PUSH32(esp, edi);
    ecx = 0x1D;
    edi = 0x913218;
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
    PUSH32(esp, 0x2363F8);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x000781A1u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_000781A1: ;
    POP32(esp, edi);

loc_000781A2: ;
    edx = MEM32(0x91298C);
    eax = MEM32(0x912990);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 5) = ecx;
    MEM32(esp + 9) = ecx;
    MEM32(esp + 0xD) = ecx;
    MEM32(esp + 0x11) = ecx;
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 5) = edx;
    edx = MEM32(0x90315C);
    MEM32(esp + 0x19) = ecx;
    ecx = MEM32(0x913224);
    MEM32(esp + 9) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(esp + 4) = 0x11;
    MEM32(esp + 0x11) = ecx;
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0007820F; /* jbe: below or equal (unsigned <=) */

loc_000781EB: ;
    ecx = 0x902EC4;

loc_000781F0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00078201; /* js: sign (negative) */

loc_000781F5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000781F0; /* jb: below (unsigned <) */

loc_000781FD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00078201: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007820Cu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_0007820C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007820F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00078220
 * Original: 0x00078220 - 0x0007829F (127 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078220: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x90315C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = 3;
    if (CMP_BE(_fa, _fb)) goto loc_00078262; /* jbe: below or equal (unsigned <=) */

loc_00078235: ;
    esi = 0x902E8C;
    /* nop */

loc_00078240: ;
    ecx = 0x914380;
    PUSH32(esp, 0x0007824Au); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007824A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078253; /* jne: not equal / not zero */

loc_0007824E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007825D; /* je: equal / zero */

loc_00078253: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078240; /* jb: below (unsigned <) */

loc_0007825B: ;
    goto loc_00078262;

loc_0007825D: ;
    ebp = 2;

loc_00078262: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00078298; /* jbe: below or equal (unsigned <=) */

loc_00078268: ;
    esi = 0x902E8C;
    /* nop */

loc_00078270: ;
    ecx = 0x914380;
    PUSH32(esp, 0x0007827Au); RECOMP_ABI_CALL(0x00073A80u, sub_00073A80); /* call 0x00073A80 */

loc_0007827A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078283; /* jne: not equal / not zero */

loc_0007827E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078292; /* je: equal / zero */

loc_00078283: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078270; /* jb: below (unsigned <) */

loc_0007828B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00078292: ;
    ebp = ebp & 0xFD;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00078298: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000782A0
 * Original: 0x000782A0 - 0x00078337 (151 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000782A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000782A0: ;
    eax = MEM32(0x914398);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000782C1; /* jae: above or equal (unsigned >=) */

loc_000782B2: ;
    PUSH32(esp, edi);
    ecx = 0x31;
    edi = 0x914380;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);

loc_000782C1: ;
    edx = MEM32(0x91298C);
    eax = MEM32(0x912990);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 5) = ecx;
    MEM32(esp + 9) = ecx;
    MEM32(esp + 0xD) = ecx;
    MEM32(esp + 0x11) = ecx;
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 5) = edx;
    edx = MEM32(0x90315C);
    MEM32(esp + 0x19) = ecx;
    ecx = MEM32(0x914398);
    MEM32(esp + 9) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(esp + 4) = 0x12;
    MEM32(esp + 0x11) = ecx;
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00078333; /* jbe: below or equal (unsigned <=) */

loc_0007830A: ;
    ecx = 0x902EC4;
    /* nop */

loc_00078310: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00078321; /* js: sign (negative) */

loc_00078315: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078310; /* jb: below (unsigned <) */

loc_0007831D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00078321: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078330u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_00078330: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078333: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00078340
 * Original: 0x00078340 - 0x0007838F (79 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00078340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078340: ;
    eax = MEM32(0x914398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007838C; /* je: equal / zero */

loc_00078349: ;
    PUSH32(esp, 0x0007834Eu); RECOMP_ABI_CALL(0x00073E50u, sub_00073E50); /* call 0x00073E50 */

loc_0007834E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078386; /* jne: not equal / not zero */

loc_00078352: ;
    ecx = 0x914380;
    PUSH32(esp, 0x0007835Cu); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007835C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007838C; /* jne: not equal / not zero */

loc_00078364: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902E90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007838C; /* jne: not equal / not zero */

loc_0007836C: ;
    ecx = 0x914380;
    PUSH32(esp, 0x00078376u); RECOMP_ABI_CALL(0x00073A80u, sub_00073A80); /* call 0x00073A80 */

loc_00078376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902EEA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902EEA) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007838C; /* jne: not equal / not zero */

loc_0007837E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902EEE)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902EEE) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007838C; /* jne: not equal / not zero */

loc_00078386: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007838C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00078390
 * Original: 0x00078390 - 0x000783E9 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078390: ;
    PUSH32(esp, 0x00078395u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00078395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000783A2; /* je: equal / zero */

loc_00078399: ;
    _fa = (uint32_t)(MEM8(0x914444)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x914444), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000783A8; /* je: equal / zero */

loc_000783A2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

loc_000783A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000783AEu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000783AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000783DA; /* je: equal / zero */

loc_000783B8: ;
    PUSH32(esp, 0x000783BDu); RECOMP_ABI_CALL(0x00078220u, sub_00078220); /* call 0x00078220 */

loc_000783BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000783D0; /* jne: not equal / not zero */

loc_000783C2: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(0x914444) = LO8(eax);
    eax = ZX8(LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000783D0: ;
    PUSH32(esp, 0x000783D5u); RECOMP_ABI_CALL(0x000739F0u, sub_000739F0); /* call 0x000739F0 */

loc_000783D5: ;
    eax = ZX8(LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000783DA: ;
    SET_LO8(ecx, MEM8(esp + 8));
    eax = ZX8(LO8(ebx));
    MEM8(0x914444) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000783F0
 * Original: 0x000783F0 - 0x000784BD (205 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000783F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000783F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000783FBu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000783FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000784B6; /* jne: not equal / not zero */

loc_00078404: ;
    PUSH32(esp, 0x00078409u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00078409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078438; /* je: equal / zero */

loc_0007840D: ;
    eax = MEM32(0x902DCC);
    ecx = MEM32(0x902DC8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(0x902DD8) = 0;
    PUSH32(esp, 0x00078426u); RECOMP_ABI_CALL(0x00076940u, sub_00076940); /* call 0x00076940 */

loc_00078426: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007842Eu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007842E: ;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00078438: ;
    ecx = MEM32(0x90315C);
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007845D; /* jbe: below or equal (unsigned <=) */

loc_00078448: ;
    eax = 0x902F22;
    /* nop */

loc_00078450: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00078465; /* js: sign (negative) */

loc_00078455: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078450; /* jb: below (unsigned <) */

loc_0007845D: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00078465: ;
    edx = MEM32(0x902DC8);
    eax = MEM32(0x902DCC);
    MEM8(esp + 8) = 0x13;
    MEM32(esp + 9) = edx;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = 0;
    PUSH32(esp, 0x0007848Au); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007848A: ;
    ecx = MEM32(esi * 4 + 0x912A40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(0x902DD0) = eax;
    MEM32(esp + 0x1D) = eax;
    PUSH32(esp, 0x000784A8u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_000784A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000784B6: ;
    eax = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000784C0
 * Original: 0x000784C0 - 0x00078502 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000784C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000784C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000784C8u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000784C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000784FE; /* jne: not equal / not zero */

loc_000784CD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000784FE; /* jbe: below or equal (unsigned <=) */

loc_000784D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x90315C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x90315C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000784FE; /* jae: above or equal (unsigned >=) */

loc_000784DD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    ecx = MEM32(eax + 0x902E90);
    edx = MEM32(eax + 0x902E8C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x902DC8;
    PUSH32(esp, 0x000784F8u); RECOMP_ABI_CALL(0x000703E0u, sub_000703E0); /* call 0x000703E0 */

loc_000784F8: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000783F0(); return; /* tail jmp 0x000783F0 */

loc_000784FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078510
 * Original: 0x00078510 - 0x00078568 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00078510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00078516u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00078516: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 3) = LO8(eax);
    if ((_fa == 0)) goto loc_00078564; /* je: equal / zero */

loc_00078523: ;
    SET_LO8(eax, MEM8(0x902DD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00078550; /* je: equal / zero */

loc_0007852C: ;
    PUSH32(esp, 0x00078531u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00078531: ;
    _fb = (uint32_t)(MEM32(0x902DD0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x902DD0)));
    eax = eax - MEM32(0x902DD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00078547; /* jb: below (unsigned <) */

loc_0007853E: ;
    PUSH32(esp, 0x00078543u); RECOMP_ABI_CALL(0x000783F0u, sub_000783F0); /* call 0x000783F0 */

loc_00078543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00078564; /* je: equal / zero */

loc_00078547: ;
    SET_LO8(eax, MEM8(0x902DD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007855D; /* jne: not equal / not zero */

loc_00078550: ;
    eax = MEM32(0x912964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902DD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902DD4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00078564; /* jae: above or equal (unsigned >=) */

loc_0007855D: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00078564: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078570
 * Original: 0x00078570 - 0x00078590 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x2EE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007858E; /* je: equal / zero */

loc_0007857F: ;
    PUSH32(esp, 0x00078584u); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_00078584: ;
    MEM32(esi + 0x2EE0) = 0;

loc_0007858E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078590
 * Original: 0x00078590 - 0x000785E6 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007859Cu); RECOMP_ABI_CALL(0x00078570u, sub_00078570); /* call 0x00078570 */

loc_0007859C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x000785A3u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_000785A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000785B6; /* je: equal / zero */

loc_000785AA: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000785B2u); RECOMP_ABI_CALL(0x00070E80u, sub_00070E80); /* call 0x00070E80 */

loc_000785B2: ;
    esi = eax;
    goto loc_000785B8;

loc_000785B6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000785B8: ;
    ecx = esi;
    MEM32(esi) = 2;
    PUSH32(esp, 0x000785C5u); RECOMP_ABI_CALL(0x00071040u, sub_00071040); /* call 0x00071040 */

loc_000785C5: ;
    PUSH32(esp, 0x000785CAu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_000785CA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000785D2u); RECOMP_ABI_CALL(0x00071290u, sub_00071290); /* call 0x00071290 */

loc_000785D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000785D8u); RECOMP_ABI_CALL(0x00080B20u, sub_00080B20); /* call 0x00080B20 */

loc_000785D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2EE0) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000785F0
 * Original: 0x000785F0 - 0x00078736 (326 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000785F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000785F0: ;
    eax = MEM32(0x91E230);
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0;
    if ((_fa == 0)) goto loc_00078634; /* je: equal / zero */

loc_00078601: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000786DD; /* jne: not equal / not zero */

loc_00078608: ;
    ecx = 0x903ED0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00078610: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2EE7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2EE7), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007862A; /* je: equal / zero */

loc_00078619: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078610; /* jl: less (signed <) */

loc_00078625: ;
    goto loc_000786DD;

loc_0007862A: ;
    MEM8(ecx + 0x2EE7) = 2;
    PUSH32(esp, ecx);
    goto loc_000786A2;

loc_00078634: ;
    esi = 0x903ED0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00078640;

    /* nop */

loc_00078640: ;
    _fa = (uint32_t)(MEM8(esi + 0x2EE7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2EE7), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007865A; /* je: equal / zero */

loc_00078649: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2EE8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078640; /* jl: less (signed <) */

loc_00078655: ;
    goto loc_000786DD;

loc_0007865A: ;
    SET_LO8(eax, MEM8(esi + 0x2EE6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007869A; /* jae: above or equal (unsigned >=) */

loc_00078664: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078678; /* jb: below (unsigned <) */

loc_00078668: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007866Eu); RECOMP_ABI_CALL(0x000742E0u, sub_000742E0); /* call 0x000742E0 */

loc_0007866E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x2EE4) = LO16(eax);

loc_00078678: ;
    _fa = (uint32_t)(MEM16(esi + 0x2EE4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2EE4), LO16(ebx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007869A; /* jle: less or equal (signed <=) */

loc_00078681: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00078687u); RECOMP_ABI_CALL(0x00078590u, sub_00078590); /* call 0x00078590 */

loc_00078687: ;
    SET_LO8(eax, MEM8(esi + 0x2EE6));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x2EE6) = LO8(eax);
    goto loc_000786DD;

loc_0007869A: ;
    MEM8(esi + 0x2EE7) = 2;
    PUSH32(esp, esi);

loc_000786A2: ;
    PUSH32(esp, 0x000786A7u); RECOMP_ABI_CALL(0x00078570u, sub_00078570); /* call 0x00078570 */

loc_000786A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x903ED0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000786B1: ;
    _fa = (uint32_t)(MEM8(esi + 0x2EE7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2EE7), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000786C7; /* je: equal / zero */

loc_000786B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2EE8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000786B1; /* jl: less (signed <) */

loc_000786C5: ;
    goto loc_000786DD;

loc_000786C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000786CDu); RECOMP_ABI_CALL(0x00078590u, sub_00078590); /* call 0x00078590 */

loc_000786CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2EE6) = LO8(ebx);
    MEM8(esi + 0x2EE7) = 1;

loc_000786DD: ;
    _fa = (uint32_t)(MEM8(0x912959)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x912959), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007872D; /* je: equal / zero */

loc_000786E5: ;
    esi = ZX8(MEM8(0x912958));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2EE8);
    _fb = (uint32_t)(0x903ED0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x903ED0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000786FDu); RECOMP_ABI_CALL(0x0007E960u, sub_0007E960); /* call 0x0007E960 */

loc_000786FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078717; /* jne: not equal / not zero */

loc_00078701: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00078707u); RECOMP_ABI_CALL(0x00078590u, sub_00078590); /* call 0x00078590 */

loc_00078707: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2EE6) = LO8(ebx);
    MEM8(esi + 0x2EE7) = 1;

loc_00078717: ;
    eax = ZX8(MEM8(0x912958));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(0x912958) = LO8(edx);

loc_0007872D: ;
    POP32(esp, esi);
    MEM8(0x912959) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078740
 * Original: 0x00078740 - 0x00078782 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078740: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00078748u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_00078748: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007875F; /* je: equal / zero */

loc_0007874F: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0007875Bu); RECOMP_ABI_CALL(0x00070EB0u, sub_00070EB0); /* call 0x00070EB0 */

loc_0007875B: ;
    esi = eax;
    goto loc_00078761;

loc_0007875F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00078761: ;
    ecx = esi;
    MEM32(esi) = 1;
    PUSH32(esp, 0x0007876Eu); RECOMP_ABI_CALL(0x00071100u, sub_00071100); /* call 0x00071100 */

loc_0007876E: ;
    ecx = esi;
    PUSH32(esp, 0x00078775u); RECOMP_ABI_CALL(0x00071380u, sub_00071380); /* call 0x00071380 */

loc_00078775: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007877Bu); RECOMP_ABI_CALL(0x00080AC0u, sub_00080AC0); /* call 0x00080AC0 */

loc_0007877B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078790
 * Original: 0x00078790 - 0x000787F3 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078790: ;
    _fa = (uint32_t)(MEM8(0x912A39)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x912A39), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007879C; /* je: equal / zero */

loc_00078799: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007879C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000787A9; /* jne: not equal / not zero */

loc_000787A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000787A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000787F1; /* jg: greater (signed >) */

loc_000787B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_000787D7; /* jle: less or equal (signed <=) */

loc_000787B8: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000787A5; /* je: equal / zero */

loc_000787BE: ;
    MEM32(eax * 8 + 0x9129D8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax * 8 + 0x9129DC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000787B8; /* jl: less (signed <) */

loc_000787D7: ;
    PUSH32(esp, 0x9129D8);
    MEM8(0x912A38) = LO8(ebx);
    MEM8(0x912A39) = 0;
    PUSH32(esp, 0x000787EEu); RECOMP_ABI_CALL(0x00078740u, sub_00078740); /* call 0x00078740 */

loc_000787EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000787F1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078800
 * Original: 0x00078800 - 0x0007881A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078800: ;
    ecx = MEM32(0x912D90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078819; /* je: equal / zero */

loc_0007880A: ;
    PUSH32(esp, 0x0007880Fu); RECOMP_ABI_CALL(0x00076BE0u, sub_00076BE0); /* call 0x00076BE0 */

loc_0007880F: ;
    MEM32(0x912D90) = 0;

loc_00078819: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00078820
 * Original: 0x00078820 - 0x0007885A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078820: ;
    PUSH32(esp, 0x00078825u); RECOMP_ABI_CALL(0x00078800u, sub_00078800); /* call 0x00078800 */

loc_00078825: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x912D90) = eax;
    MEM8(0x9131B8) = LO8(eax);
    MEM32(0x912A70) = eax;
    MEM32(0x912A80) = eax;
    MEM32(0x912A90) = eax;
    MEM32(0x912AA0) = eax;
    MEM32(0x912B1C) = eax;
    MEM32(0x912B40) = eax;
    MEM32(0x912BA0) = eax;
    MEM32(0x912D88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00078860
 * Original: 0x00078860 - 0x0007887C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078860: ;
    PUSH32(esp, 0x00078865u); RECOMP_ABI_CALL(0x00078800u, sub_00078800); /* call 0x00078800 */

loc_00078865: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078873u); RECOMP_ABI_CALL(0x00076A80u, sub_00076A80); /* call 0x00076A80 */

loc_00078873: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912D90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00078880
 * Original: 0x00078880 - 0x000788C4 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078880: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x912B3C);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x912B28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x912B24);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x912B20);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00074DA0(); return; /* tail jmp 0x00074DA0 */

}

/**
 * sub_000788D0
 * Original: 0x000788D0 - 0x000788F2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000788D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000788D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x912B28);
    edx = MEM32(0x912B24);
    PUSH32(esp, eax);
    eax = MEM32(0x912B20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000788EEu); RECOMP_ABI_CALL(0x00074DA0u, sub_00074DA0); /* call 0x00074DA0 */

loc_000788EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00078900
 * Original: 0x00078900 - 0x00078923 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078900: ;
    eax = MEM32(0x912B3C);
    ecx = MEM32(0x912B28);
    edx = MEM32(0x912B24);
    PUSH32(esp, eax);
    eax = MEM32(0x912B20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007891Fu); RECOMP_ABI_CALL(0x00074DA0u, sub_00074DA0); /* call 0x00074DA0 */

loc_0007891F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00078930
 * Original: 0x00078930 - 0x000789D0 (160 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078930: ;
    eax = MEM32(0x912D90);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    PUSH32(esp, 0x0007893Eu); RECOMP_ABI_CALL(0x00074F00u, sub_00074F00); /* call 0x00074F00 */

loc_0007893E: ;
    ecx = MEM32(0x912D90);
    MEM32(0x912BA0) = 4;
    MEM8(0x9131B8) = 4;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000789C4; /* jbe: below or equal (unsigned <=) */

loc_0007895C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x9131A8);
    PUSH32(esp, 0x0007896Au); RECOMP_ABI_CALL(0x000AEB2Au, sub_000AEB2A); /* call 0x000AEB2A */

loc_0007896A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00078970u); RECOMP_ABI_CALL(0x00075050u, sub_00075050); /* call 0x00075050 */

loc_00078970: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000789CE; /* je: equal / zero */

loc_00078977: ;
    eax = MEM32(0x912D90);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000789CE; /* jne: not equal / not zero */

loc_00078982: ;
    edx = MEM32(eax + 0x28);
    eax = 0x912B48;
    ecx = edx + 8;
    /* nop */

loc_00078990: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x912B98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x912B98 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078990; /* jl: less (signed <) */

loc_000789A1: ;
    eax = MEM32(edx + 0x148);
    MEM32(0x912B98) = eax;
    ecx = MEM32(edx + 0x14C);
    MEM32(0x912B9C) = ecx;
    MEM32(0x912BA0) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000789C4: ;
    MEM32(0x912BA0) = 2;

loc_000789CE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000789D0
 * Original: 0x000789D0 - 0x00078AA2 (210 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000789D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000789D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000789E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BA8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000789F2; /* jne: not equal / not zero */

loc_000789E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BAC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078A6B; /* je: equal / zero */

loc_000789F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BB0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078A04; /* jne: not equal / not zero */

loc_000789FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BB4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078A56; /* je: equal / zero */

loc_00078A04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BB8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078A16; /* jne: not equal / not zero */

loc_00078A0D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BBC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078A59; /* je: equal / zero */

loc_00078A16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BC0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078A28; /* jne: not equal / not zero */

loc_00078A1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BC4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078A5E; /* je: equal / zero */

loc_00078A28: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BC8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078A3A; /* jne: not equal / not zero */

loc_00078A31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BCC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078A63; /* je: equal / zero */

loc_00078A3A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078A4C; /* jne: not equal / not zero */

loc_00078A43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BD4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078A68; /* je: equal / zero */

loc_00078A4C: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000789E0; /* jl: less (signed <) */

loc_00078A54: ;
    goto loc_00078A6B;

loc_00078A56: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00078A6B;

loc_00078A59: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078A6B;

loc_00078A5E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078A6B;

loc_00078A63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078A6B;

loc_00078A68: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078A6B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078A71u); RECOMP_ABI_CALL(0x00075220u, sub_00075220); /* call 0x00075220 */

loc_00078A71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912BA8) = edi;
    POP32(esp, edi);
    MEM32(0x912BAC) = esi;
    MEM16(0x912C98) = 0;
    MEM16(0x912C9A) = 0;
    MEM16(0x912C9C) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00075360(); return; /* tail jmp 0x00075360 */

}

/**
 * sub_00078AB0
 * Original: 0x00078AB0 - 0x00078B70 (192 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00078AC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BA8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078AD2; /* jne: not equal / not zero */

loc_00078AC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BAC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078B4B; /* je: equal / zero */

loc_00078AD2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BB0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078AE4; /* jne: not equal / not zero */

loc_00078ADB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BB4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078B36; /* je: equal / zero */

loc_00078AE4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BB8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078AF6; /* jne: not equal / not zero */

loc_00078AED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BBC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078B39; /* je: equal / zero */

loc_00078AF6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BC0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078B08; /* jne: not equal / not zero */

loc_00078AFF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BC4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078B3E; /* je: equal / zero */

loc_00078B08: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BC8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078B1A; /* jne: not equal / not zero */

loc_00078B11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BCC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078B43; /* je: equal / zero */

loc_00078B1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078B2C; /* jne: not equal / not zero */

loc_00078B23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BD4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078B48; /* je: equal / zero */

loc_00078B2C: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078AC0; /* jl: less (signed <) */

loc_00078B34: ;
    goto loc_00078B4B;

loc_00078B36: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00078B4B;

loc_00078B39: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078B4B;

loc_00078B3E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078B4B;

loc_00078B43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078B4B;

loc_00078B48: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078B4B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078B51u); RECOMP_ABI_CALL(0x00075220u, sub_00075220); /* call 0x00075220 */

loc_00078B51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912BA8) = edi;
    POP32(esp, edi);
    MEM32(0x912BAC) = esi;
    MEM16(0x912C9C) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00075360(); return; /* tail jmp 0x00075360 */

}

/**
 * sub_00078B70
 * Original: 0x00078B70 - 0x00078C7F (271 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078B70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00078B80: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BA8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078B92; /* jne: not equal / not zero */

loc_00078B89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BAC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078C0B; /* je: equal / zero */

loc_00078B92: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BB0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078BA4; /* jne: not equal / not zero */

loc_00078B9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BB4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078BF6; /* je: equal / zero */

loc_00078BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BB8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078BB6; /* jne: not equal / not zero */

loc_00078BAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BBC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078BF9; /* je: equal / zero */

loc_00078BB6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BC0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078BC8; /* jne: not equal / not zero */

loc_00078BBF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BC4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078BFE; /* je: equal / zero */

loc_00078BC8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BC8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078BDA; /* jne: not equal / not zero */

loc_00078BD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BCC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078C03; /* je: equal / zero */

loc_00078BDA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax * 8 + 0x912BD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078BEC; /* jne: not equal / not zero */

loc_00078BE3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x912BD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 8 + 0x912BD4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078C08; /* je: equal / zero */

loc_00078BEC: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078B80; /* jl: less (signed <) */

loc_00078BF4: ;
    goto loc_00078C0B;

loc_00078BF6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00078C0B;

loc_00078BF9: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078C0B;

loc_00078BFE: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078C0B;

loc_00078C03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078C0B;

loc_00078C08: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078C0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078C11u); RECOMP_ABI_CALL(0x00075220u, sub_00075220); /* call 0x00075220 */

loc_00078C11: ;
    SET_LO16(eax, MEM16(0x912C98));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM32(0x912BA8) = edi;
    POP32(esp, edi);
    MEM32(0x912BAC) = esi;
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00078C39; /* jae: above or equal (unsigned >=) */

loc_00078C2E: ;
    _fb = (uint32_t)(MEM16(esp + 0xC)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esp + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x912C98) = LO16(eax);

loc_00078C39: ;
    SET_LO16(eax, MEM16(0x912C9A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00078C50; /* jae: above or equal (unsigned >=) */

loc_00078C45: ;
    _fb = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esp + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x912C9A) = LO16(eax);

loc_00078C50: ;
    SET_LO16(eax, MEM16(esp + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00078C71; /* jbe: below or equal (unsigned <=) */

loc_00078C5A: ;
    _fa = (uint32_t)(MEM16(0x912C9C)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x912C9C), 0xFFFF (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00078C7A; /* jae: above or equal (unsigned >=) */

loc_00078C65: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x912C9C) = MEM16(0x912C9C) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x912C9C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00075360(); return; /* tail jmp 0x00075360 */

loc_00078C71: ;
    MEM16(0x912C9C) = 0;

loc_00078C7A: ;
    g_seh_ebp = ebp; sub_00075360(); return; /* tail jmp 0x00075360 */

}

/**
 * sub_00078C80
 * Original: 0x00078C80 - 0x00078D0E (142 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078C80: ;
    eax = MEM32(0x912D90);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x24);
    PUSH32(esp, 0x00078C8Fu); RECOMP_ABI_CALL(0x00074D20u, sub_00074D20); /* call 0x00074D20 */

loc_00078C8F: ;
    ecx = MEM32(0x912D90);
    eax = MEM32(ecx + 0x14);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00078D04; /* jbe: below or equal (unsigned <=) */

loc_00078C9E: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_00078CA2: ;
    edx = eax + eax * 2;
    edi = MEM32(ebp + edx * 8 + 0x14);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebp + edx * 8;
    if (CMP_NE(_fa, _fb)) goto loc_00078CCE; /* jne: not equal / not zero */

loc_00078CB4: ;
    PUSH32(esp, 0x00078CB9u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00078CB9: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078CF0; /* jne: not equal / not zero */

loc_00078CBF: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078CF0; /* jne: not equal / not zero */

loc_00078CC7: ;
    PUSH32(esp, 0x00078CCCu); RECOMP_ABI_CALL(0x00074D30u, sub_00074D30); /* call 0x00074D30 */

loc_00078CCC: ;
    goto loc_00078CF0;

loc_00078CCE: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078CF0; /* jne: not equal / not zero */

loc_00078CD4: ;
    PUSH32(esp, 0x00078CD9u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00078CD9: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078CF0; /* jne: not equal / not zero */

loc_00078CDF: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078CF0; /* jne: not equal / not zero */

loc_00078CE7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00078CEDu); RECOMP_ABI_CALL(0x00074D60u, sub_00074D60); /* call 0x00074D60 */

loc_00078CED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078CF0: ;
    ecx = MEM32(0x912D90);
    edx = MEM32(ecx + 0x14);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078CA2; /* jb: below (unsigned <) */

loc_00078D02: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00078D04: ;
    POP32(esp, ebp);
    MEM8(0x9131B8) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078D10
 * Original: 0x00078D10 - 0x00078D4C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00078D17u); RECOMP_ABI_CALL(0x00078800u, sub_00078800); /* call 0x00078800 */

loc_00078D17: ;
    esi = 0x2E6580;
    edi = 6;

loc_00078D21: ;
    PUSH32(esp, 0x00078D26u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00078D26: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00078D21; /* jne: not equal / not zero */

loc_00078D2E: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2E657C);
    PUSH32(esp, 0x00078D3Au); RECOMP_ABI_CALL(0x00078790u, sub_00078790); /* call 0x00078790 */

loc_00078D3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x912D90) = eax;
    MEM8(0x9131B8) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078D50
 * Original: 0x00078D50 - 0x00078E7C (300 bytes, 94 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078D50: ;
    eax = MEM32(0x912D90);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00078D63u); RECOMP_ABI_CALL(0x000746E0u, sub_000746E0); /* call 0x000746E0 */

loc_00078D63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00078D6Cu); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00078D6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00078D75u); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00078D75: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00078D7Eu); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00078D7E: ;
    PUSH32(esp, 0x00078D83u); RECOMP_ABI_CALL(0x00074B70u, sub_00074B70); /* call 0x00074B70 */

loc_00078D83: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00078D8Au); RECOMP_ABI_CALL(0x000750F0u, sub_000750F0); /* call 0x000750F0 */

loc_00078D8A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x2E657C;
    ebx = edi + 0x14;
    ebp = 6;
    /* nop */

loc_00078DA0: ;
    ecx = MEM32(esi);
    edi = MEM32(ecx * 4 + 0x2E6290);
    PUSH32(esp, 0x00078DAEu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00078DAE: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078E63; /* jne: not equal / not zero */

loc_00078DB9: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + -16) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078E63; /* jne: not equal / not zero */

loc_00078DC5: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078E18; /* jne: not equal / not zero */

loc_00078DCE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00078E63; /* ja: above (unsigned >) */

loc_00078DD7: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x78E7C); /* switch: 16 entries, 9 targets */
    if (_jt == 0x00078DDEu) goto loc_00078DDE;
    if (_jt == 0x00078DF2u) goto loc_00078DF2;
    if (_jt == 0x00078E05u) goto loc_00078E05;
    if (_jt == 0x00078E0Cu) goto loc_00078E0C;
    if (_jt == 0x00078E24u) goto loc_00078E24;
    if (_jt == 0x00078E36u) goto loc_00078E36;
    if (_jt == 0x00078E4Du) goto loc_00078E4D;
    if (_jt == 0x00078E58u) goto loc_00078E58;
    if (_jt == 0x00078E63u) goto loc_00078E63;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00078DDE: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx * 4 + 0x2E6358);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00078DEDu); RECOMP_ABI_CALL(0x00074700u, sub_00074700); /* call 0x00074700 */

loc_00078DED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078E63;

loc_00078DF2: ;
    eax = MEM32(esi);
    ecx = MEM32(eax * 4 + 0x2E6358);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00078E03u); RECOMP_ABI_CALL(0x000748D0u, sub_000748D0); /* call 0x000748D0 */

loc_00078E03: ;
    goto loc_00078E60;

loc_00078E05: ;
    PUSH32(esp, 0x00078E0Au); RECOMP_ABI_CALL(0x00074B80u, sub_00074B80); /* call 0x00074B80 */

loc_00078E0A: ;
    goto loc_00078E63;

loc_00078E0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00078E13u); RECOMP_ABI_CALL(0x00075110u, sub_00075110); /* call 0x00075110 */

loc_00078E13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078E63;

loc_00078E18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00078E63; /* ja: above (unsigned >) */

loc_00078E1D: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x78E9C); /* switch: 8 entries, 5 targets */
    if (_jt == 0x00078E24u) goto loc_00078E24;
    if (_jt == 0x00078E36u) goto loc_00078E36;
    if (_jt == 0x00078E4Du) goto loc_00078E4D;
    if (_jt == 0x00078E58u) goto loc_00078E58;
    if (_jt == 0x00078E63u) goto loc_00078E63;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00078E24: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x2E6358);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078E34u); RECOMP_ABI_CALL(0x00074730u, sub_00074730); /* call 0x00074730 */

loc_00078E34: ;
    goto loc_00078E60;

loc_00078E36: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx * 4 + 0x2E6358);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00078E48u); RECOMP_ABI_CALL(0x00074900u, sub_00074900); /* call 0x00074900 */

loc_00078E48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078E63;

loc_00078E4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00078E53u); RECOMP_ABI_CALL(0x00074BB0u, sub_00074BB0); /* call 0x00074BB0 */

loc_00078E53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078E63;

loc_00078E58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00078E60u); RECOMP_ABI_CALL(0x00075180u, sub_00075180); /* call 0x00075180 */

loc_00078E60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078E63: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00078DA0; /* jne: not equal / not zero */

loc_00078E70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x9131B8) = 6;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078EC0
 * Original: 0x00078EC0 - 0x00078EF3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078EC0: ;
    eax = MEM32(0x91DFF8);
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00078EF2; /* je: equal / zero */

loc_00078ECA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00078EE1; /* je: equal / zero */

loc_00078ECF: ;
    PUSH32(esp, 0x00078ED4u); RECOMP_ABI_CALL(0x00075600u, sub_00075600); /* call 0x00075600 */

loc_00078ED4: ;
    PUSH32(esp, 0x00078ED9u); RECOMP_ABI_CALL(0x0007CA30u, sub_0007CA30); /* call 0x0007CA30 */

loc_00078ED9: ;
    MEM8(0x912A39) = 1;
    esp += 4; return; /* ret */

loc_00078EE1: ;
    PUSH32(esp, 0x00078EE6u); RECOMP_ABI_CALL(0x00078D50u, sub_00078D50); /* call 0x00078D50 */

loc_00078EE6: ;
    PUSH32(esp, 0x00078EEBu); RECOMP_ABI_CALL(0x0007CA30u, sub_0007CA30); /* call 0x0007CA30 */

loc_00078EEB: ;
    MEM8(0x912A39) = 1;

loc_00078EF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00078F00
 * Original: 0x00078F00 - 0x00078F2B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078F00: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00078F02: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00078F08u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_00078F08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078F02; /* jl: less (signed <) */

loc_00078F11: ;
    MEM8(0x912958) = 0;
    MEM8(0x912959) = 0;
    MEM8(0x912A39) = 1;
    g_seh_ebp = ebp; sub_00078820(); return; /* tail jmp 0x00078820 */

}

/**
 * sub_00078F30
 * Original: 0x00078F30 - 0x00078F74 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078F30: ;
    eax = MEM32(0x91DFF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00078F3F; /* jl: less (signed <) */

loc_00078F3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00078F73; /* jle: less or equal (signed <=) */

loc_00078F3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00078F46u); RECOMP_ABI_CALL(0x00078800u, sub_00078800); /* call 0x00078800 */

loc_00078F46: ;
    esi = 0x2E65B0;
    edi = 3;

loc_00078F50: ;
    PUSH32(esp, 0x00078F55u); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00078F55: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00078F50; /* jne: not equal / not zero */

loc_00078F5D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2E65AC);
    PUSH32(esp, 0x00078F69u); RECOMP_ABI_CALL(0x00078790u, sub_00078790); /* call 0x00078790 */

loc_00078F69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x912D90) = eax;
    POP32(esp, esi);

loc_00078F73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00078F80
 * Original: 0x00078F80 - 0x00079050 (208 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078F80: ;
    eax = MEM32(0x912D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007904F; /* je: equal / zero */

loc_00078F8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00078F9Du); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00078F9D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00078FA6u); RECOMP_ABI_CALL(0x000748B0u, sub_000748B0); /* call 0x000748B0 */

loc_00078FA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00078FADu); RECOMP_ABI_CALL(0x000750F0u, sub_000750F0); /* call 0x000750F0 */

loc_00078FAD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x2E65AC;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 3;
    /* nop */

loc_00078FC0: ;
    eax = MEM32(edi);
    ebx = MEM32(eax * 4 + 0x2E6290);
    PUSH32(esp, 0x00078FCEu); RECOMP_ABI_CALL(0x0007DB90u, sub_0007DB90); /* call 0x0007DB90 */

loc_00078FCE: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007903E; /* jne: not equal / not zero */

loc_00078FD5: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + -16) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007903E; /* jne: not equal / not zero */

loc_00078FDD: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079012; /* jne: not equal / not zero */

loc_00078FE6: ;
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00078FFC; /* je: equal / zero */

loc_00078FEB: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007903E; /* jne: not equal / not zero */

loc_00078FF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00078FF7u); RECOMP_ABI_CALL(0x00075110u, sub_00075110); /* call 0x00075110 */

loc_00078FF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007903E;

loc_00078FFC: ;
    eax = MEM32(edi);
    ecx = MEM32(eax * 4 + 0x2E6358);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007900Du); RECOMP_ABI_CALL(0x000748D0u, sub_000748D0); /* call 0x000748D0 */

loc_0007900D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007903E;

loc_00079012: ;
    ecx = ebx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00079029; /* je: equal / zero */

loc_00079017: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007903E; /* jne: not equal / not zero */

loc_0007901C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00079024u); RECOMP_ABI_CALL(0x00075180u, sub_00075180); /* call 0x00075180 */

loc_00079024: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007903E;

loc_00079029: ;
    edx = MEM32(edi);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x2E6358);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007903Bu); RECOMP_ABI_CALL(0x00074900u, sub_00074900); /* call 0x00074900 */

loc_0007903B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007903E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00078FC0; /* jne: not equal / not zero */

loc_0007904B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0007904F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00079050
 * Original: 0x00079050 - 0x0007907D (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079050: ;
    _fa = (uint32_t)(MEM8(0x9131B8)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9131B8), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007907C; /* jne: not equal / not zero */

loc_00079059: ;
    eax = MEM32(0x91DFF8);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00079070; /* je: equal / zero */

loc_00079063: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007907C; /* jne: not equal / not zero */

loc_00079066: ;
    PUSH32(esp, 0x0007906Bu); RECOMP_ABI_CALL(0x00078F80u, sub_00078F80); /* call 0x00078F80 */

loc_0007906B: ;
    PUSH32(esp, 0x00079070u); RECOMP_ABI_CALL(0x00075710u, sub_00075710); /* call 0x00075710 */

loc_00079070: ;
    PUSH32(esp, 0x00079075u); RECOMP_ABI_CALL(0x0007CA30u, sub_0007CA30); /* call 0x0007CA30 */

loc_00079075: ;
    MEM8(0x912A39) = 1;

loc_0007907C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00079080
 * Original: 0x00079080 - 0x0007908A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079080: ;
    PUSH32(esp, 0x00079085u); RECOMP_ABI_CALL(0x00079050u, sub_00079050); /* call 0x00079050 */

loc_00079085: ;
    g_seh_ebp = ebp; sub_000785F0(); return; /* tail jmp 0x000785F0 */

}

/**
 * sub_00079090
 * Original: 0x00079090 - 0x000790CC (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079090: ;
    SET_LO8(eax, MEM8(0x9131E7));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000790C8; /* jne: not equal / not zero */

loc_0007909C: ;
    _fa = (uint32_t)(MEM8(0x9131EE)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9131EE), 0x64 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000790C8; /* jne: not equal / not zero */

loc_000790A5: ;
    PUSH32(esp, 0x000790AAu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000790AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000790C8; /* jne: not equal / not zero */

loc_000790AF: ;
    _fa = (uint32_t)(MEM8(0x902EC4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x902EC4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000790C8; /* je: equal / zero */

loc_000790B8: ;
    PUSH32(esp, 0x000790BDu); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_000790BD: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000790CA; /* je: equal / zero */

loc_000790C8: ;
    eax = esi;

loc_000790CA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000790D0
 * Original: 0x000790D0 - 0x000792D0 (512 bytes, 150 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000790D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000790D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x912B48);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x9131EA));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)esi);
    PUSH32(esp, edi);
    ecx = 0xC;
    edi = 0x9032D0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(0x9032D0) = edi;
    MEM32(0x9032EC) = ebp;
    MEM32(0x9032F8) = ebp;
    PUSH32(esp, 0x0007910Fu); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_0007910F: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x9032E0) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00079137; /* jle: less or equal (signed <=) */

loc_0007911F: ;
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x912B54)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x912B54))); }
    ebx = eax;
    MEM32(0x9032F0) = ebx;
    goto loc_0007913D;

loc_00079137: ;
    ebx = MEM32(0x9032F0);

loc_0007913D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00079156; /* jle: less or equal (signed <=) */

loc_00079141: ;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x912B58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x912B58))); }
    MEM32(0x9032FC) = eax;
    goto loc_0007915B;

loc_00079156: ;
    eax = MEM32(0x9032FC);

loc_0007915B: ;
    ecx = ZX8(MEM8(0x9131E7));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000791CC; /* ja: above (unsigned >) */

loc_00079167: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x792B4); /* switch: 6 entries, 3 targets */
    if (_jt == 0x0007916Eu) goto loc_0007916E;
    if (_jt == 0x000791A9u) goto loc_000791A9;
    if (_jt == 0x00079261u) goto loc_00079261;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007916E: ;
    ecx = MEM32(0x912B60);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00079180; /* jle: less or equal (signed <=) */

loc_00079178: ;
    ebx = ecx;
    MEM32(0x9032F0) = ebx;

loc_00079180: ;
    ecx = MEM32(0x912B64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00079191; /* jle: less or equal (signed <=) */

loc_0007918A: ;
    eax = ecx;
    MEM32(0x9032FC) = eax;

loc_00079191: ;
    ecx = MEM32(0x912B4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x912B3C));
    edx = MEM32(0x912B50);
    goto loc_00079299;

loc_000791A9: ;
    ecx = MEM32(0x912B80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000791BB; /* jle: less or equal (signed <=) */

loc_000791B3: ;
    ebx = ecx;
    MEM32(0x9032F0) = ebx;

loc_000791BB: ;
    ecx = MEM32(0x912B84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000791CC; /* jle: less or equal (signed <=) */

loc_000791C5: ;
    eax = ecx;
    MEM32(0x9032FC) = eax;

loc_000791CC: ;
    ecx = MEM32(0x9032F4);

loc_000791D2: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x9032D4) = ecx;
    MEM32(0x9032D8) = esi;
    ebx = 0;
    if ((_fas >= 0)) goto loc_000791F9; /* jns: not sign (positive) */

loc_000791F1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9032D8) = esi;

loc_000791F9: ;
    edx = MEM32(0x912B5C);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x9032DC) = eax;
    if ((_fas >= 0)) goto loc_00079210; /* jns: not sign (positive) */

loc_0007920A: ;
    MEM32(0x9032DC) = ebx;

loc_00079210: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00079216u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_00079216: ;
    PUSH32(esp, esi);
    MEM32(0x9032E4) = eax;
    PUSH32(esp, 0x00079221u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_00079221: ;
    MEM32(0x9032E8) = eax;
    PUSH32(esp, 0x0007922Bu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007922B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079231u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00079231: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079238u); RECOMP_ABI_CALL(0x000752C0u, sub_000752C0); /* call 0x000752C0 */

loc_00079238: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x9032D0;
    if (CMP_EQ(_fa, _fb)) goto loc_0007925C; /* je: equal / zero */

loc_00079244: ;
    MEM32(0x9032D4) = edi;
    MEM32(0x9032EC) = ebx;
    MEM32(0x9032F0) = ebx;
    MEM32(0x9032F4) = ebx;

loc_0007925C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00079261: ;
    ecx = MEM32(0x912B6C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00079273; /* jle: less or equal (signed <=) */

loc_0007926B: ;
    ebx = ecx;
    MEM32(0x9032F0) = ebx;

loc_00079273: ;
    ecx = MEM32(0x912B70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00079284; /* jle: less or equal (signed <=) */

loc_0007927D: ;
    eax = ecx;
    MEM32(0x9032FC) = eax;

loc_00079284: ;
    ecx = ZX16(MEM16(0x9131F3));
    edx = MEM32(0x912B78);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x912B74));

loc_00079299: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(0x9032F4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000791D2; /* jle: less or equal (signed <=) */

loc_000792A7: ;
    ecx = edx;
    MEM32(0x9032F4) = ecx;
    goto loc_000791D2;

    RECOMP_UNIMPL("outsb dx, byte ptr [esi]", 0x000792B4u); /* TODO: outsb dx, byte ptr [esi] */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -111) = MEM8(esi + -111) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + -111)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x61000791) = MEM8(ecx + 0x61000791) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0x61000791)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -111) = MEM8(esi + -111) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + -111)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -111) = MEM8(esi + -111) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + -111)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000792D0
 * Original: 0x000792D0 - 0x00079331 (97 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000792D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000792D0: ;
    eax = ZX8(MEM8(0x9131E7));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00079314; /* je: equal / zero */

loc_000792DD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000792F9; /* je: equal / zero */

loc_000792E0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007932D; /* jne: not equal / not zero */

loc_000792E3: ;
    PUSH32(esp, 0x000792E8u); RECOMP_ABI_CALL(0x00079090u, sub_00079090); /* call 0x00079090 */

loc_000792E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007932D; /* je: equal / zero */

loc_000792EC: ;
    esi = MEM32(0x912B7C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000792F9: ;
    PUSH32(esp, 0x000792FEu); RECOMP_ABI_CALL(0x00073E50u, sub_00073E50); /* call 0x00073E50 */

loc_000792FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007932D; /* je: equal / zero */

loc_00079302: ;
    PUSH32(esp, 0x00079307u); RECOMP_ABI_CALL(0x00073FD0u, sub_00073FD0); /* call 0x00073FD0 */

loc_00079307: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007932D; /* je: equal / zero */

loc_0007930B: ;
    PUSH32(esp, 0x00079310u); RECOMP_ABI_CALL(0x00075CA0u, sub_00075CA0); /* call 0x00075CA0 */

loc_00079310: ;
    esi = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00079314: ;
    PUSH32(esp, 0x00079319u); RECOMP_ABI_CALL(0x000738B0u, sub_000738B0); /* call 0x000738B0 */

loc_00079319: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007932D; /* je: equal / zero */

loc_0007931D: ;
    PUSH32(esp, 0x00079322u); RECOMP_ABI_CALL(0x00075C70u, sub_00075C70); /* call 0x00075C70 */

loc_00079322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007932D; /* je: equal / zero */

loc_00079326: ;
    PUSH32(esp, 0x0007932Bu); RECOMP_ABI_CALL(0x00075CF0u, sub_00075CF0); /* call 0x00075CF0 */

loc_0007932B: ;
    esi = eax;

loc_0007932D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00079340
 * Original: 0x00079340 - 0x0007935C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079340: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00079358u); RECOMP_ABI_CALL(0x00075DA0u, sub_00075DA0); /* call 0x00075DA0 */

loc_00079358: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00079360
 * Original: 0x00079360 - 0x000793D4 (116 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00079360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx);
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x903160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    MEM32(esp + 0xD4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00079494(); return; } /* jne: not equal / not zero */

loc_00079391: ;
    ebx = MEM32(0x903164);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00079494(); return; } /* jne: not equal / not zero */

loc_0007939F: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00079494(); return; } /* je: equal / zero */

loc_000793AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00079476(); return; } /* je: equal / zero */

loc_000793B4: ;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000793EF(); return; } /* jbe: below or equal (unsigned <=) */

loc_000793B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_000793EF(); return; } /* ja: above (unsigned >) */

loc_000793BB: ;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = 0xFFFFFFFDu;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

    g_seh_ebp = ebp; sub_000793D4(); return; /* fallthrough 0x000793D4 */

}

/**
 * sub_000793CB
 * Original: 0x000793CB - 0x000793D4 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000793CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000793CB: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

    g_seh_ebp = ebp; sub_000793D4(); return; /* fallthrough 0x000793D4 */

}

/**
 * sub_000793D4
 * Original: 0x000793D4 - 0x000793EF (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000793D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000793D4: ;
    PUSH32(esp, 0x000793D9u); RECOMP_ABI_CALL(0x0007CED0u, sub_0007CED0); /* call 0x0007CED0 */

loc_000793D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000793E8u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000793E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000793EF
 * Original: 0x000793EF - 0x000799B0 (1473 bytes, 364 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000793EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000793EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0007998B; /* jns: not sign (positive) */

loc_000793F7: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    eax = MEM32(0x913290);
    ecx = eax + eax;
    edi = ecx;
    ecx = MEM32(0x903CF0);
    ebx = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0007998B; /* jg: greater (signed >) */

loc_0007941A: ;
    eax = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_00079426: ;
    ecx = MEM32(0x903164);
    eax = MEM32(0x912A3C);
    MEM32(esp + 0x14) = ecx;
    ecx = eax + eax * 4;
    eax = MEM32(0x903D28);
    MEM32(esp + 0x18) = edx;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = esi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    esi = eax + eax * 4;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x913968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x913968;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x1C;
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
    g_seh_ebp = ebp; sub_000793CB(); return; /* tail jmp 0x000793CB */

    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = 0xFFFFFFFCu;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_000793D4(); return; /* tail jmp 0x000793D4 */

    eax = MEM32(edx + 8);
    esi = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00079810; /* ja: above (unsigned >) */

loc_000794A3: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x799A0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000794AAu) goto loc_000794AA;
    if (_jt == 0x00079641u) goto loc_00079641;
    if (_jt == 0x00079665u) goto loc_00079665;
    if (_jt == 0x000797E6u) goto loc_000797E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000794AA: ;
    eax = MEM32(0x912960);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000795D5; /* jne: not equal / not zero */

loc_000794B9: ;
    MEM32(0x912960) = 3;
    MEM32(0x903CF0) = ebx;
    MEM32(0x903D14) = 4;
    MEM32(0x902DA0) = ebx;
    MEM32(0x91320C) = ebx;
    MEM32(0x903D28) = ebx;
    MEM32(0x903CCC) = ebx;
    MEM32(0x902DE0) = ebx;
    ecx = MEM32(edx);
    MEM32(0x903300) = ecx;
    eax = MEM32(edx + 4);
    ecx = MEM32(0x912A40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x903304) = eax;
    eax = MEM32(ecx);
    MEM32(0x9131F8) = eax;
    eax = MEM32(ecx + 4);
    MEM32(0x9131FC) = eax;
    eax = MEM32(ecx + 8);
    MEM32(0x913200) = eax;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(0x902E8C);
    MEM32(0x913204) = ecx;
    ecx = MEM32(0x902E90);
    MEM32(0x914798) = eax;
    MEM32(0x91479C) = ecx;
    PUSH32(esp, 0x00079545u); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_00079545: ;
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
    MEM32(0x9031AC) = eax;
    ecx = ZX8(MEM8(edx + 0x10));
    MEM32(0x912A3C) = ecx;
    eax = ZX8(MEM8(edx + 0x11));
    MEM32(0x913290) = eax;
    MEM8(edx + 0x11) = LO8(ebx);
    MEM8(edx + 0x10) = LO8(ebx);
    eax = MEM32(0x913290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000795C9; /* jle: less or equal (signed <=) */

loc_000795BA: ;
    ecx = eax + -1;
    eax = 1;
    edi = 0x903174;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000795C9: ;
    MEM32(0x903D18) = ebx;
    MEM32(0x903168) = ebx;

loc_000795D5: ;
    ecx = MEM32(0x903300);
    eax = MEM32(0x912A3C);
    edx = MEM32(0x903304);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x914798);
    MEM32(esp + 0x18) = 0xFFFFFFFEu;
    esi = 0x913E68;
    edi = esp + 0x1C;
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
    ecx = MEM32(0x91479C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007962Bu); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_0007962B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0007963Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007963A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00079641: ;
    _fa = (uint32_t)(MEM32(0x912960)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x912960), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_0007964E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_0007965A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903304)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x903304) (32-bit) */
    goto loc_0007997F;

loc_00079665: ;
    eax = MEM32(0x912960);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007998B; /* je: equal / zero */

loc_00079674: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079680: ;
    esi = MEM32(0x903304);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_0007968E: ;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x903CF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000796D8; /* jb: below (unsigned <) */

loc_0007969B: ;
    if (CMP_NE(_fa, _fb)) goto loc_000796A9; /* jne: not equal / not zero */

loc_0007969D: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902DA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x902DA0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000796D8; /* jae: above or equal (unsigned >=) */

loc_000796A9: ;
    MEM32(0x902DE0) = 1;
    eax = MEM32(edx + 0xC);
    MEM32(0x9131C0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    MEM32(0x903CD0) = ecx;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000796D1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000796D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000796D8: ;
    MEM32(0x912960) = ebx;
    MEM32(0x903CF0) = ebx;
    MEM32(0x902DA0) = ebx;
    MEM32(0x91320C) = ebx;
    MEM32(0x903D28) = 1;
    MEM32(0x903CCC) = ebx;
    PUSH32(esp, 0x00079705u); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_00079705: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x903170) = edx;
    MEM32(0x903174) = edx;
    MEM32(0x903178) = edx;
    MEM32(0x90317C) = edx;
    eax = MEM32(0x903300);
    ecx = MEM32(0x91479C);
    MEM32(0x903180) = edx;
    MEM32(0x903184) = edx;
    MEM32(0x903188) = edx;
    MEM32(0x90318C) = edx;
    MEM32(0x903190) = edx;
    MEM32(0x903194) = edx;
    MEM32(0x903198) = edx;
    MEM32(0x90319C) = edx;
    MEM32(0x9031A0) = edx;
    MEM32(0x9031A4) = edx;
    MEM32(0x9031A8) = edx;
    MEM32(0x9031AC) = edx;
    edx = MEM32(0x914798);
    PUSH32(esp, ecx);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    MEM32(esp + 0x80) = esi;
    MEM32(esp + 0x84) = 0xFFFFFFFCu;
    PUSH32(esp, 0x0007979Au); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_0007979A: ;
    ecx = MEM32(0x903300);
    edx = MEM32(0x903304);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x903160) = ecx;
    MEM32(0x903164) = edx;
    MEM32(0x9131FC) = ebx;
    MEM32(0x914798) = ebx;
    MEM32(0x91479C) = ebx;
    MEM32(0x903CC0) = ebx;
    MEM32(0x903CF8) = ebx;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000797DFu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000797DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000797E6: ;
    _fa = (uint32_t)(MEM32(0x912960)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x912960), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_000797F3: ;
    MEM32(0x912960) = 0;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x00079809u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00079809: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00079810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000798D9; /* jns: not sign (positive) */

loc_00079818: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079824: ;
    esi = MEM32(0x903304);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079832: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    eax = MEM32(0x913290);
    ecx = eax + eax;
    edi = ecx;
    ecx = MEM32(0x903CF0);
    ebx = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0007998B; /* jg: greater (signed >) */

loc_00079855: ;
    eax = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_00079861: ;
    ecx = MEM32(0x903300);
    eax = MEM32(0x912A3C);
    MEM32(esp + 0x70) = ecx;
    ecx = eax + eax * 4;
    eax = MEM32(0x903D28);
    MEM32(esp + 0x78) = edx;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x74) = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    esi = eax + eax * 4;
    eax = MEM32(0x91479C);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x913968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x913968;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x7C;
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
    ecx = MEM32(0x914798);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000798C3u); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_000798C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000798D2u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000798D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000798D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_000798E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903304)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x903304) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_000798F1: ;
    ecx = MEM32(0x903CF0);
    esi = ecx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_00079902: ;
    esi = MEM32(0x913290);
    ecx = ecx + esi * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_0007990F: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax * 4 + 0x903170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax * 4 + 0x903170;
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079924: ;
    ebx = MEM32(0x912960);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079934; /* je: equal / zero */

loc_0007992F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079934: ;
    MEM32(eax) = 1;
    eax = MEM32(0x912A3C);
    esi = edx + 0xC;
    edx = MEM32(edx + 8);
    ecx = eax + eax * 4;
    eax = MEM32(0x903D28);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + edx * 4;
    edx = ecx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x913968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x913968;
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
    MEM32(0x903D14) = 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */

loc_0007997F: ;
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079981: ;
    MEM32(0x912960) = 3;

loc_0007998B: ;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x00079997u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00079997: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000799B0(); return; /* fallthrough 0x000799B0 */

}

/**
 * sub_00079476
 * Original: 0x00079476 - 0x00079494 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079476(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079476: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = 0xFFFFFFFCu;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_000793D4(); return; /* tail jmp 0x000793D4 */

}

/**
 * sub_00079494
 * Original: 0x00079494 - 0x000799B0 (1308 bytes, 318 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079494(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079494: ;
    eax = MEM32(edx + 8);
    esi = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00079810; /* ja: above (unsigned >) */

loc_000794A3: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x799A0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000794AAu) goto loc_000794AA;
    if (_jt == 0x00079641u) goto loc_00079641;
    if (_jt == 0x00079665u) goto loc_00079665;
    if (_jt == 0x000797E6u) goto loc_000797E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000794AA: ;
    eax = MEM32(0x912960);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000795D5; /* jne: not equal / not zero */

loc_000794B9: ;
    MEM32(0x912960) = 3;
    MEM32(0x903CF0) = ebx;
    MEM32(0x903D14) = 4;
    MEM32(0x902DA0) = ebx;
    MEM32(0x91320C) = ebx;
    MEM32(0x903D28) = ebx;
    MEM32(0x903CCC) = ebx;
    MEM32(0x902DE0) = ebx;
    ecx = MEM32(edx);
    MEM32(0x903300) = ecx;
    eax = MEM32(edx + 4);
    ecx = MEM32(0x912A40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x903304) = eax;
    eax = MEM32(ecx);
    MEM32(0x9131F8) = eax;
    eax = MEM32(ecx + 4);
    MEM32(0x9131FC) = eax;
    eax = MEM32(ecx + 8);
    MEM32(0x913200) = eax;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(0x902E8C);
    MEM32(0x913204) = ecx;
    ecx = MEM32(0x902E90);
    MEM32(0x914798) = eax;
    MEM32(0x91479C) = ecx;
    PUSH32(esp, 0x00079545u); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_00079545: ;
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
    MEM32(0x9031AC) = eax;
    ecx = ZX8(MEM8(edx + 0x10));
    MEM32(0x912A3C) = ecx;
    eax = ZX8(MEM8(edx + 0x11));
    MEM32(0x913290) = eax;
    MEM8(edx + 0x11) = LO8(ebx);
    MEM8(edx + 0x10) = LO8(ebx);
    eax = MEM32(0x913290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000795C9; /* jle: less or equal (signed <=) */

loc_000795BA: ;
    ecx = eax + -1;
    eax = 1;
    edi = 0x903174;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000795C9: ;
    MEM32(0x903D18) = ebx;
    MEM32(0x903168) = ebx;

loc_000795D5: ;
    ecx = MEM32(0x903300);
    eax = MEM32(0x912A3C);
    edx = MEM32(0x903304);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x914798);
    MEM32(esp + 0x18) = 0xFFFFFFFEu;
    esi = 0x913E68;
    edi = esp + 0x1C;
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
    ecx = MEM32(0x91479C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007962Bu); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_0007962B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0007963Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007963A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00079641: ;
    _fa = (uint32_t)(MEM32(0x912960)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x912960), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_0007964E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_0007965A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903304)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x903304) (32-bit) */
    goto loc_0007997F;

loc_00079665: ;
    eax = MEM32(0x912960);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007998B; /* je: equal / zero */

loc_00079674: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079680: ;
    esi = MEM32(0x903304);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_0007968E: ;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x903CF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000796D8; /* jb: below (unsigned <) */

loc_0007969B: ;
    if (CMP_NE(_fa, _fb)) goto loc_000796A9; /* jne: not equal / not zero */

loc_0007969D: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902DA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x902DA0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000796D8; /* jae: above or equal (unsigned >=) */

loc_000796A9: ;
    MEM32(0x902DE0) = 1;
    eax = MEM32(edx + 0xC);
    MEM32(0x9131C0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    MEM32(0x903CD0) = ecx;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000796D1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000796D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000796D8: ;
    MEM32(0x912960) = ebx;
    MEM32(0x903CF0) = ebx;
    MEM32(0x902DA0) = ebx;
    MEM32(0x91320C) = ebx;
    MEM32(0x903D28) = 1;
    MEM32(0x903CCC) = ebx;
    PUSH32(esp, 0x00079705u); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_00079705: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x903170) = edx;
    MEM32(0x903174) = edx;
    MEM32(0x903178) = edx;
    MEM32(0x90317C) = edx;
    eax = MEM32(0x903300);
    ecx = MEM32(0x91479C);
    MEM32(0x903180) = edx;
    MEM32(0x903184) = edx;
    MEM32(0x903188) = edx;
    MEM32(0x90318C) = edx;
    MEM32(0x903190) = edx;
    MEM32(0x903194) = edx;
    MEM32(0x903198) = edx;
    MEM32(0x90319C) = edx;
    MEM32(0x9031A0) = edx;
    MEM32(0x9031A4) = edx;
    MEM32(0x9031A8) = edx;
    MEM32(0x9031AC) = edx;
    edx = MEM32(0x914798);
    PUSH32(esp, ecx);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    MEM32(esp + 0x80) = esi;
    MEM32(esp + 0x84) = 0xFFFFFFFCu;
    PUSH32(esp, 0x0007979Au); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_0007979A: ;
    ecx = MEM32(0x903300);
    edx = MEM32(0x903304);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x903160) = ecx;
    MEM32(0x903164) = edx;
    MEM32(0x9131FC) = ebx;
    MEM32(0x914798) = ebx;
    MEM32(0x91479C) = ebx;
    MEM32(0x903CC0) = ebx;
    MEM32(0x903CF8) = ebx;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000797DFu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000797DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000797E6: ;
    _fa = (uint32_t)(MEM32(0x912960)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x912960), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_000797F3: ;
    MEM32(0x912960) = 0;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x00079809u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00079809: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00079810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000798D9; /* jns: not sign (positive) */

loc_00079818: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079824: ;
    esi = MEM32(0x903304);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079832: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    eax = MEM32(0x913290);
    ecx = eax + eax;
    edi = ecx;
    ecx = MEM32(0x903CF0);
    ebx = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0007998B; /* jg: greater (signed >) */

loc_00079855: ;
    eax = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_00079861: ;
    ecx = MEM32(0x903300);
    eax = MEM32(0x912A3C);
    MEM32(esp + 0x70) = ecx;
    ecx = eax + eax * 4;
    eax = MEM32(0x903D28);
    MEM32(esp + 0x78) = edx;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x74) = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    esi = eax + eax * 4;
    eax = MEM32(0x91479C);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x913968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x913968;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x7C;
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
    ecx = MEM32(0x914798);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000798C3u); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_000798C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x000798D2u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000798D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000798D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903300) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_000798E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903304)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x903304) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_000798F1: ;
    ecx = MEM32(0x903CF0);
    esi = ecx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_00079902: ;
    esi = MEM32(0x913290);
    ecx = ecx + esi * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007998B; /* ja: above (unsigned >) */

loc_0007990F: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax * 4 + 0x903170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax * 4 + 0x903170;
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079924: ;
    ebx = MEM32(0x912960);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079934; /* je: equal / zero */

loc_0007992F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079934: ;
    MEM32(eax) = 1;
    eax = MEM32(0x912A3C);
    esi = edx + 0xC;
    edx = MEM32(edx + 8);
    ecx = eax + eax * 4;
    eax = MEM32(0x903D28);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + edx * 4;
    edx = ecx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x913968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x913968;
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
    MEM32(0x903D14) = 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */

loc_0007997F: ;
    if (CMP_NE(_fa, _fb)) goto loc_0007998B; /* jne: not equal / not zero */

loc_00079981: ;
    MEM32(0x912960) = 3;

loc_0007998B: ;
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x00079997u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00079997: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000799B0(); return; /* fallthrough 0x000799B0 */

}

/**
 * sub_000799B0
 * Original: 0x000799B0 - 0x00079B48 (408 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000799B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000799B0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x000799C1u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_000799C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000001u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00079B3B; /* jne: not equal / not zero */

loc_000799CC: ;
    eax = MEM32(0x9031C4);
    ecx = MEM32(0x912A44);
    edx = MEM32(0x903ECC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912A3C) = eax;
    MEM32(0x913290) = edx;
    eax = MEM32(ecx);
    MEM32(0x9131F8) = eax;
    eax = MEM32(ecx + 4);
    MEM32(0x9131FC) = eax;
    eax = MEM32(ecx + 8);
    MEM32(0x913200) = eax;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(0x902EEA);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 1;
    MEM32(0x913204) = ecx;
    ecx = MEM32(0x902EEE);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(0x914798) = eax;
    MEM32(0x91479C) = ecx;
    MEM32(0x912960) = esi;
    MEM32(0x903CF0) = ebx;
    MEM32(0x902DA0) = esi;
    MEM32(0x91320C) = esi;
    MEM32(0x903D28) = esi;
    MEM32(0x903CCC) = ebx;
    MEM32(0x902DE0) = ebx;
    PUSH32(esp, 0x00079A5Au); RECOMP_ABI_CALL(0x00070410u, sub_00070410); /* call 0x00070410 */

loc_00079A5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
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
    MEM32(0x9031AC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00079ABC; /* jle: less or equal (signed <=) */

loc_00079AB0: ;
    ecx = edx + -1;
    eax = esi;
    edi = 0x903174;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00079ABC: ;
    PUSH32(esp, 0x903300);
    PUSH32(esp, 0x00079AC6u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_00079AC6: ;
    eax = MEM32(0x912A3C);
    ecx = MEM32(0x903300);
    edx = MEM32(0x903304);
    MEM32(esp + 0xC) = ecx;
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    esi = 0x913968;
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
    ecx = edx;
    edx = MEM32(0x914798);
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
    ecx = MEM32(0x91479C);
    MEM8(esp + 0x1C) = LO8(eax);
    SET_LO8(eax, MEM8(0x913290));
    PUSH32(esp, ecx);
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079B29u); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_00079B29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x903D18) = ebx;
    MEM32(0x903168) = ebx;
    POP32(esp, ebx);

loc_00079B3B: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x00079B44u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00079B44: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00079B50
 * Original: 0x00079B50 - 0x00079BE1 (145 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079B50: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x00079B61u); RECOMP_ABI_CALL(0x000707E0u, sub_000707E0); /* call 0x000707E0 */

loc_00079B61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079BD4; /* je: equal / zero */

loc_00079B65: ;
    PUSH32(esp, 0x00079B6Au); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00079B6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079BD4; /* je: equal / zero */

loc_00079B6E: ;
    PUSH32(esp, 0x00079B73u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00079B73: ;
    _fb = (uint32_t)(MEM32(0x902DB8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x902DB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079BD4; /* jb: below (unsigned <) */

loc_00079B80: ;
    eax = MEM32(0x903300);
    ecx = MEM32(0x903304);
    edx = MEM32(0x903CF0);
    MEM32(esp) = eax;
    SET_LO16(eax, MEM16(0x902DA0));
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x91479C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x914798);
    PUSH32(esp, ecx);
    MEM16(esp + 0x1C) = LO16(eax);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0xFFFFFFFDu;
    PUSH32(esp, 0x00079BC7u); RECOMP_ABI_CALL(0x0007CF50u, sub_0007CF50); /* call 0x0007CF50 */

loc_00079BC7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00079BCFu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00079BCF: ;
    MEM32(0x902DB8) = eax;

loc_00079BD4: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x00079BDDu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00079BDD: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00079BF0
 * Original: 0x00079BF0 - 0x00079C5D (109 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x912A40) = edi;
    MEM32(0x912A44) = edi;
    MEM32(0x912A48) = edi;
    MEM32(0x912A4C) = edi;
    MEM32(0x912A50) = edi;
    MEM32(0x912A54) = edi;
    MEM32(0x912A58) = edi;
    MEM32(0x912A5C) = edi;
    esi = 0x903D40;
    /* nop */

loc_00079C30: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079C3D; /* je: equal / zero */

loc_00079C34: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00079C3Au); RECOMP_ABI_CALL(0x0007DDA0u, sub_0007DDA0); /* call 0x0007DDA0 */

loc_00079C3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079C3D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x903EC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x903EC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00079C30; /* jl: less (signed <) */

loc_00079C48: ;
    ecx = 0x60;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x903D30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00077C50(); return; /* tail jmp 0x00077C50 */

}

/**
 * sub_00079C60
 * Original: 0x00079C60 - 0x00079E94 (564 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079C60: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(0x90315C);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0xC) = 0;
    esi = 0x903D30;
    PUSH32(esp, edi);
    /* nop */

loc_00079CA0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00079CCB; /* jbe: below or equal (unsigned <=) */

loc_00079CA6: ;
    edx = MEM32(esi);
    edi = MEM32(esi + 4);
    eax = 0x902E8C;

loc_00079CB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079CB9; /* jne: not equal / not zero */

loc_00079CB4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079CC3; /* je: equal / zero */

loc_00079CB9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079CB0; /* jb: below (unsigned <) */

loc_00079CC1: ;
    goto loc_00079CCB;

loc_00079CC3: ;
    edx = MEM32(esp + 0x10);
    MEM32(esp + ecx * 4 + 0x14) = edx;

loc_00079CCB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079D32; /* jne: not equal / not zero */

loc_00079CCF: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00079D32; /* je: equal / zero */

loc_00079CDA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079CE1u); RECOMP_ABI_CALL(0x00077E10u, sub_00077E10); /* call 0x00077E10 */

loc_00079CE1: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00079CEFu); RECOMP_ABI_CALL(0x00083EE0u, sub_00083EE0); /* call 0x00083EE0 */

loc_00079CEF: ;
    ebp = MEM32(esi + 4);
    edi = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00079CFBu); RECOMP_ABI_CALL(0x00073860u, sub_00073860); /* call 0x00073860 */

loc_00079CFB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00079D02u); RECOMP_ABI_CALL(0x00073AD0u, sub_00073AD0); /* call 0x00073AD0 */

loc_00079D02: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00079D09u); RECOMP_ABI_CALL(0x000726C0u, sub_000726C0); /* call 0x000726C0 */

loc_00079D09: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x10;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00079D2C; /* je: equal / zero */

loc_00079D23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079D29u); RECOMP_ABI_CALL(0x0007DDA0u, sub_0007DDA0); /* call 0x0007DDA0 */

loc_00079D29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079D2C: ;
    ebx = MEM32(0x90315C);

loc_00079D32: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x903EB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x903EB0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00079CA0; /* jl: less (signed <) */

loc_00079D4A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00079E6A; /* jbe: below or equal (unsigned <=) */

loc_00079D5A: ;
    ebp = 0x902E8C;
    /* nop */

loc_00079D60: ;
    edx = MEM32(ebp);
    esi = MEM32(ebp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x903D30;
    /* nop */

loc_00079D70: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079D7D; /* jne: not equal / not zero */

loc_00079D76: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079D88; /* je: equal / zero */

loc_00079D7D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x903EB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x903EB0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00079D70; /* jl: less (signed <) */

loc_00079D88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079E56; /* jne: not equal / not zero */

loc_00079D91: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x903D30;

loc_00079D98: ;
    edx = MEM32(eax);
    edx = edx | MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00079DAA; /* je: equal / zero */

loc_00079D9F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x903EB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x903EB0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00079D98; /* jl: less (signed <) */

loc_00079DAA: ;
    esi = edi + edi * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi + 0x903D44;
    PUSH32(esp, eax);
    ebx = ebp + -36;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00079DC0u); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_00079DC0: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    MEM32(esp + edx * 4 + 0x1C) = edi;
    edi = MEM32(0x91298C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x903D30) = eax;
    MEM32(esi + 0x903D34) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00079DF7; /* jne: not equal / not zero */

loc_00079DE7: ;
    eax = MEM32(0x912990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079DF7; /* jne: not equal / not zero */

loc_00079DF0: ;
    eax = 1;
    goto loc_00079DF9;

loc_00079DF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00079DF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x903D5C) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00079E0C; /* jne: not equal / not zero */

loc_00079E03: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00079E09u); RECOMP_ABI_CALL(0x00077DA0u, sub_00077DA0); /* call 0x00077DA0 */

loc_00079E09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079E0C: ;
    PUSH32(esp, 0x00079E11u); RECOMP_ABI_CALL(0x0007DE30u, sub_0007DE30); /* call 0x0007DE30 */

loc_00079E11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079E30; /* jne: not equal / not zero */

loc_00079E16: ;
    SET_LO8(eax, MEM8(esi + 0x903D5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079E30; /* jne: not equal / not zero */

loc_00079E20: ;
    ecx = esi + 0x903D40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00079E2Du); RECOMP_ABI_CALL(0x0007DD50u, sub_0007DD50); /* call 0x0007DD50 */

loc_00079E2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079E30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x903D54;
    MEM8(esi + 0x903D5D) = 0;
    MEM32(esi + 0x903D38) = eax;
    MEM32(esi + 0x903D3C) = eax;
    PUSH32(esp, 0x00079E50u); RECOMP_ABI_CALL(0x00077BD0u, sub_00077BD0); /* call 0x00077BD0 */

loc_00079E50: ;
    ebx = MEM32(0x90315C);

loc_00079E56: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x5E;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00079D60; /* jb: below (unsigned <) */

loc_00079E6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_BE(_fa, _fb)) goto loc_00079E8E; /* jbe: below or equal (unsigned <=) */

loc_00079E72: ;
    ecx = MEM32(esp + eax * 4 + 0xC);
    edx = ecx + ecx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x903D30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x903D30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x912A40) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079E72; /* jb: below (unsigned <) */

loc_00079E8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00079EA0
 * Original: 0x00079EA0 - 0x00079F80 (224 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi * 4 + 0x912A40);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00079EBBu); RECOMP_ABI_CALL(0x00077E10u, sub_00077E10); /* call 0x00077E10 */

loc_00079EBB: ;
    edi = MEM32(esi * 4 + 0x912A40);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00079ECEu); RECOMP_ABI_CALL(0x00073860u, sub_00073860); /* call 0x00073860 */

loc_00079ECE: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079EDAu); RECOMP_ABI_CALL(0x00073AD0u, sub_00073AD0); /* call 0x00073AD0 */

loc_00079EDA: ;
    ecx = MEM32(edi + 0x10);
    eax = edi + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079EFC; /* je: equal / zero */

loc_00079EE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079EEFu); RECOMP_ABI_CALL(0x0007DDA0u, sub_0007DDA0); /* call 0x0007DDA0 */

loc_00079EEF: ;
    ecx = MEM32(esi * 4 + 0x912A40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = ebx;

loc_00079EFC: ;
    edx = MEM32(esi * 4 + 0x912A40);
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00079F10u); RECOMP_ABI_CALL(0x00083EE0u, sub_00083EE0); /* call 0x00083EE0 */

loc_00079F10: ;
    edi = MEM32(esi * 4 + 0x912A40);
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079F23u); RECOMP_ABI_CALL(0x000726C0u, sub_000726C0); /* call 0x000726C0 */

loc_00079F23: ;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    ebp = MEM32(0x90315C);
    ecx = esi + 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00079F66; /* jae: above or equal (unsigned >=) */

loc_00079F38: ;
    esi = ecx * 4 + 0x912A40;
    edx = ecx;
    eax = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5E);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + -4;
    ecx = eax;
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
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    edx = edx + 0x902E68;
    ebx = edx + -94;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
    edi = ebx;
    { uint64_t _n = (uint64_t)ecx * 2u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2u) = MEM16(esi + _i*2u); }
      esi += ecx * 2u; edi += ecx * 2u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2);
      for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = MEM16(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsw */

loc_00079F66: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x90315C) = ebp;
    PUSH32(esp, 0x00079F72u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00079F72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00079F7F; /* je: equal / zero */

loc_00079F7A: ;
    g_seh_ebp = ebp; sub_00081AD0(); return; /* tail jmp 0x00081AD0 */

loc_00079F7F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00079F80
 * Original: 0x00079F80 - 0x00079FCD (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079F80: ;
    edx = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00079FCC; /* jbe: below or equal (unsigned <=) */

loc_00079F8C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00079FA0;

    /* nop */

loc_00079FA0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079FB3; /* jne: not equal / not zero */

loc_00079FAB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x902E90) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079FBE; /* je: equal / zero */

loc_00079FB3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079FA0; /* jb: below (unsigned <) */

loc_00079FBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00079FBE: ;
    eax = ZX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079FC7u); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_00079FC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00079FCC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00079FD0
 * Original: 0x00079FD0 - 0x0007A002 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90315C);
    esi = edi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00079FFF; /* jae: above or equal (unsigned >=) */

loc_00079FDF: ;
    /* nop */

loc_00079FE0: ;
    ecx = esi;
    PUSH32(esp, 0x00079FE7u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_00079FE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079FFA; /* je: equal / zero */

loc_00079FEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00079FF1u); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_00079FF1: ;
    edi = MEM32(0x90315C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079FFA: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079FE0; /* jb: below (unsigned <) */

loc_00079FFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007A010
 * Original: 0x0007A010 - 0x0007A08E (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007A010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007A010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x90315C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0007A08B; /* js: sign (negative) */

loc_0007A01D: ;
    /* nop */

loc_0007A020: ;
    eax = MEM32(esi * 4 + 0x912A40);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A056; /* je: equal / zero */

loc_0007A02E: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi * 4 + 0x912A40);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xF0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007A07D; /* jbe: below or equal (unsigned <=) */

loc_0007A041: ;
    PUSH32(esp, 0x0007A046u); RECOMP_ABI_CALL(0x00080080u, sub_00080080); /* call 0x00080080 */

loc_0007A046: ;
    edx = MEM32(esi * 4 + 0x912A40);
    MEM32(edx + 8) = 0;
    goto loc_0007A07D;

loc_0007A056: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi * 4 + 0x912A40);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x4B0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007A07D; /* jbe: below or equal (unsigned <=) */

loc_0007A069: ;
    PUSH32(esp, 0x0007A06Eu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007A06E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A07D; /* je: equal / zero */

loc_0007A072: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007A078u); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_0007A078: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0007A07D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0007A020; /* jns: not sign (positive) */

loc_0007A080: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A08B; /* je: equal / zero */

loc_0007A084: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0007D120(); return; /* tail jmp 0x0007D120 */

loc_0007A08B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007A090
 * Original: 0x0007A090 - 0x0007A0E1 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007A090: ;
    SET_LO8(ecx, MEM8(0x90315C));
    eax = MEM32(esp + 4);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(0x912964);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x912964) = ecx;
    MEM32(eax + 1) = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0xBC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x90315C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x902E68;
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
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00079C60(); return; /* tail jmp 0x00079C60 */

}

/**
 * sub_0007A0F0
 * Original: 0x0007A0F0 - 0x0007A1A6 (182 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007A0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007A0F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(0x912964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 1) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007A1A5; /* jae: above or equal (unsigned >=) */

loc_0007A102: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(edx));
    MEM32(0x90315C) = esi;
    ecx = MEM32(edx + 1);
    MEM32(0x912964) = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xBC;
    edi = 0x902E68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    esi = edx + 5;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0x902E68;
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
    PUSH32(esp, 0x0007A144u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007A144: ;
    eax = MEM32(0x90315C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007A1A3; /* jbe: below or equal (unsigned <=) */

loc_0007A14F: ;
    esi = 0x902E8C;
    PUSH32(esp, ebx);

loc_0007A155: ;
    ecx = MEM32(esi);
    eax = MEM32(0x91298C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0007A16C; /* jne: not equal / not zero */

loc_0007A163: ;
    eax = MEM32(0x912990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A17E; /* je: equal / zero */

loc_0007A16C: ;
    eax = esi + 8;
    ebx = eax + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007A17Bu); RECOMP_ABI_CALL(0x0007D8E0u, sub_0007D8E0); /* call 0x0007D8E0 */

loc_0007A17B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007A17E: ;
    ecx = MEM32(edi * 4 + 0x912A40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esi + -36;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007A192u); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0007A192: ;
    eax = MEM32(0x90315C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A155; /* jb: below (unsigned <) */

loc_0007A1A2: ;
    POP32(esp, ebx);

loc_0007A1A3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0007A1A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007A1B0
 * Original: 0x0007A1B0 - 0x0007A275 (197 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007A1B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(0x903CD8) = 0;
    MEM32(0x913938) = 0xFFFFFFFFu;
    esi = ZX8(MEM8(edx + 0x31));
    MEM32(0x90315C) = esi;
    eax = MEM32(edx + 0x32);
    PUSH32(esp, edi);
    MEM32(0x912964) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xBC;
    edi = 0x902E68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + 0x36;
    edi = 0x902E68;
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
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x0007A20Bu); RECOMP_ABI_CALL(0x00071770u, sub_00071770); /* call 0x00071770 */

loc_0007A20B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007A213u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007A213: ;
    eax = MEM32(0x90315C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007A272; /* jbe: below or equal (unsigned <=) */

loc_0007A21E: ;
    esi = 0x902E8C;
    PUSH32(esp, ebx);

loc_0007A224: ;
    ecx = MEM32(esi);
    eax = MEM32(0x91298C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0007A23B; /* jne: not equal / not zero */

loc_0007A232: ;
    eax = MEM32(0x912990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A24D; /* je: equal / zero */

loc_0007A23B: ;
    eax = esi + 8;
    ebx = eax + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007A24Au); RECOMP_ABI_CALL(0x0007D8E0u, sub_0007D8E0); /* call 0x0007D8E0 */

loc_0007A24A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007A24D: ;
    ecx = MEM32(edi * 4 + 0x912A40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esi + -36;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007A261u); RECOMP_ABI_CALL(0x0007CE30u, sub_0007CE30); /* call 0x0007CE30 */

loc_0007A261: ;
    eax = MEM32(0x90315C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A224; /* jb: below (unsigned <) */

loc_0007A271: ;
    POP32(esp, ebx);

loc_0007A272: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007A280
 * Original: 0x0007A280 - 0x0007AB83 (2307 bytes, 756 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007A280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007A280: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x350);
    eax = ZX8(MEM8(esi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007AB7B; /* ja: above (unsigned >) */

loc_0007A29B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x7AB84); /* switch: 28 entries, 28 targets */
    if (_jt == 0x0007A2A5u) goto loc_0007A2A5;
    if (_jt == 0x0007A303u) goto loc_0007A303;
    if (_jt == 0x0007A369u) goto loc_0007A369;
    if (_jt == 0x0007A427u) goto loc_0007A427;
    if (_jt == 0x0007A504u) goto loc_0007A504;
    if (_jt == 0x0007A531u) goto loc_0007A531;
    if (_jt == 0x0007A58Du) goto loc_0007A58D;
    if (_jt == 0x0007A609u) goto loc_0007A609;
    if (_jt == 0x0007A619u) goto loc_0007A619;
    if (_jt == 0x0007A691u) goto loc_0007A691;
    if (_jt == 0x0007A6D0u) goto loc_0007A6D0;
    if (_jt == 0x0007A742u) goto loc_0007A742;
    if (_jt == 0x0007A778u) goto loc_0007A778;
    if (_jt == 0x0007A7DEu) goto loc_0007A7DE;
    if (_jt == 0x0007A7F2u) goto loc_0007A7F2;
    if (_jt == 0x0007A848u) goto loc_0007A848;
    if (_jt == 0x0007A8CBu) goto loc_0007A8CB;
    if (_jt == 0x0007A91Du) goto loc_0007A91D;
    if (_jt == 0x0007A96Fu) goto loc_0007A96F;
    if (_jt == 0x0007A9D7u) goto loc_0007A9D7;
    if (_jt == 0x0007AA01u) goto loc_0007AA01;
    if (_jt == 0x0007AA11u) goto loc_0007AA11;
    if (_jt == 0x0007AA5Du) goto loc_0007AA5D;
    if (_jt == 0x0007AA74u) goto loc_0007AA74;
    if (_jt == 0x0007AACFu) goto loc_0007AACF;
    if (_jt == 0x0007AB08u) goto loc_0007AB08;
    if (_jt == 0x0007AB3Au) goto loc_0007AB3A;
    if (_jt == 0x0007AB6Fu) goto loc_0007AB6F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007A2A5: ;
    PUSH32(esp, 0x0007A2AAu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A2C4; /* jne: not equal / not zero */

loc_0007A2AF: ;
    eax = MEM32(0x902EEA);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 1) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A2C4; /* jne: not equal / not zero */

loc_0007A2B9: ;
    ecx = MEM32(0x902EEE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 5) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A2EE; /* je: equal / zero */

loc_0007A2C4: ;
    PUSH32(esp, 0x0007A2C9u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A2C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A2D1: ;
    edx = MEM32(0x902E8C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 1) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A2E0: ;
    eax = MEM32(0x902E90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 5) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A2EE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x903CC0) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A303: ;
    ecx = MEM32(0x902E8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 1) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A312: ;
    edx = MEM32(0x902E90);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 5) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A321: ;
    eax = MEM32(0x9032C8);
    eax = eax | MEM32(0x9032CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A332: ;
    ecx = MEM32(esi + 9);
    MEM32(0x913210) = ecx;
    edx = MEM32(esi + 0x11);
    MEM32(0x9032C8) = edx;
    eax = MEM32(esi + 0x15);
    POP32(esp, edi);
    MEM32(0x9032CC) = eax;
    ecx = MEM32(esi + 1);
    POP32(esp, ebp);
    MEM32(0x903EB8) = ecx;
    edx = MEM32(esi + 5);
    POP32(esp, ebx);
    MEM32(0x903EBC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A369: ;
    PUSH32(esp, 0x0007A36Eu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A36E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A377: ;
    ecx = MEM32(0x90315C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edi = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A387: ;
    edx = MEM32(esi + 1);
    esi = MEM32(esi + 5);
    eax = 0x902EEA;

loc_0007A392: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A39F; /* jne: not equal / not zero */

loc_0007A398: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A3B2; /* je: equal / zero */

loc_0007A39F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A392; /* jb: below (unsigned <) */

loc_0007A3A7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A3B2: ;
    eax = MEM32(0x91298C);
    ecx = MEM32(0x912990);
    edx = MEM32(0x9031B4);
    MEM32(esp + 0x11) = eax;
    eax = MEM32(0x9147A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x10) = 2;
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 0x19) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007A404; /* je: equal / zero */

loc_0007A3DD: ;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x21) = ecx;
    edx = MEM32(eax + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2D) = edx;
    PUSH32(esp, 0x0007A3F6u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_0007A3F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A404: ;
    eax = esp + 0x21;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007A40Eu); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_0007A40E: ;
    ecx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007A419u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_0007A419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A427: ;
    PUSH32(esp, 0x0007A42Cu); RECOMP_ABI_CALL(0x00070C10u, sub_00070C10); /* call 0x00070C10 */

loc_0007A42C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007A435: ;
    eax = MEM32(esi + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E8C) (32-bit) */
    ecx = MEM32(esi + 5);
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A447: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x902E90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A453: ;
    edi = MEM32(0x903EB8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A467; /* jne: not equal / not zero */

loc_0007A45F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x903EBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x903EBC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A473; /* je: equal / zero */

loc_0007A467: ;
    MEM32(0x9032C8) = edx;
    MEM32(0x9032CC) = edx;

loc_0007A473: ;
    eax = MEM32(esi + 0x15);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9032CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9032CC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007AB78; /* jb: below (unsigned <) */

loc_0007A482: ;
    if (CMP_A(_fa, _fb)) goto loc_0007A493; /* ja: above (unsigned >) */

loc_0007A484: ;
    ecx = MEM32(esi + 0x11);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9032C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x9032C8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A493: ;
    eax = MEM32(esi + 9);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(0x913210) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0007A4A9; /* jne: not equal / not zero */

loc_0007A4A0: ;
    _fa = (uint32_t)(MEM32(0x9031B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B4), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A4D6; /* jne: not equal / not zero */

loc_0007A4A9: ;
    ecx = MEM32(0x912990);
    eax = MEM32(0x91298C);
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 0x11) = eax;
    eax = MEM32(esi + 0xD);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = 5;
    MEM32(esp + 0x25) = eax;
    PUSH32(esp, 0x0007A4D3u); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_0007A4D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007A4D6: ;
    edx = MEM32(esi + 0x11);
    MEM32(0x9032C8) = edx;
    eax = MEM32(esi + 0x15);
    POP32(esp, edi);
    MEM32(0x9032CC) = eax;
    ecx = MEM32(esi + 1);
    POP32(esp, ebp);
    MEM32(0x903EB8) = ecx;
    edx = MEM32(esi + 5);
    POP32(esp, ebx);
    MEM32(0x903EBC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A504: ;
    PUSH32(esp, 0x0007A509u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A509: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A512: ;
    ecx = MEM32(0x9147A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007A520: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007A526u); RECOMP_ABI_CALL(0x00071B30u, sub_00071B30); /* call 0x00071B30 */

loc_0007A526: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A531: ;
    edx = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A541: ;
    edi = MEM32(esi + 1);
    ebx = MEM32(esi + 5);
    eax = 0x902E8C;
    /* nop */

loc_0007A550: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A55D; /* jne: not equal / not zero */

loc_0007A556: ;
    ebp = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A570; /* je: equal / zero */

loc_0007A55D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A550; /* jb: below (unsigned <) */

loc_0007A565: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A570: ;
    eax = MEM32(esi + 9);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x902E68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x902E68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007A582u); RECOMP_ABI_CALL(0x0007C4A0u, sub_0007C4A0); /* call 0x0007C4A0 */

loc_0007A582: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A58D: ;
    PUSH32(esp, 0x0007A592u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007A592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007A59A: ;
    ebx = MEM32(esi + 9);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x912964)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x912964) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A5A9: ;
    edx = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A5B9: ;
    edi = MEM32(esi + 1);
    esi = MEM32(esi + 5);
    eax = 0x902E8C;

loc_0007A5C4: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A5D1; /* jne: not equal / not zero */

loc_0007A5CA: ;
    ebp = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A5E4; /* je: equal / zero */

loc_0007A5D1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A5C4; /* jb: below (unsigned <) */

loc_0007A5D9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A5E4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ecx * 4 + 0x913944) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A5F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007A5FBu); RECOMP_ABI_CALL(0x00070B40u, sub_00070B40); /* call 0x00070B40 */

loc_0007A5FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A609: ;
    PUSH32(esp, 0x0007A60Eu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007A60E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A619: ;
    PUSH32(esp, 0x0007A61Eu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A61E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A627: ;
    edx = MEM32(esi + 1);
    edi = MEM32(esi + 5);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007A631: ;
    ebx = MEM32(eax + 0x902E8C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A645; /* jne: not equal / not zero */

loc_0007A63B: ;
    ebx = MEM32(eax + 0x902E90);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A65B; /* je: equal / zero */

loc_0007A645: ;
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A631; /* jb: below (unsigned <) */

loc_0007A650: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A65B: ;
    PUSH32(esp, 0x0007A660u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0007A660: ;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 9));
    MEM8(eax + 0x903EC0) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0xA));
    POP32(esp, edi);
    MEM8(eax + 0x903EC4) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0xB));
    POP32(esp, ebp);
    MEM8(eax + 0x903EC2) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0xC));
    POP32(esp, ebx);
    MEM8(eax + 0x903EC6) = LO8(edx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A691: ;
    PUSH32(esp, 0x0007A696u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A69F: ;
    eax = MEM32(0x902EEA);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 1) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A6AD: ;
    ecx = MEM32(0x902EEE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 5) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A6BC: ;
    edx = MEM32(esi + 9);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x903CF4) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A6D0: ;
    PUSH32(esp, 0x0007A6D5u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007A6D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A6DE: ;
    edx = MEM32(esi + 1);
    edi = MEM32(esi + 5);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0007A6F0;

    /* nop */

loc_0007A6F0: ;
    ebx = MEM32(eax + 0x902E8C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A704; /* jne: not equal / not zero */

loc_0007A6FA: ;
    ebx = MEM32(eax + 0x902E90);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A71A; /* je: equal / zero */

loc_0007A704: ;
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A6F0; /* jb: below (unsigned <) */

loc_0007A70F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A71A: ;
    PUSH32(esp, 0x0007A71Fu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0007A71F: ;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 9));
    POP32(esp, edi);
    MEM8(eax + 0x914378) = LO8(ecx);
    edx = MEM32(esi + 9);
    POP32(esp, ebp);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM16(0x91437A) = LO16(edx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A742: ;
    eax = MEM32(esi + 9);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x9031B8) = eax;
    ecx = MEM32(esi + 1);
    MEM32(0x9129C8) = ecx;
    edx = MEM32(esi + 5);
    MEM32(0x9129CC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A765: ;
    eax = MEM32(esi + 0xD);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x903EC8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A778: ;
    PUSH32(esp, 0x0007A77Du); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007A77D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007A785: ;
    edx = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A795: ;
    edi = MEM32(esi + 1);
    esi = MEM32(esi + 5);
    eax = 0x902E8C;

loc_0007A7A0: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A7AD; /* jne: not equal / not zero */

loc_0007A7A6: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A7C0; /* je: equal / zero */

loc_0007A7AD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A7A0; /* jb: below (unsigned <) */

loc_0007A7B5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A7C0: ;
    ecx = MEM32(ecx * 4 + 0x912A40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007A7D0u); RECOMP_ABI_CALL(0x0007E230u, sub_0007E230); /* call 0x0007E230 */

loc_0007A7D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A7DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007A7E4u); RECOMP_ABI_CALL(0x000778D0u, sub_000778D0); /* call 0x000778D0 */

loc_0007A7E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A7F2: ;
    edi = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A802: ;
    edx = MEM32(esi + 1);
    esi = MEM32(esi + 5);
    goto loc_0007A810;

    /* nop */

loc_0007A810: ;
    eax = MEM32(ecx * 4 + 0x912A40);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A824; /* jne: not equal / not zero */

loc_0007A81D: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A834; /* je: equal / zero */

loc_0007A824: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A810; /* jb: below (unsigned <) */

loc_0007A829: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A834: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007A83Au); RECOMP_ABI_CALL(0x00075F10u, sub_00075F10); /* call 0x00075F10 */

loc_0007A83A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A848: ;
    ebx = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007A858: ;
    edx = MEM32(esi + 1);
    edi = MEM32(esi + 5);
    edi = edi;

loc_0007A860: ;
    eax = MEM32(ecx * 4 + 0x912A40);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A874; /* jne: not equal / not zero */

loc_0007A86D: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A884; /* je: equal / zero */

loc_0007A874: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A860; /* jb: below (unsigned <) */

loc_0007A879: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A884: ;
    ecx = MEM32(ecx * 4 + 0x912A40);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007A893u); RECOMP_ABI_CALL(0x00073180u, sub_00073180); /* call 0x00073180 */

loc_0007A893: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A8AB; /* je: equal / zero */

loc_0007A897: ;
    edx = MEM32(esi + 0xD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007A8A0u); RECOMP_ABI_CALL(0x000731A0u, sub_000731A0); /* call 0x000731A0 */

loc_0007A8A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007AB78; /* ja: above (unsigned >) */

loc_0007A8AB: ;
    eax = MEM32(esi + 0xD);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 9));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0xA));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007A8C0u); RECOMP_ABI_CALL(0x00073110u, sub_00073110); /* call 0x00073110 */

loc_0007A8C0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A8CB: ;
    PUSH32(esp, 0x0007A8D0u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007A8D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007A8D8: ;
    edx = MEM32(esi + 1);
    edi = MEM32(esi + 5);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x914718;

loc_0007A8E5: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A8F2; /* jne: not equal / not zero */

loc_0007A8EB: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A906; /* je: equal / zero */

loc_0007A8F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A8E5; /* jb: below (unsigned <) */

loc_0007A8FB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A906: ;
    ecx = MEM32(esi + 0xD);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM32(eax + 0x914720) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A91D: ;
    PUSH32(esp, 0x0007A922u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007A922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007A92A: ;
    edx = MEM32(esi + 1);
    edi = MEM32(esi + 5);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x902DE8;

loc_0007A937: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A944; /* jne: not equal / not zero */

loc_0007A93D: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007A958; /* je: equal / zero */

loc_0007A944: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007A937; /* jb: below (unsigned <) */

loc_0007A94D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A958: ;
    edx = MEM32(esi + 0xD);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM32(eax + 0x902DF0) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A96F: ;
    edi = MEM32(esp + 0x360);
    ecx = MEM32(0x912A40);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A988: ;
    edx = MEM32(esi + 5);
    eax = MEM32(esi + 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007A995u); RECOMP_ABI_CALL(0x00076940u, sub_00076940); /* call 0x00076940 */

loc_0007A995: ;
    edx = MEM32(0x912990);
    ecx = MEM32(0x91298C);
    eax = MEM32(0x912964);
    MEM32(esp + 0x1D) = edx;
    MEM32(esp + 0x19) = ecx;
    ecx = MEM32(esi + 0xD);
    edx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM8(esp + 0x20) = 0x14;
    MEM32(esp + 0x29) = eax;
    MEM32(esp + 0x2D) = ecx;
    PUSH32(esp, 0x0007A9C9u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_0007A9C9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007A9D7: ;
    eax = MEM32(esi + 0xD);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902DD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902DD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AB78; /* jne: not equal / not zero */

loc_0007A9E6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(0x902DD8) = 0;
    ecx = MEM32(esi + 9);
    POP32(esp, ebx);
    MEM32(0x902DD4) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AA01: ;
    edx = MEM32(esp + 0x360);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007AA0Eu); RECOMP_ABI_CALL(0x00075840u, sub_00075840); /* call 0x00075840 */

loc_0007AA0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007AA11: ;
    eax = MEM32(0x90315C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007AA20: ;
    edi = 0x902E68;

loc_0007AA25: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 1) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AA45; /* jne: not equal / not zero */

loc_0007AA2D: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 5) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AA45; /* jne: not equal / not zero */

loc_0007AA35: ;
    ecx = MEM32(esi + 9);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007AA45u); RECOMP_ABI_CALL(0x0007C520u, sub_0007C520); /* call 0x0007C520 */

loc_0007AA45: ;
    eax = MEM32(0x90315C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007AA25; /* jb: below (unsigned <) */

loc_0007AA52: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AA5D: ;
    eax = MEM32(esi + 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007AA66u); RECOMP_ABI_CALL(0x0007E980u, sub_0007E980); /* call 0x0007E980 */

loc_0007AA66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AA74: ;
    edx = MEM32(0x91298C);
    eax = MEM32(0x912990);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x11) = ecx;
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 0x19) = ecx;
    MEM32(esp + 0x1D) = ecx;
    MEM32(esp + 0x21) = ecx;
    MEM32(esp + 0x25) = ecx;
    MEM8(esp + 0x10) = 0x17;
    MEM32(esp + 0x11) = edx;
    MEM32(esp + 0x15) = eax;
    PUSH32(esp, 0x0007AAABu); RECOMP_ABI_CALL(0x00081270u, sub_00081270); /* call 0x00081270 */

loc_0007AAAB: ;
    ecx = MEM32(esp + 0x360);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x21) = eax;
    PUSH32(esp, 0x0007AAC1u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_0007AAC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AACF: ;
    ecx = MEM32(0x90315C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AB78; /* jbe: below or equal (unsigned <=) */

loc_0007AADD: ;
    eax = 0x902EC5;

loc_0007AAE2: ;
    edx = MEM32(eax + -57);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 1)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 1) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AAF7; /* jne: not equal / not zero */

loc_0007AAEA: ;
    edx = MEM32(eax + -53);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 5)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 5) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AAF7; /* jne: not equal / not zero */

loc_0007AAF2: ;
    SET_LO8(edx, MEM8(esi + 9));
    MEM8(eax) = LO8(edx);

loc_0007AAF7: ;
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007AAE2; /* jne: not equal / not zero */

loc_0007AAFD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AB08: ;
    eax = MEM32(esi + 5);
    ecx = MEM32(esi + 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007AB1Au); RECOMP_ABI_CALL(0x0007EA20u, sub_0007EA20); /* call 0x0007EA20 */

loc_0007AB1A: ;
    eax = MEM32(esp + 0x36C);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007AB2Cu); RECOMP_ABI_CALL(0x0007EAF0u, sub_0007EAF0); /* call 0x0007EAF0 */

loc_0007AB2C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AB3A: ;
    eax = ZX8(MEM8(0x914444));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AB78; /* je: equal / zero */

loc_0007AB46: ;
    edx = MEM32(esp + 0x360);
    MEM32(esp + 0x19) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0x1C;
    PUSH32(esp, 0x0007AB61u); RECOMP_ABI_CALL(0x0007CFF0u, sub_0007CFF0); /* call 0x0007CFF0 */

loc_0007AB61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007AB6F: ;
    SET_LO8(ecx, MEM8(esi + 9));
    MEM8(0x914444) = LO8(ecx);

loc_0007AB78: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0007AB7B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007AC00
 * Original: 0x0007AC00 - 0x0007AC55 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007AC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007AC00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC0D; /* jne: not equal / not zero */

loc_0007AC09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007AC0D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0007AC14u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0007AC14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AC2D; /* je: equal / zero */

loc_0007AC1B: ;
    ecx = MEM32(esp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0007AC29u); RECOMP_ABI_CALL(0x00070E40u, sub_00070E40); /* call 0x00070E40 */

loc_0007AC29: ;
    esi = eax;
    goto loc_0007AC2F;

loc_0007AC2D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007AC2F: ;
    ecx = esi;
    MEM32(esi) = 1;
    PUSH32(esp, 0x0007AC3Cu); RECOMP_ABI_CALL(0x00070F60u, sub_00070F60); /* call 0x00070F60 */

loc_0007AC3C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0007AC48u); RECOMP_ABI_CALL(0x00076C00u, sub_00076C00); /* call 0x00076C00 */

loc_0007AC48: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007AC4Eu); RECOMP_ABI_CALL(0x00080A50u, sub_00080A50); /* call 0x00080A50 */

loc_0007AC4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007AC60
 * Original: 0x0007AC60 - 0x0007ACE0 (128 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007AC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007AC60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = edi;
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0007AC9F; /* je: equal / zero */

loc_0007AC70: ;
    PUSH32(esp, 0x0007AC75u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007AC75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9F; /* jne: not equal / not zero */

loc_0007AC7A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902EEA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902EEA) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9F; /* jne: not equal / not zero */

loc_0007AC85: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902EEE)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x902EEE) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9F; /* jne: not equal / not zero */

loc_0007AC90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi * 4 + 0x2E641C); PUSH32(esp, 0x0007AC98u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0007AC91u); } /* indirect call */
    }

loc_0007AC98: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007AC9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007AC9F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9B; /* jne: not equal / not zero */

loc_0007ACA3: ;
    PUSH32(esp, 0x0007ACA8u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007ACA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9B; /* jne: not equal / not zero */

loc_0007ACAC: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9B; /* jne: not equal / not zero */

loc_0007ACB7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9B; /* jne: not equal / not zero */

loc_0007ACC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi * 4 + 0x2E641C); PUSH32(esp, 0x0007ACCAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0007ACC3u); } /* indirect call */
    }

loc_0007ACCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AC9B; /* jne: not equal / not zero */

loc_0007ACD1: ;
    ecx = MEM32(esi);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00076CD0(); return; /* tail jmp 0x00076CD0 */

}

/**
 * sub_0007ACE0
 * Original: 0x0007ACE0 - 0x0007AE5C (380 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007ACE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007ACE0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0007ACECu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007ACEC: ;
    ecx = MEM32(0x912990);
    edx = MEM32(esi + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x91298C);
    MEM32(esp + 0x11) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x21) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x15) = ecx;
    ecx = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x10) = 4;
    MEM32(esp + 0x1D) = edx;
    MEM32(esp + 0x25) = ecx;
    MEM32(esp + 8) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_0007AE3B; /* jbe: below or equal (unsigned <=) */

loc_0007AD31: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = esi + 0x10;
    ebp = esi + 0x30;
    /* nop */

loc_0007AD40: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007ADAF; /* je: equal / zero */

loc_0007AD46: ;
    ecx = MEM32(esi + 4);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4E20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007ADBE; /* ja: above (unsigned >) */

loc_0007AD55: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007ADA7; /* jbe: below or equal (unsigned <=) */

loc_0007AD63: ;
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007AD70u); RECOMP_ABI_CALL(0x00071540u, sub_00071540); /* call 0x00071540 */

loc_0007AD70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007ADA1; /* je: equal / zero */

loc_0007AD78: ;
    ecx = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx * 4 + 0x2E6430);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x21) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(ebx) = ecx;
    PUSH32(esp, 0x0007AD9Cu); RECOMP_ABI_CALL(0x00080060u, sub_00080060); /* call 0x00080060 */

loc_0007AD9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007ADA7;

loc_0007ADA1: ;
    MEM32(ebx) = 0;

loc_0007ADA7: ;
    MEM32(esp + 0x10) = 0;

loc_0007ADAF: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007AD40; /* jb: below (unsigned <) */

loc_0007ADBC: ;
    goto loc_0007AE39;

loc_0007ADBE: ;
    ecx = MEM32(0x90315C);
    ebx = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007ADEB; /* jbe: below or equal (unsigned <=) */

loc_0007ADCD: ;
    eax = 0x902EEA;

loc_0007ADD2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + edi * 8 + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007ADE3; /* jne: not equal / not zero */

loc_0007ADDA: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + edi * 8 + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007ADEB; /* je: equal / zero */

loc_0007ADE3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007ADD2; /* jb: below (unsigned <) */

loc_0007ADEB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AE31; /* je: equal / zero */

loc_0007ADEF: ;
    PUSH32(esp, 0x0007ADF4u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007ADF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AE08; /* je: equal / zero */

loc_0007ADF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0007ADFEu); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_0007ADFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007AE06u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007AE06: ;
    goto loc_0007AE31;

loc_0007AE08: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    SET_LO8(ecx, MEM8(eax + 0x902EC4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0007AE31; /* jns: not sign (positive) */

loc_0007AE17: ;
    ecx = ebx;
    PUSH32(esp, 0x0007AE1Eu); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007AE1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AE31; /* je: equal / zero */

loc_0007AE22: ;
    PUSH32(esp, 0x0007AE27u); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007AE27: ;
    PUSH32(esp, 0x0007AE2Cu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007AE2C: ;
    PUSH32(esp, 0x0007AE31u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007AE31: ;
    MEM32(esi + edi * 4 + 0x10) = 0;

loc_0007AE39: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0007AE3B: ;
    _fa = (uint32_t)(MEM8(0x903CD4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x903CD4), 8 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0007AE55; /* je: equal / zero */

loc_0007AE46: ;
    PUSH32(esp, 0x0007AE4Bu); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007AE4B: ;
    PUSH32(esp, 0x0007AE50u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007AE50: ;
    PUSH32(esp, 0x0007AE55u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007AE55: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007AE60
 * Original: 0x0007AE60 - 0x0007AF09 (169 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007AE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007AE60: ;
    PUSH32(esp, 0x0007AE65u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007AE65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AEB5; /* jne: not equal / not zero */

loc_0007AE69: ;
    PUSH32(esp, 0x0007AE6Eu); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_0007AE6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AEB5; /* jne: not equal / not zero */

loc_0007AE72: ;
    eax = MEM32(0x90315C);
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007AEB4; /* jbe: below or equal (unsigned <=) */

loc_0007AE81: ;
    PUSH32(esp, edi);
    edi = 0x902F22;

loc_0007AE87: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0007AEA6; /* jns: not sign (positive) */

loc_0007AE8C: ;
    ecx = esi;
    PUSH32(esp, 0x0007AE93u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007AE93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AEA6; /* je: equal / zero */

loc_0007AE97: ;
    PUSH32(esp, 0x0007AE9Cu); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007AE9C: ;
    PUSH32(esp, 0x0007AEA1u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007AEA1: ;
    PUSH32(esp, 0x0007AEA6u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007AEA6: ;
    eax = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007AE87; /* jb: below (unsigned <) */

loc_0007AEB3: ;
    POP32(esp, edi);

loc_0007AEB4: ;
    POP32(esp, esi);

loc_0007AEB5: ;
    ecx = MEM32(0x9147A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AECE; /* je: equal / zero */

loc_0007AEBF: ;
    PUSH32(esp, 0x0007AEC4u); RECOMP_ABI_CALL(0x00076D60u, sub_00076D60); /* call 0x00076D60 */

loc_0007AEC4: ;
    MEM32(0x9147A4) = 0;

loc_0007AECE: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0007AED5u); RECOMP_ABI_CALL(0x00150A4Cu, sub_00150A4C); /* call 0x00150A4C */

loc_0007AED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AEF5; /* je: equal / zero */

loc_0007AEDC: ;
    ecx = eax;
    PUSH32(esp, 0x0007AEE3u); RECOMP_ABI_CALL(0x000719E0u, sub_000719E0); /* call 0x000719E0 */

loc_0007AEE3: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x9147A4) = eax;
    PUSH32(esp, 0x0007AEF4u); RECOMP_ABI_CALL(0x00071A70u, sub_00071A70); /* call 0x00071A70 */

loc_0007AEF4: ;
    esp += 4; return; /* ret */

loc_0007AEF5: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x9147A4) = eax;
    PUSH32(esp, 0x0007AF08u); RECOMP_ABI_CALL(0x00071A70u, sub_00071A70); /* call 0x00071A70 */

loc_0007AF08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007AF10
 * Original: 0x0007AF10 - 0x0007AF51 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007AF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007AF10: ;
    PUSH32(esp, esi);
    esi = 1;
    PUSH32(esp, 0x0007AF1Bu); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_0007AF1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AF23; /* je: equal / zero */

loc_0007AF1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007AF23: ;
    ecx = MEM32(0x9147A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AF4D; /* je: equal / zero */

loc_0007AF2D: ;
    PUSH32(esp, 0x0007AF32u); RECOMP_ABI_CALL(0x0007ACE0u, sub_0007ACE0); /* call 0x0007ACE0 */

loc_0007AF32: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AF4D; /* je: equal / zero */

loc_0007AF38: ;
    ecx = MEM32(0x9147A4);
    PUSH32(esp, 0x0007AF43u); RECOMP_ABI_CALL(0x00076D60u, sub_00076D60); /* call 0x00076D60 */

loc_0007AF43: ;
    MEM32(0x9147A4) = 0;

loc_0007AF4D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007AF60
 * Original: 0x0007AF60 - 0x0007AFEB (139 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007AF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007AF60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007AF69u); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_0007AF69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AF72; /* je: equal / zero */

loc_0007AF6D: ;
    edi = 1;

loc_0007AF72: ;
    PUSH32(esp, 0x0007AF77u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007AF77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = MEM32(0x9147A0);
    if (TEST_Z(_fa, _fb)) goto loc_0007AFA0; /* je: equal / zero */

loc_0007AF81: ;
    PUSH32(esp, 0x0007AF86u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007AF86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AFA0; /* jne: not equal / not zero */

loc_0007AF8A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AF93; /* je: equal / zero */

loc_0007AF8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AFA0; /* jne: not equal / not zero */

loc_0007AF93: ;
    esi = 1;
    MEM32(0x9147A0) = esi;
    goto loc_0007AFC0;

loc_0007AFA0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AFC0; /* jne: not equal / not zero */

loc_0007AFA4: ;
    PUSH32(esp, 0x0007AFA9u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007AFA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AFBA; /* je: equal / zero */

loc_0007AFAD: ;
    esi = 4;
    MEM32(0x9147A0) = esi;
    goto loc_0007AFC0;

loc_0007AFBA: ;
    esi = MEM32(0x9147A0);

loc_0007AFC0: ;
    PUSH32(esp, 0x0007AFC5u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007AFC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007AFE6; /* je: equal / zero */

loc_0007AFC9: ;
    edi = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007AFD7; /* je: equal / zero */

loc_0007AFD2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007AFE6; /* jne: not equal / not zero */

loc_0007AFD7: ;
    PUSH32(esp, 0x0007AFDCu); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007AFDC: ;
    PUSH32(esp, 0x0007AFE1u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007AFE1: ;
    PUSH32(esp, 0x0007AFE6u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007AFE6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007AFF0
 * Original: 0x0007AFF0 - 0x0007B12C (316 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007AFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007AFF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = ebp;
    PUSH32(esp, 0x0007AFFDu); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007AFFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0007B006; /* jns: not sign (positive) */

loc_0007B001: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007B006: ;
    _fa = (uint32_t)(MEM32(0x9147A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9147A0), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B021; /* jne: not equal / not zero */

loc_0007B00E: ;
    PUSH32(esp, 0x0007B013u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007B013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B021; /* je: equal / zero */

loc_0007B017: ;
    MEM32(0x9147A0) = 4;

loc_0007B021: ;
    PUSH32(esp, 0x0007B026u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007B026: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B125; /* je: equal / zero */

loc_0007B02E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esi = 1;
    PUSH32(esp, 0x0007B03Au); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007B03A: ;
    ecx = MEM32(0x902E8C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B05D; /* jne: not equal / not zero */

loc_0007B047: ;
    eax = MEM32(0x902E90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B05D; /* jne: not equal / not zero */

loc_0007B050: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007B057u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007B057: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B05D; /* jne: not equal / not zero */

loc_0007B05B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007B05D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007B064u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007B064: ;
    ecx = MEM32(0x902EEA);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B08C; /* jne: not equal / not zero */

loc_0007B071: ;
    eax = MEM32(0x902EEE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B08C; /* jne: not equal / not zero */

loc_0007B07A: ;
    ecx = 1;
    PUSH32(esp, 0x0007B084u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007B084: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B124; /* je: equal / zero */

loc_0007B08C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B124; /* je: equal / zero */

loc_0007B094: ;
    _fa = (uint32_t)(MEM32(0x90315C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90315C), ebp (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0007B0E4; /* jbe: below or equal (unsigned <=) */

loc_0007B09E: ;
    edi = 0x902E8C;

loc_0007B0A3: ;
    esi = MEM32(edi);
    ebx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007B0AFu); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007B0AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B0BA; /* jne: not equal / not zero */

loc_0007B0B6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B0CC; /* je: equal / zero */

loc_0007B0BA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007B0C1u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007B0C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B0D7; /* jne: not equal / not zero */

loc_0007B0C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B0D7; /* jne: not equal / not zero */

loc_0007B0CC: ;
    ecx = ebp;
    PUSH32(esp, 0x0007B0D3u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007B0D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B122; /* je: equal / zero */

loc_0007B0D7: ;
    eax = MEM32(0x90315C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B0A3; /* jb: below (unsigned <) */

loc_0007B0E4: ;
    PUSH32(esp, 0x0007B0E9u); RECOMP_ABI_CALL(0x00070C10u, sub_00070C10); /* call 0x00070C10 */

loc_0007B0E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B0F8; /* jne: not equal / not zero */

loc_0007B0EE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007B0F8: ;
    PUSH32(esp, 0x0007B0FDu); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_0007B0FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B122; /* jne: not equal / not zero */

loc_0007B101: ;
    PUSH32(esp, 0x0007B106u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007B106: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B122; /* je: equal / zero */

loc_0007B10A: ;
    PUSH32(esp, 0x0007B10Fu); RECOMP_ABI_CALL(0x000703A0u, sub_000703A0); /* call 0x000703A0 */

loc_0007B10F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B122; /* je: equal / zero */

loc_0007B113: ;
    PUSH32(esp, 0x0007B118u); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007B118: ;
    PUSH32(esp, 0x0007B11Du); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B11D: ;
    PUSH32(esp, 0x0007B122u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007B122: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0007B124: ;
    POP32(esp, esi);

loc_0007B125: ;
    eax = MEM32(esp + 4);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007B130
 * Original: 0x0007B130 - 0x0007B3FD (717 bytes, 173 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007B130: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007B13Au); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_0007B13A: ;
    esi = eax;
    eax = MEM32(0x2E6510);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007B2D8; /* je: equal / zero */

loc_0007B153: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007B2D8; /* ja: above (unsigned >) */

loc_0007B15C: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x7B400); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0007B163u) goto loc_0007B163;
    if (_jt == 0x0007B1EFu) goto loc_0007B1EF;
    if (_jt == 0x0007B2BAu) goto loc_0007B2BA;
    if (_jt == 0x0007B2D8u) goto loc_0007B2D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007B163: ;
    SET_LO8(eax, MEM8(0x9131E7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B217; /* je: equal / zero */

loc_0007B170: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B1A8; /* jne: not equal / not zero */

loc_0007B174: ;
    ecx = 0x914380;
    PUSH32(esp, 0x0007B17Eu); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007B17E: ;
    MEM32(0x902DA8) = eax;
    MEM32(0x902DAC) = edx;
    PUSH32(esp, 0x0007B18Eu); RECOMP_ABI_CALL(0x00073A80u, sub_00073A80); /* call 0x00073A80 */

loc_0007B18E: ;
    MEM32(0x902DB0) = eax;
    eax = MEM32(0x914384);
    MEM32(0x902DB4) = edx;
    MEM32(0x902DBC) = eax;
    goto loc_0007B2D8;

loc_0007B1A8: ;
    edx = MEM32(0x902E90);
    ecx = MEM32(0x902E8C);
    eax = MEM32(0x902EEA);
    MEM32(0x902DAC) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x902EC4));
    MEM32(0x902DA8) = ecx;
    ecx = MEM32(0x902EEE);
    MEM32(0x902DB0) = eax;
    MEM32(0x902DB4) = ecx;
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x902DBC) = edx;
    goto loc_0007B2D8;

loc_0007B1EF: ;
    PUSH32(esp, 0x0007B1F4u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007B1F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B2D8; /* jne: not equal / not zero */

loc_0007B1FD: ;
    eax = MEM32(0x902DA8);
    eax = eax | MEM32(0x902DAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0007B2D8; /* jne: not equal / not zero */

loc_0007B20E: ;
    SET_LO8(eax, MEM8(0x9131E7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B241; /* jne: not equal / not zero */

loc_0007B217: ;
    ecx = 0x913218;
    PUSH32(esp, 0x0007B221u); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_0007B221: ;
    MEM32(0x902DA8) = eax;
    MEM32(0x902DAC) = edx;
    PUSH32(esp, 0x0007B231u); RECOMP_ABI_CALL(0x000736B0u, sub_000736B0); /* call 0x000736B0 */

loc_0007B231: ;
    MEM32(0x902DB0) = eax;
    MEM32(0x902DB4) = edx;
    goto loc_0007B2D2;

loc_0007B241: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B278; /* jne: not equal / not zero */

loc_0007B245: ;
    ecx = 0x914380;
    PUSH32(esp, 0x0007B24Fu); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007B24F: ;
    MEM32(0x902DA8) = eax;
    MEM32(0x902DAC) = edx;
    PUSH32(esp, 0x0007B25Fu); RECOMP_ABI_CALL(0x00073A80u, sub_00073A80); /* call 0x00073A80 */

loc_0007B25F: ;
    ecx = MEM32(0x914384);
    MEM32(0x902DB0) = eax;
    MEM32(0x902DB4) = edx;
    MEM32(0x902DBC) = ecx;
    goto loc_0007B2D8;

loc_0007B278: ;
    eax = MEM32(0x902E90);
    edx = MEM32(0x902E8C);
    ecx = MEM32(0x902EEA);
    MEM32(0x902DAC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x902EC4));
    MEM32(0x902DA8) = edx;
    edx = MEM32(0x902EEE);
    MEM32(0x902DB0) = ecx;
    MEM32(0x902DB4) = edx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x902DBC) = eax;
    goto loc_0007B2D8;

loc_0007B2BA: ;
    MEM32(0x902DB0) = ebx;
    MEM32(0x902DB4) = ebx;
    MEM32(0x902DA8) = ebx;
    MEM32(0x902DAC) = ebx;

loc_0007B2D2: ;
    MEM32(0x902DBC) = ebx;

loc_0007B2D8: ;
    PUSH32(esp, 0x0007B2DDu); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0007B2DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B2EA; /* jne: not equal / not zero */

loc_0007B2E2: ;
    MEM32(esp + 8) = 0x80000000u;

loc_0007B2EA: ;
    PUSH32(esp, 0x0007B2EFu); RECOMP_ABI_CALL(0x0007CAB0u, sub_0007CAB0); /* call 0x0007CAB0 */

loc_0007B2EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B2F9; /* jne: not equal / not zero */

loc_0007B2F4: ;
    MEM32(esp + 8) = MEM32(esp + 8) | 4;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007B2F9: ;
    ecx = MEM32(0x902DA8);
    ecx = ecx | MEM32(0x902DAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0007B31E; /* je: equal / zero */

loc_0007B307: ;
    PUSH32(esp, 0x0007B30Cu); RECOMP_ABI_CALL(0x00073480u, sub_00073480); /* call 0x00073480 */

loc_0007B30C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B319; /* jne: not equal / not zero */

loc_0007B310: ;
    PUSH32(esp, 0x0007B315u); RECOMP_ABI_CALL(0x00073410u, sub_00073410); /* call 0x00073410 */

loc_0007B315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B31E; /* je: equal / zero */

loc_0007B319: ;
    MEM32(esp + 8) = MEM32(esp + 8) | 1;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007B31E: ;
    PUSH32(esp, 0x0007B323u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007B323: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B3E7; /* jne: not equal / not zero */

loc_0007B32B: ;
    PUSH32(esp, 0x0007B330u); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_0007B330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B3E7; /* jne: not equal / not zero */

loc_0007B338: ;
    PUSH32(esp, edi);
    edi = MEM32(0x90315C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007B3E6; /* jbe: below or equal (unsigned <=) */

loc_0007B349: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x912A40);
    ebx = 0x902EC4;

loc_0007B355: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0007B3B4; /* js: sign (negative) */

loc_0007B35A: ;
    esi = ecx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B3A5; /* jne: not equal / not zero */

loc_0007B361: ;
    _fa = (uint32_t)(MEM32(0x9031B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B37A; /* je: equal / zero */

loc_0007B36A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x4B0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007B37A; /* ja: above (unsigned >) */

loc_0007B373: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B3A0; /* je: equal / zero */

loc_0007B37A: ;
    PUSH32(esp, 0x0007B37Fu); RECOMP_ABI_CALL(0x000703A0u, sub_000703A0); /* call 0x000703A0 */

loc_0007B37F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B3A0; /* je: equal / zero */

loc_0007B383: ;
    PUSH32(esp, 0x0007B388u); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007B388: ;
    PUSH32(esp, 0x0007B38Du); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B38D: ;
    PUSH32(esp, 0x0007B392u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007B392: ;
    edi = MEM32(0x90315C);
    ebp = MEM32(0x912A40);
    goto loc_0007B3A5;

loc_0007B3A0: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 8;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007B3A5: ;
    ecx = esi;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B355; /* jb: below (unsigned <) */

loc_0007B3B2: ;
    goto loc_0007B3E5;

loc_0007B3B4: ;
    PUSH32(esp, 0x0007B3B9u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007B3B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B3E5; /* je: equal / zero */

loc_0007B3BD: ;
    _fa = (uint32_t)(MEM32(0x9031B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B3E0; /* jne: not equal / not zero */

loc_0007B3C6: ;
    PUSH32(esp, 0x0007B3CBu); RECOMP_ABI_CALL(0x000703A0u, sub_000703A0); /* call 0x000703A0 */

loc_0007B3CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B3E0; /* je: equal / zero */

loc_0007B3CF: ;
    PUSH32(esp, 0x0007B3D4u); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007B3D4: ;
    PUSH32(esp, 0x0007B3D9u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B3D9: ;
    PUSH32(esp, 0x0007B3DEu); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007B3DE: ;
    goto loc_0007B3E5;

loc_0007B3E0: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 8;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0007B3E5: ;
    POP32(esp, ebp);

loc_0007B3E6: ;
    POP32(esp, edi);

loc_0007B3E7: ;
    edx = MEM32(esp + 8);
    MEM32(0x2E6510) = esi;
    POP32(esp, esi);
    MEM32(0x903CD4) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007B420
 * Original: 0x0007B420 - 0x0007B54E (302 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007B420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x913220) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007B4AA; /* je: equal / zero */

loc_0007B432: ;
    eax = ZX8(MEM8(esi));
    MEM32(0x913218) = eax;
    ecx = ZX8(MEM8(esi));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x91321C) = ecx;
    edx = MEM32(esi + 1);
    MEM32(0x913224) = edx;
    SET_LO8(eax, MEM8(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007B485; /* jbe: below or equal (unsigned <=) */

loc_0007B455: ;
    eax = 0x913230;
    ecx = esi + 5;
    PUSH32(esp, edi);
    edi = edi;

loc_0007B460: ;
    edi = MEM32(ecx);
    MEM32(eax + -8) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + -4) = edi;
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = LO8(ebx);
    edi = ZX8(MEM8(esi));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B460; /* jb: below (unsigned <) */

loc_0007B47F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0007B4D6; /* jae: above or equal (unsigned >=) */

loc_0007B485: ;
    eax = edx + edx * 4;
    ecx = 8;
    eax = eax * 2 + 0x913230;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0007B496: ;
    MEM32(eax + -8) = ebx;
    MEM32(eax + -4) = ebx;
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = LO8(ebx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007B496; /* jne: not equal / not zero */

loc_0007B4A8: ;
    goto loc_0007B4D6;

loc_0007B4AA: ;
    eax = MEM32(0x90315C);
    MEM32(0x913218) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x91321C) = eax;
    MEM32(0x913224) = ebx;

loc_0007B4C0: ;
    PUSH32(esp, 0x0007B4C5u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007B4C5: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x913224) = eax;
    if ((_fa == 0)) goto loc_0007B4C0; /* je: equal / zero */

loc_0007B4D1: ;
    PUSH32(esp, 0x0007B4D6u); RECOMP_ABI_CALL(0x00073570u, sub_00073570); /* call 0x00073570 */

loc_0007B4D6: ;
    ecx = MEM32(0x91321C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007B52D; /* jbe: below or equal (unsigned <=) */

loc_0007B4E2: ;
    ecx = 0x913279;
    goto loc_0007B4F0;

    /* nop */

loc_0007B4F0: ;
    edx = MEM32(0x913218);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(edx * 2 + 0x2E6518));
    MEM8(ecx + -1) = LO8(edx);
    edx = MEM32(0x913218);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(edx * 2 + 0x2E6519));
    MEM8(ecx) = LO8(edx);
    edx = MEM32(0x91321C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B4F0; /* jb: below (unsigned <) */

loc_0007B52D: ;
    PUSH32(esp, ebx);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007B538u); RECOMP_ABI_CALL(0x0007C500u, sub_0007C500); /* call 0x0007C500 */

loc_0007B538: ;
    PUSH32(esp, 0x0007B53Du); RECOMP_ABI_CALL(0x000766B0u, sub_000766B0); /* call 0x000766B0 */

loc_0007B53D: ;
    PUSH32(esp, 0x0007B542u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007B542: ;
    PUSH32(esp, 0x0007B547u); RECOMP_ABI_CALL(0x00073700u, sub_00073700); /* call 0x00073700 */

loc_0007B547: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0007D120(); return; /* tail jmp 0x0007D120 */

}

/**
 * sub_0007B550
 * Original: 0x0007B550 - 0x0007B72D (477 bytes, 133 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007B550: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0007B558u); RECOMP_ABI_CALL(0x00072EC0u, sub_00072EC0); /* call 0x00072EC0 */

loc_0007B558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B561; /* je: equal / zero */

loc_0007B55C: ;
    PUSH32(esp, 0x0007B561u); RECOMP_ABI_CALL(0x00072EA0u, sub_00072EA0); /* call 0x00072EA0 */

loc_0007B561: ;
    eax = MEM32(0x90315C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x914380) = eax;
    MEM32(0x914388) = esi;
    MEM32(0x91438C) = esi;
    SET_LO8(ebx, 0xFF);
    if (CMP_BE(_fa, _fb)) goto loc_0007B5FF; /* jbe: below or equal (unsigned <=) */

loc_0007B583: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    edi = MEM32(eax + 0x902E8C);
    ebp = MEM32(eax + 0x902E90);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 0x9031D0;
    PUSH32(esp, 0x0007B5A0u); RECOMP_ABI_CALL(0x00072E60u, sub_00072E60); /* call 0x00072E60 */

loc_0007B5A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ecx * 4 + 0x914388);
    if (CMP_NE(_fa, _fb)) goto loc_0007B5B4; /* jne: not equal / not zero */

loc_0007B5AE: ;
    MEM32(0x914384) = ecx;

loc_0007B5B4: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x91439C) = edi;
    MEM32(eax + 0x9143A0) = ebp;
    MEM8(eax + 0x9143A4) = LO8(ebx);
    MEM8(eax + 0x9143A5) = 0;
    MEM8(eax + 0x9143A6) = LO8(ebx);
    MEM8(eax + 0x9143A7) = LO8(ebx);
    edx = MEM32(ecx * 4 + 0x914388);
    eax = MEM32(0x90315C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ecx * 4 + 0x914388) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0007B583; /* jb: below (unsigned <) */

loc_0007B5FF: ;
    ecx = MEM32(0x914388);
    edx = MEM32(0x91438C);
    ebp = 0x91439C;
    MEM32(0x914390) = ecx;
    MEM32(0x914394) = edx;
    MEM8(0x914444) = LO8(ebx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = ebp;
    edi = 0x914388;

loc_0007B633: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B6D7; /* jb: below (unsigned <) */

loc_0007B63E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007B67C; /* jbe: below or equal (unsigned <=) */

loc_0007B644: ;
    esi = 0x903310;
    /* nop */

loc_0007B650: ;
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    MEM32(esi + -8) = eax;
    MEM32(esi + -4) = ecx;
    MEM32(esi) = 0;

loc_0007B662: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007B66Au); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_0007B66A: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B662; /* je: equal / zero */

loc_0007B66F: ;
    eax = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B650; /* jb: below (unsigned <) */

loc_0007B67C: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x914384)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x914384) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B692; /* jne: not equal / not zero */

loc_0007B688: ;
    MEM32(0x903310) = 0;

loc_0007B692: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x73B20);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x903308);
    PUSH32(esp, 0x0007B6A6u); RECOMP_ABI_CALL(0x00151B90u, sub_00151B90); /* call 0x00151B90 */

loc_0007B6A6: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007B6D7; /* jbe: below or equal (unsigned <=) */

loc_0007B6B1: ;
    eax = MEM32(esp + 0x14);
    ecx = 0x903308;
    /* nop */

loc_0007B6C0: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007B6C0; /* jb: below (unsigned <) */

loc_0007B6D7: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0007B633; /* jb: below (unsigned <) */

loc_0007B6F7: ;
    PUSH32(esp, 0x0007B6FCu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007B6FC: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x914398) = eax;
    PUSH32(esp, 0x0007B70Bu); RECOMP_ABI_CALL(0x00076800u, sub_00076800); /* call 0x00076800 */

loc_0007B70B: ;
    PUSH32(esp, 0);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007B717u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007B717: ;
    PUSH32(esp, 0x0007B71Cu); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007B71C: ;
    PUSH32(esp, 0x0007B721u); RECOMP_ABI_CALL(0x00073CF0u, sub_00073CF0); /* call 0x00073CF0 */

loc_0007B721: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0007D120(); return; /* tail jmp 0x0007D120 */

}

/**
 * sub_0007B730
 * Original: 0x0007B730 - 0x0007B754 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007B730: ;
    PUSH32(esp, 0x0007B735u); RECOMP_ABI_CALL(0x00078800u, sub_00078800); /* call 0x00078800 */

loc_0007B735: ;
    PUSH32(esp, 0x0007B73Au); RECOMP_ABI_CALL(0x0007DC50u, sub_0007DC50); /* call 0x0007DC50 */

loc_0007B73A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B740u); RECOMP_ABI_CALL(0x0007D3A0u, sub_0007D3A0); /* call 0x0007D3A0 */

loc_0007B740: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B74Bu); RECOMP_ABI_CALL(0x0007AC00u, sub_0007AC00); /* call 0x0007AC00 */

loc_0007B74B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912D90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0007B760
 * Original: 0x0007B760 - 0x0007B7CD (109 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007B760: ;
    eax = ZX8(MEM8(0x9131B8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0007B80C(); return; } /* ja: above (unsigned >) */

loc_0007B770: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x7B814)); return; /* indirect tail jmp */

    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x0007B77Eu); RECOMP_ABI_CALL(0x0007B730u, sub_0007B730); /* call 0x0007B730 */

loc_0007B77E: ;
    MEM8(0x9131B8) = 1;
    SET_LO8(eax, MEM8(0x9131B8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    MEM8(0x9131B8) = 3;
    SET_LO8(eax, MEM8(0x9131B8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0007B7CD(); return; /* fallthrough 0x0007B7CD */

}

/**
 * sub_0007B777
 * Original: 0x0007B777 - 0x0007B78E (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B777(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007B777: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x0007B77Eu); RECOMP_ABI_CALL(0x0007B730u, sub_0007B730); /* call 0x0007B730 */

loc_0007B77E: ;
    MEM8(0x9131B8) = 1;
    SET_LO8(eax, MEM8(0x9131B8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007B78E
 * Original: 0x0007B78E - 0x0007B7A5 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B78E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007B78E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0007B795u); RECOMP_ABI_CALL(0x00078860u, sub_00078860); /* call 0x00078860 */

loc_0007B795: ;
    MEM8(0x9131B8) = 3;
    SET_LO8(eax, MEM8(0x9131B8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007B7A5
 * Original: 0x0007B7A5 - 0x0007B7B0 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B7A5(void)
{

loc_0007B7A5: ;
    PUSH32(esp, 0x0007B7AAu); RECOMP_ABI_CALL(0x00078D10u, sub_00078D10); /* call 0x00078D10 */

loc_0007B7AA: ;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

}

/**
 * sub_0007B7B0
 * Original: 0x0007B7B0 - 0x0007B7BB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B7B0(void)
{

loc_0007B7B0: ;
    PUSH32(esp, 0x0007B7B5u); RECOMP_ABI_CALL(0x00078EC0u, sub_00078EC0); /* call 0x00078EC0 */

loc_0007B7B5: ;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

}

/**
 * sub_0007B7BB
 * Original: 0x0007B7BB - 0x0007B7EA (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B7BB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007B7BB: ;
    eax = MEM32(0x912B3C);
    ecx = MEM32(0x912B28);
    edx = MEM32(0x912B24);
    PUSH32(esp, eax);
    eax = MEM32(0x912B20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B7DAu); RECOMP_ABI_CALL(0x00074DA0u, sub_00074DA0); /* call 0x00074DA0 */

loc_0007B7DA: ;
    MEM8(0x9131B8) = 7;
    SET_LO8(eax, MEM8(0x9131B8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007B7CD
 * Original: 0x0007B7CD - 0x0007B7EA (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B7CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007B7CD: ;
    eax = MEM32(0x912B20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B7DAu); RECOMP_ABI_CALL(0x00074DA0u, sub_00074DA0); /* call 0x00074DA0 */

loc_0007B7DA: ;
    MEM8(0x9131B8) = 7;
    SET_LO8(eax, MEM8(0x9131B8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007B7EA
 * Original: 0x0007B7EA - 0x0007B812 (40 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B7EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007B7EA: ;
    _fa = (uint32_t)(MEM32(0x91E230)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E230), 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B80C; /* je: equal / zero */

loc_0007B7F3: ;
    MEM8(0x9131B8) = 8;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

loc_0007B80C: ;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

}

/**
 * sub_0007B800
 * Original: 0x0007B800 - 0x0007B812 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B800(void)
{

loc_0007B800: ;
    PUSH32(esp, 0x0007B805u); RECOMP_ABI_CALL(0x00078800u, sub_00078800); /* call 0x00078800 */

loc_0007B805: ;
    MEM8(0x9131B8) = 9;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

}

/**
 * sub_0007B80C
 * Original: 0x0007B80C - 0x0007B840 (52 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B80C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007B80C: ;
    SET_LO8(eax, MEM8(0x9131B8));
    esp += 4; return; /* ret */

    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + edi * 4) = MEM8(eax + edi * 4) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + edi * 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 0xC0007B7) = MEM8(esi + 0xC0007B7) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0xC0007B7)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = 0xB7A50007u;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1157625929) = MEM8(eax + -1157625929) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + -1157625929)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ebx, 7);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ebx, 7);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = 0xCCCC0007u;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0007B840
 * Original: 0x0007B840 - 0x0007BBED (941 bytes, 278 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007B840: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007B848u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007B848: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0007B850; /* jns: not sign (positive) */

loc_0007B84C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B850: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007B856u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007B856: ;
    esi = eax;
    esi = esi & 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0007B860u); RECOMP_ABI_CALL(0x0007CC40u, sub_0007CC40); /* call 0x0007CC40 */

loc_0007B860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B8D0; /* jne: not equal / not zero */

loc_0007B864: ;
    eax = MEM32(0x912A40);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B88D; /* je: equal / zero */

loc_0007B870: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B8E8; /* je: equal / zero */

loc_0007B874: ;
    PUSH32(esp, 0x0007B879u); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007B879: ;
    PUSH32(esp, 0x0007B87Eu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B87E: ;
    PUSH32(esp, 0x0007B883u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007B883: ;
    edi = 1;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B88D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007B894u); RECOMP_ABI_CALL(0x00070370u, sub_00070370); /* call 0x00070370 */

loc_0007B894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B8DA; /* je: equal / zero */

loc_0007B898: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B8E8; /* je: equal / zero */

loc_0007B89C: ;
    PUSH32(esp, 0x0007B8A1u); RECOMP_ABI_CALL(0x000703A0u, sub_000703A0); /* call 0x000703A0 */

loc_0007B8A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B8DA; /* je: equal / zero */

loc_0007B8A5: ;
    PUSH32(esp, 0x0007B8AAu); RECOMP_ABI_CALL(0x00079FD0u, sub_00079FD0); /* call 0x00079FD0 */

loc_0007B8AA: ;
    PUSH32(esp, 0x0007B8AFu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B8AF: ;
    PUSH32(esp, 0x0007B8B4u); RECOMP_ABI_CALL(0x0007FE60u, sub_0007FE60); /* call 0x0007FE60 */

loc_0007B8B4: ;
    _fa = (uint32_t)(MEM8(0x9131E7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9131E7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B8D0; /* jne: not equal / not zero */

loc_0007B8BD: ;
    PUSH32(esp, 0x0007B8C2u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007B8C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B8D0; /* jne: not equal / not zero */

loc_0007B8C6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007B8CDu); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_0007B8CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007B8D0: ;
    edi = 1;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B8DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B8E8; /* je: equal / zero */

loc_0007B8DE: ;
    edi = 2;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B8E8: ;
    eax = ZX8(MEM8(0x9131E7));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007BBE8; /* ja: above (unsigned >) */

loc_0007B8F8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x7BBF0); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0007B8FFu) goto loc_0007B8FF;
    if (_jt == 0x0007B91Cu) goto loc_0007B91C;
    if (_jt == 0x0007B95Eu) goto loc_0007B95E;
    if (_jt == 0x0007BAAEu) goto loc_0007BAAE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007B8FF: ;
    PUSH32(esp, 0x0007B904u); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_0007B904: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007B90D: ;
    _fa = (uint32_t)(MEM8(0x902EC4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x902EC4), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007BBE8; /* jne: not equal / not zero */

loc_0007B91A: ;
    goto loc_0007B936;

loc_0007B91C: ;
    _fa = (uint32_t)(MEM8(0x902EC4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x902EC4), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007BBE8; /* jne: not equal / not zero */

loc_0007B929: ;
    PUSH32(esp, 0x0007B92Eu); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007B92E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007B936: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007B93Du); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_0007B93D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007B944u); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0007B944: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007B94Cu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007B94C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007B954: ;
    PUSH32(esp, 0x0007B959u); RECOMP_ABI_CALL(0x0007E280u, sub_0007E280); /* call 0x0007E280 */

loc_0007B959: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B95E: ;
    eax = MEM32(0x913224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BA85; /* je: equal / zero */

loc_0007B96B: ;
    PUSH32(esp, 0x0007B970u); RECOMP_ABI_CALL(0x00077FB0u, sub_00077FB0); /* call 0x00077FB0 */

loc_0007B970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BA50; /* jne: not equal / not zero */

loc_0007B978: ;
    edi = 3;
    PUSH32(esp, 0x0007B982u); RECOMP_ABI_CALL(0x00077F30u, sub_00077F30); /* call 0x00077F30 */

loc_0007B982: ;
    esi = eax;
    PUSH32(esp, 0x0007B989u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007B989: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B9CC; /* jne: not equal / not zero */

loc_0007B98D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007B995: ;
    PUSH32(esp, 0x0007B99Au); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007B99A: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B9A3u); RECOMP_ABI_CALL(0x00078010u, sub_00078010); /* call 0x00078010 */

loc_0007B9A3: ;
    PUSH32(esp, 0x0007B9A8u); RECOMP_ABI_CALL(0x000766B0u, sub_000766B0); /* call 0x000766B0 */

loc_0007B9A8: ;
    PUSH32(esp, 0x0007B9ADu); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007B9AD: ;
    PUSH32(esp, 0x0007B9B2u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007B9B2: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B9BAu); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0007B9BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007B9C2u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B9C2: ;
    PUSH32(esp, 0x0007B9C7u); RECOMP_ABI_CALL(0x00073700u, sub_00073700); /* call 0x00073700 */

loc_0007B9C7: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B9CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B9F3; /* je: equal / zero */

loc_0007B9D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007B9F3; /* jne: not equal / not zero */

loc_0007B9D4: ;
    PUSH32(esp, esi);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007B9DFu); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007B9DF: ;
    PUSH32(esp, 0x0007B9E4u); RECOMP_ABI_CALL(0x000766B0u, sub_000766B0); /* call 0x000766B0 */

loc_0007B9E4: ;
    PUSH32(esp, 0x0007B9E9u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007B9E9: ;
    PUSH32(esp, 0x0007B9EEu); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007B9EE: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007B9F3: ;
    PUSH32(esp, 0x0007B9F8u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007B9F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BA00: ;
    ecx = 0x913218;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007BA0Cu); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_0007BA0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BA21; /* jne: not equal / not zero */

loc_0007BA14: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902E90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BA21; /* jne: not equal / not zero */

loc_0007BA1C: ;
    esi = 1;

loc_0007BA21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007BA27u); RECOMP_ABI_CALL(0x00078010u, sub_00078010); /* call 0x00078010 */

loc_0007BA27: ;
    PUSH32(esp, 0x0007BA2Cu); RECOMP_ABI_CALL(0x000766B0u, sub_000766B0); /* call 0x000766B0 */

loc_0007BA2C: ;
    PUSH32(esp, 0x0007BA31u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007BA31: ;
    PUSH32(esp, 0x0007BA36u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007BA36: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007BA3Eu); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0007BA3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007BA46u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007BA46: ;
    PUSH32(esp, 0x0007BA4Bu); RECOMP_ABI_CALL(0x00073700u, sub_00073700); /* call 0x00073700 */

loc_0007BA4B: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007BA50: ;
    PUSH32(esp, 0x0007BA55u); RECOMP_ABI_CALL(0x000738B0u, sub_000738B0); /* call 0x000738B0 */

loc_0007BA55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BA5D: ;
    ecx = 0x913218;
    PUSH32(esp, 0x0007BA67u); RECOMP_ABI_CALL(0x00073670u, sub_00073670); /* call 0x00073670 */

loc_0007BA67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BA7B; /* jne: not equal / not zero */

loc_0007BA6F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902E90) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BA7B: ;
    edi = 5;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007BA85: ;
    PUSH32(esp, 0x0007BA8Au); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007BA8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BA92: ;
    PUSH32(esp, 0x0007BA97u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007BA97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BBE8; /* jne: not equal / not zero */

loc_0007BA9F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007BAA6u); RECOMP_ABI_CALL(0x0007B420u, sub_0007B420); /* call 0x0007B420 */

loc_0007BAA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007BAAE: ;
    eax = MEM32(0x914398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBC7; /* je: equal / zero */

loc_0007BABB: ;
    PUSH32(esp, 0x0007BAC0u); RECOMP_ABI_CALL(0x00078340u, sub_00078340); /* call 0x00078340 */

loc_0007BAC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BBAF; /* jne: not equal / not zero */

loc_0007BAC8: ;
    edi = 4;
    PUSH32(esp, 0x0007BAD2u); RECOMP_ABI_CALL(0x00078220u, sub_00078220); /* call 0x00078220 */

loc_0007BAD2: ;
    esi = eax;
    PUSH32(esp, 0x0007BAD9u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007BAD9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BB0F; /* jne: not equal / not zero */

loc_0007BADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BAE6: ;
    eax = MEM32(0x914398);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x914390) = 0;
    MEM32(0x914394) = 0;
    MEM32(0x914398) = eax;
    PUSH32(esp, 0x0007BB0Au); RECOMP_ABI_CALL(0x00073CF0u, sub_00073CF0); /* call 0x00073CF0 */

loc_0007BB0A: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007BB0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BB36; /* je: equal / zero */

loc_0007BB13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BB36; /* jne: not equal / not zero */

loc_0007BB17: ;
    PUSH32(esp, 0x0007BB1Cu); RECOMP_ABI_CALL(0x00076800u, sub_00076800); /* call 0x00076800 */

loc_0007BB1C: ;
    PUSH32(esp, esi);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BB27u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BB27: ;
    PUSH32(esp, 0x0007BB2Cu); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007BB2C: ;
    PUSH32(esp, 0x0007BB31u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007BB31: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007BB36: ;
    PUSH32(esp, 0x0007BB3Bu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007BB3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BB43: ;
    PUSH32(esp, 0x0007BB48u); RECOMP_ABI_CALL(0x00073E50u, sub_00073E50); /* call 0x00073E50 */

loc_0007BB48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BBE8; /* jne: not equal / not zero */

loc_0007BB50: ;
    ecx = 0x914380;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007BB5Cu); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007BB5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x902E8C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BB71; /* jne: not equal / not zero */

loc_0007BB64: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x902E90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x902E90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BB71; /* jne: not equal / not zero */

loc_0007BB6C: ;
    esi = 1;

loc_0007BB71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007BB77u); RECOMP_ABI_CALL(0x00073B40u, sub_00073B40); /* call 0x00073B40 */

loc_0007BB77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007BB7Fu); RECOMP_ABI_CALL(0x00076800u, sub_00076800); /* call 0x00076800 */

loc_0007BB7F: ;
    PUSH32(esp, 0);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BB8Bu); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BB8B: ;
    PUSH32(esp, 0x0007BB90u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007BB90: ;
    PUSH32(esp, 0x0007BB95u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007BB95: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007BB9Du); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0007BB9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007BBA5u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007BBA5: ;
    PUSH32(esp, 0x0007BBAAu); RECOMP_ABI_CALL(0x00073CF0u, sub_00073CF0); /* call 0x00073CF0 */

loc_0007BBAA: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0007BBAF: ;
    PUSH32(esp, 0x0007BBB4u); RECOMP_ABI_CALL(0x00073E50u, sub_00073E50); /* call 0x00073E50 */

loc_0007BBB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BBB8: ;
    ecx = 0x914380;
    PUSH32(esp, 0x0007BBC2u); RECOMP_ABI_CALL(0x00073A50u, sub_00073A50); /* call 0x00073A50 */

loc_0007BBC2: ;
    goto loc_0007BA67;

loc_0007BBC7: ;
    PUSH32(esp, 0x0007BBCCu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007BBCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BBE8; /* je: equal / zero */

loc_0007BBD0: ;
    PUSH32(esp, 0x0007BBD5u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007BBD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BBE8; /* jne: not equal / not zero */

loc_0007BBD9: ;
    PUSH32(esp, 0x0007BBDEu); RECOMP_ABI_CALL(0x00077A10u, sub_00077A10); /* call 0x00077A10 */

loc_0007BBDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BBE8; /* jne: not equal / not zero */

loc_0007BBE3: ;
    PUSH32(esp, 0x0007BBE8u); RECOMP_ABI_CALL(0x0007B550u, sub_0007B550); /* call 0x0007B550 */

loc_0007BBE8: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007BC40
 * Original: 0x0007BC40 - 0x0007BD24 (228 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007BC40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0007BD09; /* je: equal / zero */

loc_0007BC4E: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BD09; /* je: equal / zero */

loc_0007BC5A: ;
    PUSH32(esp, 0x0007BC5Fu); RECOMP_ABI_CALL(0x00079BF0u, sub_00079BF0); /* call 0x00079BF0 */

loc_0007BC5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x912964) = eax;
    ecx = 0xBC;
    edi = 0x902E68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x913944) = eax;
    MEM32(0x913948) = eax;
    MEM32(0x91394C) = eax;
    MEM32(0x913950) = eax;
    MEM32(0x913954) = eax;
    MEM32(0x913958) = eax;
    MEM32(0x91395C) = eax;
    MEM32(0x913960) = eax;
    MEM32(0x90315C) = 1;
    MEM32(0x903CD8) = eax;
    ecx = 9;
    edi = 0x912968;
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
    ecx = 0x17;
    esi = 0x912968;
    edi = 0x902E68;
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
    PUSH32(esp, 1);
    ecx = 0x902E68;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x0007BCD4u); RECOMP_ABI_CALL(0x0007C4E0u, sub_0007C4E0); /* call 0x0007C4E0 */

loc_0007BCD4: ;
    PUSH32(esp, 0x0007BCD9u); RECOMP_ABI_CALL(0x00075510u, sub_00075510); /* call 0x00075510 */

loc_0007BCD9: ;
    MEM8(0x902EC5) = LO8(eax);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BCF2; /* jne: not equal / not zero */

loc_0007BCE6: ;
    PUSH32(esp, 1);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BCF2u); RECOMP_ABI_CALL(0x0007C4C0u, sub_0007C4C0); /* call 0x0007C4C0 */

loc_0007BCF2: ;
    PUSH32(esp, 0x0007BCF7u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007BCF7: ;
    PUSH32(esp, 0x0007BCFCu); RECOMP_ABI_CALL(0x00072860u, sub_00072860); /* call 0x00072860 */

loc_0007BCFC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0007BD03u); RECOMP_ABI_CALL(0x0007DDC0u, sub_0007DDC0); /* call 0x0007DDC0 */

loc_0007BD03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007BD09: ;
    ecx = 0xBC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x902E68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(0x90315C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007BD30
 * Original: 0x0007BD30 - 0x0007BE27 (247 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007BD30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x90315C);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_0007BD70; /* js: sign (negative) */

loc_0007BD40: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x5E);
    _fb = (uint32_t)(0x902E8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x902E8C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007BD50;

    /* nop */

loc_0007BD50: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x31)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x31) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BD68; /* jne: not equal / not zero */

loc_0007BD57: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x35)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x35) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BD68; /* jne: not equal / not zero */

loc_0007BD5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007BD65u); RECOMP_ABI_CALL(0x00079EA0u, sub_00079EA0); /* call 0x00079EA0 */

loc_0007BD65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007BD68: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007BD50; /* jge: greater or equal (signed >=) */

loc_0007BD70: ;
    eax = MEM32(0x90315C);
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    PUSH32(esp, ebx);
    edx = eax + 0x902E94;
    edi = eax + 0x902E68;
    ecx = 9;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x0007BD96u); RECOMP_ABI_CALL(0x000AEB2Au, sub_000AEB2A); /* call 0x000AEB2A */

loc_0007BD96: ;
    eax = MEM32(0x90315C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x902EA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x902EA4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007BDADu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0007BDAD: ;
    eax = MEM32(0x90315C);
    ecx = MEM32(ebx + 0x31);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    MEM32(eax + 0x902E8C) = ecx;
    edx = MEM32(ebx + 0x35);
    MEM32(eax + 0x902E90) = edx;
    PUSH32(esp, 0);
    ecx = eax + 0x902E68;
    MEM8(eax + 0x902EC4) = 0;
    PUSH32(esp, 0x0007BDDBu); RECOMP_ABI_CALL(0x0007C4E0u, sub_0007C4E0); /* call 0x0007C4E0 */

loc_0007BDDB: ;
    ecx = MEM32(0x90315C);
    eax = MEM32(esp + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x902E68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x902E68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007BDF4u); RECOMP_ABI_CALL(0x0007C4C0u, sub_0007C4C0); /* call 0x0007C4C0 */

loc_0007BDF4: ;
    ecx = MEM32(0x90315C);
    SET_LO8(edx, MEM8(ebx + 0x30));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    PUSH32(esp, esi);
    MEM8(ecx + 0x902EC5) = LO8(edx);
    eax = MEM32(ebx + 0x35);
    ecx = MEM32(ebx + 0x31);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007BE15u); RECOMP_ABI_CALL(0x0007D8E0u, sub_0007D8E0); /* call 0x0007D8E0 */

loc_0007BE15: ;
    eax = MEM32(0x90315C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x90315C) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007BE30
 * Original: 0x0007BE30 - 0x0007BE82 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007BE30: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x90315C);
    eax = edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007BE81; /* jbe: below or equal (unsigned <=) */

loc_0007BE41: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BE80; /* je: equal / zero */

loc_0007BE4A: ;
    if (CMP_G(_fas, _fbs)) goto loc_0007BE4F; /* jg: greater (signed >) */

loc_0007BE4C: ;
    eax = ecx + -1;

loc_0007BE4F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5E);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    _fb = (uint32_t)(0x902E68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x902E68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x902E68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x902E68;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x902E68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x902E68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BE80; /* je: equal / zero */

loc_0007BE6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BE80; /* je: equal / zero */

loc_0007BE71: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007BE7Du); RECOMP_ABI_CALL(0x00075DA0u, sub_00075DA0); /* call 0x00075DA0 */

loc_0007BE7D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007BE80: ;
    POP32(esp, esi);

loc_0007BE81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007BE90
 * Original: 0x0007BE90 - 0x0007BFE7 (343 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007BE90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007BE96u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007BE96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BF6D; /* je: equal / zero */

loc_0007BE9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007BEA6u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007BEA6: ;
    esi = MEM32(0x902E8C);
    edi = MEM32(0x902E90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BF07; /* jne: not equal / not zero */

loc_0007BEB9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BF07; /* jne: not equal / not zero */

loc_0007BEBD: ;
    _fa = (uint32_t)(MEM8(0x9131E7)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9131E7), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BEDF; /* jne: not equal / not zero */

loc_0007BEC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007BECDu); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_0007BECD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BEDCu); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BEDC: ;
    POP32(esp, edi);

loc_0007BEDD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007BEDF: ;
    PUSH32(esp, 0x0007BEE4u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_0007BEE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007BEDC; /* je: equal / zero */

loc_0007BEE9: ;
    PUSH32(esp, 0x0007BEEEu); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_0007BEEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007BEF5u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_0007BEF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BF04u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BF04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007BF07: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007BF0Eu); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007BF0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BF5E; /* jne: not equal / not zero */

loc_0007BF15: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BF5E; /* jne: not equal / not zero */

loc_0007BF19: ;
    _fa = (uint32_t)(MEM8(0x9131E7)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9131E7), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BF2E; /* jne: not equal / not zero */

loc_0007BF22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007BF29u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_0007BF29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007BF44;

loc_0007BF2E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007BF35u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_0007BF35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BF44u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BF44: ;
    PUSH32(esp, 0x0007BF49u); RECOMP_ABI_CALL(0x00073400u, sub_00073400); /* call 0x00073400 */

loc_0007BF49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0x902E68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007BF5Bu); RECOMP_ABI_CALL(0x0007C500u, sub_0007C500); /* call 0x0007C500 */

loc_0007BF5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007BF5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00071820(); return; /* tail jmp 0x00071820 */

loc_0007BF6D: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BFA5; /* jne: not equal / not zero */

loc_0007BF75: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x902EC4));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, ~LO8(ecx));
    ecx = ecx & 0xFFFFFF01u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = 0x902EC6;
    PUSH32(esp, 0x0007BF93u); RECOMP_ABI_CALL(0x0007C500u, sub_0007C500); /* call 0x0007C500 */

loc_0007BF93: ;
    PUSH32(esp, esi);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007BF9Eu); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BF9E: ;
    ecx = 0x902EC6;
    goto loc_0007BFAA;

loc_0007BFA5: ;
    ecx = 0x902E68;

loc_0007BFAA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007BFB1u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007BFB1: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007BFB9u); RECOMP_ABI_CALL(0x0007BE30u, sub_0007BE30); /* call 0x0007BE30 */

loc_0007BFB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BFD1; /* jne: not equal / not zero */

loc_0007BFC1: ;
    PUSH32(esp, 0x0007BFC6u); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_0007BFC6: ;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00071820(); return; /* tail jmp 0x00071820 */

loc_0007BFD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007BEDD; /* jne: not equal / not zero */

loc_0007BFD9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_00071820(); return; /* tail jmp 0x00071820 */

}

/**
 * sub_0007BFF0
 * Original: 0x0007BFF0 - 0x0007C0A2 (178 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007BFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007BFF6u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0007BFF6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C064; /* je: equal / zero */

loc_0007BFFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007C002u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007C002: ;
    esi = MEM32(0x902E8C);
    edi = MEM32(0x902E90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C02A; /* jne: not equal / not zero */

loc_0007C015: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C02A; /* jne: not equal / not zero */

loc_0007C019: ;
    PUSH32(esp, 0x0007C01Eu); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_0007C01E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00071820(); return; /* tail jmp 0x00071820 */

loc_0007C02A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007C031u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_0007C031: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C09F; /* jne: not equal / not zero */

loc_0007C038: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C09F; /* jne: not equal / not zero */

loc_0007C03C: ;
    PUSH32(esp, 1);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007C048u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007C048: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0007C052u); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0007C052: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00071820(); return; /* tail jmp 0x00071820 */

loc_0007C064: ;
    PUSH32(esp, 0x0007C069u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007C069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C079; /* jne: not equal / not zero */

loc_0007C06D: ;
    PUSH32(esp, 1);
    ecx = 0x902E68;
    PUSH32(esp, 0x0007C079u); RECOMP_ABI_CALL(0x0007C540u, sub_0007C540); /* call 0x0007C540 */

loc_0007C079: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007C0A0; /* ja: above (unsigned >) */

loc_0007C082: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007C08Bu); RECOMP_ABI_CALL(0x0007BE30u, sub_0007BE30); /* call 0x0007BE30 */

loc_0007C08B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007C093u); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_0007C093: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00071820(); return; /* tail jmp 0x00071820 */

loc_0007C09F: ;
    POP32(esp, edi);

loc_0007C0A0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C0B0
 * Original: 0x0007C0B0 - 0x0007C1C0 (272 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007C0B0: ;
    eax = ZX8(MEM8(0x9131E7));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0007C12A; /* ja: above (unsigned >) */

loc_0007C0BD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x7C19C); /* switch: 7 entries, 6 targets */
    if (_jt == 0x0007C0C4u) goto loc_0007C0C4;
    if (_jt == 0x0007C0DDu) goto loc_0007C0DD;
    if (_jt == 0x0007C0F6u) goto loc_0007C0F6;
    if (_jt == 0x0007C10Bu) goto loc_0007C10B;
    if (_jt == 0x0007C119u) goto loc_0007C119;
    if (_jt == 0x0007C13Cu) goto loc_0007C13C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007C0C4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C0CEu); RECOMP_ABI_CALL(0x00078010u, sub_00078010); /* call 0x00078010 */

loc_0007C0CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007C0D6u); RECOMP_ABI_CALL(0x000766B0u, sub_000766B0); /* call 0x000766B0 */

loc_0007C0D6: ;
    PUSH32(esp, 0x0007C0DBu); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007C0DB: ;
    goto loc_0007C13C;

loc_0007C0DD: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C0E7u); RECOMP_ABI_CALL(0x00073B40u, sub_00073B40); /* call 0x00073B40 */

loc_0007C0E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007C0EFu); RECOMP_ABI_CALL(0x00076800u, sub_00076800); /* call 0x00076800 */

loc_0007C0EF: ;
    PUSH32(esp, 0x0007C0F4u); RECOMP_ABI_CALL(0x00079C60u, sub_00079C60); /* call 0x00079C60 */

loc_0007C0F4: ;
    goto loc_0007C13C;

loc_0007C0F6: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0007C134; /* je: equal / zero */

loc_0007C0FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007C106u); RECOMP_ABI_CALL(0x0007BE30u, sub_0007BE30); /* call 0x0007BE30 */

loc_0007C106: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007C13C;

loc_0007C10B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007C13C; /* jae: above or equal (unsigned >=) */

loc_0007C114: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0007C133;

loc_0007C119: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007C13C; /* jae: above or equal (unsigned >=) */

loc_0007C122: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C128u); RECOMP_ABI_CALL(0x0007BFF0u, sub_0007BFF0); /* call 0x0007BFF0 */

loc_0007C128: ;
    goto loc_0007C139;

loc_0007C12A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007C13C; /* jae: above or equal (unsigned >=) */

loc_0007C133: ;
    PUSH32(esp, eax);

loc_0007C134: ;
    PUSH32(esp, 0x0007C139u); RECOMP_ABI_CALL(0x0007BE90u, sub_0007BE90); /* call 0x0007BE90 */

loc_0007C139: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C13C: ;
    eax = MEM32(0x90315C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007C167; /* jbe: below or equal (unsigned <=) */

loc_0007C148: ;
    PUSH32(esp, edi);
    edi = 0x902E68;
    edi = edi;

loc_0007C150: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0007C159u); RECOMP_ABI_CALL(0x0007C520u, sub_0007C520); /* call 0x0007C520 */

loc_0007C159: ;
    eax = MEM32(0x90315C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007C150; /* jb: below (unsigned <) */

loc_0007C166: ;
    POP32(esp, edi);

loc_0007C167: ;
    PUSH32(esp, 0x0007C16Cu); RECOMP_ABI_CALL(0x000717F0u, sub_000717F0); /* call 0x000717F0 */

loc_0007C16C: ;
    PUSH32(esp, 0x0007C171u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_0007C171: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C179u); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0007C179: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007C181u); RECOMP_ABI_CALL(0x0007D120u, sub_0007D120); /* call 0x0007D120 */

loc_0007C181: ;
    eax = ZX8(MEM8(0x9131E7));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_0007C194; /* je: equal / zero */

loc_0007C18C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007C199; /* jne: not equal / not zero */

loc_0007C18F: ;
    g_seh_ebp = ebp; sub_00073CF0(); return; /* tail jmp 0x00073CF0 */

loc_0007C194: ;
    g_seh_ebp = ebp; sub_00073700(); return; /* tail jmp 0x00073700 */

loc_0007C199: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0007C1C0(); return; /* fallthrough 0x0007C1C0 */

}

/**
 * sub_0007C1C0
 * Original: 0x0007C1C0 - 0x0007C41F (607 bytes, 163 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007C1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C1C0: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007C1C8u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0007C1C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C1DA; /* je: equal / zero */

loc_0007C1CD: ;
    PUSH32(esp, 0x0007C1D2u); RECOMP_ABI_CALL(0x0007AF60u, sub_0007AF60); /* call 0x0007AF60 */

loc_0007C1D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C1DA; /* je: equal / zero */

loc_0007C1D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007C1DA: ;
    eax = MEM32(0x9147A0);
    PUSH32(esp, esi);
    esi = 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_A(_fa, _fb)) goto loc_0007C396; /* ja: above (unsigned >) */

loc_0007C1F3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x7C420); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0007C1FAu) goto loc_0007C1FA;
    if (_jt == 0x0007C252u) goto loc_0007C252;
    if (_jt == 0x0007C27Cu) goto loc_0007C27C;
    if (_jt == 0x0007C2B9u) goto loc_0007C2B9;
    if (_jt == 0x0007C2E5u) goto loc_0007C2E5;
    if (_jt == 0x0007C318u) goto loc_0007C318;
    if (_jt == 0x0007C36Bu) goto loc_0007C36B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007C1FA: ;
    PUSH32(esp, 0x0007C1FFu); RECOMP_ABI_CALL(0x00070C10u, sub_00070C10); /* call 0x00070C10 */

loc_0007C1FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C396; /* jne: not equal / not zero */

loc_0007C207: ;
    _fa = (uint32_t)(MEM32(0x9031B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C396; /* jne: not equal / not zero */

loc_0007C214: ;
    eax = MEM32(0x9031C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C396; /* jne: not equal / not zero */

loc_0007C221: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(0x9031C8) = edi;
    MEM32(0x9147A0) = 3;
    PUSH32(esp, 0x0007C23Bu); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_0007C23B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    eax = MEM32(esi + 0x2E6430);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C24Au); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_0007C24A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007C396;

loc_0007C252: ;
    PUSH32(esp, 0x0007C257u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007C257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C267; /* je: equal / zero */

loc_0007C25B: ;
    ecx = MEM32(0x903EC8);
    PUSH32(esp, ecx);
    goto loc_0007C301;

loc_0007C267: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007C26Du); RECOMP_ABI_CALL(0x000777E0u, sub_000777E0); /* call 0x000777E0 */

loc_0007C26D: ;
    MEM32(0x9147A0) = 2;
    goto loc_0007C393;

loc_0007C27C: ;
    PUSH32(esp, 0x0007C281u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007C281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C28B; /* je: equal / zero */

loc_0007C285: ;
    MEM32(0x9147A0) = edi;

loc_0007C28B: ;
    _fa = (uint32_t)(MEM32(0x9031B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C29F; /* jne: not equal / not zero */

loc_0007C294: ;
    MEM32(0x9147A0) = esi;
    goto loc_0007C396;

loc_0007C29F: ;
    eax = MEM32(0x913214);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    MEM32(0x913214) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0007C396; /* jbe: below or equal (unsigned <=) */

loc_0007C2B3: ;
    PUSH32(esp, edi);
    goto loc_0007C38E;

loc_0007C2B9: ;
    PUSH32(esp, 0x0007C2BEu); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_0007C2BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C396; /* je: equal / zero */

loc_0007C2C6: ;
    PUSH32(esp, 0x0007C2CBu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007C2CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C2D8; /* jne: not equal / not zero */

loc_0007C2CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C2D5u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_0007C2D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C2D8: ;
    ebp = edi;
    MEM32(0x9147A0) = esi;
    goto loc_0007C396;

loc_0007C2E5: ;
    _fa = (uint32_t)(MEM32(0x9031B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C2FA; /* je: equal / zero */

loc_0007C2ED: ;
    PUSH32(esp, 0x0007C2F2u); RECOMP_ABI_CALL(0x00077710u, sub_00077710); /* call 0x00077710 */

loc_0007C2F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C396; /* je: equal / zero */

loc_0007C2FA: ;
    edx = MEM32(0x903EC8);
    PUSH32(esp, edx);

loc_0007C301: ;
    PUSH32(esp, 0x0007C306u); RECOMP_ABI_CALL(0x0007C0B0u, sub_0007C0B0); /* call 0x0007C0B0 */

loc_0007C306: ;
    MEM32(0x903D0C) = edi;
    MEM32(0x9147A0) = 5;
    goto loc_0007C393;

loc_0007C318: ;
    PUSH32(esp, 0x0007C31Du); RECOMP_ABI_CALL(0x00070B50u, sub_00070B50); /* call 0x00070B50 */

loc_0007C31D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C396; /* je: equal / zero */

loc_0007C321: ;
    PUSH32(esp, 0x0007C326u); RECOMP_ABI_CALL(0x00070C10u, sub_00070C10); /* call 0x00070C10 */

loc_0007C326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C358; /* jne: not equal / not zero */

loc_0007C32A: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(0x9031C8) = edi;
    MEM32(0x9147A0) = 3;
    PUSH32(esp, 0x0007C344u); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_0007C344: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    eax = MEM32(esi + 0x2E6430);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C353u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_0007C353: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0007C396;

loc_0007C358: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0007C35Fu); RECOMP_ABI_CALL(0x000777E0u, sub_000777E0); /* call 0x000777E0 */

loc_0007C35F: ;
    MEM32(0x9147A0) = 6;
    goto loc_0007C393;

loc_0007C36B: ;
    _fa = (uint32_t)(MEM32(0x9031B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031B8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C37C; /* jne: not equal / not zero */

loc_0007C374: ;
    MEM32(0x9147A0) = esi;
    goto loc_0007C396;

loc_0007C37C: ;
    eax = MEM32(0x913214);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    MEM32(0x913214) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0007C396; /* jbe: below or equal (unsigned <=) */

loc_0007C38C: ;
    PUSH32(esp, 3);

loc_0007C38E: ;
    PUSH32(esp, 0x0007C393u); RECOMP_ABI_CALL(0x000777E0u, sub_000777E0); /* call 0x000777E0 */

loc_0007C393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C396: ;
    PUSH32(esp, 0x0007C39Bu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007C39B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(0x9031B8);
    if (CMP_EQ(_fa, _fb)) goto loc_0007C3B5; /* je: equal / zero */

loc_0007C3A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C3B5; /* jne: not equal / not zero */

loc_0007C3A9: ;
    _fa = (uint32_t)(MEM32(0x903D0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x903D0C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C3B5; /* jne: not equal / not zero */

loc_0007C3B1: ;
    PUSH32(esp, 2);
    goto loc_0007C3CD;

loc_0007C3B5: ;
    PUSH32(esp, 0x0007C3BAu); RECOMP_ABI_CALL(0x00070C10u, sub_00070C10); /* call 0x00070C10 */

loc_0007C3BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C3D5; /* jne: not equal / not zero */

loc_0007C3BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C3D5; /* jne: not equal / not zero */

loc_0007C3C3: ;
    _fa = (uint32_t)(MEM32(0x9031C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9031C8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C3D5; /* jne: not equal / not zero */

loc_0007C3CB: ;
    PUSH32(esp, 4);

loc_0007C3CD: ;
    PUSH32(esp, 0x0007C3D2u); RECOMP_ABI_CALL(0x000777E0u, sub_000777E0); /* call 0x000777E0 */

loc_0007C3D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C3D5: ;
    eax = MEM32(0x913210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9031B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9031B4) (32-bit) */
    MEM32(0x9031B8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0007C419; /* je: equal / zero */

loc_0007C3EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C3F2u); RECOMP_ABI_CALL(0x00071940u, sub_00071940); /* call 0x00071940 */

loc_0007C3F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi;
    PUSH32(esp, 0x0007C3FCu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0007C3FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C419; /* jne: not equal / not zero */

loc_0007C400: ;
    eax = MEM32(0x9031B4);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007C40F; /* je: equal / zero */

loc_0007C40A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007C419; /* jne: not equal / not zero */

loc_0007C40F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007C416u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_0007C416: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C419: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C440
 * Original: 0x0007C440 - 0x0007C44B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C440: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0007C447u); RECOMP_ABI_CALL(0x0007C1C0u, sub_0007C1C0); /* call 0x0007C1C0 */

loc_0007C447: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C450
 * Original: 0x0007C450 - 0x0007C45B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C450: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x0007C457u); RECOMP_ABI_CALL(0x0007C1C0u, sub_0007C1C0); /* call 0x0007C1C0 */

loc_0007C457: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C460
 * Original: 0x0007C460 - 0x0007C46B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C460: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0007C467u); RECOMP_ABI_CALL(0x0007C1C0u, sub_0007C1C0); /* call 0x0007C1C0 */

loc_0007C467: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C470
 * Original: 0x0007C470 - 0x0007C497 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007C470: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 8;
    edi = 0x236454;
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
    if ((_flags != 0)) goto loc_0007C48D; /* je: equal / zero */

loc_0007C488: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0007C48D: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C4A0
 * Original: 0x0007C4A0 - 0x0007C4B1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C4A0: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0xFC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C4C0
 * Original: 0x0007C4C0 - 0x0007C4D4 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C4C0: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C4E0
 * Original: 0x0007C4E0 - 0x0007C4F4 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C4E0: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C500
 * Original: 0x0007C500 - 0x0007C514 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C500: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C520
 * Original: 0x0007C520 - 0x0007C534 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C520: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0xEF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C540
 * Original: 0x0007C540 - 0x0007C554 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C540: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0xDF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C560
 * Original: 0x0007C560 - 0x0007C58C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C560: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM8(ecx + 0x34) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C590
 * Original: 0x0007C590 - 0x0007C5A4 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C590: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007C592: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C5A1; /* jne: not equal / not zero */

loc_0007C598: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007C592; /* jb: below (unsigned <) */

loc_0007C59E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007C5A1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C5B0
 * Original: 0x0007C5B0 - 0x0007C5D5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C5B0: ;
    SET_LO8(edx, MEM8(ecx + 0x34));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007C5D2; /* jbe: below or equal (unsigned <=) */

loc_0007C5B9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edx = ecx + 0x24;

loc_0007C5C2: ;
    MEM32(edx) = esi;
    edi = ZX8(MEM8(ecx + 0x34));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007C5C2; /* jb: below (unsigned <) */

loc_0007C5D0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0007C5D2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C5E0
 * Original: 0x0007C5E0 - 0x0007C608 (40 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C5E0: ;
    SET_LO8(edx, MEM8(ecx + 0x34));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007C605; /* jbe: below or equal (unsigned <=) */

loc_0007C5E9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edx = ecx + 0x24;

loc_0007C5F2: ;
    edi = MEM32(esi + eax * 4);
    MEM32(edx) = edi;
    edi = ZX8(MEM8(ecx + 0x34));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007C5F2; /* jb: below (unsigned <) */

loc_0007C603: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0007C605: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C610
 * Original: 0x0007C610 - 0x0007C631 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C610: ;
    SET_LO16(edx, ZX8(MEM8(ecx + 0x34)));
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007C629; /* jae: above or equal (unsigned >=) */

loc_0007C61F: ;
    eax = ZX16(LO16(eax));
    eax = MEM32(ecx + eax * 4 + 0x24);
    esp += 8; return; /* ret 4 */

loc_0007C629: ;
    eax = 0x80004005u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C640
 * Original: 0x0007C640 - 0x0007C663 (35 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C640: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x34));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_BE(_fa, _fb)) goto loc_0007C661; /* jbe: below or equal (unsigned <=) */

loc_0007C64D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C650: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C65F; /* jge: greater or equal (signed >=) */

loc_0007C655: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007C650; /* jb: below (unsigned <) */

loc_0007C65D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C65F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0007C661: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C670
 * Original: 0x0007C670 - 0x0007C693 (35 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C670: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x34));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_BE(_fa, _fb)) goto loc_0007C691; /* jbe: below or equal (unsigned <=) */

loc_0007C67D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C680: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007C68F; /* jl: less (signed <) */

loc_0007C685: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007C680; /* jb: below (unsigned <) */

loc_0007C68D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C68F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0007C691: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C6A0
 * Original: 0x0007C6A0 - 0x0007C6C2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C6A0: ;
    ecx = MEM32(ecx + 0x8C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C6C1; /* je: equal / zero */

loc_0007C6AD: ;
    SET_LO8(ecx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C6B7; /* je: equal / zero */

loc_0007C6B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007C6B7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C6C1; /* jne: not equal / not zero */

loc_0007C6BC: ;
    eax = 1;

loc_0007C6C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C6D0
 * Original: 0x0007C6D0 - 0x0007C6E7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007C6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C6D0: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C6E4; /* je: equal / zero */

loc_0007C6DA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C6E4; /* je: equal / zero */

loc_0007C6DF: ;
    eax = ZX16(MEM16(eax + 0xC));
    esp += 4; return; /* ret */

loc_0007C6E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C6F0
 * Original: 0x0007C6F0 - 0x0007C707 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007C6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C6F0: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C704; /* je: equal / zero */

loc_0007C6FA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C704; /* je: equal / zero */

loc_0007C6FF: ;
    eax = ZX16(MEM16(eax + 0xE));
    esp += 4; return; /* ret */

loc_0007C704: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C710
 * Original: 0x0007C710 - 0x0007C7A6 (150 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C710: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    ecx = MEM32(edi);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x10);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C731u); RECOMP_ABI_CALL(0x001CEF1Du, sub_001CEF1D); /* call 0x001CEF1D */

loc_0007C731: ;
    eax = esp + 8;
    edx = eax + 1;

loc_0007C738: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C738; /* jne: not equal / not zero */

loc_0007C73F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + eax + 8;
    MEM8(esi) = 0x28;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007C755u); RECOMP_ABI_CALL(0x001CEF1Du, sub_001CEF1D); /* call 0x001CEF1D */

loc_0007C755: ;
    eax = esi;
    ecx = eax + 1;
    /* nop */

loc_0007C760: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C760; /* jne: not equal / not zero */

loc_0007C767: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX16(MEM16(edi + 8));
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x236510);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C77Bu); RECOMP_ABI_CALL(0x000A9E95u, sub_000A9E95); /* call 0x000A9E95 */

loc_0007C77B: ;
    esi = MEM32(esp + 0x64);
    edi = MEM32(esp + 0x60);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007C790u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_0007C790: ;
    ecx = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + esi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0007C7A2u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007C7A2: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C7B0
 * Original: 0x0007C7B0 - 0x0007C7C0 (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C7B0(void)
{

loc_0007C7B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C7BFu); RECOMP_ABI_CALL(0x001CEED9u, sub_001CEED9); /* call 0x001CEED9 */

loc_0007C7BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C7C0
 * Original: 0x0007C7C0 - 0x0007C7CB (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C7C0(void)
{

loc_0007C7C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C7CAu); RECOMP_ABI_CALL(0x001CEEE4u, sub_001CEEE4); /* call 0x001CEEE4 */

loc_0007C7CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C7D0
 * Original: 0x0007C7D0 - 0x0007C808 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C7D0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C7EA; /* jne: not equal / not zero */

loc_0007C7D7: ;
    PUSH32(esp, 0x0007C7DCu); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_0007C7DC: ;
    ecx = MEM32(0x916288);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007C7EA; /* je: equal / zero */

loc_0007C7E6: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007C7EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007C7F0u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007C7F0: ;
    esi = MEM32(0x9151F0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0007C7FDu); RECOMP_ABI_CALL(0x000763D0u, sub_000763D0); /* call 0x000763D0 */

loc_0007C7FD: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    if ((_fa != 0)) goto loc_0007C806; /* jne: not equal / not zero */

loc_0007C804: ;
    SET_LO8(eax, LO8(ebx));

loc_0007C806: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C810
 * Original: 0x0007C810 - 0x0007C82D (29 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007C81Cu); RECOMP_ABI_CALL(0x001E3E00u, sub_001E3E00); /* call 0x001E3E00 */

loc_0007C81C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C828; /* jge: greater or equal (signed >=) */

loc_0007C822: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007C828u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_0007C828: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C830
 * Original: 0x0007C830 - 0x0007C84B (27 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C83D; /* jne: not equal / not zero */

loc_0007C83B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C83D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C843u); RECOMP_ABI_CALL(0x001E3E0Bu, sub_001E3E0B); /* call 0x001E3E0B */

loc_0007C843: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C850
 * Original: 0x0007C850 - 0x0007C8FB (171 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C850: ;
    eax = MEM32(0x916290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0007C889; /* jne: not equal / not zero */

loc_0007C85A: ;
    PUSH32(esp, 0x916290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C865u); RECOMP_ABI_CALL(0x001E4181u, sub_001E4181); /* call 0x001E4181 */

loc_0007C865: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007C8F9; /* jl: less (signed <) */

loc_0007C86D: ;
    eax = MEM32(0x91E070);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C8B2; /* jne: not equal / not zero */

loc_0007C876: ;
    PUSH32(esp, 0x91E070);
    PUSH32(esp, eax);
    eax = MEM32(0x916278);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C887u); RECOMP_ABI_CALL(0x001E418Cu, sub_001E418C); /* call 0x001E418C */

loc_0007C887: ;
    goto loc_0007C8BB;

loc_0007C889: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C88Fu); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007C88F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C86D; /* jge: greater or equal (signed >=) */

loc_0007C898: ;
    eax = MEM32(0x91E070);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C8F7; /* je: equal / zero */

loc_0007C8A1: ;
    PUSH32(esp, 0x91E070);
    PUSH32(esp, 0x0007C8ABu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007C8AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C8B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C8B8u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007C8B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007C8BB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C8E1; /* jne: not equal / not zero */

loc_0007C8C5: ;
    ecx = MEM32(0x916278);
    PUSH32(esp, 0x91BE60);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C8D8u); RECOMP_ABI_CALL(0x001E41A2u, sub_001E41A2); /* call 0x001E41A2 */

loc_0007C8D8: ;
    MEM32(0x2E6708) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C8E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1500F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C8A1; /* je: equal / zero */

loc_0007C8E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C8F7; /* jge: greater or equal (signed >=) */

loc_0007C8ED: ;
    MEM32(0x91E070) = 0;

loc_0007C8F7: ;
    eax = esi;

loc_0007C8F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C900
 * Original: 0x0007C900 - 0x0007C978 (120 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C900: ;
    ecx = MEM32(0x916264);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C977; /* je: equal / zero */

loc_0007C90C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C913u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007C913: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C94A; /* jge: greater or equal (signed >=) */

loc_0007C91C: ;
    edx = MEM32(0x91E230);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x916280) = esi;
    MEM32(0x916264) = 0;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E230) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C94A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0007C974; /* je: equal / zero */

loc_0007C94C: ;
    PUSH32(esp, 0x916264);
    PUSH32(esp, 0x0007C956u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007C956: ;
    edx = MEM32(0x91E230);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E230) = ecx;

loc_0007C974: ;
    eax = esi;
    POP32(esp, esi);

loc_0007C977: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C980
 * Original: 0x0007C980 - 0x0007CA22 (162 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C980: ;
    ecx = MEM32(0x91B42C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CA21; /* je: equal / zero */

loc_0007C990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C996u); RECOMP_ABI_CALL(0x0007C810u, sub_0007C810); /* call 0x0007C810 */

loc_0007C996: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C9B7; /* jge: greater or equal (signed >=) */

loc_0007C99D: ;
    MEM32(0x91B42C) = 0;
    MEM32(0x91DFF8) = 0x16;
    MEM32(0x916280) = eax;
    esp += 4; return; /* ret */

loc_0007C9B7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0007CA21; /* je: equal / zero */

loc_0007C9B9: ;
    eax = MEM32(0x91E004);
    ecx = MEM32(0x915220);
    edx = MEM32(0x91626C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x9150C8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91B42C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C9E0u); RECOMP_ABI_CALL(0x001E4419u, sub_001E4419); /* call 0x001E4419 */

loc_0007C9E0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007CA07; /* jge: greater or equal (signed >=) */

loc_0007C9E6: ;
    PUSH32(esp, 0x91B42C);
    MEM32(0x91DFF8) = 0x16;
    MEM32(0x916280) = esi;
    PUSH32(esp, 0x0007CA00u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007CA00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007CA07: ;
    PUSH32(esp, 0x91B42C);
    MEM32(0x91DFF8) = 0x17;
    PUSH32(esp, 0x0007CA1Bu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007CA1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);

loc_0007CA21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CA30
 * Original: 0x0007CA30 - 0x0007CA3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CA30(void)
{

loc_0007CA30: ;
    MEM32(0x91DFF8) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CA40
 * Original: 0x0007CA40 - 0x0007CA5B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007CA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CA40: ;
    eax = MEM32(0x9150C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CA58; /* je: equal / zero */

loc_0007CA49: ;
    eax = MEM32(0x91E074);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CA58; /* je: equal / zero */

loc_0007CA52: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007CA58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007CA60
 * Original: 0x0007CA60 - 0x0007CA66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CA60(void)
{

loc_0007CA60: ;
    eax = 0x916A18;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CA70
 * Original: 0x0007CA70 - 0x0007CA76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CA70(void)
{

loc_0007CA70: ;
    eax = 0x91B444;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CA80
 * Original: 0x0007CA80 - 0x0007CAAC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007CA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CA80: ;
    _fa = (uint32_t)(MEM32(0x91E06C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E06C), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CAA9; /* je: equal / zero */

loc_0007CA89: ;
    eax = MEM32(0x914F74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CAA9; /* je: equal / zero */

loc_0007CA92: ;
    PUSH32(esp, 0x91B444);
    PUSH32(esp, 0x0007CA9Cu); RECOMP_ABI_CALL(0x0007C470u, sub_0007C470); /* call 0x0007C470 */

loc_0007CA9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CAA9; /* je: equal / zero */

loc_0007CAA3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007CAA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007CAB0
 * Original: 0x0007CAB0 - 0x0007CAB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CAB0(void)
{

loc_0007CAB0: ;
    eax = MEM32(0x91E06C);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CAC0
 * Original: 0x0007CAC0 - 0x0007CBFB (315 bytes, 92 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007CAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CAC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esp + 0x1D0) = eax;
    _fa = (uint32_t)(MEM32(0x916294)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916294), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0007CAFB; /* ja: above (unsigned >) */

loc_0007CAE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x1D4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CAF4u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007CAF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007CAFB: ;
    ebx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007CBE8; /* jae: above or equal (unsigned >=) */

loc_0007CB09: ;
    ecx = 0x70;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edi = esp + eax + 0x10;
    eax = MEM32(0x916284);
    _fb = (uint32_t)(0x916310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x916310;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0x1C;
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
    MEM32(0x91E06C) = 2;
    MEM32(0x91623C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0007CB57; /* je: equal / zero */

loc_0007CB4A: ;
    PUSH32(esp, 0x916284);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CB54u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007CB54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007CB57: ;
    MEM32(0x916278) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CB62u); RECOMP_ABI_CALL(0x00084730u, sub_00084730); /* call 0x00084730 */

loc_0007CB62: ;
    PUSH32(esp, 0x916284);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x23645C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CB7Au); RECOMP_ABI_CALL(0x001E3E21u, sub_001E3E21); /* call 0x001E3E21 */

loc_0007CB7A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007CBB4; /* jge: greater or equal (signed >=) */

loc_0007CB80: ;
    eax = MEM32(0x916284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CB96; /* je: equal / zero */

loc_0007CB89: ;
    PUSH32(esp, 0x916284);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CB93u); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007CB93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007CB96: ;
    MEM32(0x916280) = esi;
    eax = MEM32(0x916284);
    ecx = MEM32(esp + 0x1D4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CBADu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007CBAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007CBB4: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CBCA; /* je: equal / zero */

loc_0007CBBB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x915200);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CBC8u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_0007CBC8: ;
    goto loc_0007CBD9;

loc_0007CBCA: ;
    PUSH32(esp, 0x236518);
    PUSH32(esp, 0x915200);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CBD9u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_0007CBD9: ;
    eax = MEM32(0x916284);
    MEM32(0x91E06C) = 1;

loc_0007CBE8: ;
    ecx = MEM32(esp + 0x1D4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CBF4u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007CBF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CC00
 * Original: 0x0007CC00 - 0x0007CC3B (59 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CC00: ;
    ecx = MEM32(0x9151F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x91623C);
    MEM32(0x91E06C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007CC27; /* je: equal / zero */

loc_0007CC14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007CC27; /* jne: not equal / not zero */

loc_0007CC18: ;
    PUSH32(esp, 0x0007CC1Du); RECOMP_ABI_CALL(0x00083E20u, sub_00083E20); /* call 0x00083E20 */

loc_0007CC1D: ;
    MEM32(0x9151F8) = 0;

loc_0007CC27: ;
    _fa = (uint32_t)(MEM32(0x91E06C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91E06C), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007CC3A; /* jne: not equal / not zero */

loc_0007CC30: ;
    MEM32(0x91623C) = 6;

loc_0007CC3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CC40
 * Original: 0x0007CC40 - 0x0007CC46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CC40(void)
{

loc_0007CC40: ;
    eax = MEM32(0x9150D0);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CC50
 * Original: 0x0007CC50 - 0x0007CE01 (433 bytes, 127 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CC50: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E6630);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x0007CC65u); RECOMP_ABI_CALL(0x001E40C2u, sub_001E40C2); /* call 0x001E40C2 */

loc_0007CC65: ;
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1B;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x84);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edx = 0x7FFFFFFF;
    ebx = 0xF00000;
    if (CMP_EQ(_fa, _fb)) goto loc_0007CD4B; /* je: equal / zero */

loc_0007CC92: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CCA6; /* je: equal / zero */

loc_0007CC98: ;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = esi;
    goto loc_0007CCB2;

loc_0007CCA6: ;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edx;

loc_0007CCB2: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CCC8; /* je: equal / zero */

loc_0007CCB9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = esi;
    goto loc_0007CCD4;

loc_0007CCC8: ;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = edx;

loc_0007CCD4: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CCEA; /* je: equal / zero */

loc_0007CCDB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = esi;
    goto loc_0007CCF6;

loc_0007CCEA: ;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = edx;

loc_0007CCF6: ;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x5C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0007CD2A; /* je: equal / zero */

loc_0007CD1B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = esi;
    goto loc_0007CD36;

loc_0007CD2A: ;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = edx;

loc_0007CD36: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CD9B; /* je: equal / zero */

loc_0007CD3D: ;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = esi;
    goto loc_0007CDA7;

loc_0007CD4B: ;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x48) = 0x13;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = edx;

loc_0007CD9B: ;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x7C) = edx;

loc_0007CDA7: ;
    PUSH32(esp, 0x914F90);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0007CDBEu); RECOMP_ABI_CALL(0x001E409Du, sub_001E409D); /* call 0x001E409D */

loc_0007CDBE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007CDDD; /* jge: greater or equal (signed >=) */

loc_0007CDC4: ;
    PUSH32(esp, 0x914F90);
    PUSH32(esp, 0x0007CDCEu); RECOMP_ABI_CALL(0x0007C830u, sub_0007C830); /* call 0x0007C830 */

loc_0007CDCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91E06C) = 0xC;
    goto loc_0007CDE7;

loc_0007CDDD: ;
    MEM32(0x91E06C) = 0xB;

loc_0007CDE7: ;
    MEM32(0x916280) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x91623C) = 6;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007CE10
 * Original: 0x0007CE10 - 0x0007CE16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE10(void)
{

loc_0007CE10: ;
    eax = MEM32(0x91E078);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CE20
 * Original: 0x0007CE20 - 0x0007CE26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE20(void)
{

loc_0007CE20: ;
    eax = MEM32(0x916270);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CE30
 * Original: 0x0007CE30 - 0x0007CE61 (49 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CE30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x91B444);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007CE48u); RECOMP_ABI_CALL(0x001CEEEFu, sub_001CEEEF); /* call 0x001CEEEF */

loc_0007CE48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007CE5F; /* jne: not equal / not zero */

loc_0007CE4C: ;
    PUSH32(esp, 0x3E8);
    MEM16(esi) = 2;
    PUSH32(esp, 0x0007CE5Bu); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_0007CE5B: ;
    MEM16(esi + 2) = LO16(eax);

loc_0007CE5F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CE70
 * Original: 0x0007CE70 - 0x0007CE98 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE70(void)
{

loc_0007CE70: ;
    ecx = MEM32(0x91B458);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    edx = MEM32(0x91B45C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x91B460);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x91B464);
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CEA0
 * Original: 0x0007CEA0 - 0x0007CEAA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CEA0(void)
{

loc_0007CEA0: ;
    eax = MEM32(esp + 4);
    MEM32(0x9147B0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CEB0
 * Original: 0x0007CEB0 - 0x0007CEB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CEB0(void)
{

loc_0007CEB0: ;
    eax = MEM32(0x9147B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CEC0
 * Original: 0x0007CEC0 - 0x0007CEC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CEC0(void)
{

loc_0007CEC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CED0
 * Original: 0x0007CED0 - 0x0007CF41 (113 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007CED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x912A3C);
    ecx = eax + eax * 4;
    ecx = ecx * 4 + 0xC;
    eax = ecx + 3;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edx = eax + -2;
    MEM16(esp + 8) = LO16(edx);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xA) = 9;
    edi = esp + 0xB;
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
    PUSH32(esp, 0x10);
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
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CF2Bu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007CF2B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x80004005u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CF50
 * Original: 0x0007CF50 - 0x0007CFE6 (150 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007CF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CF50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x334) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x334;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x912A3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = esi * 4 + 0xC;
    PUSH32(esp, ecx);
    ebx = esi + 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CF7Eu); RECOMP_ABI_CALL(0x00071870u, sub_00071870); /* call 0x00071870 */

loc_0007CF7E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007CF91; /* jne: not equal / not zero */

loc_0007CF85: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007CF91: ;
    ecx = esi;
    esi = MEM32(ebp + 8);
    edx = ebx + -2;
    MEM16(esp + 0x10) = LO16(edx);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x12) = 9;
    edi = esp + 0x13;
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
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    eax = esp + 0x20;
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
    ecx = MEM32(0x9162A4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007CFCFu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007CFCF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x80004005u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CFF0
 * Original: 0x0007CFF0 - 0x0007D057 (103 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CFF0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0007D04A; /* je: equal / zero */

loc_0007CFFF: ;
    esi = MEM32(esp + 0x334);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D04A; /* je: equal / zero */

loc_0007D00A: ;
    PUSH32(esp, edi);
    MEM16(esp + 8) = 0x1A;
    MEM8(esp + 0xA) = 8;
    ecx = 6;
    edi = esp + 0xB;
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
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0007D03Bu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007D03B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0007D04A; /* jle: less or equal (signed <=) */

loc_0007D040: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007D04A: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D060
 * Original: 0x0007D060 - 0x0007D113 (179 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007D060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x350) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E8);
    MEM16(esp + 0x348) = 2;
    MEM32(esp + 0x34C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D099u); RECOMP_ABI_CALL(0x001D0968u, sub_001D0968); /* call 0x001D0968 */

loc_0007D099: ;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    MEM16(esp + 0x346) = LO16(eax);
    eax = edx + edx * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    PUSH32(esp, 0x10);
    ecx = esp + 0x348;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    MEM8(esp + 0x23) = LO8(edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM16(esp + 0x28) = 1;
    MEM8(esp + 0x2A) = 7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D0F0u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007D0F0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x80004005u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    ecx = MEM32(esp + 0x354);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D10Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007D10C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D120
 * Original: 0x0007D120 - 0x0007D1A6 (134 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D120: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007D12Du); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007D12D: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5E);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007D13Cu); RECOMP_ABI_CALL(0x0007CEA0u, sub_0007CEA0); /* call 0x0007CEA0 */

loc_0007D13C: ;
    ecx = esp + 0xF;
    eax = esi + -2;
    PUSH32(esp, ecx);
    MEM16(esp + 0x10) = LO16(eax);
    MEM8(esp + 0x12) = 0xA;
    PUSH32(esp, 0x0007D153u); RECOMP_ABI_CALL(0x0007A090u, sub_0007A090); /* call 0x0007A090 */

loc_0007D153: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0007D15Bu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0007D15B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D161u); RECOMP_ABI_CALL(0x00070B30u, sub_00070B30); /* call 0x00070B30 */

loc_0007D161: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0007D16Bu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007D16B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0007D19D; /* jbe: below or equal (unsigned <=) */

loc_0007D16F: ;
    /* nop */

loc_0007D170: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007D176u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007D176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D193; /* je: equal / zero */

loc_0007D17D: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x9162A4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D193u); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007D193: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007D199u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007D199: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D170; /* jb: below (unsigned <) */

loc_0007D19D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D1B0
 * Original: 0x0007D1B0 - 0x0007D2A1 (241 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007D1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x634) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x634;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x638) = eax;
    eax = esp + 0x33C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D1D8u); RECOMP_ABI_CALL(0x00070AD0u, sub_00070AD0); /* call 0x00070AD0 */

loc_0007D1D8: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(esp + 0x12) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0007D23F; /* jne: not equal / not zero */

loc_0007D1E7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D1ECu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007D1EC: ;
    SET_LO8(ecx, MEM8(esp + 0x340));
    edx = MEM32(esp + 0x341);
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    _fb = (uint32_t)(0x39) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x39;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x44) = LO8(ecx);
    MEM32(esp + 0x45) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D20Fu); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007D20F: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5E);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x345;
    edi = esp + 0x49;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D232u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0007D232: ;
    ecx = 0xC;
    esi = eax;
    edi = esp + 0x13;
    goto loc_0007D25C;

loc_0007D23F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D244u); RECOMP_ABI_CALL(0x00070930u, sub_00070930); /* call 0x00070930 */

loc_0007D244: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x5E);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xBD;
    esi = esp + 0x340;
    edi = esp + 0x13;

loc_0007D25C: ;
    edx = MEM32(ebp + 0xC);
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
    ecx = ebx + -2;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, edx);
    MEM16(esp + 0x14) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D270u); RECOMP_ABI_CALL(0x00070A70u, sub_00070A70); /* call 0x00070A70 */

loc_0007D270: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D28E; /* je: equal / zero */

loc_0007D277: ;
    ecx = MEM32(0x9162A4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D28Eu); RECOMP_ABI_CALL(0x001CF0D5u, sub_001CF0D5); /* call 0x001CF0D5 */

loc_0007D28E: ;
    ecx = MEM32(esp + 0x63C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007D29Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0007D29A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D2B0
 * Original: 0x0007D2B0 - 0x0007D349 (153 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D2B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x9150F0;
    edi = 0x91E0C0;
    ebp = 1;

loc_0007D2C5: ;
    eax = MEM32(esi * 4 + 0x2E6720);
    PUSH32(esp, esi);
    MEM32(edi + 4) = ebp;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0007D2D7u); RECOMP_ABI_CALL(0x00070950u, sub_00070950); /* call 0x00070950 */

loc_0007D2D7: ;
    PUSH32(esp, esi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0007D2E0u); RECOMP_ABI_CALL(0x00070940u, sub_00070940); /* call 0x00070940 */

loc_0007D2E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2363D4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0007D2ECu); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0007D2EC: ;
    ecx = MEM32(esi * 4 + 0x2E6740);
    PUSH32(esp, esi);
    MEM32(edi + 0xF4) = ebp;
    MEM32(edi + 0xF0) = ecx;
    MEM32(edi + 0xF8) = ebx;
    PUSH32(esp, 0x0007D30Bu); RECOMP_ABI_CALL(0x000763A0u, sub_000763A0); /* call 0x000763A0 */

loc_0007D30B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x91E23C) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D2C5; /* jb: below (unsigned <) */

loc_0007D320: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91E194) = ebp;
    POP32(esp, ebp);
    MEM32(0x91E190) = 0x200012;
    MEM32(0x91E198) = 0x91E23C;
    MEM32(0x91E19C) = 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D350
 * Original: 0x0007D350 - 0x0007D353 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007D350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D350: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007D360
 * Original: 0x0007D360 - 0x0007D391 (49 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D360: ;
    ecx = MEM32(0x2E6708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D38B; /* jl: less (signed <) */

loc_0007D36A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007D38B; /* jl: less (signed <) */

loc_0007D372: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D38B; /* jle: less or equal (signed <=) */

loc_0007D376: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(0x91BE60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x91BE60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x916278);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D38Au); RECOMP_ABI_CALL(0x001E41FAu, sub_001E41FA); /* call 0x001E41FA */

loc_0007D38A: ;
    esp += 4; return; /* ret */

loc_0007D38B: ;
    eax = 0x80004005u;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D3A0
 * Original: 0x0007D3A0 - 0x0007D3A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D3A0(void)
{

loc_0007D3A0: ;
    eax = MEM32(0x2E6708);
    esp += 4; return; /* ret */

}
